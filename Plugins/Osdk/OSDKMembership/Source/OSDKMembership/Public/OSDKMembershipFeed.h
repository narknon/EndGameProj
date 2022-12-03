#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSDKMembershipState.h"
#include "OSDKMembershipSignupCode.h"
#include "EOSDKMembershipStatus.h"
#include "MembershipUpdateDelegateDelegate.h"
#include "OSDKMembershipFeed.generated.h"

class UTexture2DDynamic;
class UOSDKMembershipFeed;
class UOSDKWebServiceClient;

UCLASS(Blueprintable)
class OSDKMEMBERSHIP_API UOSDKMembershipFeed : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Email;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKMembershipSignupCode SignupCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOSDKMembershipState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOSDKMembershipStatus Status;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMembershipUpdateDelegate OnMembershipUpdateDelegate;
    
    UOSDKMembershipFeed();
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    UTexture2DDynamic* GetQRImage();
    
    UFUNCTION(BlueprintCallable)
    void GenerateSignupCode();
    
    UFUNCTION(BlueprintCallable)
    static UOSDKMembershipFeed* CreateMembershipFeed(UOSDKWebServiceClient* iWebServiceClient, int32 iUpdateDelaySeconds);
    
};

