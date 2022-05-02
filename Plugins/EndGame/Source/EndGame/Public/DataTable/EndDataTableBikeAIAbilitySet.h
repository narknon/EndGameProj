#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeAIAbilitySet.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeAIAbilitySet : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchWhenHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NormalAbilityID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NormalAbilityOdds_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NormalAbilityPriority_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> SpecialAbilityHPRatio_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SpecialAbilityID_Array;
    
    FEndDataTableBikeAIAbilitySet();
};

