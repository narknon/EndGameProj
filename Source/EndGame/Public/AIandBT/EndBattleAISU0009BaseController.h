#pragma once
#include "CoreMinimal.h"
#include "EndBattleAISummonBaseController.h"
#include "EndBattleAISU0009BaseController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0009BaseController : public AEndBattleAISummonBaseController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FireMagics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IceMagics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ThunderMagics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WindMagics;
    
    UPROPERTY(EditAnywhere)
    float AreaAbilityCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WinningPoseMotionName;
    
public:
    AEndBattleAISU0009BaseController();
    UFUNCTION(BlueprintCallable)
    void CreateFlareDamage(const FName ToTargetDamageID, const FName ToOthersDamageID);
    
};

