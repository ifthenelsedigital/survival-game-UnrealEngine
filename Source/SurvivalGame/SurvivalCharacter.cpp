#include "SurvivalCharacter.h"
#include "Camera/CameraComponent.h"
#include "AttributeComponent.h"
#include "InventoryComponent.h"

ASurvivalCharacter::ASurvivalCharacter() {
    CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
    CameraComp->SetupAttachment(RootComponent);
    AttributeComp = CreateDefaultSubobject<UAttributeComponent>("AttributeComp");
    InventoryComp = CreateDefaultSubobject<UInventoryComponent>("InventoryComp");
}

void ASurvivalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveForward", this, &ASurvivalCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASurvivalCharacter::MoveRight);
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASurvivalCharacter::StartFire);
}

void ASurvivalCharacter::MoveForward(float Value) { AddMovementInput(GetActorForwardVector(), Value); }
void ASurvivalCharacter::MoveRight(float Value) { AddMovementInput(GetActorRightVector(), Value); }
void ASurvivalCharacter::StartFire() { /* Implementation in Weapon Class */ }