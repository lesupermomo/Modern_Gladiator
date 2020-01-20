// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"


//importing the required classes
class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;

UCLASS()
class MODERNGLADIATOR_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();//constructor

	//creating the components

	//camera attacher
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		USpringArmComponent* SpringArmComponent;

	//setting up the camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		UCameraComponent* CameraComponent;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
		UStaticMeshComponent* MeshComponent;


//only important for inherited classes.
protected:

	//setting up the movement methods
	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Value);
	void LookUpAtRate(float Value);
	void InteractPressed();
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
		float BaseTurnRate; //turn rate of the camera

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
		float BaseLookUpAtRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
		float TraceDistance;

	UFUNCTION(BlueprintNativeEvent)
		void TraceForward();
		void TraceForward_Implementation();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
		float MinZ;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
		float MaxZ;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
		float DeffaultHealth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
		float CurrentHealth;


	// TODO add the min and max for clamping the camera

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor,UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult);

	//Impulse
	UPROPERTY(EditAnywhere)
		float ImpulseForce;


public:	
	
	
	UFUNCTION(BlueprintCallable,Category="Health")
	void ReceiveDamege();
	UFUNCTION(BlueprintCallable, Category = "Health")
	void ReceiveHealth();
	void Die();
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	AActor* FocusedActor;
};
