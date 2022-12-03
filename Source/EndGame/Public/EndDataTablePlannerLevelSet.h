#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTablePlannerLevelSet.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTablePlannerLevelSet : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NextLocationBackgroundLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelList_Array;
    
    FEndDataTablePlannerLevelSet();
};

