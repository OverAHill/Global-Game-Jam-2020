// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenseSystemRepairable.h"
#include "Components/StaticMeshComponent.h"


ADefenseSystemRepairable::ADefenseSystemRepairable()
{
	m_RepairType = RepairTypes::DEFENSE_SYSTEM_REPAIR;

	NeedleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Needle Mesh"));
	SetSuccRegion(80, 100);
}


void ADefenseSystemRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateNeedle(DeltaTime);


	//update physical position of needle (Needle Mesh)
	//It will depend on the style of dial
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

void ADefenseSystemRepairable::UpdateNeedle(float deltaTime)
{
	if (needlePosition > 180)
	{
		//switch direction
		posDir = false;
	}
	else if (needlePosition < 0)
	{
		posDir = true;
	}


	if (posDir)
	{
		needlePosition++;
	}
	else
	{
		needlePosition--;
	}
}

bool ADefenseSystemRepairable::HammerDown()
{
	if (needlePosition < minPos && needlePosition > maxPos)
	{
		return true;
	}

	return false;
}

void ADefenseSystemRepairable::SetSuccRegion(float min, float max)
{
	minPos = min;
	maxPos = max;
}