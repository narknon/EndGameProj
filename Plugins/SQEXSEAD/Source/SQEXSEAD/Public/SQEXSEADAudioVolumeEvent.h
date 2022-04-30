#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAudioVolumeCommand.h"
#include "SQEXSEADAudioVolumeEvent.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAudioVolumeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADAudioVolumeCommand::Type> Command;
    
    UPROPERTY(EditAnywhere)
    float ExteriorAudioVolumeSoundOcclusionVolume;
    
    UPROPERTY(EditAnywhere)
    float ExteriorAudioVolumeSoundOcclusionLPF;
    
    UPROPERTY(EditAnywhere)
    float ObstructionVolume;
    
    UPROPERTY(EditAnywhere)
    float ObstructionLPF;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    FSQEXSEADAudioVolumeEvent();
};

