#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleDamageSource.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleDamageSource : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 DamageType;
    
    UPROPERTY(EditAnywhere)
    uint8 TypeParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerBurst;
    
    UPROPERTY(EditAnywhere)
    uint8 PowerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomBreadth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CriticalHitRate;
    
    UPROPERTY(EditAnywhere)
    float BPAttack;
    
    UPROPERTY(EditAnywhere)
    float BPAttackDamageCoefficient;
    
    UPROPERTY(EditAnywhere)
    float LinkageAddCoefficient;
    
    UPROPERTY(EditAnywhere)
    uint8 HitBonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitBonusParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstHitBonusParameter;
    
    UPROPERTY(EditAnywhere)
    uint8 Property;
    
    UPROPERTY(EditAnywhere)
    uint8 ShieldType;
    
    UPROPERTY(EditAnywhere)
    uint8 ReflectType;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Attribute_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableAttributeMateria;
    
    UPROPERTY(EditAnywhere)
    uint8 HitTarget0;
    
    UPROPERTY(EditAnywhere)
    uint8 HitTarget1;
    
    UPROPERTY(EditAnywhere)
    uint8 HitTarget4;
    
    UPROPERTY(EditAnywhere)
    uint8 HitTarget2;
    
    UPROPERTY(EditAnywhere)
    uint8 HitTarget3;
    
    UPROPERTY(EditAnywhere)
    uint8 EnemyHitCategoryTypeBit;
    
    UPROPERTY(EditAnywhere)
    uint8 HitDamageSourceTypeBit;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableHitBackground;
    
    UPROPERTY(EditAnywhere)
    uint8 MoveOnTerrain;
    
    UPROPERTY(EditAnywhere)
    uint8 MoveOnTerrainOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyBreakableDamage;
    
    UPROPERTY(EditAnywhere)
    uint8 SyncActionHitCountType;
    
    UPROPERTY(EditAnywhere)
    uint8 HitDestroyType;
    
    UPROPERTY(EditAnywhere)
    uint8 HitDestroyTargetType;
    
    UPROPERTY(EditAnywhere)
    uint8 HitCountTotal;
    
    UPROPERTY(EditAnywhere)
    uint8 HitCount;
    
    UPROPERTY(EditAnywhere)
    float HitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitGroupName;
    
    UPROPERTY(EditAnywhere)
    uint8 CollisionType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CollisionParameter_Array;
    
    UPROPERTY(EditAnywhere)
    float CollisionFaceGuardScale;
    
    UPROPERTY(EditAnywhere)
    uint8 CreateBasePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CreatePartName;
    
    UPROPERTY(EditAnywhere)
    float CreatePartOffsetX;
    
    UPROPERTY(EditAnywhere)
    float CreatePartOffsetY;
    
    UPROPERTY(EditAnywhere)
    float CreatePartOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float CreatePartOffsetPitch;
    
    UPROPERTY(EditAnywhere)
    float CreatePartOffsetYaw;
    
    UPROPERTY(EditAnywhere)
    float CreatePartOffsetRoll;
    
    UPROPERTY(EditAnywhere)
    float CreateDelayTime;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetName;
    
    UPROPERTY(EditAnywhere)
    float DisableHitTime;
    
    UPROPERTY(EditAnywhere)
    uint8 RecalcMoveDir;
    
    UPROPERTY(EditAnywhere)
    float DisableHitOnlyTime;
    
    UPROPERTY(EditAnywhere)
    uint8 LifeTimeNotify;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    float DestroyDelayTime;
    
    UPROPERTY(EditAnywhere)
    uint8 ProgressDirectionType;
    
    UPROPERTY(EditAnywhere)
    uint8 ControlType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ControlParameter_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ControlName_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ExtControlType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ExtControlParameter_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExtControlName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExtControlFlag_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 RotationType;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ConditionCreateDamageSourceType_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ConditionCreateDamageSourceID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flag0;
    
    UPROPERTY(EditAnywhere)
    uint8 GuardBasePos;
    
    UPROPERTY(EditAnywhere)
    uint8 CutValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionID;
    
    UPROPERTY(EditAnywhere)
    uint8 HitReactionType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> HitReactionParam_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionParamID;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AerialHitReactionParam_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 ChangeAddToNoneHitReaction;
    
    UPROPERTY(EditAnywhere)
    uint8 KnockbackDirType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KnockbackDirStringParam0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitSlowID;
    
    UPROPERTY(EditAnywhere)
    uint8 HitSlowExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaSpecID;
    
    UPROPERTY(EditAnywhere)
    uint8 PhysicsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CreatePhysicsObjectCharaSpecID;
    
    UPROPERTY(EditAnywhere)
    uint8 CreatePhysicsObjectBasePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CreatePhysicsObjectPartName;
    
    UPROPERTY(EditAnywhere)
    float CreatePhysicsObjectDelay;
    
    UPROPERTY(EditAnywhere)
    float CreatePhysicsObjectForce;
    
    UPROPERTY(EditAnywhere)
    float CreatePhysicsObjectForceRandom;
    
    UPROPERTY(EditAnywhere)
    uint8 CreateEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CreateEffectResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 CreateSoundResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CreateSoundResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 PushCollisionEnable;
    
    UPROPERTY(EditAnywhere)
    float PushCollisionRadiusReachTime;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> HitEffectResourceCategory_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HitEffectResourceName_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> HitEffectAttachCharacter_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> HitEffectAttachHitLocation_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> HitEffectIntervalTime_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 HitSoundResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitSoundResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 GuardEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GuardEffectResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 GuardSoundResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GuardSoundResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 BindEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindEffectResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 BindEffectAttachSocket;
    
    UPROPERTY(EditAnywhere)
    float BindEffectDelayTime;
    
    UPROPERTY(EditAnywhere)
    float BindEffectOffsetPitch;
    
    UPROPERTY(EditAnywhere)
    float BindEffectOffsetYaw;
    
    UPROPERTY(EditAnywhere)
    float BindEffectOffsetRoll;
    
    UPROPERTY(EditAnywhere)
    uint8 BindSoundResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindSoundResourceName;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StatusChangeType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StatusChangeTime_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialStatusChangeID;
    
    UPROPERTY(EditAnywhere)
    uint8 TakeDamageDirectionType;
    
    UPROPERTY(EditAnywhere)
    float EnvironmenPhysImpulseRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 EnvironmenPhysImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitCameraShakeDataID;
    
    UPROPERTY(EditAnywhere)
    uint8 HitCameraShakeExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitForceFeedbackFileName;
    
    UPROPERTY(EditAnywhere)
    uint8 HitForceFeedbackExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitForceFeedbackSEFileName;
    
    UPROPERTY(EditAnywhere)
    uint8 GuardOwnerReactionType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GuardOwnerReactionParam_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GuardOwnerReactionStringParam0;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableLookAtCheck;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableMoveHitPosition;
    
    UPROPERTY(EditAnywhere)
    float DangerRange;
    
    UPROPERTY(EditAnywhere)
    uint8 VibrationOnlyTheLeader;
    
    FEndDataTableBattleDamageSource();
};

