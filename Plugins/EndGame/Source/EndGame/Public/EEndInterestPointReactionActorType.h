#pragma once
#include "CoreMinimal.h"
#include "EEndInterestPointReactionActorType.generated.h"

UENUM()
enum class EEndInterestPointReactionActorType : uint8 {
    Player,
    Party,
    Npc,
    Type_Max,
};

