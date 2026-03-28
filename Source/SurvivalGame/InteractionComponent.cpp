#include "InteractionComponent.h"
#include "InteractInterface.h"
#include "DrawDebugHelpers.h"

UInteractionComponent::UInteractionComponent() { PrimaryComponentTick.bCanEverTick = false; }

void UInteractionComponent::PrimaryInteract()
{
	FHitResult Hit;
	FVector Start = GetOwner()->GetActorLocation();
	FVector End = Start + (GetOwner()->GetActorForwardVector() * TraceDistance);

	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility))
	{
		if (Hit.GetActor() && Hit.GetActor()->Implements<UInteractInterface>())
		{
			IInteractInterface::Execute_Interact(Hit.GetActor(), Cast<ASurvivalCharacter>(GetOwner()));
		}
	}
}