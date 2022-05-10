#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEventPriorityDistance.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEventPriorityDistance : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RepeatDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeBeforeRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatRandomBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPriority;
    
    UPROPERTY(EditAnywhere)
    float InnerDist;
    
    UPROPERTY(EditAnywhere)
    float OuterDist;
    
    FEndDataTableEventPriorityDistance();
};

