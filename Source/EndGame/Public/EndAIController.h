#pragma once
#include "CoreMinimal.h"
#include "EndAIModelControllerInterface.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "EAIInfoParam.h"
#include "UObject/NoExportTypes.h"
#include "EAIInfoFlag.h"
#include "EEndAiMoveMode.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OtherMoveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptMoveOnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTimeQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialAcceptPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialLateralForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialActorLateralForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialHitTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialHitObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialConfront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialFrontAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialBackAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialSideAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialFrontMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialBackMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialSideMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialUpMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialDownMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialStrafeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialForceMoveDirectionTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialInertiaAtCannotMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialGoalDistBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialAccuratelyCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialAccuratelyGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialGoalAttractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialGoalAttraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialRunThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialOutPathCheckSoconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialOutPathBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialRequestInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialRotateMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyCollisionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialAcceptMoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveMode(TEnumAsByte<EEndAiMoveMode::Type> InType) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLatestOtherPathBoader(bool ContainSemi);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAerial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EEndAiMoveMode::Type> GetMoveMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocationAngleAbs(FVector Loc, AEndCharacter* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocationAngle(FVector Loc, AEndCharacter* Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EEndAiMoveMode::Type> GetLatestMoveMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCharacterRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharacterRootLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharacterLocation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAIParam(TEnumAsByte<EAIInfoParam::Type> InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

