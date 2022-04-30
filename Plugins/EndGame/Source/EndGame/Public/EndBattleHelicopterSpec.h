#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleHelicopterSpec.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleHelicopterSpec {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FutureTime;
    
    UPROPERTY(EditAnywhere)
    float FutureRotate;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Strafe;
    
    ENDGAME_API FEndBattleHelicopterSpec();
};

