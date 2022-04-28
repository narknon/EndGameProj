#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundBase -FallbackName=SoundBase
#include "EndMenuSound.generated.h"

class USQEXSEADSound;

UCLASS(EditInlineNew)
class ENDGAME_API UEndMenuSound : public USoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USQEXSEADSound* SoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SoundName;
    
    UEndMenuSound();
};

