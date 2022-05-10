#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndFieldCameraOperator.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndFieldCameraOperator : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* ownerChara;
    
public:
    AEndFieldCameraOperator();
    UFUNCTION(BlueprintCallable)
    void OnOwnerCharaChangedAttachedActors();
    
};

