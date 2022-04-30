#pragma once
#include "CoreMinimal.h"
#include "EEndTarzanJumpType.h"
#include "EndTarzanJumpInfo.generated.h"

USTRUCT(BlueprintType)
struct FEndTarzanJumpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndTarzanJumpType JumpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopePushNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartTriggerName;
    
    ENDGAME_API FEndTarzanJumpInfo();
};

