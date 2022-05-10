#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "EndPathWayBoxActor.generated.h"

class UBoxComponent;
class UEndNavModifierComponent;

UCLASS(Blueprintable, NotPlaceable)
class ENDGAME_API AEndPathWayBoxActor : public AActor, public INavRelevantInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PathWayDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* PathWayBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* PathWayModifierVolume;
    
public:
    AEndPathWayBoxActor();
    
    // Fix for true pure virtual functions not being implemented
};

