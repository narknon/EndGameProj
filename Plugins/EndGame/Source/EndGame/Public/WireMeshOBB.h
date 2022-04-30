#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WireMeshOBB.generated.h"

USTRUCT(BlueprintType)
struct FWireMeshOBB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsMin;
    
    ENDGAME_API FWireMeshOBB();
};

