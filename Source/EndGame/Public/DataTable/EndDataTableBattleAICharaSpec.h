#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleAICharaSpec.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleAICharaSpec : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> flag_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Param_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> btlflag_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> btlparam_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> btlvalue_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> btlstring_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetSelectType;
    
    UPROPERTY(EditAnywhere)
    float LightAttachATBIntervalTime;
    
    FEndDataTableBattleAICharaSpec();
};

