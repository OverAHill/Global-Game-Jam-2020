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
	maxWaterLevel = minWaterLevel + positionOffsetY;
	CurrentWaterLevel = minWaterLevel;

	filling = false;
	draining = false;
	genFixed = true;
	amountOfBrokenHulls = 1;
}

// Called when the game starts or when spawned
void AWaterLevel::BeginPlay()
{
	Super::BeginPlay();
	maxWaterLevel = minWaterLevel + positionOffsetY;
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
			if (CurrentWaterLevel < maxWaterLevel)
			{
				CurrentWaterLevel += fillSpeed;
				FVector newPosition = GetActorLocation();
				newPosition.Z += fillSpeed;
				SetActorLocation(newPosition);
			}
			
		}
		else if(draining)
		{
			if (CurrentWaterLevel >= minWaterLevel)
			{
				CurrentWaterLevel -= drainSpeed;
				FVector newPosition = GetActorLocation();
				newPosition.Z -= drainSpeed;
				SetActorLocation(newPosition);
			}
		}
	}
}


void AWaterLevel::UpdateWaterLevel()
{

	if (amountOfBrokenHulls > 0) // any amount of holes  doesnt matter if gen fixed
	{
		filling = true;
		draining = false;
		fillSpeed = 0.01 * amountOfBrokenHulls;
		//rate calc
	}
	else if(genFixed) //no holes and gen fixedd
	{
		draining = true;
		filling = false;

		fillSpeed = 0;
	}
	else // no holes but gen not fixed
	{
		filling = false;
		draining = false;

		fillSpeed = 0;
	}

}  
