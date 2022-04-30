#pragma once
#include "CoreMinimal.h"
#include "EEndEffectEventKind.h"
#include "EndParticleModuleBase.h"
#include "UObject/NoExportTypes.h"
#include "EndEffectAttachInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndEffectLocationKind -FallbackName=EEndEffectLocationKind
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EndEffectSocketName -FallbackName=EndEffectSocketName
#include "EndParticleModuleEventSpawnEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndParticleModuleEventSpawnEffect : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_CreateEffectPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEndEffectEventKind> m_EventKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndEffectAttachInfo m_AttachInfo;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEndEffectLocationKind> m_AttachActorKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndEffectSocketName m_AttachSocketName;
    
    UEndParticleModuleEventSpawnEffect();
};

