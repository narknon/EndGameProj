#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "UObject/NoExportTypes.h"
#include "EndPathWayBoxActor.generated.h"

class UEndNavModifierComponent;
class UBoxComponent;

UCLASS(Blueprintable, NotPlaceable)
class ENDGAME_API AEndPathWayBoxActor : public AActor, public INavRelevantInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PathWayDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PathWayBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* PathWayModifierVolume;
    
public:
    AEndPathWayBoxActor();
    
    // Fix for true pure virtual functions not being implemented
};

