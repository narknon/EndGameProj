#include "OSDKWebServiceClient.h"

void UOSDKWebServiceClient::SetUserLanguage(const FString& LanguageCode) {
}

void UOSDKWebServiceClient::SetUserConsentsToSendingMetrics(bool OptIn, bool EmitConsentMetric) {
}

void UOSDKWebServiceClient::SetDefaultHeader(const FString& HeaderName, const FString& HeaderValue) {
}

void UOSDKWebServiceClient::ResetClient() {
}

void UOSDKWebServiceClient::ResetAllLocalStorages() {
}

void UOSDKWebServiceClient::RefreshAuthentication() {
}

bool UOSDKWebServiceClient::IsNetworkAvailable() {
    return false;
}

bool UOSDKWebServiceClient::IsAuthenticated() const {
    return false;
}

FOSDKUserInfo UOSDKWebServiceClient::GetUserInfo() const {
    return FOSDKUserInfo{};
}

bool UOSDKWebServiceClient::GetUserConsentsToSendingMetrics() {
    return false;
}

FOSDKServerInfo UOSDKWebServiceClient::GetServerInfo() const {
    return FOSDKServerInfo{};
}

FOSDKProfileId UOSDKWebServiceClient::GetSecondaryProfileId(const FString& Name) {
    return FOSDKProfileId{};
}

FOSDKProfileId UOSDKWebServiceClient::GetPrimaryProfileId() {
    return FOSDKProfileId{};
}

FOSDKHTTPClient UOSDKWebServiceClient::GetHTTPClient() {
    return FOSDKHTTPClient{};
}

void UOSDKWebServiceClient::GetFeatureSettings(const FString& FeatureName, TMap<FString, FString>& outSettings) {
}

FString UOSDKWebServiceClient::GetFeatureSetting(const FString& FeatureName, const FString& SettingName) {
    return TEXT("");
}

void UOSDKWebServiceClient::GetFeatureNames(const FString& FeatureName, TSet<FString>& outSettingNames) {
}

FOSDKClientInfo UOSDKWebServiceClient::GetClientInfo() const {
    return FOSDKClientInfo{};
}

UOSDKWebServiceClient::UOSDKWebServiceClient() {
}

