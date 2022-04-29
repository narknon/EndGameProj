#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EndAnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EndAnimVehicleInstance.generated.h"

UCLASS(NonTransient)
class ENDGAME_API UEndAnimVehicleInstance : public UEndAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference CenterBone;
    
    UPROPERTY(EditAnywhere)
    FVector CenterBoneUpAxis;
    
    UPROPERTY(EditAnywhere)
    float CenterBoneAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxCenterDistance;
    
    UPROPERTY(EditAnywhere)
    float CenterConstraintStiffness;
    
    UPROPERTY(EditAnywhere)
    float RollAngleMultiplier;
    
    UPROPERTY(EditAnywhere)
    FVector RollAxis;
    
    UPROPERTY(EditAnywhere)
    bool bUseHandle;
    
    UPROPERTY(EditAnywhere)
    FBoneReference HandleBone;
    
    UPROPERTY(EditAnywhere)
    float MaxTurnAngleToHandleYawFactor;
    
    UPROPERTY(EditAnywhere)
    float MinHandleAnglePercentage;
    
    UPROPERTY(EditAnywhere)
    TArray<FEndAnimVehicleLinearSuspension> LinearSuspensionInfos;
    
    UPROPERTY(EditAnywhere)
    TArray<FEndAnimVehicleAngularSuspension> AngularSuspensionInfos;
    
    UPROPERTY(EditAnywhere)
    TArray<FEndAnimVehicleTurnBone> TurnBones;
    
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(EditAnywhere)
    FVector2D RandomSinkingAcceleration;
    
    UPROPERTY(EditAnywhere)
    float RandomSinkingAccelerationMultiplier;
    
    UPROPERTY(EditAnywhere)
    FVector2D RandomSinkingTime;
    
    UPROPERTY(EditAnywhere)
    float VelocityToRandomSinkingTimeBias;
    
    UPROPERTY(EditAnywhere)
    float TurnAngle;
    
    UPROPERTY(EditAnywhere)
    FRotator CenterBoneAdditiveRotation;
    
    UPROPERTY(EditAnywhere)
    float GroundHeight;
    
    UPROPERTY(EditAnywhere)
    FVector GroundNormal;
    
    UPROPERTY(EditAnywhere)
    float GroundRoughness;
    
    UPROPERTY(EditAnywhere)
    float AdditiveRoll;
    
    UPROPERTY(EditAnywhere)
    bool bUsePhysicsDuringAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bUseWheelRotationDuringAnimation;
    
    UPROPERTY(EditAnywhere)
    float JumpAngle;
    
    UPROPERTY(EditAnywhere)
    float JumpAngleResetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float PitchRotationSpeed;
    
    UEndAnimVehicleInstance();
};

