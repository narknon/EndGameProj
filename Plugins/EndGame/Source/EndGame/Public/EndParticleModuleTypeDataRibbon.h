#pragma once
#include "CoreMinimal.h"
#include "Particles/TypeData/ParticleModuleTypeDataRibbon.h"
#include "Distributions/DistributionFloat.h"
#include "Distributions/DistributionVector.h"
#include "EndParticleModuleTypeDataRibbon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleTypeDataRibbon : public UParticleModuleTypeDataRibbon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_VfxMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bFitRootLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_LocationBufferCount;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxTrailLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Injection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_RandomUV;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_RandomUVSpeed;
    
    UEndParticleModuleTypeDataRibbon();
};

