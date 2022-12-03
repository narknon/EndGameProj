#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerType.h"
#include "EDifficultyType.h"
#include "EEquipmentType.h"
#include "EIOGameDataRequestLayer.h"
#include "EGameDataResult.h"
#include "EEndGameScenarioType.h"
#include "EndDataBaseAPI.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndDataBaseAPI : public UObject {
    GENERATED_BODY()
public:
    UEndDataBaseAPI();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitIOSaveLoadData(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void StopPlayTime();
    
    UFUNCTION(BlueprintCallable)
    static void StartStreamMateriaModel();
    
    UFUNCTION(BlueprintCallable)
    static void StartSnapSave(bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void StartSnapLoad();
    
    UFUNCTION(BlueprintCallable)
    static void StartSaveData(bool ignorePreUpdateLocation, bool ignoreLocationSave);
    
    UFUNCTION(BlueprintCallable)
    static void StartSaveCommon();
    
    UFUNCTION(BlueprintCallable)
    static void StartResetBackUpAutoSave(bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void StartPlayTime();
    
    UFUNCTION(BlueprintCallable)
    static void StartLoadLocation();
    
    UFUNCTION(BlueprintCallable)
    static void StartLoadData(bool isCarryOverPlayerParameter);
    
    UFUNCTION(BlueprintCallable)
    static void StartLoadCommon();
    
    UFUNCTION(BlueprintCallable)
    static void StartBackUpLoad();
    
    UFUNCTION(BlueprintCallable)
    static void StartBackUpAutoSave(bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void StartAutoSaveForInitializedLocationData(bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void StartAutoSave(bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void SetupSaveDataCommonDefaultParameter();
    
    UFUNCTION(BlueprintCallable)
    static void SetupInitialParameter(FName debugPartyListDataTableId);
    
    UFUNCTION(BlueprintCallable)
    static void SetTestPlayModeTableID(FName setTableID);
    
    UFUNCTION(BlueprintCallable)
    static void SetStoryFlagBP(const FName& StoryFlagID, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetResidentWorkInteger(const FName& residentWorkId, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetResidentWorkFloat(const FName& residentWorkId, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrevCharaSpecList(EEquipmentType equipment, EPlayerType Type, TArray<FName> nameList);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocationWorkInteger(FName locationWorkId, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocationWorkFloat(FName locationWorkId, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultPartyLeaderTypeBP(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultBattleLeaderTypeBP(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetDataBaseFlagBP(int32 BitFlag, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentPlayerCharaSpecList(EEquipmentType equipment, EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentDataSlot(int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSnapSave();
    
    UFUNCTION(BlueprintCallable)
    static void ResetResidentSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void ResetLocationSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void RequestSnapLoad();
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestSaveData(EIOGameDataRequestLayer InLayer, bool ignorePreUpdateLocation, bool ignoreLocationSave);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestSaveCommon(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestResetBackUpAutoSave(EIOGameDataRequestLayer InLayer, bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestLoadLocation(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestLoadData(EIOGameDataRequestLayer InLayer, bool isCarryOverPlayerParameter);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestLoadCommon(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestGatherExistSaveDataAtSaving(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestGatherExistSaveData(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestCheckExistSaveData(EIOGameDataRequestLayer InLayer, int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestCheckExistSaveCommon(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestBackUpLoad(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestBackUpAutoSave(EIOGameDataRequestLayer InLayer, bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestAutoSave(EIOGameDataRequestLayer InLayer, bool override_position, FVector pos, FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void ReflectionResidentSaveData(bool snap, bool backup);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ReflectionPointSaveToAutoSave(FName Level, const FString& Name, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ReflectionLocationSaveData(bool snap);
    
    UFUNCTION(BlueprintCallable)
    static void ReflectionCommonSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void MakeResidentSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void MakeLocationSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void MakeCommonSaveData();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStoryFlag(const FName& StoryFlagID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaveLoadExecuting(EIOGameDataRequestLayer InLayer, int32 InRequestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMakeLocationSaveData();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMakeCommonSaveData();
    
    UFUNCTION(BlueprintCallable)
    static bool IsIOSaveLoadData();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinishStreamMateriaModel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDifficulty(EDifficultyType Difficulty);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDataBaseFlagBP(int32 BitFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClassic();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge09();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge08();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge07();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge06();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge05();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge04();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge03();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge02();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge01();
    
    UFUNCTION(BlueprintCallable)
    static void Hoge00();
    
    UFUNCTION(BlueprintCallable)
    static bool HasBackUpData();
    
    UFUNCTION(BlueprintCallable)
    static bool GetUpdatePlayTimeFlag();
    
    UFUNCTION(BlueprintCallable)
    static FName GetTestPlayModeTableID();
    
    UFUNCTION(BlueprintCallable)
    static EGameDataResult GetSaveLoadResult(EIOGameDataRequestLayer InLayer);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetSaveDataList();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResidentWorkInteger(const FName& residentWorkId);
    
    UFUNCTION(BlueprintCallable)
    static float GetResidentWorkFloat(const FName& residentWorkId);
    
    UFUNCTION(BlueprintCallable)
    static void GetPrevCharaSpecList(EEquipmentType equipment, EPlayerType Type, TArray<FName>& outNameList);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetPlayerRotation(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetPlayerPosition(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetPlayerLevelNames(EEquipmentType equipment, EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static FName GetPlayerLevelName(EEquipmentType equipment, EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLocationWorkInteger(FName locationWorkId);
    
    UFUNCTION(BlueprintCallable)
    static float GetLocationWorkFloat(FName locationWorkId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLastSelectDataSlot();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemNumBP(int32 UniqueID);
    
    UFUNCTION(BlueprintCallable)
    static EGameDataResult GetIOSaveLoadDataResult();
    
    UFUNCTION(BlueprintCallable)
    static EEndGameScenarioType GetGameScenarioType();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEmptyDataSlot(TArray<FString> saves);
    
    UFUNCTION(BlueprintCallable)
    static EPlayerType GetDefaultPartyLeaderTypeBP();
    
    UFUNCTION(BlueprintCallable)
    static EPlayerType GetDefaultBattleLeaderTypeBP();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDataSlotFromDataName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurrentPlayerCharaSpecList(EEquipmentType equipment, EPlayerType Type, TArray<FName>& outNameList);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentDataSlot();
    
    UFUNCTION(BlueprintCallable)
    static void GatherExistSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void EnemyBook_IncrementKillCount_BP(FName enemyBookTableId);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetGameScenarioType(EEndGameScenarioType Type);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> DebugButtonList2(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, int32> DebugButtonList(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPlayerCharaSpecListBP();
    
    UFUNCTION(BlueprintCallable)
    static void ClearGameScenarioType();
    
    UFUNCTION(BlueprintCallable)
    static void CheckExistSaveData(int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    static void CheckExistSaveCommon();
    
};

