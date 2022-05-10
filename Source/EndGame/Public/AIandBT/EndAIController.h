#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "EndAIModelControllerInterface.h"
#include "UObject/NoExportTypes.h"
#include "EAIInfoParam.h"
#include "EAIInfoFlag.h"
#include "EEndAiMoveMode.h"
#include "UObject/NoExportTypes.h"
#include "EMoveToGroundHeightType.h"
#include "EndAIController.generated.h"

class AEndNavModifierVolume;
class AActor;
class AEndCharacter;

UCLASS(Blueprintable)
class ENDGAME_API AEndAIController : public AAIController, public IEndAIModelControllerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LookAtTarget;
    
    UPROPERTY(EditAnywhere)
    float FixRootQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceStraight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOtherMove;
    
    UPROPERTY(EditAnywhere)
    float OtherMoveInterval;
    
    UPROPERTY(EditAnywhere)
    float OtherMoveIntervalRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptAerialRootMotionMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptAerialRootMotionTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptAerialAITurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOtherWallMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialMotionFixIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptAeriaAutoRunWalkIdle;
    
    UPROPERTY(EditAnywhere)
    float GroundMoveCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SwapPathLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideAnimSetName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathLeapLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOtherGroundMoveRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOtherMoveRun;
    
    UPROPERTY(EditAnywhere)
    float AcceptMoveOnAngle;
    
    UPROPERTY(EditAnywhere)
    float JumpTimeQuantity;
    
    UPROPERTY(EditAnywhere)
    float JumpBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialAcceptPitch;
    
    UPROPERTY(EditAnywhere)
    float AerialLateralForce;
    
    UPROPERTY(EditAnywhere)
    float AerialActorLateralForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialHitTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialHitObject;
    
    UPROPERTY(EditAnywhere)
    float AerialHeight;
    
    UPROPERTY(EditAnywhere)
    float AerialConfront;
    
    UPROPERTY(EditAnywhere)
    float AerialFrontAcc;
    
    UPROPERTY(EditAnywhere)
    float AerialBackAcc;
    
    UPROPERTY(EditAnywhere)
    float AerialSideAcc;
    
    UPROPERTY(EditAnywhere)
    float AerialFrontMax;
    
    UPROPERTY(EditAnywhere)
    float AerialBackMax;
    
    UPROPERTY(EditAnywhere)
    float AerialSideMax;
    
    UPROPERTY(EditAnywhere)
    float AerialUpMax;
    
    UPROPERTY(EditAnywhere)
    float AerialDownMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialStrafe;
    
    UPROPERTY(EditAnywhere)
    float AerialStrafeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialForceMoveDirectionTurn;
    
    UPROPERTY(EditAnywhere)
    float AerialInertia;
    
    UPROPERTY(EditAnywhere)
    float AerialBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialInertiaAtCannotMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialGoalDistBreak;
    
    UPROPERTY(EditAnywhere)
    float AerialAccuratelyCheckPoint;
    
    UPROPERTY(EditAnywhere)
    float AerialAccuratelyGoal;
    
    UPROPERTY(EditAnywhere)
    float AerialGoalAttractionDistance;
    
    UPROPERTY(EditAnywhere)
    float AerialGoalAttraction;
    
    UPROPERTY(EditAnywhere)
    float AerialRunThreshold;
    
    UPROPERTY(EditAnywhere)
    float AerialOutPathCheckSoconds;
    
    UPROPERTY(EditAnywhere)
    float AerialOutPathBreak;
    
    UPROPERTY(EditAnywhere)
    float AerialRequestInterval;
    
    UPROPERTY(EditAnywhere)
    float AerialRotateMagnification;
    
    UPROPERTY(EditAnywhere)
    float FlyCollisionInterval;
    
    UPROPERTY(EditAnywhere)
    float AerialAcceptMoveVelocity;
    
    UPROPERTY(EditAnywhere)
    float ToWallJumpSkipEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugDrawJumpLandingLocation;
    
public:
    AEndAIController();
