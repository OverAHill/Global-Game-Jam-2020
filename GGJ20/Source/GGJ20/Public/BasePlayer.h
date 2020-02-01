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
	NO_TOOL,
	FIRE_EX,
	WELDER,
	RIVET_GUN,
	HAMMER,
};

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player_Movement")
		FVector CurrentVelocity;
		FVector CurrentRotation;

	virtual void MoveForward(float value);
	virtual void MoveRight(float value);
	 
	virtual void MoveCameraHor(float value);
	virtual void MoveCameraVer(float value);

	virtual void Repair();
	virtual void TryRepair(AIRepairableBase* repairable, int repairType);

	virtual void Jump();
	virtual void Crouch(float value);

	bool Crouched = false;

	Tools currentTool;

	bool currentlyRepairing;
	AIRepairableBase* currentRepairTarget;

	UFUNCTION(BlueprintCallable)
		void SetOnLadder(bool b);
	

	


	UFUNCTION(BlueprintCallable)
	bool GetOnLadder() { return OnLadder; }
};
