#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikePhaseParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikePhaseParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BikeSplineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BikeSplineIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 EndPhaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndPhaseInt;
    
    UPROPERTY(EditAnywhere)
    float EndPhaseFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndPhaseString;
    
    FEndDataTableBikePhaseParameter();
};

