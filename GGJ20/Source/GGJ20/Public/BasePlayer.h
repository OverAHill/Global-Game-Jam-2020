// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Character.h"
#include "BasePlayer.generated.h"

class UCharacterMovementComponent;
class UCameraComponent;

UENUM(BlueprintType)
enum class Tools : uint8
{
	FIRE_EX,
	WELDER,
	RIVET_GUN,
	HAMMER,
};

class UStaticMeshComponent;
class AIRepairableBase;
//class RepairTypes;

UCLASS()
class GGJ20_API ABasePlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABasePlayer();

	UCharacterMovementComponent* PlayerMovementComponent = GetCharacterMovement();

	UPROPERTY(VisibleAnywhere)
		UCameraComponent* PlayerFirstPersonCamera;

	bool OnLadder = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool cameraLocked;
	bool movementLocked;
	float missedWeldingCounter;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void UpdatePlayerRotation();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Movement")
		FVector CurrentVelocity;
		FVector CurrentRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Movement")
		FVector vectorToPrint;

	virtual void MoveForward(float value);
	virtual void MoveRight(float value);
	 
	virtual void MoveCameraHor(float value);
	virtual void MoveCameraVer(float value);

	virtual void ChangeTool(float value);
	virtual void SelectTool1();
	virtual void SelectTool2();
	virtual void SelectTool3();
	virtual void SelectTool4();

	virtual void Repair();
	virtual void TryRepair(AIRepairableBase* repairable, int repairType);

	virtual void Jump();
	virtual void Crouch(float value);

	bool Crouched = false;

	float hiddenMeshes = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Interaction")
	Tools currentTool;

	bool currentlyRepairing;
	AIRepairableBase* currentRepairTarget;

	UFUNCTION(BlueprintCallable)
		void SetOnLadder(bool b);

	UFUNCTION(BlueprintCallable)
		bool GetOnLadder() { return OnLadder; }

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void SetMeshVisibility(AActor* meshToSet);
};
