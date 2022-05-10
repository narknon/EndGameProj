#pragma once
#include "CoreMinimal.h"
#include "EGameStatus.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "EEndLoadLevelPriority.h"
#include "InputCoreTypes.h"
#include "EndSystemAPI.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndSystemAPI : public UObject {
    GENERATED_BODY()
public:
    UEndSystemAPI();
    UFUNCTION(BlueprintCallable)
    static void WaitTaskId(const UObject* WorldContextObject, int32 taskid, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateTrophy(FName trophyId);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateAppContentsStatus();
    
    UFUNCTION(BlueprintCallable)
    static int32 UnLoadLevelSpecBP(EEndLoadLevelPriority Priority, FName SpecName);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchTruthLocation();
    
    UFUNCTION(BlueprintCallable)
    static void SwitchActiveLocation();
    
    UFUNCTION(BlueprintCallable)
    static void StableCallBoot();
    
    UFUNCTION(BlueprintCallable)
    static void SetUpDebugSaveDataFromName(FName Level, const FString& Name, bool isSetupResident);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpDebugResidentSaveDataFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUpDebugPVPreviewFromName(FName Level, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetReservedPVPreviewName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadedLocation(const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameStatus(EGameStatus Status, bool Set);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveLocation(const FString& TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static void RequestActiveLocation(const FString& TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static void ReloadPVPreviewData();
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseTaskIdBP(int32 taskid);
    
    UFUNCTION(BlueprintCallable)
    static int32 LoadLevelSpecBP(EEndLoadLevelPriority Priority, FName SpecName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMaster();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInputKeyRepeat(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInputKeyReleased(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInputKeyPressed(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInputKeyDown(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameStatus(EGameStatus Status);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistTaskIdBP(int32 taskid);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEndGameMode();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAppContentsChanged();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAppContentsAdded();
    
    UFUNCTION(BlueprintCallable)
    static void InitAppContents(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void InitActivateLocationFromSaveData();
    
    UFUNCTION(BlueprintCallable)
    static FName GetVoiceMode();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTaskIdBP(const FString& Comment);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSaveLocationIndexFromCurrentLocation(int32 LocationID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSaveLocationIndex(const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    static FName GetReservedPVPreviewName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPrevActiveLocation();
    
    UFUNCTION(BlueprintCallable)
    static FString GetOriginalLocation();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocationString(int32 Location);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLocationIndex(const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLoadedLocation();
    
    UFUNCTION(BlueprintCallable)
    static FName GetLanguageMode();
    
    UFUNCTION(BlueprintCallable)
    static float GetInputAnalogKeyValue(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static FName GetFontMode();
    
    UFUNCTION(BlueprintCallable)
    static FName GetFacialMode();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetDebugSaveDataNameList(FName Level);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetDebugPVPreviewNameList(FName Level);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCommandLineOptionValue(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildTimeString();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildRevisionString();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetAddedAppContents();
    
    UFUNCTION(BlueprintCallable)
    static FString GetActiveLocation();
    
    UFUNCTION(BlueprintCallable)
    static void ForceGarbageCollection();
    
    UFUNCTION(BlueprintCallable)
    static void ClearReservedPVPreviewName();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAppContents(const UObject* WorldContextObject, int32 taskid, FLatentActionInfo LatentInfo);
    
};

