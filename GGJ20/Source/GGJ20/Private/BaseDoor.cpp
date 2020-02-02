// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDoor.h"
#include "Components/BoxComponent.h"

// Sets default values
ABaseDoor::ABaseDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(FName("Door Collider"));
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseDoor::OnOverlapBegin);
	BoxCollider->OnComponentEndOverlap.AddDynamic(this, &ABaseDoor::OnOverlapEnd);
	
	leftDoor = CreateDefaultSubobject<AActor>(FName("Left Door"));
	leftDoor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	rightDoor = CreateDefaultSubobject<AActor>(FName("Right Door"));
	rightDoor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	
	leftDoorStartPosition = GetActorLocation();
	rightDoorStartPosition = GetActorLocation();
}

// Called when the game starts or when spawned
void ABaseDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseDoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!isOpen)
	{
		Open();
		isOpen = true;
	}
}

void ABaseDoor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (isOpen)
	{
		Close();
		isOpen = false;
	}
}