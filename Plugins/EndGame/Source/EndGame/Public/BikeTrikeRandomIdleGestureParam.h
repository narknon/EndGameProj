#pragma once
#include "CoreMinimal.h"
#include "EBikeAllyCharacterType.h"
#include "BikeTrikeRandomIdleGestureParam.generated.h"

USTRUCT(BlueprintType)
struct FBikeTrikeRandomIdleGestureParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBikeAllyCharacterType TargetCharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Motions;
    
    UPROPERTY(EditAnywhere)
    float IntervalTime;
    
    ENDGAME_API FBikeTrikeRandomIdleGestureParam();
};

