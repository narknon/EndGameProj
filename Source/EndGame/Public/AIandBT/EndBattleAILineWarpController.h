#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "ELineWarpCalcPattern.h"
#include "UObject/NoExportTypes.h"
#include "ELineWarpType.h"
#include "EndBattleAILineWarpController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAILineWarpController : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLineWarp;
    
    AEndBattleAILineWarpController();
    UFUNCTION(BlueprintCallable)
    bool RequestLineWarp(ELineWarpType InLineWarpType, int32 InDivisionNum, FName InStartMotion, FName InLoopMotion, FName InEndMotion, float InWaitTime, const FVector& InEndLocation, FVector InRandomOffsetRange, float InNearDistance, float InLeaveDistance, float InPointWaitTime, float InTrailVelocityPower, FVector InHeightOffsetTable, ELineWarpCalcPattern InCalcPattern, FVector InPatternParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventLineWarp(FName Message);
    
};

