#include "EndFieldActionActorMonkeyBars.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorMonkeyBars::AEndFieldActionActorMonkeyBars() {
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->bRefreshParam = false;
    this->bRefreshGoal = false;
    this->bLimitCameraPitch = true;
    this->LimitCameraPitchCustomFlavorName = TEXT("MonkeyBarsFieldAction");
}

