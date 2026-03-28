#pragma once
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface { GENERATED_BODY() };

class SURVIVAL_API IInteractInterface {
    GENERATED_BODY()
public:
    virtual void Interact(class ASurvivalCharacter* Character) = 0;
};