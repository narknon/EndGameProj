#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEmotion.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEmotion : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 CanUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MotionName_Array;
    
    FEndDataTableEmotion();
};

