#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableResponseArea.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableResponseArea : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ReactionRangeSquare;
    
    UPROPERTY(EditAnywhere)
    float SugessionRange;
    
    UPROPERTY(EditAnywhere)
    float SugessionRangeSquare;
    
    UPROPERTY(EditAnywhere)
    float ReactionAngle;
    
    UPROPERTY(EditAnywhere)
    float SugessionAngle;
    
    UPROPERTY(EditAnywhere)
    uint8 NeedRaycast;
    
    UPROPERTY(EditAnywhere)
    uint8 NeedScreenSpace;
    
    UPROPERTY(EditAnywhere)
    uint8 NeedNaviCheck;
    
    UPROPERTY(EditAnywhere)
    float ReactionScreenRatioX;
    
    UPROPERTY(EditAnywhere)
    float ReactionScreenRatioY;
    
    UPROPERTY(EditAnywhere)
    float SugessionScreenRatioX;
    
    UPROPERTY(EditAnywhere)
    float SugessionScreenRatioY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExtendedResponseAreaID;
    
    UPROPERTY(EditAnywhere)
    uint8 NeedZAngleCheck;
    
    UPROPERTY(EditAnywhere)
    uint8 ReactionInEllipse;
    
    FEndDataTableResponseArea();
};

