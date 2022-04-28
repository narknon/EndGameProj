#include "EndDataTableAPI.h"

class AEndAssetActor;

void UEndDataTableAPI::UnInitDataTable(EDataTableType Type, AEndAssetActor* Asset) {
}

void UEndDataTableAPI::SetDebugFlag(EEndDataTableDebugFlag Flag) {
}

bool UEndDataTableAPI::IsExistDataTableFromTypeBP(EDataTableType Type) {
    return false;
}

bool UEndDataTableAPI::IsExistDataTableBP() {
    return false;
}

bool UEndDataTableAPI::IsDebugFlag(EEndDataTableDebugFlag Flag) {
    return false;
}

void UEndDataTableAPI::InitDataTable(EDataTableType Type, AEndAssetActor* Asset) {
}

TMap<EPlayerType, FName> UEndDataTableAPI::GetWeaponNameMap() {
    return TMap<EPlayerType, FName>();
}

FName UEndDataTableAPI::GetTestPlayModeTitleLocation(const FName& TableID) {
    return NAME_None;
}

TArray<FName> UEndDataTableAPI::GetTestPlayModeSettingDataTableIds() {
    return TArray<FName>();
}

FName UEndDataTableAPI::GetTestPlayModeSettingDataName(const FName& TableID) {
    return NAME_None;
}

TArray<FString> UEndDataTableAPI::GetTestCutSceneNameList(const FString& LocationName) {
    return TArray<FString>();
}

TArray<FString> UEndDataTableAPI::GetTestCutSceneEnviSetNameList(const TArray<FString>& CutSceneNames) {
    return TArray<FString>();
}

FString UEndDataTableAPI::GetResidentParameterStringBP(const FName ID, const FString& DefaultValue) {
    return TEXT("");
}

FName UEndDataTableAPI::GetResidentParameterNameBP(const FName ID, FName DefaultValue) {
    return NAME_None;
}

int32 UEndDataTableAPI::GetResidentParameterIntegerBP(const FName ID, int32 DefaultValue) {
    return 0;
}

float UEndDataTableAPI::GetResidentParameterFloatBP(const FName ID, float DefaultValue) {
    return 0.0f;
}

TArray<FString> UEndDataTableAPI::GetLocationSlotList(const FString& LocationName) {
    return TArray<FString>();
}

TArray<FName> UEndDataTableAPI::GetLocationPresetList(const FString& LocationName) {
    return TArray<FName>();
}

TArray<FString> UEndDataTableAPI::GetLocationNames() {
    return TArray<FString>();
}

TArray<FString> UEndDataTableAPI::GetLocationNameDetails() {
    return TArray<FString>();
}

TArray<FString> UEndDataTableAPI::GetLocationDetails() {
    return TArray<FString>();
}

TArray<FString> UEndDataTableAPI::GetFieldTestLocationNameDetails() {
    return TArray<FString>();
}

TArray<EEquipmentType> UEndDataTableAPI::GetEquipmentTypeList() {
    return TArray<EEquipmentType>();
}

TMap<EPlayerType, FName> UEndDataTableAPI::GetActorNameMap() {
    return TMap<EPlayerType, FName>();
}

void UEndDataTableAPI::DebugReimportDataTable(const FString& residentOrLocation) {
}

void UEndDataTableAPI::ClearDebugFlag(EEndDataTableDebugFlag Flag) {
}

void UEndDataTableAPI::CallBackOnLoadResidentData() {
}

void UEndDataTableAPI::CallBackOnLoadLocationData() {
}

UEndDataTableAPI::UEndDataTableAPI() {
}

