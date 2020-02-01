// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorRepairable.h"

AGeneratorRepairable::AGeneratorRepairable()
{
	m_RepairType = RepairTypes::GENERATOR_REPAIR;
}

void AGeneratorRepairable::Break()
{
	Super::Break();
	//get water system
	//turn draining off
	//turn off lights
}

RepairTypes AGeneratorRepairable::Repair()
{
	Super::Repair();
	//get ws, turn draining on
	//turn lights back on
	return m_RepairType;
}

void AGeneratorRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
}