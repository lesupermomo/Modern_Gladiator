// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\Interact\MyInteractable.h"
//#include "EngineMinimal.h"
#include "Engine.h"

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
	Destroy();//the thing that is being interact with
}


void AMyInteractable::StartFocus_Implementation()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("Started Focus"));
}


void AMyInteractable::EndFocus_Implementation()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Ended Focus"));
}


