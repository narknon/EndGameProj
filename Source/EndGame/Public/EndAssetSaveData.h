#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SEndAssetLocationSaveData.h"
#include "EndAssetSaveData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndAssetSaveData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ResidentChunkData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ResidentSaveData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> LocationChunkData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> LocationSaveData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSEndAssetLocationSaveData> LocationSaveDataSet;
    
    UEndAssetSaveData();
};

