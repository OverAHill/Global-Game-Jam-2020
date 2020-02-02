// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenseSystemRepairable.h"
#include "Components/StaticMeshComponent.h"


ADefenseSystemRepairable::ADefenseSystemRepairable()
{
	m_RepairType = RepairTypes::DEFENSE_SYSTEM_REPAIR;

	NeedleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Needle Mesh"));
	//NeedleMesh->SetRelativeLocation(FVector(0, 0, 20));
	NeedleMesh->AddLocalOffset(FVector(0, 0, 20));
	//NeedleMesh->SetRelativeRotation(FRotator(0, 0, 90));
	posDir = true;
	SetSuccRegion(80, 100);
	beingRepaired = false;
}


void ADefenseSystemRepairable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateNeedle(DeltaTime);

}


void ADefenseSystemRepairable::Break()
{
	Super::Break();
}

RepairTypes ADefenseSystemRepairable::Repair()
{
	Super::Repair();
	beingRepaired = true;
	return m_RepairType;
}

void ADefenseSystemRepairable::SignalRepairCompleted(bool successful)
{
	beingRepaired = false;
	Super::SignalRepairCompleted(successful);
}

void ADefenseSystemRepairable::UpdateNeedle(float deltaTime)
{
	if (beingRepaired)
	{
		if (needlePosition > 90)
		{
			//switch direction
			posDir = false;
		}
		else if (needlePosition < -90)
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


		//update physical position of needle (Needle Mesh)
		//It will depend on the style of dial

		if (posDir)
		{
			FTransform t = NeedleMesh->GetRelativeTransform();
			FRotator r = t.GetRotation().Rotator();
			r.Add(0, 0, 1);
			NeedleMesh->SetRelativeRotation(r);
		}
		else
		{
			FTransform t = NeedleMesh->GetRelativeTransform();
			FRotator r = t.GetRotation().Rotator();
			r.Add(0, 0, -1);
			NeedleMesh->SetRelativeRotation(r);
		}
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