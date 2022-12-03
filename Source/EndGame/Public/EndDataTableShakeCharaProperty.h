#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableShakeCharaProperty.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableShakeCharaProperty : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraShakeDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceFeedbackFileName;
    
    FEndDataTableShakeCharaProperty();
};

