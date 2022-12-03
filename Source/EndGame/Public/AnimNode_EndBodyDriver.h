#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BodyDriver.h"
#include "AnimNode_EndBodyDriver.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndBodyDriver : public FAnimNode_BodyDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDead;
    
    FAnimNode_EndBodyDriver();
};

