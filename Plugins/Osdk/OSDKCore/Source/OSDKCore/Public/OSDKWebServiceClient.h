#pragma once
#include "CoreMinimal.h"
#include "OSDKFutureObject.h"
#include "OSDKProfileId.h"
#include "OSDKUserInfo.h"
#include "OSDKServerInfo.h"
#include "OSDKHTTPClient.h"
#include "OSDKClientInfo.h"
#include "OSDKWebServiceClient.generated.h"

UCLASS(Blueprintable)
class OSDKCORE_API UOSDKWebServiceClient : public UOSDKFutureObject {
    GENERATED_BODY()
public:
    UOSDKWebServiceClient();
    UFUNCTION(BlueprintCallable)
    void SetUserLanguage(const FString& LanguageCode);
    
    UFUNCTION(BlueprintCallable)
    void SetUserConsentsToSendingMetrics(bool OptIn, bool EmitConsentMetric);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultHeader(const FString& HeaderName, const FString& HeaderValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetClient();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllLocalStorages();
    
    UFUNCTION(BlueprintCallable)
    void RefreshAuthentication();
    
    UFUNCTION(BlueprintCallable)
    bool IsNetworkAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuthenticated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOSDKUserInfo GetUserInfo() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUserConsentsToSendingMetrics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOSDKServerInfo GetServerInfo() const;
    
    UFUNCTION(BlueprintCallable)
    FOSDKProfileId GetSecondaryProfileId(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FOSDKProfileId GetPrimaryProfileId();
    
    UFUNCTION(BlueprintCallable)
    FOSDKHTTPClient GetHTTPClient();
    
    UFUNCTION(BlueprintCallable)
    void GetFeatureSettings(const FString& FeatureName, TMap<FString, FString>& outSettings);
    
    UFUNCTION(BlueprintCallable)
    FString GetFeatureSetting(const FString& FeatureName, const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    void GetFeatureNames(const FString& FeatureName, TSet<FString>& outSettingNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOSDKClientInfo GetClientInfo() const;
    
};

