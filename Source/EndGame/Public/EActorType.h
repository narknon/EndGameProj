#pragma once
#include "CoreMinimal.h"
#include "EActorType.generated.h"

UENUM()
enum class EActorType {
    EActorType_PLAYER,
    EActorType_PARTY,
    EActorType_GUEST,
    EActorType_NPC,
    EActorType_ENEMY,
    EActorType_OBJECT,
    EActorType_GUEST_Battle,
    EActorType_WEAPON,
};

