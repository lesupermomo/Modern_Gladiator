// Fill out your copyright notice in the Description page of Project Settings.


//#include "MyCharacter.h"
#include "../../Public/Characters/MyCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "DrawDebugHelpers.h"
#include "../../Public/Interact/Interactinterface.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;// not going to call the tick event so we don't lose time
	
	
	

	//initializing the components
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);

	MeshComponent = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	MeshComponent->SetupAttachment(RootComponent);
	
	//attaching the camera to the component
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	BaseTurnRate = 45;
	BaseLookUpAtRate = 45;
	TraceDistance = 2000;

	DeffaultHealth = 100;
	CurrentHealth = 50;

	MinZ = 10;
	MaxZ = 500;
	
}

//TODO
	//remember to set this to true and to clamp the camera like so =
	// num = std::clamp(num,low, high)

void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	//Assosiating delegate functions.
	UE_LOG(LogTemp, Error, TEXT("Starting health is: %f"), CurrentHealth);
	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AMyCharacter::OnOverlapBegin);
}


/*  HEALTH  */
void AMyCharacter::ReceiveDamege()
{
	if (CurrentHealth > 25)
	{
		CurrentHealth = CurrentHealth - 25;
	}
	else
	{
		Die();
	}
	UE_LOG(LogTemp, Error, TEXT("Your health is now  %f"), CurrentHealth);

}

void AMyCharacter::ReceiveHealth()
{

	if (CurrentHealth < 100)
	{
		CurrentHealth = CurrentHealth + 10;
	}//else nothing
	UE_LOG(LogTemp, Error, TEXT("Your health is now  %f"), CurrentHealth);
	//UE_LOG(LogTemp, Error, TEXT("Your Health is now: %f", DeffaultHealth));
}

void AMyCharacter::Die()
{
	UE_LOG(LogTemp, Error, TEXT("Your Health is now: %f, you are DEAD"), CurrentHealth);
	this->Destroy();
}



void AMyCharacter::Tick(float DeltaTime)
{
	//Super::Tick(DeltaTime);
	TraceForward();

//	CameraComponent->

}

//BeginPlay method not used because everything is set up in the constructor

/*Allowing movement only if we have controller and a movement */
void AMyCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) & (Value != 0)) {
	
		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0, Rotation.Yaw, 0);

		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction , Value);

	}

}

void AMyCharacter::MoveRight(float Value)
{
	
	if ((Controller != NULL) & (Value != 0)) {

		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0, Rotation.Yaw, 0);

		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);

	}

}

void AMyCharacter::TurnAtRate(float Value)
{

	AddControllerYawInput(Value * BaseTurnRate * GetWorld()->GetDeltaSeconds());//delta seconds are Time.DeltaTime

}

void AMyCharacter::LookUpAtRate(float Value)
{

	AddControllerPitchInput(Value * BaseLookUpAtRate * GetWorld()->GetDeltaSeconds());

}

void AMyCharacter::InteractPressed()
{
	// just to get the debugger
	FVector Location;
	FRotator Rotation;
	FHitResult Hit;

	GetController()->GetPlayerViewPoint(Location, Rotation);//view from camera

	FVector Start = Location;
	FVector End = Start + (Rotation.Vector() * TraceDistance);//tracing forward from our starting point

	FCollisionQueryParams TraceParams;
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f);
	DrawDebugBox(GetWorld(), Hit.ImpactPoint,FVector (10,10,10) , FColor::Green, false, 2.0f);

	//Actual method
	
	//TraceForward();//will call the TraceForward_Implementation //not really needed bc we already call it in tick but that's fine for now
	if (FocusedActor)//Else do nothing
	{
		IInteractInterface* Interface = Cast<IInteractInterface>(FocusedActor);
		if (Interface)//double check
		{
			Interface->Execute_OnInteract(FocusedActor,this); //you have to give self on the method
		}
	}

}



void AMyCharacter::TraceForward_Implementation()
{
	FVector Location;
	FRotator Rotation;
	FHitResult Hit;

	GetController()->GetPlayerViewPoint(Location, Rotation);//view from camera

	FVector Start = Location;
	FVector End = Start + (Rotation.Vector() * TraceDistance);//tracing forward from our starting point

	FCollisionQueryParams TraceParams;
	bool bHit= GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	//DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 2.0f);
	

	if (bHit)//if true
	{
		//DrawDebugBox(GetWorld(), Hit.ImpactPoint,FVector (5,5,5) , FColor::Green, false, 2.0f);

		/*
		Fist we draw a reference to the actor being hit, If we have a new object we are looking at than we stop looking at the other
		and we Start looking at teh one we have

		If we are looking at something which is not an actor than stop focus.
		

		Interactable: The thing we are actually looking at
		FocusedActor: The actor we are updating the focus on and acting on him
		
		*/


		AActor* Interactable = Hit.GetActor();// Almost everything is an actor.
	
		if (Interactable)
		{
			if(Interactable!=FocusedActor )
			{
				//PART 1: Looking at something else: stop focus and new focus
				if(FocusedActor)
				{ 
					IInteractInterface* Interface = Cast<IInteractInterface>(FocusedActor);
					if (Interface) //double check
					{
						Interface->Execute_EndFocus(FocusedActor);
					}
				}
				IInteractInterface* Interface = Cast<IInteractInterface>(Interactable);
				if (Interface)
				{//once we ended the focus we will now restet the focus on the new object
					Interface->Execute_StartFocus(Interactable);
				}
				FocusedActor = Interactable;
			}
		}
		else
		{
			//PART 2: Looking at something empty: stop focus and focus is now empty
			if (FocusedActor)
			{
				IInteractInterface* Interface = Cast<IInteractInterface>(FocusedActor);
				if (Interface)
				{
					Interface->Execute_EndFocus(FocusedActor);
				}
			}
			FocusedActor = nullptr;
		}
	}

}

//this doesnt work...

void AMyCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*
	On the mesh component of the player make sure you set the Collision.CollisionPresets=OverlapAll
	&& GenerateOverlapEvents=True

	And on the interactable set the CollisionResponses=Overlap (you can also set visibility and cameraBlock)
	*/

	UE_LOG(LogTemp, Warning, TEXT("Method is called... "));
	IInteractInterface* Interface = Cast<IInteractInterface>(OtherActor);
	if (Interface)//double check
	{
		//calling the OnInteract on the actor.
		Interface->Execute_OnInteract(OtherActor, this);
	}

}

//void AMyCharacter::TraceForward()
//{
//	
//}



// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Associating the jump function from the Character class
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMyCharacter::InteractPressed);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyCharacter::LookUpAtRate);


}



