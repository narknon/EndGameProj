#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeLocation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeLocation : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerBikeCharaSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AllyBikeCharaSpec;
    
    UPROPERTY(EditAnywhere)
    float StartLocationX;
    
    UPROPERTY(EditAnywhere)
    float StartLocationY;
    
    UPROPERTY(EditAnywhere)
    float StartLocationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BikePhaseIDList_Array;
    
    FEndDataTableBikeLocation();
};

