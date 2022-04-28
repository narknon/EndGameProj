#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SQEXSEADWhizSeComponent.generated.h"

class USoundBase;
class USQEXSEADAudioComponent;
class UMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADWhizSeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    USoundBase* WhizSoundAsset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName WhizSoundName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ApproachJudgmentDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ApproachJudgmentVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOnlyOnce: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseRelativeVelocity: 1;
    
private:
    UPROPERTY(Export, Transient)
    USQEXSEADAudioComponent* MyAudioComponent;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* MyMeshComponent;
    
public:
    USQEXSEADWhizSeComponent();
};

