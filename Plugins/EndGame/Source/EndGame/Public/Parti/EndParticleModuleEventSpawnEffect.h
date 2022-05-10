#pragma once
#include "CoreMinimal.h"
#include "EEndEffectEventKind.h"
#include "EndParticleModuleBase.h"
#include "UObject/NoExportTypes.h"
#include "EndEffectAttachInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndEffectLocationKind -FallbackName=EEndEffectLocationKind
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EndEffectSocketName -FallbackName=EndEffectSocketName
#include "EndParticleModuleEventSpawnEffect.generated.h"

UENUM(Blueprintable)
// Enum Engine.EEndEffectSocketName
enum class EEndEffectSocketName : uint8
{
    Direct,
    Attach_Weapon_Right01,
    Attach_Weapon_Left01,
    Attach_Weapon01,
    Attach_Weapon_Right02,
    Attach_Weapon_Left02,
    Attach_Weapon02,
    Attach_Weapon_Right03,
    Attach_Weapon_Left03,
    Attach_Weapon03,
    Damage_Body01,
    Max,
};

UENUM(Blueprintable)
// Enum Engine.EEndEffectLocationKind
enum class EEndEffectLocationKind : uint8
{
    EELK_Self,
    EELK_Caster,
    EELK_Target,
    EELK_CasterLocation,
    EELK_TargetLocation,
    EELK_CasterLocationActorOffset,
    EELK_TargetLocationActorOffset,
    EELK_BeamTarget,
    EELK_RayCast,
    EELK_MAX,
};

USTRUCT(Blueprintable)
// ScriptStruct Engine.EndEffectSocketName
// 0x000C
struct FEndEffectSocketName
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndEffectSocketName                               m_SocketName;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName                                       m_DirectName;                                             // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndParticleModuleEventSpawnEffect : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_CreateEffectPath;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EndParticleModuleEventSpawn")
    TEnumAsByte<EEndEffectEventKind> m_EventKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndEffectAttachInfo m_AttachInfo;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EndParticleModuleEventSpawn")
    EEndEffectLocationKind m_AttachActorKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndEffectSocketName m_AttachSocketName;
    
    UEndParticleModuleEventSpawnEffect();
};

