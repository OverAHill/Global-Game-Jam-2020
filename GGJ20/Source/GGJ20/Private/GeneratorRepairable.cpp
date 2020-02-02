// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorRepairable.h"
#include "WaterLevel.h"

AGeneratorRepairable::AGeneratorRepairable()
{
	m_RepairType = RepairTypes::GENERATOR_REPAIR;
}

void AGeneratorRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
}

void AGeneratorRepairable::Break()
{
	Super::Break();
	//turn off lights

	refToWater->SetGenFixed(false);
}

RepairTypes AGeneratorRepairable::Repair()
{
	Super::Repair();
	//get ws, turn draining on
	//turn lights back on

	refToWater->SetGenFixed(true);
	return m_RepairType;
}

void AGeneratorRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
}