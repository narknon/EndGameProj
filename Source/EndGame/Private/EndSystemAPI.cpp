#include "EndSystemAPI.h"

class UObject;

void UEndSystemAPI::WaitTaskId(const UObject* WorldContextObject, int32 taskid, FLatentActionInfo LatentInfo) {
}

void UEndSystemAPI::UpdateTrophy(FName trophyId) {
}

void UEndSystemAPI::UpdateAppContentsStatus() {
}

int32 UEndSystemAPI::UnLoadLevelSpecBP(EEndLoadLevelPriority Priority, FName SpecName) {
    return 0;
}

void UEndSystemAPI::SwitchTruthLocation() {
}

void UEndSystemAPI::SwitchActiveLocation() {
}

void UEndSystemAPI::StableCallBoot() {
}

void UEndSystemAPI::SetUpDebugSaveDataFromName(FName Level, const FString& Name, bool isSetupResident) {
}

void UEndSystemAPI::SetUpDebugResidentSaveDataFromName(const FString& Name) {
}

bool UEndSystemAPI::SetUpDebugPVPreviewFromName(FName Level, const FString& Name) {
    return false;
}

void UEndSystemAPI::SetReservedPVPreviewName(FName Name) {
}

void UEndSystemAPI::SetLoadedLocation(const FString& Location) {
}

void UEndSystemAPI::SetGameStatus(EGameStatus Status, bool Set) {
}

void UEndSystemAPI::SetActiveLocation(const FString& TargetLocation) {
}

void UEndSystemAPI::RequestActiveLocation(const FString& TargetLocation) {
}

void UEndSystemAPI::ReloadPVPreviewData() {
}

void UEndSystemAPI::ReleaseTaskIdBP(int32 taskid) {
}

int32 UEndSystemAPI::LoadLevelSpecBP(EEndLoadLevelPriority Priority, FName SpecName) {
    return 0;
}

bool UEndSystemAPI::IsMaster() {
    return false;
}

bool UEndSystemAPI::IsInputKeyRepeat(FKey Key) {
    return false;
}

bool UEndSystemAPI::IsInputKeyReleased(FKey Key) {
    return false;
}

bool UEndSystemAPI::IsInputKeyPressed(FKey Key) {
    return false;
}

bool UEndSystemAPI::IsInputKeyDown(FKey Key) {
    return false;
}

bool UEndSystemAPI::IsGameStatus(EGameStatus Status) {
    return false;
}

bool UEndSystemAPI::IsExistTaskIdBP(int32 taskid) {
    return false;
}

bool UEndSystemAPI::IsEndGameMode() {
    return false;
}

bool UEndSystemAPI::IsAppContentsChanged() {
    return false;
}

bool UEndSystemAPI::IsAppContentsAdded() {
    return false;
}

void UEndSystemAPI::InitAppContents(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndSystemAPI::InitActivateLocationFromSaveData() {
}

FName UEndSystemAPI::GetVoiceMode() {
    return NAME_None;
}

int32 UEndSystemAPI::GetTaskIdBP(const FString& Comment) {
    return 0;
}

int32 UEndSystemAPI::GetSaveLocationIndexFromCurrentLocation(int32 LocationID) {
    return 0;
}

int32 UEndSystemAPI::GetSaveLocationIndex(const FString& Location) {
    return 0;
}

FName UEndSystemAPI::GetReservedPVPreviewName() {
    return NAME_None;
}

FString UEndSystemAPI::GetPrevActiveLocation() {
    return TEXT("");
}

FString UEndSystemAPI::GetOriginalLocation() {
    return TEXT("");
}

FString UEndSystemAPI::GetLocationString(int32 Location) {
    return TEXT("");
}

int32 UEndSystemAPI::GetLocationIndex(const FString& Location) {
    return 0;
}

FString UEndSystemAPI::GetLoadedLocation() {
    return TEXT("");
}

FName UEndSystemAPI::GetLanguageMode() {
    return NAME_None;
}

float UEndSystemAPI::GetInputAnalogKeyValue(FKey Key) {
    return 0.0f;
}

FName UEndSystemAPI::GetFontMode() {
    return NAME_None;
}

FName UEndSystemAPI::GetFacialMode() {
    return NAME_None;
}

TArray<FString> UEndSystemAPI::GetDebugSaveDataNameList(FName Level) {
    return TArray<FString>();
}

TArray<FString> UEndSystemAPI::GetDebugPVPreviewNameList(FName Level) {
    return TArray<FString>();
}

FString UEndSystemAPI::GetCommandLineOptionValue(const FString& Option) {
    return TEXT("");
}

FString UEndSystemAPI::GetBuildTimeString() {
    return TEXT("");
}

FString UEndSystemAPI::GetBuildRevisionString() {
    return TEXT("");
}

TArray<int32> UEndSystemAPI::GetAddedAppContents() {
    return TArray<int32>();
}

FString UEndSystemAPI::GetActiveLocation() {
    return TEXT("");
}

void UEndSystemAPI::ForceGarbageCollection() {
}

void UEndSystemAPI::ClearReservedPVPreviewName() {
}

void UEndSystemAPI::CheckAppContents(const UObject* WorldContextObject, int32 taskid, FLatentActionInfo LatentInfo) {
}

UEndSystemAPI::UEndSystemAPI() {
}

