#pragma once
#include "CoreMinimal.h"
#include "EEndCutPhaseNo.generated.h"

UENUM()
enum class EEndCutPhaseNo {
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

