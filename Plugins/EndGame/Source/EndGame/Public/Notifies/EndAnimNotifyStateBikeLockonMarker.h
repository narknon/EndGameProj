#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBikeLaserPointerCharacterType.h"
#include "EndAnimNotifyStateBikeLockonMarker.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeLockonMarker : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EEndBikeLaserPointerCharacterType TargetCharacterType;
    
    UPROPERTY(EditInstanceOnly)
    FName TargetSocketName;
    
    UEndAnimNotifyStateBikeLockonMarker();
};

