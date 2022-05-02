#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EndTextResourceInfo.h"
#include "EndTextResource.generated.h"

UCLASS(Blueprintable)
class ENDTEXTRESOURCE_API UEndTextResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UEndTextResource();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEndTextResourceInfo GetTextInfo(const FString& InTextId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetText(const FString& InTextId) const;
    
};

