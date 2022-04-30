#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeSplineMetaData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeSplineMetaData : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> RoadWidth_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 ExistMedianStrip;
    
    UPROPERTY(EditAnywhere)
    TArray<float> MedianStripWidth_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableCutScene;
    
    FEndDataTableBikeSplineMetaData();
};

