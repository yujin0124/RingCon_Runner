// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnedItem.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "ItemObject.h"
// Sets default values
ASpawnedItem::ASpawnedItem()
{
	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SetRootComponent(SphereCollider);

	SpawnParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SpawnParticle"));
	SpawnParticle->SetupAttachment(GetRootComponent());



}

void ASpawnedItem::OnSphereColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ASpawnedItem::OnSphereColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

// Called when the game starts or when spawned
void ASpawnedItem::BeginPlay()
{
	Super::BeginPlay();

	SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ASpawnedItem::OnSphereColliderOverlapBegin);
	SphereCollider->OnComponentEndOverlap.AddDynamic(this, &ASpawnedItem::OnSphereColliderOverlapEnd);
}

