#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "EndParticleModuleFitGround.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleFitGround : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_RayCastUp;
    
    UPROPERTY(EditAnywhere)
    float m_RayCastDown;
    
    UPROPERTY(EditAnywhere)
    float m_Timer;
    
    UPROPERTY(EditAnywhere)
    float m_GroundOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_FitNormal: 1;
    
    UEndParticleModuleFitGround();
};

