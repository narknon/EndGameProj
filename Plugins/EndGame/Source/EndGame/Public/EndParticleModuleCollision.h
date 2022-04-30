#pragma once
#include "CoreMinimal.h"
#include "Particles/Collision/ParticleModuleCollision.h"
#include "EndParticleModuleCollision.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UEndParticleModuleCollision : public UParticleModuleCollision {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_HitOffsetNormalScale;
    
    UPROPERTY(EditAnywhere)
    float m_FreezeTranslationVelocityLength;
    
    UEndParticleModuleCollision();
};

