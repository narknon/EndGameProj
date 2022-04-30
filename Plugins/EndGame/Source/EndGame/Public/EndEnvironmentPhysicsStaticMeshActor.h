#pragma once
#include "CoreMinimal.h"
#include "EndEnvironmentStaticMeshActor.h"
#include "EndPhysicsChangeCollisionResponseData.h"
#include "Engine/EngineTypes.h"
#include "EndPhysicsSeSetting.h"
#include "UObject/NoExportTypes.h"
#include "EndEnvironmentPhysicsStaticMeshActor.generated.h"

class UStaticMeshComponent;
class UEndItemDropComponent;
class UStaticMesh;
class UObject;
class UCapsuleComponent;
class USQEXSEADSound;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ENDGAME_API AEndEnvironmentPhysicsStaticMeshActor : public AEndEnvironmentStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoPhysOffLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoInitMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreStateManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParentCollisionPresetsToOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicsChangeCollisionResponseData> EnabledChangeCollisionResponses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> OtherStaticMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> OtherStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AssetUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnvironmentPhysicsSpecName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndPhysicsSeSetting SeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostLoadedLevelAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverAwake;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndItemDropComponent* ItemDropComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* BattleOverlapCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADSound* HitSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADSound* FractureSoundAsset;
    
public:
    AEndEnvironmentPhysicsStaticMeshActor();
private:
    UFUNCTION(BlueprintCallable)
    void PlayHitSe_TimerFunc();
    
    UFUNCTION(BlueprintCallable)
    void OnEndImpulseInterval();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

