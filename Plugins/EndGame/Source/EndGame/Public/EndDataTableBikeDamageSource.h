#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeDamageSource.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeDamageSource : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomBreadth;
    
    UPROPERTY(EditAnywhere)
    uint8 Impact;
    
    UPROPERTY(EditAnywhere)
    uint8 ReactionDirection;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeedAtReaction;
    
    UPROPERTY(EditAnywhere)
    uint8 UnBlockable;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableGuardEffect;
    
    UPROPERTY(EditAnywhere)
    uint8 DamageMotionType;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableFriendlyFire;
    
    UPROPERTY(EditAnywhere)
    uint8 WillBeAvoided;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableHitCharacter;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableHitBackground;
    
    UPROPERTY(EditAnywhere)
    uint8 MoveOnTerrain;
    
    UPROPERTY(EditAnywhere)
    uint8 HitDestroyType;
    
    UPROPERTY(EditAnywhere)
    uint8 HitCountTotal;
    
    UPROPERTY(EditAnywhere)
    uint8 HitCount;
    
    UPROPERTY(EditAnywhere)
    float HitInterval;
    
    UPROPERTY(EditAnywhere)
    uint8 HitMultiParts;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableForceBrake;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableFinish;
    
    UPROPERTY(EditAnywhere)
    uint8 CollisionType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CollisionParameter_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaSpecID;
    
    UPROPERTY(EditAnywhere)
    uint8 BikeCreatePositionType;
    
    UPROPERTY(EditAnywhere)
    float BikeCreateMileageOffset;
    
    UPROPERTY(EditAnywhere)
    float BikeCreateSlideOffset;
    
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
    uint8 BikeTargetPositionType;
    
    UPROPERTY(EditAnywhere)
    float BikeTargetMileageOffset;
    
    UPROPERTY(EditAnywhere)
    float BikeTargetMileageOffsetTime;
    
    UPROPERTY(EditAnywhere)
    float BikeTargetSlideOffset;
    
    UPROPERTY(EditAnywhere)
    float BikeTargetHeightOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableDeviationCalc;
    
    UPROPERTY(EditAnywhere)
    float DeviationCalcSlideSpeedRate;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetName;
    
    UPROPERTY(EditAnywhere)
    uint8 LifeTimeNotify;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    uint8 ProgressDirectionType;
    
    UPROPERTY(EditAnywhere)
    uint8 ControlType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ControlParameter_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlFlag;
    
    UPROPERTY(EditAnywhere)
    uint8 RotationType;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ConditionCreateDamageSourceType_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ConditionCreateDamageSourceID_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 CreateEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CreateEffectResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 HitEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitEffectResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 BindEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindEffectResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeEffectResource;
    
    UPROPERTY(EditAnywhere)
    float AttributeEffectLoopTime;
    
    UPROPERTY(EditAnywhere)
    uint8 HitSoundResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitSoundResourceName;
    
    UPROPERTY(EditAnywhere)
    float EnvironmenPhysImpulseRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 EnvironmenPhysImpulseScale;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableOwnerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayerFeedbackID_Array;
    
    FEndDataTableBikeDamageSource();
};

