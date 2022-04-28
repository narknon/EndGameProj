#pragma once
#include "CoreMinimal.h"
#include "EActorMode.generated.h"

UENUM()
enum class EActorMode {
    EActorMode_NONE,
    EActorMode_FIELD,
    EActorMode_FIELD_PLAN,
    EActorMode_FIELD_CINEMA,
    EActorMode_CAUTION,
    EActorMode_BATTLE,
    EActorMode_BIKE,
    EActorMode_CINEMA,
};

