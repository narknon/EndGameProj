#include "EndNavModifierLockOnSiteVolume.h"
#include "Components/BoxComponent.h"
#include "EndNavModifierComponent.h"

AEndNavModifierLockOnSiteVolume::AEndNavModifierLockOnSiteVolume() {
    this->ResponseAreaID = TEXT("rpaLockOnMode");
    this->ResponseAreaPlayerID = TEXT("rpaLockOnModePlayer");
    this->RangeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RangeComponent"));
    this->TargetIconComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TargetIconComponent"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->TextRenderComponent = NULL;
}

