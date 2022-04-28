#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SQEXSEADLayoutSound.generated.h"

class USQEXSEADLayoutComponent;

UCLASS(MinimalAPI)
class ASQEXSEADLayoutSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USQEXSEADLayoutComponent* LayoutComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSyncActorHidden: 1;
    
    ASQEXSEADLayoutSound();
};

