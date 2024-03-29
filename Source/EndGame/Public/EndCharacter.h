#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "EndActorInterface.h"
#include "EndInteractorInterface.h"
#include "EndAnimActorInterface.h"
#include "EndActorBaseInterface.h"
#include "EndAIModel.h"
#include "EndCharacterResidentEffect.h"
#include "UObject/NoExportTypes.h"
#include "EndInterSetting.h"
#include "UObject/NoExportTypes.h"
#include "InterestPointRequestContext.h"
#include "EEndEmissiveModifierType.h"
#include "EEndLookAtLayer.h"
#include "EndAdjustOrientationSetting.h"
#include "EndCharacterPushCollisionData.h"
#include "EEndEmissiveCurveType.h"
#include "EndCharacter.generated.h"

class AEndBattleAIController;
class UEndRig;
class AEndFieldAIController;
class UEndEnvQueryComponent;
class UActorComponent;
class USQEX_KineDriver_Component;
class AEndAIController;
class AEndBikeAIController;
class AEndPlayerController;
class AController;
class USQEX_Bonamik_Component;
class UEndAerialRouteSearchInstance;
class UEndFootAttributeComponent;
class UEndCapsuleOverlapComponent;
class USQEX_KBD_Component;
class UEndBattleTalkCharacterComponent;
class UEndAIModelTemplateData;
class UEndFacialRig;
class UEndAIModelPersonalityData;
class UHSFLipSyncDataPack;
class UEndEmissiveColorComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndCharacter : public ACharacter, public IEndActorInterface, public IEndActorBaseInterface, public IEndAnimActorInterface, public IEndInteractorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIModel AIModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExtendWeaponSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FName, UActorComponent*> ComponentTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bResidentEffectIgnoreWorldPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndCharacterResidentEffect> ResidentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndCharacterResidentEffect> ResidentFlyEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEndAIController> FieldAIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEndFieldAIController* FieldAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEndBattleAIController*> BattleAIControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEndBattleAIController* BattleAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AEndBikeAIController>> BikeAIControllerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEndBikeAIController* BikeAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEndPlayerController* PlayerAiController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* ActiveAiController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StackActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator StackActorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActorLocationStackPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActorRotationStackPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationCache_ForCut;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkDeltaTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterestPointRequestContext> InterestPointRequestContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecreatePhysicsOnEnableRagdoll;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndFootAttributeComponent* FootAttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndCapsuleOverlapComponent* EndCapsuleOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_KBD_Component* KBD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_KineDriver_Component* KineDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_Bonamik_Component* Bonamik;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndEnvQueryComponent* EnvironmentQueryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndBattleTalkCharacterComponent* BattleTalkCharacterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAerialRouteSearchInstance* AerialRouteSearchInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Biped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndRig* Rig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndFacialRig* FacialRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAIModelPersonalityData* AIPersonalityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAIModelTemplateData* AITemplateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndInterSetting InterSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UHSFLipSyncDataPack*> LipSyncDataPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideAnimSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExistOverrideAnimSet;
    
    UPROPERTY(EditAnywhere)
    FName OverrideLevelAnimSetLevelName[32];
    
    UPROPERTY(EditAnywhere)
    FName OverrideLevelAnimSetAnimName[32];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtSpeedBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtAngleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtClampHorizontalDistanceBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideAimBaseBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEndLookAtLayer> IgnoreLookAtLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAdjustOrientationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationSetting AdjustOrientationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustOrientationTransRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAdjustSkeletalMeshLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUpdateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUpdateKinematicBonesUpdateToPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndEmissiveColorComponent* EmissiveColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFieldAttack;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldExtraRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleExtraRadius;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndCharacterPushCollisionData> DisabledSubCollisionDataList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreRagdollPhysics;
    
public:
    AEndCharacter();
    UFUNCTION(BlueprintCallable)
    void UseHookShotSimple(const FVector& landingLocation, const FRotator& LandingRotation);
    
    UFUNCTION(BlueprintCallable)
    void StopEmissiveColorAnimation(FName RequestID);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRagdollPhysics(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectEmissiveColor(FName ColorPaletteId, float IntensityBias);
    
    UFUNCTION(BlueprintCallable)
    void SetChildMesh(FName meshName, FName Label);
    
    UFUNCTION(BlueprintCallable)
    void ResetRagdollPhysics();
    
    UFUNCTION(BlueprintCallable)
    void ResetEndCutSceneCorrectionHeight();
    
    UFUNCTION(BlueprintCallable)
    void ResetDirectEmissiveColor();
    
    UFUNCTION(BlueprintCallable)
    void RequestRagdollPostActivation();
    
    UFUNCTION(BlueprintCallable)
    void RequestRagdollCollisionOff();
    
    UFUNCTION(BlueprintCallable)
    void RequestDeactivateRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void RequestActivateRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void PlayEmissiveColorAnimation(FName RequestID, FName ColorPaletteId, EEndEmissiveModifierType ModifierType, EEndEmissiveCurveType CurveType, bool bLoop, float Duration, float BlendInTime, float BlendOutTime, float StartOffset, float EndOffset);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDefaultEmissiveColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBreakMesh(const FName& meshName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCutSceneToBP(const FName& CutsceneID, float animBlendTime, float ikBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void OnBodyDriverRagdollReadyForRemoval();
    
    UFUNCTION(BlueprintCallable)
    void OnBodyDriverRagdollImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCutSceneToBP(const FName& CutsceneID, float animBlendTime, float ikBlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdollPhysicsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPointRotationFromOwnPosture(FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPointDirectionFromOwnPosture(FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFeetLocation();
    
    UFUNCTION(BlueprintCallable)
    UEndEnvQueryComponent* GetEQSComponent();
    
    UFUNCTION(BlueprintCallable)
    void EnableRagdollPhysics(bool bDisableMovement, bool bForceDisableBodyDriver);
    
    UFUNCTION(BlueprintCallable)
    void EnableKineDriver();
    
    UFUNCTION(BlueprintCallable)
    void DisableRagdollPhysics(float FadeOutTime, bool bCenterActorToHip, bool bResetRelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    void DisableKineDriver();
    
    
    // Fix for true pure virtual functions not being implemented
};

