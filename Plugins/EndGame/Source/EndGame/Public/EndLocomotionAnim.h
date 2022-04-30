#pragma once
#include "CoreMinimal.h"
#include "EndLocomotionAnim.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndLocomotionAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbstract;
    
    FEndLocomotionAnim();
};

