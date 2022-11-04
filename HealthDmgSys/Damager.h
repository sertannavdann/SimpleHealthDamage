// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Damager.generated.h"

UCLASS()
class HEALTHDMGSYS_API ADamager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
		class UProjectileMovementComponent* ProjectileMovementComp;

	UPROPERTY(EditAnywhere, Category = "Combat")
		float FireSpeed = 1500.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
		float InitialFireSpeed = 1200.f;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
		UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere, Category = "Combat")
		float Damage = 50.f;


	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
