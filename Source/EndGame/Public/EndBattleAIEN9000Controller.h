#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEN9000Controller.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAIEN9000Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepulsiveXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepulsiveZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLineDefence;
    
public:
    AEndBattleAIEN9000Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void SetLineDefencePoint(FVector PointA, FVector PointB);
    
    UFUNCTION(BlueprintCallable)
    void SetLineDefence(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableTarget(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void ResetEndCutSceneTransformCorrection(FName CharaName);
    
    UFUNCTION(BlueprintCallable)
    void ResetEndCutSceneCorrectionHeight(FName CharaName);
    
    UFUNCTION(BlueprintCallable)
    void DisappearChildSyncAction(FName parentSyncActionID, AEndCharacter* parentOwnerChara);
    
    UFUNCTION(BlueprintCallable)
    void CreateSyncActionPlayFromLoop(FName parentSyncActionID, FName childSyncActionID1, FName childSyncActionID2, FName childSyncActionID3, FName childSyncActionID4, FName childOwnerCharaName1, FName childOwnerCharaName2, FName childOwnerCharaName3, FName childOwnerCharaName4, FName TargetCharaName);
    
    UFUNCTION(BlueprintCallable)
    void AddChildSyncAction(FName parentSyncActionID, FName childSyncActionID, AEndCharacter* ownerChara, AEndCharacter* targetChara);
    
};

