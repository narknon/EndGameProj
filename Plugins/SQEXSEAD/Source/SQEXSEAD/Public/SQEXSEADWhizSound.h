#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SQEXSEADWhizSound.generated.h"

class USoundBase;
class USQEXSEADWhizSeComponent;

UCLASS(MinimalAPI)
class ASQEXSEADWhizSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SoundName;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USQEXSEADWhizSeComponent* WhizComponent;
    
    ASQEXSEADWhizSound();
};

