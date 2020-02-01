// Fill out your copyright notice in the Description page of Project Settings.


#include "EngineRepairable.h"

AEngineRepairable::AEngineRepairable()
{
	m_RepairType = RepairTypes::ENGINE_REPAIR;
}

void AEngineRepairable::Break()
{
	Super::Break();
}

RepairTypes AEngineRepairable::Repair()
{
	Super::Repair();
	return m_RepairType;
}

void AEngineRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
}