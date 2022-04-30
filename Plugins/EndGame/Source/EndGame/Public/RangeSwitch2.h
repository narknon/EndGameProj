#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "IsCaseTestDelegate.h"
#include "RangeSwitch2.generated.h"

class URangeSwitch2;

UCLASS(Blueprintable)
class URangeSwitch2 : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Other;
    
    URangeSwitch2();
    UFUNCTION(BlueprintCallable)
    static URangeSwitch2* RangeSwitch2(float Value, float Min1, float Max1, float Min2, float Max2, bool ContainEqual, bool FirstOnly);
    
};

