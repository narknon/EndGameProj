#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentSwingInitParams.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentSwingInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChainNodeNames;
    
    FSQEXSEADAutoSeComponentSwingInitParams();
};

