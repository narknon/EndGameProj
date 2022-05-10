#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableFormation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableFormation : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MakeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MakeMax;
    
    UPROPERTY(EditAnywhere)
    float MakeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReleaseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Shuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Supplement;
    
    UPROPERTY(EditAnywhere)
    float LeaderDistance;
    
    UPROPERTY(EditAnywhere)
    float LeaderXMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RelativeRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LookAtTarget;
    
    UPROPERTY(EditAnywhere)
    float Interval;
    
    UPROPERTY(EditAnywhere)
    float Pos1X;
    
    UPROPERTY(EditAnywhere)
    float Pos1Y;
    
    UPROPERTY(EditAnywhere)
    float Pos2X;
    
    UPROPERTY(EditAnywhere)
    float Pos2Y;
    
    UPROPERTY(EditAnywhere)
    float Pos3X;
    
    UPROPERTY(EditAnywhere)
    float Pos3Y;
    
    UPROPERTY(EditAnywhere)
    float Pos4X;
    
    UPROPERTY(EditAnywhere)
    float Pos4Y;
    
    UPROPERTY(EditAnywhere)
    float Pos5X;
    
    UPROPERTY(EditAnywhere)
    float Pos5Y;
    
    UPROPERTY(EditAnywhere)
    float Pos6X;
    
    UPROPERTY(EditAnywhere)
    float Pos6Y;
    
    UPROPERTY(EditAnywhere)
    float Pos7X;
    
    UPROPERTY(EditAnywhere)
    float Pos7Y;
    
    UPROPERTY(EditAnywhere)
    float Pos8X;
    
    UPROPERTY(EditAnywhere)
    float Pos8Y;
    
    FEndDataTableFormation();
};

