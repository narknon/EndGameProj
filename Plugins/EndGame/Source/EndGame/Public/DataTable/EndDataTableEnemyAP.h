#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEnemyAP.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEnemyAP : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Value_Array;
    
    FEndDataTableEnemyAP();
};

