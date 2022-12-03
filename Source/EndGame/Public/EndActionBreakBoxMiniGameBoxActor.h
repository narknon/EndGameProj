#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "EndBreakBoxMiniGameBoxPhysicsSe.h"
#include "EEndBreakBoxMiniGameEffect.h"
#include "EEndBreakBoxMiniGameBoxType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EndActionBreakBoxMiniGameBoxActor.generated.h"

class UParticleSystem;
class UStaticMeshComponent;
class USQEXSEADSound;
class USceneComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ENDGAME_API AEndActionBreakBoxMiniGameBoxActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBreakBoxMiniGameBoxPhysicsSe m_SeSetting_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBreakBoxMiniGameBoxPhysicsSe m_SeSetting_HighGread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBreakBoxMiniGameBoxPhysicsSe m_SeSetting_Ability;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBreakBoxMiniGameBoxType m_BoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHighGreadL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* m_Effect[4];
    
    UPROPERTY(EditAnywhere, Instanced)
    UStaticMeshComponent* m_StaticMeshComponent[11];
    
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* m_EffectDummyPoint[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADSound* HitSoundAsset;
    
public:
    AEndActionBreakBoxMiniGameBoxActor();
private:
    UFUNCTION(BlueprintCallable)
    void SetReferenceStaticMesh(EEndBreakBoxMiniGameBoxType Type, UStaticMeshComponent* StaticMeshComp);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetImpulseRadius(float InRadius);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetEffectDummyPoint(EEndBreakBoxMiniGameEffect Type, USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitSe_TimerFunc();
    
    UFUNCTION(BlueprintCallable)
    void OnEndImpulseInterval();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void Hit_TimerFunc();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEndBreakBoxMiniGameBoxType GetBoxType();
    
private:
    UFUNCTION(BlueprintCallable)
    void Deactive_TimerFunc();
    
public:
    UFUNCTION(BlueprintCallable)
    EEndBreakBoxMiniGameBoxType ApplyBoxType();
    
};

