// Fill out your copyright notice in the Description page of Project Settings.

#include "HullRepairable.h"

AHullRepairable::AHullRepairable()
{
	m_RepairType = RepairTypes::HULL_REPAIR;
}

void AHullRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHullRepairable::Break()
{
	Super::Break();
}

RepairTypes AHullRepairable::Repair()
{
	Super::Repair();
	return m_RepairType;
}

void AHullRepairable::SignalRepairCompleted(bool successful)
{
	Super::SignalRepairCompleted(successful);
}