#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtLayer.h"
#include "EndLookAtSolveBone.generated.h"

USTRUCT(BlueprintType)
struct FEndLookAtSolveBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndLookAtLayer Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ENDGAME_API FEndLookAtSolveBone();
};

