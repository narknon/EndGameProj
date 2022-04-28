#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EndAnimInstanceInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EndAnimStructs.h"
#include "EEndLocomotionAnim.h"
#include "EEndAnimBehaviorMatchingType.h"
#include "EEndLocomotionState.h"
#include "Animation/AnimInstance.h"
#include "EndAnimInstance.generated.h"

class UEndLocomotionData;

UCLASS(NonTransient)
class ENDGAME_API UEndAnimInstance : public UAnimInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 CenterBoneIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UEndLocomotionData* NeutralLocomotionData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UEndLocomotionData* BattleLocomotionData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EEndLocomotionAnim, FEndLocomotionAnimSetting> LocomotionAnimSetting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FEndAnimResidentBlend> ResidentBlends;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EEndAnimBehaviorMatchingType LocomotionMatchingType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> LocomotionMatchingBoneNames;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D MoveRotationInputRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D MoveRotationOutputSpeedMaxRange;
    
    UPROPERTY()
    TMap<EEndLocomotionState, float> LocomotionRotationRates;
    
    UPROPERTY()
    TArray<FName> OverrideIdleActionNames;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, float> OverrideIdleActionTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverrideIdleActionIntervalMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverrideIdleActionIntervalMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayRunEndOnRunToWalk;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverrideRunEndInputBlockOnRunToWalk;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAdjustRotationInDamageActions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CinemaCorrectionHeightInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAlwaysInterpCinemaCorrectionHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIgnoreOnEndCutSceneCorrectionHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseSwitchBehaviorBlendLookAt;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SwitchBehaviorCustomBoneFilter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableSwitchBehaviorWalkCancelBlend;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSkipBeginGuardDuringRunning;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FaceGuardCustomBoneFilter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnabledLaunchRagdoll;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HipOffsetHeightWhenBattleUpperBodyAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FaceGuardRunEndBlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DeadActionConstraintBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSyncWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseIdleMotionOnSyncWeaponMotionMissing;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHiddenWeaponInField;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> FieldActionRunInputCancelOverrideLocomotionNames;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FieldActionRunInputCancelOverrideLocomotionRate;
    
    UEndAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
};

