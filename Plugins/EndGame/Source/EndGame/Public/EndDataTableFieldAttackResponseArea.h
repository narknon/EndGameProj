#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableFieldAttackResponseArea.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableFieldAttackResponseArea : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SuggestionRadius;
    
    UPROPERTY(EditAnywhere)
    float ReactionRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 RetryUp;
    
    UPROPERTY(EditAnywhere)
    float OffsetInRetryUp;
    
    UPROPERTY(EditAnywhere)
    uint8 RetryDown;
    
    UPROPERTY(EditAnywhere)
    float OffsetInRetryDown;
    
    UPROPERTY(EditAnywhere)
    uint8 RetryLeft;
    
    UPROPERTY(EditAnywhere)
    float OffsetInRetryLeft;
    
    UPROPERTY(EditAnywhere)
    uint8 RetryRight;
    
    UPROPERTY(EditAnywhere)
    float OffsetInRetryRight;
    
    UPROPERTY(EditAnywhere)
    uint8 IgnoreLaytrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreLayTraceActorName_Array;
    
    FEndDataTableFieldAttackResponseArea();
};

