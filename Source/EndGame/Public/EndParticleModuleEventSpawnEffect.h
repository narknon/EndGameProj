#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "UObject/NoExportTypes.h"
#include "EEndEffectEventKind.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EndEffectSocketName -FallbackName=EndEffectSocketName
#include "EndEffectAttachInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndEffectLocationKind -FallbackName=EEndEffectLocationKind
#include "EndParticleModuleEventSpawnEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndParticleModuleEventSpawnEffect : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_CreateEffectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEndEffectEventKind> m_EventKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndEffectAttachInfo m_AttachInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEndEffectLocationKind> m_AttachActorKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndEffectSocketName m_AttachSocketName;
    
    UEndParticleModuleEventSpawnEffect();
};

