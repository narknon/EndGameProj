#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "Distributions/DistributionFloat.h"
#include "EndParticleModuleVelocityWind.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleVelocityWind : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_WindScale;
    
    UEndParticleModuleVelocityWind();
};

