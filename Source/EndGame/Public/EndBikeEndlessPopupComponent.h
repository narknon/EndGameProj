#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndBikeEndlessPopupComponent.generated.h"

class UEndBikePopupComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBikeEndlessPopupComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEndBikePopupComponent* pPopupComponent;
    
public:
    UEndBikeEndlessPopupComponent();
};

