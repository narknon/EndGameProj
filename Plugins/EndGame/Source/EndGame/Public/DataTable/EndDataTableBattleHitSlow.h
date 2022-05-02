#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleHitSlow.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleHitSlow : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SpeedScale;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    FEndDataTableBattleHitSlow();
};

