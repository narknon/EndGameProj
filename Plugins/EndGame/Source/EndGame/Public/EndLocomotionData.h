#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EndAnimStructs.h"
#include "Engine/DataAsset.h"
#include "EndLocomotionData.generated.h"

UCLASS(BlueprintType)
class ENDGAME_API UEndLocomotionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting WalkStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting Walk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting WalkEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting RunStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting Run;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting RunEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting DashStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting Dash;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting DashEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting DashToWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting IdleTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting WalkTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting RunTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting StrafingWalkStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting StrafingWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting StrafingWalkEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting SwitchBehavior;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting Fall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEndLocomotionSetting FallEnd;
    
    UEndLocomotionData();
};

