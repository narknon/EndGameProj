#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonAnimTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndPhysicalDamageReactionSetting.h"
#include "EndAdjustOrientationSetting.h"
#include "EndBoneBlendRateGroup.h"
#include "EndRig.generated.h"

class UEndJoint;
class UEndLookAtSolver;
class UEndAimSolver;
class UEndFootEffectorSolver;
class UEndBalancingSolver;
class UEndHandEffectorSolver;
class UEndLipSyncSolver;

UCLASS(Blueprintable, MinimalAPI)
class UEndRig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxis HeadBoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookAtTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimBaseBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AimAngleBasedVelocityBiasAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AimAngleBasedVelocityBiasValueRange;
    
    UPROPERTY(EditAnywhere)
    float AimAngleBasedVelocityBiasInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float VibrationRestoreSpeed;
    
    UPROPERTY(EditAnywhere)
    float VibrationImpactBias;
    
    UPROPERTY(EditAnywhere)
    float VibrationAttenuationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FullBodyBoneBlendTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UpperBodyBoneBlendTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndBoneBlendRateGroup> BoneBlendRateGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationSetting AdjustOrientationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndPhysicalDamageReactionSetting PhysicalDamageReactionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UEndJoint*> Joints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndLookAtSolver* LookAtSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAimSolver* AimSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndBalancingSolver* BalancingSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndFootEffectorSolver* FootEffectorSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndHandEffectorSolver* HandEffectorSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndLipSyncSolver* LipSyncSolver;
    
    UEndRig();
};

