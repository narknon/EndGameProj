#pragma once
#include "CoreMinimal.h"
#include "EndAdjustOrientationBehaviorSetting.h"
#include "EndAdjustOrientationSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAdjustOrientationSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationBehaviorSetting Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationBehaviorSetting Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationBehaviorSetting Caution;
    
    FEndAdjustOrientationSetting();
};

