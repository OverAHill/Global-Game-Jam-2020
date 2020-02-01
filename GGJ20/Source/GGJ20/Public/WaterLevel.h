// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterLevel.generated.h"

class UStaticMeshComponenent;

UCLASS()
class GGJ20_API AWaterLevel : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* WaterMesh;
		

public:	
	// Sets default values for this actor's properties
	AWaterLevel();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void UpdateWaterLevel();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	float maxWaterLevel;
	float minWaterLevel;
	float CurrentWaterLevel;
	float positionOffsetY;
	float fillSpeed = 0.1;
	bool filling;
	bool draining;
};
