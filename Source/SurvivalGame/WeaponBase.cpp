#include "WeaponBase.h"
#include "ProjectileBase.h"

AWeaponBase::AWeaponBase() {
    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
    RootComponent = WeaponMesh;
}

void AWeaponBase::Fire() {
    FVector MuzzleLoc = WeaponMesh->GetSocketLocation("Muzzle");
    FRotator MuzzleRot = WeaponMesh->GetSocketRotation("Muzzle");
    GetWorld()->SpawnActor<AProjectileBase>(ProjectileClass, MuzzleLoc, MuzzleRot);
}