#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BoneContainer.h"
#include "FA0122_ArmHeightAndRate.h"
#include "EFA0122_ArmState.h"
#include "EFA0122_PoseReference.h"
#include "FA0122_AnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UFA0122_AnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BasementBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference HandBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> ArmBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> TransformCacheBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PoseReferenceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFA0122_PoseReference, int32> PoseReferenceFrames;
    
    UPROPERTY(EditAnywhere)
    float PoseReferenceAnimationFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFA0122_ArmState CurrentArmState;
    
    UPROPERTY(EditAnywhere)
    float RequestedBasementAngle;
    
    UPROPERTY(EditAnywhere)
    float CurrentBasementAngle;
    
    UPROPERTY(EditAnywhere)
    float BasementAngleSpeed;
    
    UPROPERTY(EditAnywhere)
    float RequestedArmHeightRate;
    
    UPROPERTY(EditAnywhere)
    float CurrentArmHeightRate;
    
    UPROPERTY(EditAnywhere)
    float ArmHeightRateSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinArmHeight;
    
    UPROPERTY(EditAnywhere)
    float MaxArmHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFA0122_ArmHeightAndRate> ArmHeightAndRates;
    
    UPROPERTY(EditAnywhere)
    float RequestedHandGrabRate;
    
    UPROPERTY(EditAnywhere)
    float CurrentHandGrabRate;
    
    UPROPERTY(EditAnywhere)
    float HandGrabRateSpeed;
    
    UFA0122_AnimInstance();
    UFUNCTION(BlueprintCallable)
    void RequestBasementAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void RequestArmHeightRate(float Rate);
    
    UFUNCTION(BlueprintPure)
    float GetMinArmHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxArmHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBasementAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentArmHeightRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetArmHeightRateFromHeight(float Height) const;
    
};

