#pragma once
#include "GameFramework/GameModeBase.h"
#include "SurvivalGameMode.generated.h"

UCLASS()
class SURVIVAL_API ASurvivalGameMode : public AGameModeBase
{
    GENERATED_BODY()
public:
    virtual void StartPlay() override;
};