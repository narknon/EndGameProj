#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTablePlannerEventMemberExclusion.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTablePlannerEventMemberExclusion : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Condition_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Member_Array;
    
    FEndDataTablePlannerEventMemberExclusion();
};

