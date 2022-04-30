#pragma once
#include "CoreMinimal.h"
#include "Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "VfxParticleModuleTypeDataActor.generated.h"


UCLASS(Blueprintable, EditInlineNew)
class UEnParticleModuleTypeDataBase : public UParticleModule
{
    GENERATED_UCLASS_BODY()
};


UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleTypeDataActor : public UEnParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UVfxParticleModuleTypeDataActor();
};

