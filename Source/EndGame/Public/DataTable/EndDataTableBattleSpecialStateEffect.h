#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleSpecialStateEffect.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleSpecialStateEffect : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 RemoveOnEscape;
    
    UPROPERTY(EditAnywhere)
    uint8 RemoveOnDeath;
    
    UPROPERTY(EditAnywhere)
    uint8 DetachOnRemove;
    
    UPROPERTY(EditAnywhere)
    uint8 CreateEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CreateEffectResourceName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttachSocketName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BeamTargetAttachSocketName_Array;
    
    FEndDataTableBattleSpecialStateEffect();
};

