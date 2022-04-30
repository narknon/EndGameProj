#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSePostDetectionSettings.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSePostDetectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float VolumeScale;
    
    FSQEXSEADAutoSePostDetectionSettings();
};

