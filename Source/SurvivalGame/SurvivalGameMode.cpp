#include "SurvivalGameMode.h"

void ASurvivalGameMode::StartPlay() {
    Super::StartPlay();
    UE_LOG(LogTemp, Warning, TEXT("Survival Game Started!"));
}