#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtRequestType.h"
#include "EndAIBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EndAIBehaviorLookAt.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorLookAt : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndLookAtRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetName;
    
    FEndAIBehaviorLookAt();
};

