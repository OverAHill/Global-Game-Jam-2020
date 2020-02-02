// Fill out your copyright notice in the Description page of Project Settings.

#include "HullRepairable.h"
#include "Components/SphereComponent.h"
#include "WaterLevel.h"
#include "Engine.h"
#include "Rivet.h"


AHullRepairable::AHullRepairable()
{
	m_RepairType = RepairTypes::HULL_REPAIR;

	//set refWaterLevel ref in engine
	horizontalLength = 2;
	verticalHeight = 1;

	//GenerateRivets();
	//all rivets start fixed (4)
}

void AHullRepairable::BeginPlay()
{
	/*Rivets[0] = ULRivet;
	Rivets[1] = URRivet;
	Rivets[2] = LLRivet;
	Rivets[3] = LRRivet;*/

	
}

void AHullRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FVector newPosition = GetActorLocation();

	float xOffset = horizontalLength / 2;
	float yOffset = verticalHeight / 2;

	FVector PosOne = FVector(newPosition.X - xOffset, newPosition.Y + verticalHeight, newPosition.Z);
	FVector PosTwo = FVector(newPosition.X - xOffset, newPosition.Y - verticalHeight, newPosition.Z);
	FVector PosThree = FVector(newPosition.X + xOffset, newPosition.Y + verticalHeight, newPosition.Z);
	FVector PosFour = FVector(newPosition.X + xOffset, newPosition.Y - verticalHeight, newPosition.Z);

	Rivets[0]->SetActorLocation(PosOne);
	Rivets[1]->SetActorLocation(PosThree);
	Rivets[2]->SetActorLocation(PosTwo);
	Rivets[3]->SetActorLocation(PosFour);*/
}

void AHullRepairable::Break()
{
	Super::Break();

	//increase broken hull level
	//only do once, on the first break
	for (ARivet* rivet : Rivets)
	{
		rivet->repaired = false;
	}

	if (!broken)
	{
		broken = true;
		refWaterLevel->increaseAmountOfBrokenHulls();
		amountOfFixedRivets = 0;
	}
	
}

RepairTypes AHullRepairable::Repair()
{
	Super::Repair();

	
	return m_RepairType;
}

void AHullRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
	broken = false;
	//if amount of fixed rivets is 4 then it is repaired
	refWaterLevel->decreaseAmountOfBrokenHulls();
}

void AHullRepairable::GenerateRivets()
{
	
	FVector newPosition = GetActorLocation();

	float xOffset = horizontalLength / 2;
	float yOffset = verticalHeight / 2;

	FVector PosOne = FVector(newPosition.X - xOffset, newPosition.Y + verticalHeight, newPosition.Z);
	FVector PosTwo = FVector(newPosition.X - xOffset, newPosition.Y - verticalHeight, newPosition.Z);
	FVector PosThree = FVector(newPosition.X + xOffset, newPosition.Y + verticalHeight, newPosition.Z);
	FVector PosFour = FVector(newPosition.X + xOffset, newPosition.Y - verticalHeight, newPosition.Z);

	ULRivet = CreateDefaultSubobject<ARivet>(FName("Rivet 1"));
	Rivets.Add(ULRivet);

	URRivet = CreateDefaultSubobject<ARivet>(FName("Rivet 2"));
	Rivets.Add(URRivet);

	LLRivet = CreateDefaultSubobject<ARivet>(FName("Rivet 3"));
	Rivets.Add(LLRivet);

	LRRivet = CreateDefaultSubobject<ARivet>(FName("Rivet 4"));
	Rivets.Add(LRRivet);

}

//int AHullRepairable::HitRivets(ARivet* hitRivet)
//{
//	for (ARivet* sphere : Rivets)
//	{
//		if (hitRivet == sphere && !sphere->repaired)
//		{
//			++amountOfFixedRivets;
//			hitRivet->repaired = true;
//			break;
//		}
//	}
//
//	return amountOfFixedRivets;
//}