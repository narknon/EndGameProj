#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EEndBattleTargetCorrectionType.h"
#include "EEndBattleAbilityTargetCloseMoveType.h"
#include "EndAnimNotifyStateBattleTargetCorrection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleTargetCorrection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleTargetCorrectionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    float OverrideDirectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDirectionAngleLeftRight;
    
    UPROPERTY(EditAnywhere)
    float OverrideDirectionAngleLeft;
    
    UPROPERTY(EditAnywhere)
    float OverrideDirectionAngleRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDistanceBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideNotDistanceMoveStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleAbilityTargetCloseMoveType OverrideNotDistanceMoveStopType;
    
    UEndAnimNotifyStateBattleTargetCorrection();
};

