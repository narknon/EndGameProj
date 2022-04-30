#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableWanderingParamList.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableWanderingParamList : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float IdleWaitMin;
    
    UPROPERTY(EditAnywhere)
    float IdleWaitMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveType;
    
    UPROPERTY(EditAnywhere)
    uint8 IsStateOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IdleVariationList_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> WeightList_Array;
    
    UPROPERTY(EditAnywhere)
    float RangeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StayTimeMIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StayTimeRand;
    
    FEndDataTableWanderingParamList();
};

