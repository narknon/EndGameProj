#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndCrossSaveManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UEndCrossSaveManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* MessageWidget;
    
public:
    UEndCrossSaveManager();
};

