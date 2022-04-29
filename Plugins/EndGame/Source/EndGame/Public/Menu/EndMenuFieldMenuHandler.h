#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EndMenuFieldMenuHandler.generated.h"

UCLASS(BlueprintType)
class UEndMenuFieldMenuHandler : public UObject {
    GENERATED_BODY()
public:
    UEndMenuFieldMenuHandler();
    UFUNCTION(BlueprintCallable)
    void OnCommandClicked();
    
};

