#pragma once
#include "CoreMinimal.h"
#include "OSDKHTTPStatistics.h"
#include "OSDKMetricsStatistics.h"
#include "UObject/NoExportTypes.h"
#include "OSDKStatistics.generated.h"

USTRUCT(BlueprintType)
struct FOSDKStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKHTTPStatistics HTTPStatistics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKMetricsStatistics MetricsStatistics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime AccumulatedSince;
    
    OSDKCORE_API FOSDKStatistics();
};

