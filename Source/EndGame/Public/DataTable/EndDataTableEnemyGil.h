#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEnemyGil.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEnemyGil : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Value_Array;
    
    FEndDataTableEnemyGil();
};

