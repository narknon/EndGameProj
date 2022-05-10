#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHookShotSeType.h"
#include "EndFieldActionActorHookShot.generated.h"

class UEndTextRenderComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndFieldActionActorHookShot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHookShotSeType HitSeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
    AEndFieldActionActorHookShot();
};

