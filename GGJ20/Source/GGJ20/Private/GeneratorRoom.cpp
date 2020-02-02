// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorRoom.h"
#include "GeneratorRepairable.h"

AGeneratorRoom::AGeneratorRoom()
{
	Generator = CreateDefaultSubobject<AGeneratorRepairable>(FName("GeneratorRoom_Repairable"));
}