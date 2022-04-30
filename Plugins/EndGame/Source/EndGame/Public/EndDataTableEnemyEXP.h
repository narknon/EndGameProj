#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEnemyEXP.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEnemyEXP : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Value_Array;
    
    FEndDataTableEnemyEXP();
};

