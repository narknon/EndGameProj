#include "EndBattleAreaActor.h"
#include "EndBattleAreaBoxComponent.h"
#include "EndCationAreaBoxComponent.h"
#include "EndNavModifierComponent.h"

AEndBattleAreaActor::AEndBattleAreaActor() {
    this->EndBattleAreaBoxComponent = CreateDefaultSubobject<UEndBattleAreaBoxComponent>(TEXT("EndBattleAreaBoxComponent"));
    this->EndCationAreaBoxComponent = CreateDefaultSubobject<UEndCationAreaBoxComponent>(TEXT("EndCationAreaBoxComponent"));
    this->BattleModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("BattleModifier"));
    this->CationModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("CationModifier"));
    this->ExtendedBattleModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("ExtendedModifier"));
    this->TextRenderComponent = NULL;
}

