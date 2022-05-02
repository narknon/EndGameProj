#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableTriggerEffect.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableTriggerEffect : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 TriggerType;
    
    UPROPERTY(EditAnywhere)
    uint8 EffectMode;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Parameter_Array;
    
    FEndDataTableTriggerEffect();
};

