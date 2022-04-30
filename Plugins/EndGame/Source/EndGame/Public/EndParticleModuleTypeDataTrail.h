#pragma once
#include "CoreMinimal.h"
#include "Particles/TypeData/ParticleModuleTypeDataAnimTrail.h"
#include "Distributions/DistributionVector.h"
#include "Distributions/DistributionFloat.h"
#include "EndParticleModuleTypeDataTrail.generated.h"

UCLASS(Blueprintable, meta=(DisplayName = "EnParticleModuleTypeDataAnimTrail"))
class UEnParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
    GENERATED_BODY()
public:
    UEnParticleModuleTypeDataAnimTrail();
};


UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleTypeDataTrail : public UEnParticleModuleTypeDataAnimTrail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_PointA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_PointB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_TrailWidth;
    
    UPROPERTY(EditAnywhere)
    uint16 m_MaxParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_EnableFlipV: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketNameA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketNameB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointNameA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointNameB;
    
    UEndParticleModuleTypeDataTrail();
};

