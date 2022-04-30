#pragma once
#include "CoreMinimal.h"
#include "EEndAnimBehaviorMatchingType.h"
#include "Animation/AnimInstance.h"
#include "EEndLocomotionAnim.h"
#include "EndAnimInstanceInterface.h"
#include "EndLocomotionAnimSetting.h"
#include "EndAnimResidentBlend.h"
#include "UObject/NoExportTypes.h"
#include "EEndLocomotionState.h"
#include "EndAnimInstance.generated.h"

class UEndLocomotionData;

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UEndAnimInstance : public UAnimInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CenterBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndLocomotionData* NeutralLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndLocomotionData* BattleLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEndLocomotionAnim, FEndLocomotionAnimSetting> LocomotionAnimSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndAnimResidentBlend> ResidentBlends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAnimBehaviorMatchingType LocomotionMatchingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LocomotionMatchingBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveRotationInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveRotationOutputSpeedMaxRange;
    
    UPROPERTY(EditAnywhere)
    TMap<EEndLocomotionState, float> LocomotionRotationRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverrideIdleActionNames;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> OverrideIdleActionTable;
    
    UPROPERTY(EditAnywhere)
    float OverrideIdleActionIntervalMin;
    
    UPROPERTY(EditAnywhere)
    float OverrideIdleActionIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayRunEndOnRunToWalk;
    
    UPROPERTY(EditAnywhere)
    float OverrideRunEndInputBlockOnRunToWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustRotationInDamageActions;
    
    UPROPERTY(EditAnywhere)
    float CinemaCorrectionHeightInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysInterpCinemaCorrectionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOnEndCutSceneCorrectionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSwitchBehaviorBlendLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchBehaviorCustomBoneFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSwitchBehaviorWalkCancelBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipBeginGuardDuringRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FaceGuardCustomBoneFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledLaunchRagdoll;
    
    UPROPERTY(EditAnywhere)
    float HipOffsetHeightWhenBattleUpperBodyAction;
    
    UPROPERTY(EditAnywhere)
    float FaceGuardRunEndBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeadActionConstraintBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIdleMotionOnSyncWeaponMotionMissing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenWeaponInField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FieldActionRunInputCancelOverrideLocomotionNames;
    
    UPROPERTY(EditAnywhere)
    float FieldActionRunInputCancelOverrideLocomotionRate;
    
    UEndAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
};