protected:
    UFUNCTION(BlueprintCallable)
    void ToJumpLocation(FVector Location, bool bRotateYaw, FVector lookAt, bool bToTerrain, bool bLocationShift);
    
    UFUNCTION(BlueprintCallable)
    void ToJumpFromNav(AEndNavModifierVolume* InNav, bool bToTerrain);
    
    UFUNCTION(BlueprintCallable)
    void ToJumpFromName(FName InName, bool bToTerrain);
    
    UFUNCTION(BlueprintCallable)
    void ToJump(bool bToTerrain);
    
    UFUNCTION(BlueprintCallable)
    void ToGraviticLookAtJump(const FVector& landingLocation, float Height, float PeakBias, float turningDuration, const FVector& lookAt, bool bToTerrain);
    
    UFUNCTION(BlueprintCallable)
    void ToGraviticJump(const FVector& landingLocation, float Height, float PeakBias, float turningDuration, const FVector& UpVector, const FVector& forwardVector, bool bToTerrain);
    
    UFUNCTION(BlueprintCallable)
    void ToEndJump(bool InTrace, bool IsTraceStartMaxHeightOwn);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopMove();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPrimaryAnimPack(const FName InName);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTurn(bool InOverride, float InAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideNextJumpForward(bool InOverride, FVector InForward);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideJumpTime(bool InOverride, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideJumpBias(bool InOverride, float InBias);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAerialHeight(bool InOverride, float InHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetNextJumpWallCollision(bool bHit);
    
    UFUNCTION(BlueprintCallable)
    void SetNextJumpMotion(FName Begin, FName Loop, FName End);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMoveMode(TEnumAsByte<EEndAiMoveMode::Type> InType, bool Skip);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetForceAerialTurn(bool InForce);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterRotation(FRotator InRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterLocation(FVector InLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAIParam(TEnumAsByte<EAIInfoParam::Type> InType, float InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetAIFlagFromOther(TEnumAsByte<EAIInfoFlag::Type> InType, bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetAIFlag(TEnumAsByte<EAIInfoFlag::Type> InType, bool InFlag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAerialFixTurn(bool InFix, float InAngle, float InLeapSpeed);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveVelocity(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetPrimaryAnimPack();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetOtherWallLock();
    
    UFUNCTION(BlueprintCallable)
    void ResetAerialAccelerationMove();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool OverwriteGraviticJumpLandingLocationAndForward(const FVector& overwriteLocation, const FVector& overwriteForward);
    
    UFUNCTION(BlueprintCallable)
    bool OverwriteGraviticJumpLandingLocation(const FVector& overwriteLocation, const FVector& overwriteLookAt);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteJump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteGraviticJump();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveToGroundByGravity(EMoveToGroundHeightType heightType, float specifiedHeight, float groundOffsetZ, float GravityScale, float MaxVelocity, bool checkNavArea);
    
    UFUNCTION(BlueprintCallable)
    void MoveToGround(float MoveTime, float groundTime, float groundOffsetZ, bool checkNavArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAerialPoint(FVector InLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveModeMigration();
    
    UFUNCTION(BlueprintPure)
    bool IsMoveMode(TEnumAsByte<EEndAiMoveMode::Type> InType) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLatestOtherPathBoader(bool ContainSemi);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAerial();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EEndAiMoveMode::Type> GetMoveMode() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetLocationAngleAbs(FVector Loc, AEndCharacter* Target);
    
    UFUNCTION(BlueprintPure)
    float GetLocationAngle(FVector Loc, AEndCharacter* Target);
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EEndAiMoveMode::Type> GetLatestMoveMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCharacterRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharacterRootLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharacterLocation();
    
public:
    UFUNCTION(BlueprintPure)
    float GetAIParam(TEnumAsByte<EAIInfoParam::Type> InType);
    
    UFUNCTION(BlueprintPure)
    bool GetAIFlag(TEnumAsByte<EAIInfoFlag::Type> InType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateResidentBlendMotion(FName Key, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePhysicalConstraint(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void CorrectRotate(float correctTime);
    
    UFUNCTION(BlueprintCallable)
    void ActivateResidentBlendMotion(FName Key, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePhysicalConstraint(float BlendTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

