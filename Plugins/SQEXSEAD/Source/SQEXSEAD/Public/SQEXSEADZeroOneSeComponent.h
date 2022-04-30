#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ESQEXSEADZeroOneProperties.h"
#include "ESQEXSEADAudioStartTimings.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADZeroOneSeComponent.generated.h"

class USoundBase;
class USQEXSEADAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADZeroOneSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundIndex;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADAudioStartTimings::Type> AudioStartTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnable_Slot0: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADZeroOneProperties::Type> PropertyType_Slot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnable_Slot1: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADZeroOneProperties::Type> PropertyType_Slot1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
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

