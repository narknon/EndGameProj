#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeInterruptAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeInterruptAction : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetMotion;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerKnockBack;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetKnockBack;
    
    FEndDataTableBikeInterruptAction();
};

