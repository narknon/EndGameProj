#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIRoleParam.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleAIRoleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoleUpdateSetting;
    
    UPROPERTY(EditAnywhere)
    float DistanceNear;
    
    UPROPERTY(EditAnywhere)
    float DistanceConfront;
    
    UPROPERTY(EditAnywhere)
    float DistanceFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPositionAngle;
    
    UPROPERTY(EditAnywhere)
    float PositionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Strafe;
    
    UPROPERTY(EditAnywhere)
    float DistanceStrafe;
    
    UPROPERTY(EditAnywhere)
    float ATBSpeed;
    
    ENDGAME_API FEndBattleAIRoleParam();
};

