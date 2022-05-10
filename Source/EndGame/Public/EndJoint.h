#pragma once
#include "CoreMinimal.h"
#include "EndJointHingeRotationLimit.h"
#include "EndJointEulerRotationLimit.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEndJointLimitType.h"
#include "EndJoint.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndJoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float AngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float AimTransitionTimeBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AimAxisRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AimUpRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAimUpVector;
    
    UPROPERTY(EditAnywhere)
    float AimUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimTargetOffset;
    
    UPROPERTY(EditAnywhere)
    float ActiveAimAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float DeactiveAimAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float ActiveAimTranslationVelocity;
    
    UPROPERTY(EditAnywhere)
    float DeactiveAimTranslationVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndJointLimitType LimitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndJointEulerRotationLimit EulerRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndJointHingeRotationLimit HingeRotationLimit;
    
    UEndJoint();
};

