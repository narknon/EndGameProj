#pragma once
#include "CoreMinimal.h"
#include "Impulse.h"
#include "GravityAndAirResistanceControl.h"
#include "eBodyParts.h"
#include "Explosion.generated.h"

USTRUCT(BlueprintType)
struct FExplosion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBaseRagdollRegardless;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseImpulseDataAsWell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipLinearVelocityControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipBaseDataVelocityClamp;
    
    UPROPERTY(EditAnywhere)
    float MinLinearMagnitude;
    
    UPROPERTY(EditAnywhere)
    float MaxLinearMagnitude;
    
    UPROPERTY(EditAnywhere)
    float LinearForceApplyTime;
    
    UPROPERTY(EditAnywhere)
    float ClosestDistanceToScaleMagnitude;
    
    UPROPERTY(EditAnywhere)
    float FarthestDistanceToScaleMagnitude;
    
    UPROPERTY(EditAnywhere)
    float MinAngleFromHorizon;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleFromHorizon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse DistanceScaledImpactData;
    
    UPROPERTY(EditAnywhere)
    float LinearMagnitudeForContactExplosions;
    
    UPROPERTY(EditAnywhere)
    float AngleFromHorizonOverrideForContactExplosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotationOppositeOfExplosionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotationUseDesiredBodyVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotationConstrainOtherRotVelocity;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeedForContactExplosion;
    
    UPROPERTY(EditAnywhere)
    float RotationStartTime;
    
    UPROPERTY(EditAnywhere)
    float RotationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse ContactImpactData;
    
    UPROPERTY(EditAnywhere)
    float PolarSpinProportion;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<eBodyParts> PolarSpinTopPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGravityAndAirResistanceControl GravityAndAirResistanceControl;
    
    BODYDRIVERPLUGIN_API FExplosion();
};

