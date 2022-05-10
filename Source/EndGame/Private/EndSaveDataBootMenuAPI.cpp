#include "EndSaveDataBootMenuAPI.h"

class UObject;

void UEndSaveDataBootMenuAPI::SetLoadingSaveData(bool bLoading) {
}

void UEndSaveDataBootMenuAPI::LoadSaveData(UObject* WorldContextObject, EEndGameScenarioType ScenarioType, const FString& DataName, FLatentActionInfo LatentInfo) {
}

bool UEndSaveDataBootMenuAPI::GetLoadingSaveData() {
    return false;
}

void UEndSaveDataBootMenuAPI::GatherSaveData(UObject* WorldContextObject, EEndGameScenarioType ScenarioType, TArray<FString>& OutSaveDataList, FLatentActionInfo LatentInfo) {
}

UEndSaveDataBootMenuAPI::UEndSaveDataBootMenuAPI() {
}

