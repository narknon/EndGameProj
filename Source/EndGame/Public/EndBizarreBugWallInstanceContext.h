#pragma once
#include "CoreMinimal.h"
#include "EndBizarreBugWallInstanceContext.generated.h"

USTRUCT(BlueprintType)
struct FEndBizarreBugWallInstanceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    ENDGAME_API FEndBizarreBugWallInstanceContext();
};

