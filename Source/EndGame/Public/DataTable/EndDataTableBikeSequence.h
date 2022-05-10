#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeSequence.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeSequence : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerBikeCharaSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AllyBikeCharaSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstSplineId;
    
    UPROPERTY(EditAnywhere)
    float StartLocationX;
    
    UPROPERTY(EditAnywhere)
    float StartLocationY;
    
    UPROPERTY(EditAnywhere)
    float StartLocationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BikePhaseIDList_Array;
    
    FEndDataTableBikeSequence();
};

