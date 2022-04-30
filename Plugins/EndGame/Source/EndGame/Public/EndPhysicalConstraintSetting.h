#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintSetting_ContactCharacter.h"
#include "EndPhysicalConstraintSetting_AnimPositionVelocity.h"
#include "EndPhysicalConstraintBoneSetting.h"
#include "Engine/DataAsset.h"
#include "EndPhysicalConstraintSetting_LastPosition.h"
#include "EndPhysicalConstraintSetting_AnimPosition.h"
#include "EndPhysicalConstraintSetting_Distance.h"
#include "EndPhysicalConstraintSetting_RandomImpulse.h"
#include "EndPhysicalConstraintSetting.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndPhysicalConstraintSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintBoneSetting> BoneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PositionIterationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VelocityIterationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateComponentSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwoStageOrientRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreActorVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConstantDeltaTime;
    
    UPROPERTY(EditAnywhere)
    float SimulationDeltaTimePowBias;
    
    UPROPERTY(EditAnywhere)
    float ContactTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateKinematicBonesToAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyBoneBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueEvalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_LastPosition> LastPositionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_AnimPosition> AnimPositionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_AnimPositionVelocity> AnimPositionVelocitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_Distance> DistanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_RandomImpulse> RandomImpulseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_AnimPosition> PostAnimPositionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_Distance> PostDistanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalConstraintSetting_ContactCharacter> ContactCharacterSettings;
    
    UEndPhysicalConstraintSetting();
};

