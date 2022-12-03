#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EPlayerType.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISU0005Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0005Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorDivePrepareRotateYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorDivePrepareRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorDiveLoopRotateYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorDiveLoopRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorDiveBeginSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorDiveAddSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorDiveOffsetZ;
    
    AEndBattleAISU0005Controller();
private:
    UFUNCTION(BlueprintCallable)
    void SetAIPCOverrideCautionDistance(EPlayerType PlayerType, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void ResetAIPCOverrideCautionDistance(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable)
    void OverrideTargetLocation(bool enableOverride, FVector overrideLocation);
    
};

