#pragma once
#include "CoreMinimal.h"
#include "GravityAndAirResistanceControl.h"
#include "eBodyParts.h"
#include "PartImpulseOverride.h"
#include "Impulse.generated.h"

USTRUCT(BlueprintType)
struct FImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(EditAnywhere)
    float Impulse;
    
    UPROPERTY(EditAnywhere)
    float ImpulseArms;
    
    UPROPERTY(EditAnywhere)
    float ImpulseHands;
    
    UPROPERTY(EditAnywhere)
    float ImpulseLegs;
    
    UPROPERTY(EditAnywhere)
    float ImpulseMultWhenFallen;
    
    UPROPERTY(EditAnywhere)
    float ImpulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ImpulseRelativeToPartMass;
    
    UPROPERTY(EditAnywhere)
    float AmountOfDecayPerStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumDecayStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceRandomizedValidHitPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaxInitialPartVelocityOverrides;
    
    UPROPERTY(EditAnywhere)
    float MaxInitialPartLinearVelocity;
    
    UPROPERTY(EditAnywhere)
    float MaxInitialPartAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> OverrideHitParts;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfPartOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartImpulseOverride> PartImpulseOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClampAngleVertically;
    
    UPROPERTY(EditAnywhere)
    float MinVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClampAngleToFacingCone;
    
    UPROPERTY(EditAnywhere)
    float MaxConeAngleFromFacing;
    
    UPROPERTY(EditAnywhere)
    float ImpactMagnitude;
    
    UPROPERTY(EditAnywhere)
    float ImpactMultWhenFallen;
    
    UPROPERTY(EditAnywhere)
    float ImpactOutMagRatio;
    
    UPROPERTY(EditAnywhere)
    float ImpactMagnitudeLowerBody;
    
    UPROPERTY(EditAnywhere)
    float ImpactMagnitudeArms;
    
    UPROPERTY(EditAnywhere)
    float ImpactMagnitudeHands;
    
    UPROPERTY(EditAnywhere)
    float ImpactTime;
    
    UPROPERTY(EditAnywhere)
    float ImpactOutTime;
    
    UPROPERTY(EditAnywhere)
    float ImpactDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImpactMaxNumDecayStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ImpactRelativeToPartMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartImpulseOverride> PartImpactOverrides;
    
    UPROPERTY(EditAnywhere)
    float StayUprightTorqueMagnitude;
    
    UPROPERTY(EditAnywhere)
    float StayUprightLiftMagnitude;
    
    UPROPERTY(EditAnywhere)
    float StayUprightMinTimeLift;
    
    UPROPERTY(EditAnywhere)
    float StayUprightMaxTimeLift;
    
    UPROPERTY(EditAnywhere)
    float StayUprightMinTimeTorque;
    
    UPROPERTY(EditAnywhere)
    float StayUprightMaxTimeTorque;
    
    UPROPERTY(EditAnywhere)
    float StayUprightMinMagAngle;
    
    UPROPERTY(EditAnywhere)
    float StayUprightMaxMagAngle;
    
    UPROPERTY(EditAnywhere)
    float StayUprightBailBodyAngle;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> StayUprightTorqueParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPushDown;
    
    UPROPERTY(EditAnywhere)
    float PainHunchAngle;
    
    UPROPERTY(EditAnywhere)
    float PainPeakStartTime;
    
    UPROPERTY(EditAnywhere)
    float PainPeakDuration;
    
    UPROPERTY(EditAnywhere)
    float PainPeakFalloffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PainOnlyUseForIncludeParts;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> PainIncludeParts;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> PainExcludeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGravityAndAirResistanceControl GravityAndAirResistanceControl;
    
    BODYDRIVERPLUGIN_API FImpulse();
};

