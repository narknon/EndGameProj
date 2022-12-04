#pragma once
#include "CoreMinimal.h"
#include "EndBattleCameraActor.h"
#include "LevelSequenceActor.h"
#include "EndBattleLevelSequenceActor.generated.h"


UCLASS(Blueprintable)
class ENDGAME_API AEndBattleLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBattleCameraActor* CameraActor;
    
public:
    AEndBattleLevelSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
private:
    UFUNCTION(BlueprintCallable)
    void OnStop();
    
};

