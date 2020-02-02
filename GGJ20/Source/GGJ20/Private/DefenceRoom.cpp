// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenceRoom.h"
#include "DefenseSystemRepairable.h"

ADefenceRoom::ADefenceRoom()
{
	DefenseSystem = CreateDefaultSubobject<ADefenseSystemRepairable>(FName("DefenseRoom_Repairable"));
}

void ADefenceRoom::BeginPlay()
{
	Super::BeginPlay();
	DefenseSystem->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
}