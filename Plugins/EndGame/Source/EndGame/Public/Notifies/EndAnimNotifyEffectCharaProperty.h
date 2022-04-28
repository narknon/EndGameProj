#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndPlayParticleActorInfo.h"
#include "EEndAnimNotifyEffectCharaPropertyReplaceType.h"
#include "EEndAnimNotifyEffectCharaPropertyAttachType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EndAnimNotifyEffectCharaProperty.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyEffectCharaProperty : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EEndAnimNotifyEffectCharaPropertyReplaceType> ReplaceTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEndAnimNotifyEffectCharaPropertyAttachType AttachType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachSocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 Attached: 1;
    
    UPROPERTY(EditAnywhere)
    FEndPlayParticleActorInfo m_CasterActorInfo;
    
    UPROPERTY(EditAnywhere)
    FEndPlayParticleActorInfo m_TargetActorInfo;
    
    UEndAnimNotifyEffectCharaProperty();
};

