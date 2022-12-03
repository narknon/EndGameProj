#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleCharaCategory.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleCharaCategory : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Category;
    
    FEndDataTableBattleCharaCategory();
};

