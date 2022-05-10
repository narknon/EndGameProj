#pragma once
#include "CoreMinimal.h"
#include "Particles/Event/ParticleModuleEventBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVfxParticleEventTriggerType -FallbackName=EVfxParticleEventTriggerType
#include "VfxParticleModuleEventTrigger.generated.h"

UENUM(Blueprintable)
// Enum Engine.EVfxParticleEventTriggerType
enum class EVfxParticleEventTriggerType : uint8
{
    EVPETT_None,
    EVPETT_Actor_DithreFade_Done,
    EVPETT_Play_Next_Effect,
    EVPETT_Play_SE,
    EVPETT_Play_Effect_Done,
    EVPETT_Particle_Drain_Move_Done,
    EVPETT_Play_SE_Delay,
    EVPETT_MAX,
};


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

