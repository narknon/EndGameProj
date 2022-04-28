#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyStructs.h"
#include "Engine/DataAsset.h"
#include "EndPhysicalConstraintSetting.generated.h"

UCLASS(BlueprintType)
class ENDGAME_API UEndPhysicalConstraintSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintBoneSetting> BoneSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PositionIterationCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 VelocityIterationCount;
    
    UPROPERTY(EditAnywhere)
    bool bSimulateComponentSpace;
    
    UPROPERTY(EditAnywhere)
    bool bTwoStageOrientRotation;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreActorVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bUseConstantDeltaTime;
    
    UPROPERTY(EditAnywhere)
    float SimulationDeltaTimePowBias;
    
    UPROPERTY(EditAnywhere)
    float ContactTargetRadius;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateKinematicBonesToAnim;
    
    UPROPERTY(EditAnywhere)
    bool bApplyBoneBlendRate;
    
    UPROPERTY(EditAnywhere)
    FName UniqueEvalName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_LastPosition> LastPositionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_AnimPosition> AnimPositionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_AnimPositionVelocity> AnimPositionVelocitySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_Distance> DistanceSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_RandomImpulse> RandomImpulseSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_AnimPosition> PostAnimPositionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_Distance> PostDistanceSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEndPhysicalConstraintSetting_ContactCharacter> ContactCharacterSettings;
    
    UEndPhysicalConstraintSetting();
};