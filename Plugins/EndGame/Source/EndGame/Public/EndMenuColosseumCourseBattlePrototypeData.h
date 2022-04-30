#pragma once
#include "CoreMinimal.h"
#include "EndMenuColosseumBattlePrototypeData.h"
#include "EndMenuColosseumBattleScenePrototypeData.h"
#include "EndMenuColosseumRewardPrototypeData.h"
#include "EndMenuColosseumCourseBattlePrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuColosseumCourseBattlePrototypeData : public FEndMenuColosseumBattlePrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndMenuColosseumBattleScenePrototypeData> BattleSceneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndMenuColosseumRewardPrototypeData> RewardList;
    
    FEndMenuColosseumCourseBattlePrototypeData();
};

