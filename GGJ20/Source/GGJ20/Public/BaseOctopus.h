// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseOctopus.generated.h"

UCLASS()
class GGJ20_API ABaseOctopus : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector goalPos;

public:	
	UPROPERTY(EditAnywhere)
		float movementSpeed;
	UPROPERTY(EditAnywhere)
		float wanderCastDistance;
	UPROPERTY(EditAnywhere)
		float wanderRadius;
	UPROPERTY(EditAnywhere)
		float wanderFindNewPointTime;
	UPROPERTY(VisibleAnywhere)
		float timeSinceLastFind;
	UPROPERTY(EditAnywhere)
		AActor* player;

	// Sets default values for this actor's properties
	ABaseOctopus();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Wander(float DeltaTime);
	FVector GetVectorOfPlayerShip();
	FVector GetVectorToPlayerShip();
	float GetDistanceToPlayerShip();
	void PickWanderPoint(FVector toPlayer);
	void MoveToWanderPoint(FVector vectorToWander, float DeltaTime);
};
