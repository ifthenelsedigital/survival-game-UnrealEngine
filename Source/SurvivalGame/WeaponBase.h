#pragma once
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

UCLASS()
class SURVIVAL_API AWeaponBase : public AActor
{
    GENERATED_BODY()
public:
    AWeaponBase();
    virtual void Fire();

    UPROPERTY(VisibleAnywhere, Category = "Weapon")
    class USkeletalMeshComponent* WeaponMesh;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TSubclassOf<class AProjectileBase> ProjectileClass;
};