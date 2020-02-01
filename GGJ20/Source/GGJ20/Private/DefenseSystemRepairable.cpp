// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenseSystemRepairable.h"

ADefenseSystemRepairable::ADefenseSystemRepairable()
{
	m_RepairType = RepairTypes::DEFENSE_SYSTEM_REPAIR;
}

void ADefenseSystemRepairable::Break()
{
	Super::Break();
}

RepairTypes ADefenseSystemRepairable::Repair()
{
	Super::Repair();
	return m_RepairType;
}

void ADefenseSystemRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
}