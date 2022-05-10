#pragma once
#include "CoreMinimal.h"
#include "Particles/End/EVfxParticleEventTriggerType.h"
#include "Particles/Event/ParticleModuleEventBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVfxParticleEventTriggerType -FallbackName=EVfxParticleEventTriggerType
#include "VfxParticleModuleEventTrigger.generated.h"


UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UVfxParticleModuleEventTrigger : public UParticleModuleEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EVfxParticleEventTriggerType m_TriggerType;
    
    UPROPERTY(EditAnywhere)
    float m_TriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TriggerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bRepeatTrigger: 1;
    
    UVfxParticleModuleEventTrigger();
};

