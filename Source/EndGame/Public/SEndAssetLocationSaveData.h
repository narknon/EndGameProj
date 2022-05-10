#pragma once
#include "CoreMinimal.h"
#include "SEndAssetLocationSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSEndAssetLocationSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> LocationChunkData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> LocationSaveData;
    
    ENDGAME_API FSEndAssetLocationSaveData();
};

