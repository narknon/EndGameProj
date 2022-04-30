#pragma once
#include "CoreMinimal.h"
#include "EndWaveBattleSceneType.generated.h"

UENUM()
enum class EndWaveBattleSceneType : uint8 {
    EndWaveBattleSceneType_Next,
    EndWaveBattleSceneType_Direct,
    EndWaveBattleSceneType_Random,
    EndWaveBattleSceneType_Max,
};

