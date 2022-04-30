#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "EndBattleLevelSequenceActor.generated.h"

class AEndBattleCameraActor;

UCLASS(Blueprintable)
class ENDGAME_API AEndBattleLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBattleCameraActor* CameraActor;
    
public:
    AEndBattleLevelSequenceActor();
private:
    UFUNCTION(BlueprintCallable)
    void OnStop();
    
};

