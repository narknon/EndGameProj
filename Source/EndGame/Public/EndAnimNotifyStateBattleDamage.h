#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourcePositionBaseType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EEndAnimNotifyBattleDamageOwnerFilterType.h"
#include "EndAnimNotifyStateBattleDamage.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleDamage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleDamageSourcePositionBaseType CreatePositionBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CreatePositionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReplaceOwnerCharaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAnimNotifyBattleDamageOwnerFilterType OwnerFilterType;
    
    UEndAnimNotifyStateBattleDamage();
};

