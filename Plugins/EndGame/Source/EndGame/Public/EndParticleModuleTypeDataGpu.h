#pragma once
#include "CoreMinimal.h"
#include "VfxParticleModuleTypeDataActor.h"
#include "Particles/TypeData/ParticleModuleTypeDataGpu.h"
#include "EndParticleModuleTypeDataGpu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnParticleModuleTypeDataGpu : public UEnParticleModuleTypeDataBase
{
    GENERATED_BODY()
public:
    UEnParticleModuleTypeDataGpu();
};


UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleTypeDataGpu : public UParticleModuleTypeDataGpu {
    GENERATED_BODY()
public:
    UEndParticleModuleTypeDataGpu();
};

