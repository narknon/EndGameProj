#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTablePlannerEventRequirePacks.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTablePlannerEventRequirePacks : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PackName_Array;
    
    FEndDataTablePlannerEventRequirePacks();
};

