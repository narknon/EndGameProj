#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDataTableType.h"
#include "EEndDataTableDebugFlag.h"
#include "EEquipmentType.h"
#include "EPlayerType.h"
#include "EndDataTableAPI.generated.h"

class AEndAssetActor;

UCLASS(Blueprintable)
class UEndDataTableAPI : public UObject {
    GENERATED_BODY()
public:
    UEndDataTableAPI();
    UFUNCTION(BlueprintCallable)
    static void UnInitDataTable(EDataTableType Type, AEndAssetActor* Asset);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugFlag(EEndDataTableDebugFlag Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistDataTableFromTypeBP(EDataTableType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistDataTableBP();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugFlag(EEndDataTableDebugFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    static void InitDataTable(EDataTableType Type, AEndAssetActor* Asset);
    
    UFUNCTION(BlueprintCallable)
    static TMap<EPlayerType, FName> GetWeaponNameMap();
    
    UFUNCTION(BlueprintCallable)
    static FName GetTestPlayModeTitleLocation(const FName& TableID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetTestPlayModeSettingDataTableIds();
    
    UFUNCTION(BlueprintCallable)
    static FName GetTestPlayModeSettingDataName(const FName& TableID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetTestCutSceneNameList(const FString& LocationName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetTestCutSceneEnviSetNameList(const TArray<FString>& CutSceneNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetResidentParameterStringBP(const FName ID, const FString& DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetResidentParameterNameBP(const FName ID, FName DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetResidentParameterIntegerBP(const FName ID, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetResidentParameterFloatBP(const FName ID, float DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLocationSlotList(const FString& LocationName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetLocationPresetList(const FString& LocationName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLocationNames();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLocationNameDetails();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLocationDetails();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetFieldTestLocationNameDetails();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EEquipmentType> GetEquipmentTypeList();
    
    UFUNCTION(BlueprintCallable)
    static TMap<EPlayerType, FName> GetActorNameMap();
    
    UFUNCTION(BlueprintCallable)
    static void DebugReimportDataTable(const FString& residentOrLocation);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugFlag(EEndDataTableDebugFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    static void CallBackOnLoadResidentData();
    
    UFUNCTION(BlueprintCallable)
    static void CallBackOnLoadLocationData();
    
};

