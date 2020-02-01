// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseOctopus.generated.h"

class UBoxComponent;

UCLASS()
class GGJ20_API ABaseOctopus : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector goalPos;
	float m_HeightChoiceCounter;
	float m_HeightChoiceDecisionTime;
	float m_HeightChoice;
	FVector m_Momentum;
	FVector m_PreviousPos;

	float timeSinceHitMomentum = 0;

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
		AActor* playerShip;
	UPROPERTY(EditAnywhere)
		float shipWidth;
	UPROPERTY(EditAnywhere)
		float shipLength;

	UPROPERTY(EditAnywhere)
		UBoxComponent* boxCollider;

	// Sets default values for this actor's properties
	ABaseOctopus();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Wander(float DeltaTime);
	FVector GetVectorOfPlayerShip();
	FVector GetVectorToPlayerShip();
	FVector GetVectorOfPointAroundPlayerShip();
	FVector GetVectorToPointAroundPlayerShip();
	float GetDistanceToPlayerShip();
	void PickWanderPoint(FVector toPlayer);
	void MoveToWanderPoint(FVector vectorToWander, float DeltaTime);
	void UpdatePositionBasedOnMomentum(float DeltaTime);
	void ChooseHeight(float DeltaTime);

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
