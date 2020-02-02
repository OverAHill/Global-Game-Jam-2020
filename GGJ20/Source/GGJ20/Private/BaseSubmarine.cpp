// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseSubmarine.h"
#include "BaseRoom.h"

// Sets default values
ABaseSubmarine::ABaseSubmarine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*ABaseSubmarine::movementSpeed = 100;
	ABaseSubmarine::perTickFallFromWater = 0;*/
}

// Called when the game starts or when spawned
void ABaseSubmarine::BeginPlay()
{
	Super::BeginPlay();
	
	for (ABaseRoom* room : rooms)
	{
		room->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	}
}

// Called every frame
void ABaseSubmarine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseSubmarine::SetMovementSpeed(float speed)
{

}

void ABaseSubmarine::SetPerTickFallFromWater(float tick)
{

}

void ABaseSubmarine::IncreaseMovementSpeed(float change)
{

}

void ABaseSubmarine::IncreasePerTickFallFromWater(float change)
{

}