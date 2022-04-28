#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBattleTargetCorrectionType.h"
#include "EEndBattleAbilityTargetCloseMoveType.h"
#include "EndAnimNotifyStateBattleTargetCorrection.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleTargetCorrection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndBattleTargetCorrectionType Type;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    float OverrideDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDirectionAngleLeftRight;
    
    UPROPERTY(EditAnywhere)
    float OverrideDirectionAngleLeft;
    
    UPROPERTY(EditAnywhere)
    float OverrideDirectionAngleRight;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideDistance;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDistanceBehind;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideNotDistanceMoveStop;
    
    UPROPERTY(EditAnywhere)
    EEndBattleAbilityTargetCloseMoveType OverrideNotDistanceMoveStopType;
    
    UEndAnimNotifyStateBattleTargetCorrection();
};

