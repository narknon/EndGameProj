#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "IsCaseTestDelegate.h"
#include "RangeSwitch3.generated.h"

class URangeSwitch3;

UCLASS(Blueprintable)
class URangeSwitch3 : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case3;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Other;
    
    URangeSwitch3();
    UFUNCTION(BlueprintCallable)
    static URangeSwitch3* RangeSwitch3(float Value, float Min1, float Max1, float Min2, float Max2, float Min3, float Max3, bool ContainEqual, bool FirstOnly);
    
};

