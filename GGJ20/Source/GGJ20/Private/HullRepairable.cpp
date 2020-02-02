// Fill out your copyright notice in the Description page of Project Settings.

#include "HullRepairable.h"
#include "Components/SphereComponent.h"
#include "Engine.h"


AHullRepairable::AHullRepairable()
{
	m_RepairType = RepairTypes::HULL_REPAIR;

	//get all actors of type waterlevel
	//set refWaterLevel to the reference
	//GenerateRivets()

}

void AHullRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHullRepairable::Break()
{
	Super::Break();

	//flood 
	//increase water level 
	//refWaterLevel->fillSpeed
	//refWaterLevel->filling = true
}

RepairTypes AHullRepairable::Repair()
{
	Super::Repair();

	//refwaterlevel->filling = false
	//when all hulls are repaired

	return m_RepairType;
}

void AHullRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
}

void AHullRepairable::GenerateRivets()
{
	//USphereComponent* newComp;
	//FVector newCoords;

	for (int i = 0; i < 4; i++)
	{
		//random corrds within base collider coords
		//coord generator

		//newCoords = FVector(rand() % 5, rand() % 4, 0);


		//newComp = new USphereComponent();
		//newComp->SetWorldLocation(newCoords);
		//Rivets.Add(newComp);
	}
}

void AHullRepairable::ResetRivetPos()
{
	//FVector newCoords;
	//newCoords = FVector(rand() % 5, rand() % 4, 0);
}