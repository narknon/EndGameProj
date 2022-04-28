#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "AnimNotifyStructs.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_EndPlayParticleEffect.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndPlayParticleEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath m_PSTemplate;
    
    UPROPERTY(EditAnywhere)
    FVector m_LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RotationOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 m_Attached: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDestroyWhenFinished: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bIgnoreWhenFinished: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bEnable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableVibrationVolumeSE: 1;
    
    UPROPERTY(EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(EditAnywhere)
    FName m_StoryFlagName;
    
    UPROPERTY(EditAnywhere)
    FEndPlayParticleActorInfo m_CasterActorInfo;
    
    UPROPERTY(EditAnywhere)
    FEndPlayParticleActorInfo m_TargetActorInfo;
    
public:
    UAnimNotify_EndPlayParticleEffect();
};

