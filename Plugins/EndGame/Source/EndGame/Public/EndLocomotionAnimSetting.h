#pragma once
#include "CoreMinimal.h"
#include "EndLocomotionAnim.h"
#include "EndLocomotionAnimSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndLocomotionAnimSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLocomotionAnim> Animations;
    
    FEndLocomotionAnimSetting();
};

