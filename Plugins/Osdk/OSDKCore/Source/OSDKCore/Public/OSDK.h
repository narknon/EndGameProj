#pragma once
#include "CoreMinimal.h"
#include "OSDKFutureObject.h"
#include "OSDKUserId.h"
#include "OSDKInfo.h"
#include "OSDKStatistics.h"
#include "OSDKUserInfo.h"
#include "OSDKClientConfig.h"
#include "OSDK.generated.h"

class UOSDKWebServiceClient;

UCLASS(Blueprintable)
class OSDKCORE_API UOSDK : public UOSDKFutureObject {
    GENERATED_BODY()
public:
    UOSDK();
    UFUNCTION(BlueprintCallable)
    void StartGameSimulation();
    
    UFUNCTION(BlueprintCallable)
    void PauseGameSimulation();
    
    UFUNCTION(BlueprintCallable)
    bool IsNetworkAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOSDKStatistics GetStatsInfo() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetSessionId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOSDKInfo GetInfo() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetHardwareName();
    
    UFUNCTION(BlueprintCallable)
    FOSDKStatistics GetAndResetStatsInfo();
    
    UFUNCTION(BlueprintCallable)
    UOSDKWebServiceClient* CreateWebServiceClientWithUserInfo(const FOSDKUserInfo& UserInfo, const FOSDKClientConfig& ClientConfig);
    
    UFUNCTION(BlueprintCallable)
    UOSDKWebServiceClient* CreateWebServiceClientWithUserId(const FOSDKUserId& UserId, const FOSDKClientConfig& ClientConfig);
    
    UFUNCTION(BlueprintCallable)
    void BeginNewGameSession(bool bSimulationRunning);
    
};

