#pragma once
#include "CoreMinimal.h"
#include "EEndActivityInitResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EndActivityAPI.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENDGAME_API UEndActivityAPI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEndActivityAPI();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEndActivityInitResult GetActivityInitResult();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ActivityInit(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
};

