#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SQEXSEADLayoutSound.generated.h"

class USQEXSEADLayoutComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASQEXSEADLayoutSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADLayoutComponent* LayoutComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSyncActorHidden: 1;
    
    ASQEXSEADLayoutSound();
};

