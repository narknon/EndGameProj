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
    UPROPERTY(EditAnywhere)
    float MeteorDivePrepareRotateYaw;
    
    UPROPERTY(EditAnywhere)
    float MeteorDivePrepareRotatePitch;
    
    UPROPERTY(EditAnywhere)
    float MeteorDiveLoopRotateYaw;
    
    UPROPERTY(EditAnywhere)
    float MeteorDiveLoopRotatePitch;
    
    UPROPERTY(EditAnywhere)
    float MeteorDiveBeginSpeed;
    
    UPROPERTY(EditAnywhere)
    float MeteorDiveAddSpeed;
    
    UPROPERTY(EditAnywhere)
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

