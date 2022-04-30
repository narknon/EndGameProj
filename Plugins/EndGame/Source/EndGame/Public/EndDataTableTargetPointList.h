#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableTargetPointList.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableTargetPointList : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetPointList_Array;
    
    FEndDataTableTargetPointList();
};

