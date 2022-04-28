#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EndMenuGameOverHandler.generated.h"

class UWidget;

UCLASS(BlueprintType)
class UEndMenuGameOverHandler : public UObject {
    GENERATED_BODY()
public:
    UEndMenuGameOverHandler();
    UFUNCTION(BlueprintCallable)
    void OnCommandClicked(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandCellSetup(UWidget* ItemWidget, int32 ItemIndex);
    
};

