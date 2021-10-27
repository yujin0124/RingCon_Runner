// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnedItem.generated.h"

UCLASS()
class PROJECTALPHA_API ASpawnedItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnedItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* SphereCollider;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	class UItemObject* ItemToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	class UParticleSystemComponent* SpawnParticle;

	UFUNCTION(BlueprintCallable)
	void OnSphereColliderOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
	void OnSphereColliderOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
