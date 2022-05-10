#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EEndLookAtForceDeactiveType.h"
#include "EndAIBehaviorLookAtForceDeactive.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorLookAtForceDeactive : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEndLookAtForceDeactiveType Type;
    
    FEndAIBehaviorLookAtForceDeactive();
};

