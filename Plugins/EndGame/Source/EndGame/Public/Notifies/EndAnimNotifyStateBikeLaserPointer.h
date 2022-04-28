#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBikeLaserPointerCharacterType.h"
#include "EEndBikeLaserPointerEffectResourceCategory.h"
#include "EndAnimNotifyStateBikeLaserPointer.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeLaserPointer : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    uint8 ID;
    
    UPROPERTY(EditInstanceOnly)
    EEndBikeLaserPointerEffectResourceCategory EffectResourceCategory;
    
    UPROPERTY(EditInstanceOnly)
    FName EffectResourceName;
    
    UPROPERTY(EditInstanceOnly)
    float HomingDelayTime;
    
    UPROPERTY(EditInstanceOnly)
    float HomingSpeed;
    
    UPROPERTY(EditInstanceOnly)
    EEndBikeLaserPointerCharacterType FromCharacterType;
    
    UPROPERTY(EditInstanceOnly)
    FName FromSocketName;
    
    UPROPERTY(EditInstanceOnly)
    EEndBikeLaserPointerCharacterType TargetCharacterType;
    
    UPROPERTY(EditInstanceOnly)
    FName TargetSocketName;
    
    UEndAnimNotifyStateBikeLaserPointer();
};

