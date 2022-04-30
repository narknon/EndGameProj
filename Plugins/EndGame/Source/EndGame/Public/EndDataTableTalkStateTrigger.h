#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableTalkStateTrigger.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableTalkStateTrigger : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerTarget;
    
    FEndDataTableTalkStateTrigger();
};

