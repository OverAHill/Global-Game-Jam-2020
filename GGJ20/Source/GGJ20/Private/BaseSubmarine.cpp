// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseSubmarine.h"
#include "BaseRoom.h"

float ABaseSubmarine::MovementSpeed = 0;
float ABaseSubmarine::PerTickFallFromWater = 0;
float ABaseSubmarine::DistanceFromBottom = 0;
float ABaseSubmarine::DistanceTravelled = 0;
bool ABaseSubmarine::HasPlayerWon = false;
bool ABaseSubmarine::HasPlayerLost = false;

// Sets default values
ABaseSubmarine::ABaseSubmarine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseSubmarine::BeginPlay()
{
	Super::BeginPlay();
	
	/*for (ABaseRoom* room : rooms)
	{
		room->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	}*/
}

// Called every frame
void ABaseSubmarine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DistanceFromBottom += PerTickFallFromWater * DeltaTime;
	DistanceTravelled += MovementSpeed * DeltaTime;
	if (DistanceFromBottom < 0)
		ABaseSubmarine::HasPlayerLost = true;
	if (DistanceTravelled > 2000)
		ABaseSubmarine::HasPlayerWon = true;

	bp_MovementSpeed = ABaseSubmarine::MovementSpeed;
	bp_DistanceFromBottom = ABaseSubmarine::DistanceFromBottom;
	bp_DistanceTravelled = ABaseSubmarine::DistanceTravelled;
}

void ABaseSubmarine::SetMovementSpeed(float speed)
{
	ABaseSubmarine::MovementSpeed = speed;
}

void ABaseSubmarine::SetPerTickFallFromWater(float tick)
{
	ABaseSubmarine::PerTickFallFromWater = tick;
}

void ABaseSubmarine::IncreaseMovementSpeed(float change)
{
	ABaseSubmarine::MovementSpeed += change;
}

void ABaseSubmarine::IncreasePerTickFallFromWater(float change)
{
	ABaseSubmarine::PerTickFallFromWater += change;
}