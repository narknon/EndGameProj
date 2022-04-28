#pragma once
#include "CoreMinimal.h"
#include "EActorAiMode.generated.h"

UENUM()
enum class EActorAiMode {
    EActorAiMode_CINEMA,
    EActorAiMode_PLAYER,
    EActorAiMode_FIELD,
    EActorAiMode_BATTLE,
    EActorAiMode_BIKE,
};

