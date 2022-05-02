#pragma once
#include "CoreMinimal.h"
#include "EndAnimInstance.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "EndAnimVehicleLinearSuspension.h"
#include "UObject/NoExportTypes.h"
#include "EndAnimVehicleAngularSuspension.h"
#include "EndAnimVehicleTurnBone.h"
#include "UObject/NoExportTypes.h"
#include "EndAnimVehicleInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UEndAnimVehicleInstance : public UEndAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference CenterBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterBoneUpAxis;
    
    UPROPERTY(EditAnywhere)
    float CenterBoneAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxCenterDistance;
    
    UPROPERTY(EditAnywhere)
    float CenterConstraintStiffness;
    
    UPROPERTY(EditAnywhere)
    float RollAngleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RollAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHandle;
    
    UPROPERTY(EditAnywhere)
    FBoneReference HandleBone;
    
    UPROPERTY(EditAnywhere)
    float MaxTurnAngleToHandleYawFactor;
    
    UPROPERTY(EditAnywhere)
    float MinHandleAnglePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndAnimVehicleLinearSuspension> LinearSuspensionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndAnimVehicleAngularSuspension> AngularSuspensionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndAnimVehicleTurnBone> TurnBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IterationCount;
    
    UPROPERTY(EditAnywhere)
    float VelocityKmPerHour;
    
    UPROPERTY(EditAnywhere)
    float AccelerationKmPerHour;
    
    UPROPERTY(EditAnywhere)
    float AccelerationToTransRotationBias;
    
    UPROPERTY(EditAnywhere)
    float TransRotationReverseSpeed;
    
    UPROPERTY(EditAnywhere)
    float TransRotationToSinkingAccelerationBias;
    
    UPROPERTY(EditAnywhere)
    float TransSinkingAccelerationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomSinkingAcceleration;
    
    UPROPERTY(EditAnywhere)
    float RandomSinkingAccelerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomSinkingTime;
    
    UPROPERTY(EditAnywhere)
    float VelocityToRandomSinkingTimeBias;
    
    UPROPERTY(EditAnywhere)
    float TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CenterBoneAdditiveRotation;
    
    UPROPERTY(EditAnywhere)
    float GroundHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GroundNormal;
    
    UPROPERTY(EditAnywhere)
    float GroundRoughness;
    
    UPROPERTY(EditAnywhere)
    float AdditiveRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePhysicsDuringAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWheelRotationDuringAnimation;
    
    UPROPERTY(EditAnywhere)
    float JumpAngle;
    
    UPROPERTY(EditAnywhere)
    float JumpAngleResetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float PitchRotationSpeed;
    
    UEndAnimVehicleInstance();
};

