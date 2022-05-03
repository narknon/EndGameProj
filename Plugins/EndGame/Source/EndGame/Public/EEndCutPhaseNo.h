#pragma once
#include "CoreMinimal.h"
#include "EEndCutPhaseNo.generated.h"

UENUM(BlueprintType)
enum class EEndCutPhaseNo : uint8 {
    Nothing,
    LevelLoading,
    CharaSpecLoading,
    ActorCreating,
    WaitBindBGFA,
    WaitPlaying,
    WaitOnActorCreated,
    WaitOpenMovie,
    Playing,
    WaitFinished,
    Finished,
    ReadyPlayMovie,
    WaitPlayMovie,
};

