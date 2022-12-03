#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BonamikWorldInterface.h"
#include "SQEX_BonamikChangingParameterExt.h"
#include "SQEX_BonamikChangingParameter.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "SQEX_BonamikTempCollisionParameter.h"
#include "SQEX_KBD_Component.generated.h"

class USkeletalMeshComponent;
class UCharacterMovementComponent;
class USQEX_BonamikGlobalConfig;
class USQEX_KBD_Component;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KBDRT_API USQEX_KBD_Component : public USceneComponent, public IBonamikWorldInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEX_BonamikGlobalConfig* BonamikGlobalConfig;
    
public:
    USQEX_KBD_Component();
    UFUNCTION(BlueprintCallable)
    void SQEX_SetEmissiveWindScale(const TArray<FName>& Groups, const float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_TurnOn(const TArray<FName>& Groups, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_TurnOff(bool preserveLatestResult, const TArray<FName>& Groups, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetWorldWindScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetWeight(float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetUpdateOnlyVisible(bool bUpdateOnlyVisible);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetUpdateOnlyRendered(bool bUpdateOnlyRendered);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetTeleportDistance(float Distance, int32 TeleportPreRollStep, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetSpeedRate(float SpeedRate, float SpeedRateChangeTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetPresetWindScale(const TArray<FName>& PresetNames, const float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetPreRoll(int32 Step, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetOuterConeScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetMeshSpaceSimulation(bool bMeshSpaceSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetMassScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetLocalForceScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetInnerConeScale(const TArray<FName>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetGroupWeight(const TArray<FName>& Groups, float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetGroupParamExt(const TArray<FSQEX_BonamikChangingParameterExt>& GroupParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetGravity(const FVector& Gravity);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetExtendEmissiveWind(const TArray<FName>& Groups, TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> DirectionSpace, const FVector& DirectionVec, float BaseStrength, float WaveAmplitude, float WaveFreq, float BlendTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEnableGroundCollisionAll(bool bNewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEnableGroundCollision(const TArray<FName>& Groups, bool bNewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEnable(bool NewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEmissiveWind(const TArray<FName>& Groups, TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> DirectionSpace, const FVector& DirectionVec, float BaseStrength, float WaveAmplitude, float WaveFreq, float BlendTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetAutoDisable(bool AutoDisable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetAnimPos(int32 BoneIndex, bool bForceSet);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ScaleGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RestoreGroupParamExt(const TArray<FSQEX_BonamikChangingParameterExt>& GroupParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RestoreGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RestoreDefaultParameters();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ResetGravity();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_Reset(bool bResetPose, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveTemporaryCollision(int32 CollisionId);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReferenceDefault(bool bEnableOtherInstance);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReferenceCommon(USQEX_KBD_Component* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReferenceAll();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReference(USQEX_KBD_Component* OtherComponent, const FString& ReferenceGroupName);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ReinitializeSimulationPose();
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_Bonamik_IsSetup();
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_Bonamik_IsAutoDisable();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Bonamik_GetWeight();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Bonamik_GetTeleportDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SQEX_Bonamik_GetSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SQEX_Bonamik_GetNumReferences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector SQEX_Bonamik_GetGravity() const;
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_EnablePresetWind(const TArray<FName>& PresetNames);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_DisablePresetWind(const TArray<FName>& PresetNames);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ClearExtendEmissiveWind(float BlendTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ClearEmissiveWind(float BlendTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ClearAllPresetWind();
    
    UFUNCTION(BlueprintCallable)
    int32 SQEX_Bonamik_AddTemporaryCollision(const TArray<FName>& CollisionGroups, const TArray<FSQEX_BonamikTempCollisionParameter>& CollisionParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReferenceDefault(bool bEnableOtherInstance);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReferenceCommon(USQEX_KBD_Component* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReference(USQEX_KBD_Component* OtherComponent, const FString& ReferenceGroupName);
    
    
    // Fix for true pure virtual functions not being implemented
};

