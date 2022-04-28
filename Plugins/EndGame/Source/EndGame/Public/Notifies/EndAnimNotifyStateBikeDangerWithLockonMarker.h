#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBikeDangerWithLockonMarker.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeDangerWithLockonMarker : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    bool bDeleteMarkerOnEnd;
    
public:
    UEndAnimNotifyStateBikeDangerWithLockonMarker();
};

