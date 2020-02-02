// Fill out your copyright notice in the Description page of Project Settings.

#include "HullRepairable.h"
#include "Components/SphereComponent.h"
#include "WaterLevel.h"
#include "Engine.h"


AHullRepairable::AHullRepairable()
{
	m_RepairType = RepairTypes::HULL_REPAIR;

	//set refWaterLevel ref in engine
	GenerateRivets();
	horizontalLength = 10;
	verticalHeight = 5;

	//all rivets start fixed (4)
}

void AHullRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHullRepairable::Break()
{
	Super::Break();

	//increase broken hull level
	//only do once, on the first break
	refWaterLevel->increaseAmountOfBrokenHulls();
	amountOfFixedRivets = 0;
}

RepairTypes AHullRepairable::Repair()
{
	Super::Repair();

	
	return m_RepairType;
}

void AHullRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);

	//if amount of fixed rivets is 4 then it is repaired
	refWaterLevel->decreaseAmountOfBrokenHulls();
}

void AHullRepairable::GenerateRivets()
{
	USphereComponent* newRiv;
	FVector newPosition = GetActorLocation();
	FVector PosOne = FVector(newPosition.X - 4, newPosition.Y + 2, newPosition.Z);
	FVector PosTwo = FVector(newPosition.X - 4, newPosition.Y - 2, newPosition.Z);
	FVector PosThree = FVector(newPosition.X + 4, newPosition.Y + 2, newPosition.Z);
	FVector PosFour = FVector(newPosition.X + 4, newPosition.Y - 2, newPosition.Z);

	for (int i = 0; i < 4; i++)
	{

		newRiv = CreateDefaultSubobject<USphereComponent>(FName("Rivet"));
		// Put this in the corners my lovely <3
		switch (i)
		{
		case 0:
			newPosition = PosOne;
			break;

		case 1:
			newPosition = PosTwo;
			break;

		case 2:
			newPosition = PosThree;
			break;

		case 3: newPosition = PosFour;
			break;

		default:
			break;
		}

		newRiv->SetWorldLocation(newPosition);
		Rivets.Add(newRiv);
	}


}




int AHullRepairable::HitRivets(USphereComponent* hitSphere)
{
	bool hit = false;

	for (USphereComponent* sphere : Rivets)
	{
		if (hitSphere == sphere)
		{
			hit = true;
			break;
		}
	}

	if (hit)
	{
		++amountOfFixedRivets;
		hitSphere->SetWorldLocation(FVector(10000, 100000, -10000));
	}

	return amountOfFixedRivets;
}