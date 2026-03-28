#pragma once
#include "GameFramework/Actor.h"
#include "ProjectileBase.generated.h"

UCLASS()
class SURVIVAL_API AProjectileBase : public AActor
{
    GENERATED_BODY()
public:
    AProjectileBase();
    
    UPROPERTY(VisibleAnywhere)
    class USphereComponent* CollisionComp;

    UPROPERTY(VisibleAnywhere)
    class UProjectileMovementComponent* ProjectileMovement;

    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};