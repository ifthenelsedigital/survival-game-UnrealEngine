#pragma once
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SURVIVAL_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UInteractionComponent();
	
	UFUNCTION(BlueprintCallable)
	void PrimaryInteract();

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Trace")
	float TraceDistance = 500.0f;
};