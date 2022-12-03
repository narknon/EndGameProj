#pragma once
#include "CoreMinimal.h"
#include "EndBattleSceneBlueprint.h"
#include "SetPlayStartSetPlay.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "SetPlayUseAbility.h"
#include "SetPlayJumpTo.h"
#include "UObject/NoExportTypes.h"
#include "SetPlayGraviticJump.h"
#include "SetPlayForceChangeIdleAction.h"
#include "SetPlayFallAction.h"
#include "SetPlayAerialAttackJump.h"
#include "EndBattleScene_btsc_sbil0_90_boss020.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleScene_btsc_sbil0_90_boss020 : public AEndBattleSceneBlueprint {
    GENERATED_BODY()
public:
    AEndBattleScene_btsc_sbil0_90_boss020();
private:
    UFUNCTION(BlueprintCallable)
    static void UnlockSetPlayHeight();
    
    UFUNCTION(BlueprintCallable)
    static void SuspendAll(AEndCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void StartSetPlayWithErrorCheck(const TArray<AEndCharacter*>& Characters, TEnumAsByte<SetPlayStartSetPlay::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void StartSetPlay(const TArray<AEndCharacter*>& Characters);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideAerialAttackFallSequence(AEndCharacter* Character, FName FallSequeceName, FName LandSequenceName, FName MotionOwnerCharaSpecId);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceLookAt(AEndCharacter* Character, AEndCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleAbilityRotateStatePointName(AEndCharacter* Character, FName RotatePointName);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleAbilityRotateStateLocation(AEndCharacter* Character, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void ResetForceLookAt(AEndCharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void RequestUseAbility(FName AbilityID, AEndCharacter* Executor, AEndCharacter* Target, float Timeout, bool ImmediatelyUseAerial, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayUseAbility::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void LockSetPlayHeight(float Height);
    
    UFUNCTION(BlueprintCallable)
    static void KeepRelativePositionWarp(AEndCharacter* BaseCharacter, FVector BaseLocation, FRotator BaseRotation, const TArray<AEndCharacter*>& Characters);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void JumpTo(AEndCharacter* Character, FVector TargetLocation, FRotator TargetRotation, float Duration, FName StartMotionName, FName LoopMotionName, FName OnCompleteMotionName, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayJumpTo::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReadySetPlay();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void GraviticJump(AEndCharacter* Character, const FVector& landingLocation, float Height, float PeakBias, float turningDuration, FVector LandingForward, FName BeginSequenceName, FName LoopSequenceName, FName EndSequenceName, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayGraviticJump::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void ForceChangeIdleAction(AEndCharacter* Character, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayForceChangeIdleAction::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void FallAction(AEndCharacter* Character, float GravityScale, FName FallSequenceName, FName LandSequenceName, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayFallAction::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void EndSetPlay();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void AerialAttackJump(FName StartMotionName, FName LoopMotionName, FName NextAbilityID, AEndCharacter* Executor, AEndCharacter* Target, float JumpTime, float Timeout, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayAerialAttackJump::Type>& OutSignal);
    
};

