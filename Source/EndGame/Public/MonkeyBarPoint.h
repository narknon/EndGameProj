#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MonkeyBarPointGathering.h"
#include "EMonkeyBarsActorDirState.h"
#include "MonkeyBarPoint.generated.h"

USTRUCT(BlueprintType)
struct FMonkeyBarPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonkeyBarsActorDirState, FMonkeyBarPointGathering> NextPoint;
    
    ENDGAME_API FMonkeyBarPoint();
};

