#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BonamikHelicopterWindData.generated.h"

USTRUCT(BlueprintType)
struct FBonamikHelicopterWindData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor PreviewColor;
    
    ENDGAME_API FBonamikHelicopterWindData();
};

