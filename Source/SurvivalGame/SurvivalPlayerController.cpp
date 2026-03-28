#include "SurvivalPlayerController.h"

void ASurvivalPlayerController::ToggleInventory()
{
	bIsInventoryOpen = !bIsInventoryOpen;
	bShowMouseCursor = bIsInventoryOpen;
	SetInputMode(bIsInventoryOpen ? FInputModeGameAndUI() : FInputModeGameOnly());
}