#pragma once
#include "CoreMinimal.h"
#include "EndOverrideLocomotionSetting.generated.h"

USTRUCT(BlueprintType)
struct FEndOverrideLocomotionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceName;
    
    UPROPERTY(EditAnywhere)
    float Rate;
    
    ENDGAME_API FEndOverrideLocomotionSetting();
};

