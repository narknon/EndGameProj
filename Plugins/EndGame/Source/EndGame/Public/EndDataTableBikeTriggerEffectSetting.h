#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeTriggerEffectSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeTriggerEffectSetting : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> SpeedRange_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TriggerID_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LowerDelayTime_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> UpperDelayTime_Array;
    
    FEndDataTableBikeTriggerEffectSetting();
};

