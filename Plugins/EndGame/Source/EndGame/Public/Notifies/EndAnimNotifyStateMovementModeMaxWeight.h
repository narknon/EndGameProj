#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateMovementModeMaxWeight.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateMovementModeMaxWeight : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NoWriteMode;
    
public:
    UEndAnimNotifyStateMovementModeMaxWeight();
};

