#pragma once
#include "CoreMinimal.h"
#include "Particles/Color/ParticleModuleColorBase.h"
#include "VfxParticleModuleFadeByEmitterAngle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleFadeByEmitterAngle : public UParticleModuleColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_LimitAngle;
    
    UPROPERTY(EditAnywhere)
    float m_BlendAngle;
    
    UPROPERTY(EditAnywhere)
    float m_VisibleDistance;
    
    UPROPERTY(EditAnywhere)
    float m_BlendDistance;
    
    UVfxParticleModuleFadeByEmitterAngle();
};

