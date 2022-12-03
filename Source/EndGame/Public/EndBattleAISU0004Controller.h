#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIFitSplineController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISU0004Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0004Controller : public AEndBattleAIFitSplineController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Su0004AirTurnThreshold;
    
public:
    AEndBattleAISU0004Controller();
    UFUNCTION(BlueprintCallable)
    void UpdateAirTurn(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestTornadoFollowLocation(int32 InIndex, FVector InLocation, float InTolerance);
    
};

