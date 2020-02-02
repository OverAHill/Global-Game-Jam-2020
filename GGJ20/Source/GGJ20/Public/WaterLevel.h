// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterLevel.generated.h"

class UStaticMeshComponenent;
//class HullRepairable;

UCLASS()
class GGJ20_API AWaterLevel : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* WaterMesh;
	
	UPROPERTY(EditAnywhere)
	 float positionOffsetY = 20.0f;

	UPROPERTY(EditAnywhere)
		float fillSpeed = 0.1;

public:	
	// Sets default values for this actor's properties
	AWaterLevel();

	//TArray<HullRepairable*> hulls;

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
	
	
	bool filling;
	bool draining;
};
