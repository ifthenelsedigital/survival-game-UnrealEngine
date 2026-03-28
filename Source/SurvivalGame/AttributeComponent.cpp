#include "AttributeComponent.h"

UAttributeComponent::UAttributeComponent() { PrimaryComponentTick.bCanEverTick = true; }

void UAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    Hunger -= HungerDecayRate * DeltaTime;
    if (Hunger <= 0) Health -= 1.0f * DeltaTime;
}