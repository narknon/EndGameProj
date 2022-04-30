#pragma once
#include "CoreMinimal.h"
#include "Explosion.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Impulse.h"
#include "BodyDriver_BipedFallTuningSet.generated.h"

UCLASS(Blueprintable)
class BODYDRIVERPLUGIN_API UBodyDriver_BipedFallTuningSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyUseSimpleRagdollMode;
    
    UPROPERTY(EditAnywhere)
    float FallenRagdollFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrackDeathAnimationWhenSimpleRagdoll;
    
    UPROPERTY(EditAnywhere)
    float MinActivationTime;
    
    UPROPERTY(EditAnywhere)
    float MaxActivationTime;
    
    UPROPERTY(EditAnywhere)
    float InitialTrackingStrength;
    
    UPROPERTY(EditAnywhere)
    float TrackingStrengthBlendoutTime;
    
    UPROPERTY(EditAnywhere)
    float InitialToMidDampingBlendTime;
    
    UPROPERTY(EditAnywhere)
    float MidToFinalDampingBlendTime;
    
    UPROPERTY(EditAnywhere)
    float InitialDamping;
    
    UPROPERTY(EditAnywhere)
    float MidDamping;
    
    UPROPERTY(EditAnywhere)
    float FinalDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableAllHandlingBesidesStiffnessAndDamping;
    
    UPROPERTY(EditAnywhere)
    float FallenMaxHipToFootDistMult;
    
    UPROPERTY(EditAnywhere)
    float FallenAnkleLimitRatio;
    
    UPROPERTY(EditAnywhere)
    float FallenNeckLimitRatio;
    
    UPROPERTY(EditAnywhere)
    float NeckDampingMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExtendElbowsWhenFallen;
    
    UPROPERTY(EditAnywhere)
    float ShoulderLimitOpenRatioWhenFallen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PushHandsAwayFromChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExtendSpineNeckHips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AvoidFlayedArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CorrectShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion MediumExplosionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion LaunchSmallCloseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion LaunchSmallFarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion BlowSmallCloseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion BlowSmallFarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion StrikeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion FallFromBikeData;
    
    UPROPERTY(EditAnywhere)
    float RangeLimWindmill;
    
    UPROPERTY(EditAnywhere)
    float WeightWindmill;
    
    UPROPERTY(EditAnywhere)
    float WindmillRampUpTime;
    
    UPROPERTY(EditAnywhere)
    float StiffnessWindmill;
    
    UPROPERTY(EditAnywhere)
    float WindmillJointSpeed;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeedWindmill;
    
    UPROPERTY(EditAnywhere)
    float DistWindmill;
    
    UPROPERTY(EditAnywhere)
    float RadWindmill;
    
    UPROPERTY(EditAnywhere)
    float ForwardOffsetWindmill;
    
    UPROPERTY(EditAnywhere)
    float UpOffsetWindmill;
    
    UPROPERTY(EditAnywhere)
    float WindmillMaxLengthRatio;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsStartTime;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsRampUpTime;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsStiffness;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsJointSpeed;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsFrontDistance;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsBackDistance;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsSideDistance;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsDownDistance;
    
    UPROPERTY(EditAnywhere)
    float ExplosionLegsKickSpeed;
    
    UPROPERTY(EditAnywhere)
    float ExplosionTrackingStiffness;
    
    UPROPERTY(EditAnywhere)
    float ExplosionSpineStiffness;
    
    UPROPERTY(EditAnywhere)
    float ExplosionStartRampTime;
    
    UPROPERTY(EditAnywhere)
    float ExplosionRampDuration;
    
    UPROPERTY(EditAnywhere)
    float ExplosionTotalAngleChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse OverrideFallImpulseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse OverrideFallImpulseDataBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion ExplosionDataForMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosion ExplosionDataForBullet;
    
    UBodyDriver_BipedFallTuningSet();
};

