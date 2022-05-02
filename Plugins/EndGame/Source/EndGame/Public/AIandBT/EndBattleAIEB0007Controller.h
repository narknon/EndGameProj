#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerType.h"
#include "EndBattleAIEB0007Controller.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAIEB0007Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableOverrideHeight;
    
    UPROPERTY(EditAnywhere)
    float OverrideHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableOverridePeakBias;
    
    UPROPERTY(EditAnywhere)
    float OverridePeakBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableOverrideTurningDuration;
    
    UPROPERTY(EditAnywhere)
    float OverrideTurningDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSprinkleWaterDraw;
    
    AEndBattleAIEB0007Controller();
    UFUNCTION(BlueprintCallable)
    void ToGraviticJump(const FVector& landingLocation, float Height, float PeakBias, float turningDuration, const FVector& UpVector, const FVector& forwardVector, bool bToTerrain);
    
    UFUNCTION(BlueprintCallable)
    void RequestSpawnBrokenTail(FName CharaSpecName, FVector hidePosition, bool spawnedInvisible, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void RequestRunBrokenTail();
    
    UFUNCTION(BlueprintCallable)
    void RequestResetBrokenTail();
    
    UFUNCTION(BlueprintCallable)
    void GetSprinkleWaterInRangeTargetCharacter(const FName& NodeName, const TArray<EPlayerType> playerTypes, float RangeRadius, TArray<AEndCharacter*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    void GetSprinkleWaterInRangePointNames(const TArray<FName>& nodeNames, float RangeRadius, float rangeDistance, TArray<FName>& outNames, FName& outNearName);
    
    UFUNCTION(BlueprintCallable)
    void GetSprinkleWaterInAnglePointNames(const TArray<FName>& nodeNames, float rangeAngle, float rangeDistance, TArray<FName>& outNames, FName& outNearName);
    
};

