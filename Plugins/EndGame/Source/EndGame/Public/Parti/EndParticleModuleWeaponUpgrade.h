#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "EndWeaponUpgradeCircle.h"
#include "EndParticleModuleWeaponUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleWeaponUpgrade : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DebugMainCoreResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DebugSubCoreResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DebugSkillResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DebugSubCoreCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DebugMainSkillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DebugSubSkillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DebugUpgradeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_DebugPlayStageEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_DebugPlayStageEffectsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_DebugTravelCore: 1;
    
    UPROPERTY(EditAnywhere)
    float m_DebugTravelTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWeaponUpgradeCircle m_CircleCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWeaponUpgradeCircle m_CircleSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWeaponUpgradeCircle m_CircleUpgrade;
    
    UPROPERTY(EditAnywhere)
    float m_UpgradeScale;
    
    UPROPERTY(EditAnywhere)
    float m_WaitCameraMoveTime;
    
    UPROPERTY(EditAnywhere)
    float m_WaitStageEffectsTime;
    
    UPROPERTY(EditAnywhere)
    float m_WaitCoreStageEffectsTime;
    
    UPROPERTY(EditAnywhere)
    float m_CoreStageEffectsFirstDelayTime;
    
    UPROPERTY(EditAnywhere)
    float m_CoreStageEffectsDelayTime;
    
    UEndParticleModuleWeaponUpgrade();
};

