#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleSpecialStatusChange.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleSpecialStatusChange : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Type;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Param_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParamID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParamFlag;
    
    FEndDataTableBattleSpecialStatusChange();
};

