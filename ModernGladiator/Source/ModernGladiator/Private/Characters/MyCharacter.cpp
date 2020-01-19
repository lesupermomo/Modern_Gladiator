// Fill out your copyright notice in the Description page of Project Settings.


//#include "MyCharacter.h"
#include "../../Public/Characters/MyCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "DrawDebugHelpers.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;// not going to call the tick event so we don't lose time
	
	
	

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
	MinZ = 10;
	MaxZ = 500;
	
}

//TODO
	//remember to set this to true and to clamp the camera like so =
	// num = std::clamp(num,low, high)

//void AMyCharacter::Tick(float DeltaTime) 
//{
//	Super::Tick(DeltaTime);
//	CameraComponent->
//
//}

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
	FVector Location;
	FRotator Rotation;
	FHitResult Hit;

	GetController()->GetPlayerViewPoint(Location, Rotation);

	FVector Start = Location;
	FVector End = Start + (Rotation.Vector()*2000);//tracing forward from our starting point

	FCollisionQueryParams TraceParams;
	GetWorld()->LineTraceSingleByChannel(Hit,Start,End,ECC_Visibility,TraceParams);

	DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 2.0f);

}

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

