#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndBikeManagerActor.generated.h"

class UEndBikeNormalPopupComponent;
class UEndBikeEndlessPopupComponent;
class UEndBikePlayerController;
class UEndBikeCutSceneComponent;
class UEndBikeScoreComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndBikeManagerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEndBikeNormalPopupComponent* pNormalPopupComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TMap<int32, TWeakObjectPtr<UEndBikeEndlessPopupComponent>> pEndlessPopupComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEndBikeCutSceneComponent* pCutSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEndBikeScoreComponent* pScoreComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEndBikePlayerController* pPlayerController;
    
    AEndBikeManagerActor();
};

