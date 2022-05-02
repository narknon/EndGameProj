#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "VfxParticleModuleFogBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UVfxParticleModuleFogBase : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UVfxParticleModuleFogBase();
};

