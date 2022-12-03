#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSDKConnectionTypeEnum.h"
#include "CoreSEM.generated.h"

class UOSDKMembershipFeed;
class UOSDK;
class UOSDKWebServiceClient;

UCLASS(Blueprintable)
class OSDKMEMBERSHIP_API UCoreSEM : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOSDK* OSDK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOSDKWebServiceClient* WebServiceClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOSDKMembershipFeed* MembershipFeed;
    
    UCoreSEM();
private:
    UFUNCTION(BlueprintCallable)
    void MembershipFeedUpdate();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(TEnumAsByte<EOSDKConnectionTypeEnum> eConnectionType);
    
    UFUNCTION(BlueprintCallable)
    void ConnectWithHTTPClient();
    
};

