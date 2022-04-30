#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIControllerEnemyBase.h"
#include "EndBikeAIHelicopterMoveParam_MoveForward.h"
#include "EndBikeAIHelicopterParameter.h"
#include "EndBikeAIHelicopterLockOnInfoList.h"
#include "EndBikeAIHelicopterMoveParam_MoveAround.h"
#include "EndBikeAIHelicopterMoveParam_MoveBackward.h"
#include "EndBikeAIHelicopterAbilitySet.h"
#include "EndBikeAIHelicopterAbilitySetPhase.h"
#include "EndBikeAIHelicopterSpecificRoadArea.h"
#include "BikeAIHelicopterSpecialAttackParameter.h"
#include "EndBikeAIHelicopterController.generated.h"

UCLASS(Blueprintable)
class AEndBikeAIHelicopterController : public AEndBikeAIControllerEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAIHelicopterParameter mParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndBikeAIHelicopterLockOnInfoList> AbilityIDToLockOnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndBikeAIHelicopterMoveParam_MoveAround> MovementParams_MoveAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndBikeAIHelicopterMoveParam_MoveForward> MovementParams_MoveForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndBikeAIHelicopterMoveParam_MoveBackward> MovementParams_MoveBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AbilityIDToMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAIHelicopterAbilitySet AbilitySetForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAIHelicopterAbilitySet AbilitySetForAlly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FEndBikeAIHelicopterAbilitySetPhase> AbilitySetForPlayer_Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FEndBikeAIHelicopterAbilitySet> AbilitySetForAlly_Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetForJumpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeAIHelicopterSpecificRoadArea> RightRoadWallAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeAIHelicopterSpecificRoadArea> LeftRoadWallAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeAIHelicopterSpecificRoadArea> CenterObstacleAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeAIHelicopterSpecialAttackParameter TrikeSpecialAttackParameter;
    
public:
    AEndBikeAIHelicopterController();
};

