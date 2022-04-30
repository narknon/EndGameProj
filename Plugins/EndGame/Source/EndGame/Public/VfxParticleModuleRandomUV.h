#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "Distributions/DistributionFloat.h"
#include "Distributions/DistributionVector.h"
#include "VfxParticleModuleRandomUV.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UVfxParticleModuleRandomUV : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Init;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_ScaleInit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_ScaleSpeed;
    
    UVfxParticleModuleRandomUV();
};

