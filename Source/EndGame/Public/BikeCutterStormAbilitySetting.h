#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BikeCutterStormAbilitySetting.generated.h"

USTRUCT(BlueprintType)
struct FBikeCutterStormAbilitySetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LoopTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FFloatInterval> AttackTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeginMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddMotion_Attack;
    
    UPROPERTY(EditAnywhere)
    float MoveRange;
    
    UPROPERTY(EditAnywhere)
    int8 FirstMoveDirectionSign;
    
    UPROPERTY(EditAnywhere)
    float MoveSpeed;
    
    ENDGAME_API FBikeCutterStormAbilitySetting();
};

