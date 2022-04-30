#pragma once
#include "CoreMinimal.h"
#include "EndAdjustOrientationBoneSetting.h"
#include "EndAdjustOrientationWalkSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAdjustOrientationWalkSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndAdjustOrientationBoneSetting> BoneSettings;
    
    FEndAdjustOrientationWalkSetting();
};

