#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSound.h"
#include "SQEXSEADMusic.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USQEXSEADMusic : public USQEXSEADSound {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FName, int32> SectionNameIndexTable;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, int32> ModeNameIndexTable;
    
    USQEXSEADMusic();
};

