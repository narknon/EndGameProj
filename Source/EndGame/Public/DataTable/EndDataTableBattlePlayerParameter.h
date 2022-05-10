#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattlePlayerParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattlePlayerParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharacterAbility_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GuardReactionNoneAddATB_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GuardReactionNoneDamageCoefficient_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GuardReactionMediumAddATB_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GuardReactionMediumDamageCoefficient_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GuardReactionLargeAddATB_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GuardReactionLargeDamageCoefficient_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChangeDodgeAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChangeDodgeAbilityIDFrog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LimitAbilityID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LimitAbilityUseableFlag_Array;
    
    FEndDataTableBattlePlayerParameter();
};

