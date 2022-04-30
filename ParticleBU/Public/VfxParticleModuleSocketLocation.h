#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "UObject/NoExportTypes.h"
#include "VfxParticleModuleSocketLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleSocketLocation : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WildcardSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_SocketNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_VelocityDir;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_VelocityScale;
    
    UVfxParticleModuleSocketLocation();
};

