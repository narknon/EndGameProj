#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikePlayerFeedback.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikePlayerFeedback : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitCameraShakeDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitForceFeedbackFileName;
    
    FEndDataTableBikePlayerFeedback();
};

