#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleConditionTriggerGroup.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleConditionTriggerGroup : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BattleConditionTriggerId_Array;
    
    FEndDataTableBattleConditionTriggerGroup();
};

