#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnlineSuiteSEMBlueprintLibrary.generated.h"

class UCoreSEM;

UCLASS(Blueprintable)
class UOnlineSuiteSEMBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineSuiteSEMBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static UCoreSEM* GetCoreSEM();
    
};

