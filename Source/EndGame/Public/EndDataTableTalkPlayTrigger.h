#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableTalkPlayTrigger.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableTalkPlayTrigger : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerTarget;
    
    FEndDataTableTalkPlayTrigger();
};

