#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAIPCRecognitionVolumeType.h"
#include "EndBattleAIPCRecognitionVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AEndBattleAIPCRecognitionVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIPCRecognitionVolumeType VolumeType;
    
    UPROPERTY(EditAnywhere)
    uint32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    AEndBattleAIPCRecognitionVolume();
};

