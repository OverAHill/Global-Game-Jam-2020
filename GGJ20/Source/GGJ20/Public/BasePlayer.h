// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasePlayer.generated.h"

class UCharacterMovementComponent;
class UCameraComponent;

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
};
