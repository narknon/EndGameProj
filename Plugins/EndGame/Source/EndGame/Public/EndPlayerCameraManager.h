#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "EndPlayerCameraManager.generated.h"

class ACameraActor;

UCLASS(Blueprintable, NonTransient)
class AEndPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* MainCameraActor;
    
public:
    AEndPlayerCameraManager();
};

