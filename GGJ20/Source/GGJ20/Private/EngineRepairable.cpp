// Fill out your copyright notice in the Description page of Project Settings.


#include "EngineRepairable.h"
#include "WeldingPoint.h"
#include "Components/StaticMeshComponent.h"

AEngineRepairable::AEngineRepairable()
{
	m_RepairType = RepairTypes::ENGINE_REPAIR;
}

void AEngineRepairable::BeginPlay()
{
	for (AWeldingPoint* point : weldingPoints)
	{
		point->crackMesh->SetVisibility(false);
	}

	Super::BeginPlay();
}


void AEngineRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEngineRepairable::Break()
{
	for (AWeldingPoint* point : weldingPoints)
	{
		point->crackMesh->SetVisibility(true);
	}
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