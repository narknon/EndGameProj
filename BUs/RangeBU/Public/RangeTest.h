#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "IsRangeTestDelegate.h"
#include "RangeTest.generated.h"

class URangeTest;

UCLASS(Blueprintable)
class URangeTest : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsRangeTest OnTrue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsRangeTest OnFalse;
    
    URangeTest();
    UFUNCTION(BlueprintCallable)
    static URangeTest* IsRangeTest(float InMin, float InMax, float InDist);
    
};

