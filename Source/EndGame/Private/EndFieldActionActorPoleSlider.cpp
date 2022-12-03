#include "EndFieldActionActorPoleSlider.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorPoleSlider::AEndFieldActionActorPoleSlider() {
    this->UpperVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("UpperVolume"));
    this->LowerVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("LowerVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->LeaveAngle = 0.00f;
}

