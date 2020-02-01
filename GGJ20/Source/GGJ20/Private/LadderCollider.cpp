// Fill out your copyright notice in the Description page of Project Settings.


#include "LadderCollider.h"
#include "Components/BoxComponent.h"

// Sets default values
ALadderCollider::ALadderCollider()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxCollider = CreateDefaultSubobject<UBoxComponent>(FName("Box Collider"));
	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &ALadderCollider::OnOverlapBegin);
	boxCollider->OnComponentEndOverlap.AddDynamic(this, &ALadderCollider::OnOverlapEnd);

}

// Called when the game starts or when spawned
void ALadderCollider::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALadderCollider::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALadderCollider::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABasePlayer* hitActor = Cast<ABasePlayer>(OtherActor);

	if (hitActor)
	{
		//do the thing
		hitActor->SetOnLadder(true);
	}
}

void ALadderCollider::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABasePlayer* hitActor = Cast<ABasePlayer>(OtherActor);

	if (hitActor)
	{
		//do the thing
		hitActor->SetOnLadder(false);
	}
}