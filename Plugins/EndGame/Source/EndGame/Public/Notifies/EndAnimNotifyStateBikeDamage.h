#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBattleDamageSourcePositionBaseType.h"
#include "EndAnimNotifyStateBikeDamage.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeDamage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    EEndBattleDamageSourcePositionBaseType CreatePositionBase;
    
    UPROPERTY(EditAnywhere)
    FName CreatePositionName;
    
protected:
    UPROPERTY()
    TSet<AActor*> mDestroyDamageSourceOnEnd;
    
public:
    UEndAnimNotifyStateBikeDamage();
};

