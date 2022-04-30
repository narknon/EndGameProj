#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleStatusChange.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleStatusChange : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 OffsetID;
    
    UPROPERTY(EditAnywhere)
    uint8 HighID;
    
    UPROPERTY(EditAnywhere)
    uint8 FlagBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Time_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 EffectFlagBit;
    
    FEndDataTableBattleStatusChange();
};

