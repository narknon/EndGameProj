#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "VfxParticleModuleBeamLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleBeamLocation : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_SpawnBaseLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_SpawnStartRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_SpawnEndRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointNameA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointNameB;
    
    UVfxParticleModuleBeamLocation();
};

