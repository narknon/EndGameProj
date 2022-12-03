#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FA0122_ArmHeightAndRate.h"
#include "BoneContainer.h"
#include "EFA0122_PoseReference.h"
#include "EFA0122_ArmState.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoseReferenceAnimationFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFA0122_ArmState CurrentArmState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedBasementAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentBasementAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasementAngleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedArmHeightRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentArmHeightRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmHeightRateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinArmHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxArmHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFA0122_ArmHeightAndRate> ArmHeightAndRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedHandGrabRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHandGrabRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandGrabRateSpeed;
    
    UFA0122_AnimInstance();
    UFUNCTION(BlueprintCallable)
    void RequestBasementAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void RequestArmHeightRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinArmHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxArmHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBasementAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentArmHeightRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmHeightRateFromHeight(float Height) const;
    
};

