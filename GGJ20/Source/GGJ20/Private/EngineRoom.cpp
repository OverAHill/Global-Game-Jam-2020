// Fill out your copyright notice in the Description page of Project Settings.


#include "EngineRoom.h"
#include "EngineRepairable.h"

AEngineRoom::AEngineRoom()
{
	Engine = CreateDefaultSubobject<AEngineRepairable>(FName("EngineRoom_Repairable"));
}

void AEngineRoom::BeginPlay()
{
	Super::BeginPlay();
	Engine->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
}