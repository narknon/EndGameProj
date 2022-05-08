#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "IsCaseTestDelegate.h"
#include "RangeSwitch4.generated.h"

class URangeSwitch4;

UCLASS(Blueprintable)
class URangeSwitch4 : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case3;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Case4;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsCaseTest Other;
    
    URangeSwitch4();
    UFUNCTION(BlueprintCallable)
    static URangeSwitch4* RangeSwitch4(float Value, float Min1, float Max1, float Min2, float Max2, float Min3, float Max3, float Min4, float Max4, bool ContainEqual, bool FirstOnly);
    
};

