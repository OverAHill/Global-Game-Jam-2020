// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseSubmarine.generated.h"

class ABaseRoom;

UCLASS()
class GGJ20_API ABaseSubmarine : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	static float MovementSpeed;
	static float PerTickFallFromWater;
	static float DistanceFromBottom;
	static float DistanceTravelled;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float bp_MovementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float bp_DistanceFromBottom;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float bp_DistanceTravelled;

public:	
		static bool HasPlayerWon;
		static bool HasPlayerLost;
	/*static float movementSpeed;
	static float perTickFallFromWater;*/

	UPROPERTY(EditAnywhere, Category="Rooms")
		TArray<ABaseRoom*> rooms;

	// Sets default values for this actor's properties
	ABaseSubmarine();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	static void SetMovementSpeed(float speed);
	static void SetPerTickFallFromWater(float tick);
	static void IncreaseMovementSpeed(float change);
	static void IncreasePerTickFallFromWater(float change);
};
