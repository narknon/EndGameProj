#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "EVfxCircleLocationKind.h"
#include "EndParticleModuleCircleLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleCircleLocation : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVfxCircleLocationKind m_Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Radius;
    
    UPROPERTY(EditAnywhere)
    float m_RadiusRandom;
    
    UPROPERTY(EditAnywhere)
    float m_BeginAngle;
    
    UPROPERTY(EditAnywhere)
    float m_BeginAngleRandom;
    
    UPROPERTY(EditAnywhere)
    float m_StepAngle;
    
    UPROPERTY(EditAnywhere)
    float m_StepAngleRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Velocity;
    
    UPROPERTY(EditAnywhere)
    float m_VelocityRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bReverseAngle: 1;
    
    UEndParticleModuleCircleLocation();
};

