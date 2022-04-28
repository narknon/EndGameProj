#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ESQEXSEADZeroOneProperties.h"
#include "ESQEXSEADAudioStartTimings.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADZeroOneSeComponent.generated.h"

class USoundBase;
class USQEXSEADAudioComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADZeroOneSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SoundIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESQEXSEADAudioStartTimings::Type> AudioStartTiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnable_Slot0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEXSEADZeroOneProperties::Type> PropertyType_Slot0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnable_Slot1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEXSEADZeroOneProperties::Type> PropertyType_Slot1;
    
private:
    UPROPERTY(Export, Transient)
    USQEXSEADAudioComponent* MyAudioComponent;
    
public:
    USQEXSEADZeroOneSeComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetZeroOneValue(int32 Slot, float Value, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
};

