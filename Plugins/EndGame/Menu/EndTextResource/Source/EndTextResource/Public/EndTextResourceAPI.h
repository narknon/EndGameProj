#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EndTextResourceInfo.h"
#include "EndTextResourceAPI.generated.h"

UCLASS(BlueprintType)
class UEndTextResourceAPI : public UObject {
    GENERATED_BODY()
public:
    UEndTextResourceAPI();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTextResourceText(const FString& InTextId, const FString& InLanguage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEndTextResourceInfo GetTextResourceInfo(const FString& InTextId, const FString& InLanguage);
    
};

