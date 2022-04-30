#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndInstancedLightweightPhysicsComponent.generated.h"

class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndInstancedLightweightPhysicsComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReserveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialTranslationNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InitialRotationNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundedTranslationNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BoundedRotationNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoundTraceIntervalFrame;
    
    UPROPERTY(EditAnywhere)
    float BoundAttenuationMin;
    
    UPROPERTY(EditAnywhere)
    float BoundAttenuationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoundCountMax;
    
    UPROPERTY(EditAnywhere)
    float MaxBoundedDelayDestroyTime;
    
    UPROPERTY(EditAnywhere)
    float GroundedStopSecnods;
    
    UPROPERTY(EditAnywhere)
    float GroundedAdjustRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InitialCompositeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GroundedCompositeRotation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float TraceIntervalSecondMin;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DisableGravityHeightVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitSoundName;
    
    UEndInstancedLightweightPhysicsComponent();
    UFUNCTION(BlueprintCallable)
    void AddPhysicsInstance(const FTransform& Transform, const FVector& Impulse, float DelayTime, float LifeTime);
    
};

