#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEndGameScenarioType.h"
#include "Engine/LatentActionManager.h"
#include "EndSaveDataBootMenuAPI.generated.h"

class UObject;

UCLASS(Blueprintable)
class UEndSaveDataBootMenuAPI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEndSaveDataBootMenuAPI();
    UFUNCTION(BlueprintCallable)
    static void SetLoadingSaveData(bool bLoading);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadSaveData(UObject* WorldContextObject, EEndGameScenarioType ScenarioType, const FString& DataName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLoadingSaveData();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GatherSaveData(UObject* WorldContextObject, EEndGameScenarioType ScenarioType, TArray<FString>& OutSaveDataList, FLatentActionInfo LatentInfo);
    
};

