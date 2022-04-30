#pragma once
#include "CoreMinimal.h"
#include "EndMenuColosseumBattlePrototypeData.h"
#include "EndMenuColosseumBattleScenePrototypeData.h"
#include "EndMenuColosseumRewardPrototypeData.h"
#include "EndMenuColosseumSpecialBattlePrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuColosseumSpecialBattlePrototypeData : public FEndMenuColosseumBattlePrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndMenuColosseumBattleScenePrototypeData BattleScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndMenuColosseumRewardPrototypeData Reward;
    
    FEndMenuColosseumSpecialBattlePrototypeData();
};

