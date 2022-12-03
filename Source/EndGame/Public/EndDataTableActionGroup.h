#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableActionGroup.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableActionGroup : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionGroupLIst_Array;
    
    FEndDataTableActionGroup();
};

