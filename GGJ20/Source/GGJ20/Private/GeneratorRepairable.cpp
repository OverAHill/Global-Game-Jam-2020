// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorRepairable.h"

AGeneratorRepairable::AGeneratorRepairable()
{
	m_RepairType = RepairTypes::GENERATOR_REPAIR;
}

void AGeneratorRepairable::Break()
{
	Super::Break();
}

RepairTypes AGeneratorRepairable::Repair()
{
	Super::Repair();
	return m_RepairType;
}

void AGeneratorRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
}