#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "EndParticleModuleLoopTime.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndParticleModuleLoopTime : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fBeginLoop;
    
    UPROPERTY(EditAnywhere)
    float m_fEndLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_PerParticleLoop: 1;
    
    UEndParticleModuleLoopTime();
};

