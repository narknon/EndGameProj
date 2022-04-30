#pragma once
#include "CoreMinimal.h"
#include "EMonkeyBarsActorDirState.h"
#include "MonkeyBarLinkPoint.generated.h"

USTRUCT(BlueprintType)
struct FMonkeyBarLinkPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonkeyBarsActorDirState Dir;
    
    ENDGAME_API FMonkeyBarLinkPoint();
};

