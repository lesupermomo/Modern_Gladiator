// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\Interact\MyInteractable.h"
#include <ModernGladiator\Public\Characters\MyCharacter.h>
//#include "EngineMinimal.h"
//#include "Engine.h"

// Sets default values
AMyInteractable::AMyInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyInteractable::OnInteract_Implementation(AActor* Caller)
{
	UE_LOG(LogTemp, Error, TEXT("Destroy has been called"));
	AMyCharacter* player = (AMyCharacter*)Caller;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Black, TEXT("Destroy has been called"));
	Destroy();//the thing that is being interact with
	player->ReceiveHealth();
	
}


void AMyInteractable::StartFocus_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("StartedFocus! "));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("Started Focus"));
}


void AMyInteractable::EndFocus_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("EndedFocus! "));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Ended Focus"));
}


