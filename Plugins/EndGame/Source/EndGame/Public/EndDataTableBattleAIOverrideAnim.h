#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleAIOverrideAnim.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleAIOverrideAnim : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> anim_Array;
    
    FEndDataTableBattleAIOverrideAnim();
};

