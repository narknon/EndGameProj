#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EndAIBehaviorTurn.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorTurn : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinueTurn;
    
    UPROPERTY(EditAnywhere)
    float TurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    FEndAIBehaviorTurn();
};

