#include "OSDK.h"

class UOSDKWebServiceClient;

void UOSDK::StartGameSimulation() {
}

void UOSDK::PauseGameSimulation() {
}

bool UOSDK::IsNetworkAvailable() {
    return false;
}

FOSDKStatistics UOSDK::GetStatsInfo() const {
    return FOSDKStatistics{};
}

FString UOSDK::GetSessionId() {
    return TEXT("");
}

FOSDKInfo UOSDK::GetInfo() const {
    return FOSDKInfo{};
}

FString UOSDK::GetHardwareName() {
    return TEXT("");
}

FOSDKStatistics UOSDK::GetAndResetStatsInfo() {
    return FOSDKStatistics{};
}

UOSDKWebServiceClient* UOSDK::CreateWebServiceClientWithUserInfo(const FOSDKUserInfo& UserInfo, const FOSDKClientConfig& ClientConfig) {
    return NULL;
}

UOSDKWebServiceClient* UOSDK::CreateWebServiceClientWithUserId(const FOSDKUserId& UserId, const FOSDKClientConfig& ClientConfig) {
    return NULL;
}

void UOSDK::BeginNewGameSession(bool bSimulationRunning) {
}

UOSDK::UOSDK() {
}

