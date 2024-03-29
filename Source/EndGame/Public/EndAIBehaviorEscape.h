#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EndAIBehaviorEscape.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorEscape : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EscapeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EscapeDirRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool StrafeMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEscapeLookAtTurn;
    
    FEndAIBehaviorEscape();
};

