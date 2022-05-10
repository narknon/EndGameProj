#pragma once
#include "CoreMinimal.h"
#include "EndBoidsTypeParam.h"
#include "EndAerialBoidsParam.generated.h"

USTRUCT(BlueprintType)
struct FEndAerialBoidsParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AccuracyX;
    
    UPROPERTY(EditAnywhere)
    float AccuracyY;
    
    UPROPERTY(EditAnywhere)
    float AccuracyZ;
    
    UPROPERTY(EditAnywhere)
    float PersonalSpace;
    
    UPROPERTY(EditAnywhere)
    float Prediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlatUcpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlatTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountZ;
    
    UPROPERTY(EditAnywhere)
    float QuantityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBoidsTypeParam> BoidsParameter;
    
    ENDGAME_API FEndAerialBoidsParam();
};

