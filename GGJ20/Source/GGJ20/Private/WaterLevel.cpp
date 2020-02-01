// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterLevel.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWaterLevel::AWaterLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WaterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Water Level"));

	minWaterLevel = GetActorLocation().Z;
	positionOffsetY = minWaterLevel;
	maxWaterLevel = minWaterLevel + 20;
	CurrentWaterLevel = minWaterLevel;

	filling = true;
	draining = false;
}

// Called when the game starts or when spawned
void AWaterLevel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaterLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateWaterLevel();

	if (draining == true || filling == true)
	{
		if (filling)
		{
			CurrentWaterLevel += fillSpeed;
			FVector newPosition = GetActorLocation();
			newPosition.Z += fillSpeed;
			SetActorLocation(newPosition);
		}
		else if(draining)
		{
			CurrentWaterLevel -= fillSpeed;
			FVector newPosition = GetActorLocation();
			newPosition.Z -= fillSpeed;
			SetActorLocation(newPosition);
		}
	}
}


void AWaterLevel::UpdateWaterLevel()
{
	if (CurrentWaterLevel < maxWaterLevel && !draining)
	{
		filling = true;
	}

	if (CurrentWaterLevel > maxWaterLevel)
	{
		filling = false;
		draining = true;
	}

	if (CurrentWaterLevel < minWaterLevel)
	{
		filling = true;
		draining = false;
	}
}  
