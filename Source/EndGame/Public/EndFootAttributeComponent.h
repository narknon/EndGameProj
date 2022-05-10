#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndFootAttributeComponent.generated.h"

class UEndAutoSeComponentSoundIndexTable;
class USQEXSEADAutoSeComponentSetting;
class USQEXSEADSound;
class USQEXSEADAutoSeDetectionSetting;
class USQEXSEADAutoSeComponent;
class UEndAutoSeCallback;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndFootAttributeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSound* SoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeComponentSetting* SettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeDetectionSetting* DetectionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAutoSeComponentSoundIndexTable* SoundIndexTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeComponent* AutoSeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEndAutoSeCallback* AutoSeCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledFootAttribute;
    
    UEndFootAttributeComponent();
};

