#pragma once
#include "CoreMinimal.h"
#include "EndFieldBGMLayer.generated.h"

UENUM(BlueprintType)
enum class EndFieldBGMLayer : uint8 {
    EndFieldBGMLayer_Debug,
    EndFieldBGMLayer_CutScene,
    EndFieldBGMLayer_MiniGame,
    EndFieldBGMLayer_Battle,
    EndFieldBGMLayer_PreBattle,
    EndFieldBGMLayer_Field,
    EndFieldBGMLayer_Foot,
    EndFieldBGMLayer_Title,
    EndFieldBGMLayer_Max,
};

