#include "EndDataBaseAPI.h"

class UObject;

void UEndDataBaseAPI::WaitIOSaveLoadData(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndDataBaseAPI::StopPlayTime() {
}

void UEndDataBaseAPI::StartStreamMateriaModel() {
}

void UEndDataBaseAPI::StartSnapSave(bool override_position, FVector pos, FRotator rot) {
}

void UEndDataBaseAPI::StartSnapLoad() {
}

void UEndDataBaseAPI::StartSaveData(bool ignorePreUpdateLocation, bool ignoreLocationSave) {
}

void UEndDataBaseAPI::StartSaveCommon() {
}

void UEndDataBaseAPI::StartResetBackUpAutoSave(bool override_position, FVector pos, FRotator rot) {
}

void UEndDataBaseAPI::StartPlayTime() {
}

void UEndDataBaseAPI::StartLoadLocation() {
}

void UEndDataBaseAPI::StartLoadData(bool isCarryOverPlayerParameter) {
}

void UEndDataBaseAPI::StartLoadCommon() {
}

void UEndDataBaseAPI::StartBackUpLoad() {
}

void UEndDataBaseAPI::StartBackUpAutoSave(bool override_position, FVector pos, FRotator rot) {
}

void UEndDataBaseAPI::StartAutoSaveForInitializedLocationData(bool override_position, FVector pos, FRotator rot) {
}

void UEndDataBaseAPI::StartAutoSave(bool override_position, FVector pos, FRotator rot) {
}

void UEndDataBaseAPI::SetupSaveDataCommonDefaultParameter() {
}

void UEndDataBaseAPI::SetupInitialParameter(FName debugPartyListDataTableId) {
}

void UEndDataBaseAPI::SetTestPlayModeTableID(FName setTableID) {
}

void UEndDataBaseAPI::SetStoryFlagBP(const FName& StoryFlagID, bool Value) {
}

void UEndDataBaseAPI::SetResidentWorkInteger(const FName& residentWorkId, int32 Value) {
}

void UEndDataBaseAPI::SetResidentWorkFloat(const FName& residentWorkId, float Value) {
}

void UEndDataBaseAPI::SetPrevCharaSpecList(EEquipmentType equipment, EPlayerType Type, TArray<FName> nameList) {
}

void UEndDataBaseAPI::SetLocationWorkInteger(FName locationWorkId, int32 Value) {
}

void UEndDataBaseAPI::SetLocationWorkFloat(FName locationWorkId, float Value) {
}

void UEndDataBaseAPI::SetDefaultPartyLeaderTypeBP(EPlayerType Type) {
}

void UEndDataBaseAPI::SetDefaultBattleLeaderTypeBP(EPlayerType Type) {
}

void UEndDataBaseAPI::SetDataBaseFlagBP(int32 BitFlag, bool Flag) {
}

void UEndDataBaseAPI::SetCurrentPlayerCharaSpecList(EEquipmentType equipment, EPlayerType Type) {
}

void UEndDataBaseAPI::SetCurrentDataSlot(int32 Slot) {
}

void UEndDataBaseAPI::ResetSnapSave() {
}

void UEndDataBaseAPI::ResetResidentSaveData() {
}

void UEndDataBaseAPI::ResetLocationSaveData() {
}

void UEndDataBaseAPI::RequestSnapLoad() {
}

int32 UEndDataBaseAPI::RequestSaveData(EIOGameDataRequestLayer InLayer, bool ignorePreUpdateLocation, bool ignoreLocationSave) {
    return 0;
}

int32 UEndDataBaseAPI::RequestSaveCommon(EIOGameDataRequestLayer InLayer) {
    return 0;
}

int32 UEndDataBaseAPI::RequestResetBackUpAutoSave(EIOGameDataRequestLayer InLayer, bool override_position, FVector pos, FRotator rot) {
    return 0;
}

int32 UEndDataBaseAPI::RequestLoadLocation(EIOGameDataRequestLayer InLayer) {
    return 0;
}

int32 UEndDataBaseAPI::RequestLoadData(EIOGameDataRequestLayer InLayer, bool isCarryOverPlayerParameter) {
    return 0;
}

int32 UEndDataBaseAPI::RequestLoadCommon(EIOGameDataRequestLayer InLayer) {
    return 0;
}

int32 UEndDataBaseAPI::RequestGatherExistSaveDataAtSaving(EIOGameDataRequestLayer InLayer) {
    return 0;
}

int32 UEndDataBaseAPI::RequestGatherExistSaveData(EIOGameDataRequestLayer InLayer) {
    return 0;
}

int32 UEndDataBaseAPI::RequestCheckExistSaveData(EIOGameDataRequestLayer InLayer, int32 Slot) {
    return 0;
}

int32 UEndDataBaseAPI::RequestCheckExistSaveCommon(EIOGameDataRequestLayer InLayer) {
    return 0;
}

int32 UEndDataBaseAPI::RequestBackUpLoad(EIOGameDataRequestLayer InLayer) {
    return 0;
}

int32 UEndDataBaseAPI::RequestBackUpAutoSave(EIOGameDataRequestLayer InLayer, bool override_position, FVector pos, FRotator rot) {
    return 0;
}

int32 UEndDataBaseAPI::RequestAutoSave(EIOGameDataRequestLayer InLayer, bool override_position, FVector pos, FRotator rot) {
    return 0;
}

void UEndDataBaseAPI::ReflectionResidentSaveData(bool snap, bool backup) {
}

void UEndDataBaseAPI::ReflectionPointSaveToAutoSave(FName Level, const FString& Name, const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndDataBaseAPI::ReflectionLocationSaveData(bool snap) {
}

void UEndDataBaseAPI::ReflectionCommonSaveData() {
}

void UEndDataBaseAPI::MakeResidentSaveData() {
}

void UEndDataBaseAPI::MakeLocationSaveData() {
}

void UEndDataBaseAPI::MakeCommonSaveData() {
}

bool UEndDataBaseAPI::IsStoryFlag(const FName& StoryFlagID) {
    return false;
}

bool UEndDataBaseAPI::IsSaveLoadExecuting(EIOGameDataRequestLayer InLayer, int32 InRequestID) {
    return false;
}

bool UEndDataBaseAPI::IsMakeLocationSaveData() {
    return false;
}

bool UEndDataBaseAPI::IsMakeCommonSaveData() {
    return false;
}

bool UEndDataBaseAPI::IsIOSaveLoadData() {
    return false;
}

bool UEndDataBaseAPI::IsFinishStreamMateriaModel() {
    return false;
}

bool UEndDataBaseAPI::IsDifficulty(EDifficultyType Difficulty) {
    return false;
}

bool UEndDataBaseAPI::IsDataBaseFlagBP(int32 BitFlag) {
    return false;
}

bool UEndDataBaseAPI::IsClassic() {
    return false;
}

void UEndDataBaseAPI::Hoge09() {
}

void UEndDataBaseAPI::Hoge08() {
}

void UEndDataBaseAPI::Hoge07() {
}

void UEndDataBaseAPI::Hoge06() {
}

void UEndDataBaseAPI::Hoge05() {
}

void UEndDataBaseAPI::Hoge04() {
}

void UEndDataBaseAPI::Hoge03() {
}

void UEndDataBaseAPI::Hoge02() {
}

void UEndDataBaseAPI::Hoge01() {
}

void UEndDataBaseAPI::Hoge00() {
}

bool UEndDataBaseAPI::HasBackUpData() {
    return false;
}

bool UEndDataBaseAPI::GetUpdatePlayTimeFlag() {
    return false;
}

FName UEndDataBaseAPI::GetTestPlayModeTableID() {
    return NAME_None;
}

EGameDataResult UEndDataBaseAPI::GetSaveLoadResult(EIOGameDataRequestLayer InLayer) {
    return EGameDataResult::EGameDataResult_NONE;
}

TArray<FString> UEndDataBaseAPI::GetSaveDataList() {
    return TArray<FString>();
}

int32 UEndDataBaseAPI::GetResidentWorkInteger(const FName& residentWorkId) {
    return 0;
}

float UEndDataBaseAPI::GetResidentWorkFloat(const FName& residentWorkId) {
    return 0.0f;
}

void UEndDataBaseAPI::GetPrevCharaSpecList(EEquipmentType equipment, EPlayerType Type, TArray<FName>& outNameList) {
}

FRotator UEndDataBaseAPI::GetPlayerRotation(EPlayerType Type) {
    return FRotator{};
}

FVector UEndDataBaseAPI::GetPlayerPosition(EPlayerType Type) {
    return FVector{};
}

TArray<FName> UEndDataBaseAPI::GetPlayerLevelNames(EEquipmentType equipment, EPlayerType Type) {
    return TArray<FName>();
}

FName UEndDataBaseAPI::GetPlayerLevelName(EEquipmentType equipment, EPlayerType Type) {
    return NAME_None;
}

int32 UEndDataBaseAPI::GetLocationWorkInteger(FName locationWorkId) {
    return 0;
}

float UEndDataBaseAPI::GetLocationWorkFloat(FName locationWorkId) {
    return 0.0f;
}

int32 UEndDataBaseAPI::GetLastSelectDataSlot() {
    return 0;
}

int32 UEndDataBaseAPI::GetItemNumBP(int32 UniqueID) {
    return 0;
}

EGameDataResult UEndDataBaseAPI::GetIOSaveLoadDataResult() {
    return EGameDataResult::EGameDataResult_NONE;
}

EEndGameScenarioType UEndDataBaseAPI::GetGameScenarioType() {
    return EEndGameScenarioType::SCENARIO_END;
}

int32 UEndDataBaseAPI::GetEmptyDataSlot(TArray<FString> saves) {
    return 0;
}

EPlayerType UEndDataBaseAPI::GetDefaultPartyLeaderTypeBP() {
    return EPlayerType::EPlayerType_CLOUD;
}

EPlayerType UEndDataBaseAPI::GetDefaultBattleLeaderTypeBP() {
    return EPlayerType::EPlayerType_CLOUD;
}

int32 UEndDataBaseAPI::GetDataSlotFromDataName(const FString& Name) {
    return 0;
}

void UEndDataBaseAPI::GetCurrentPlayerCharaSpecList(EEquipmentType equipment, EPlayerType Type, TArray<FName>& outNameList) {
}

int32 UEndDataBaseAPI::GetCurrentDataSlot() {
    return 0;
}

void UEndDataBaseAPI::GatherExistSaveData() {
}

void UEndDataBaseAPI::EnemyBook_IncrementKillCount_BP(FName enemyBookTableId) {
}

void UEndDataBaseAPI::DebugSetGameScenarioType(EEndGameScenarioType Type) {
}

TArray<FString> UEndDataBaseAPI::DebugButtonList2(int32 Type) {
    return TArray<FString>();
}

TMap<FString, int32> UEndDataBaseAPI::DebugButtonList(int32 Type) {
    return TMap<FString, int32>();
}

void UEndDataBaseAPI::ClearPlayerCharaSpecListBP() {
}

void UEndDataBaseAPI::ClearGameScenarioType() {
}

void UEndDataBaseAPI::CheckExistSaveData(int32 Slot) {
}

void UEndDataBaseAPI::CheckExistSaveCommon() {
}

UEndDataBaseAPI::UEndDataBaseAPI() {
}

