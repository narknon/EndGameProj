#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEndInterestPointTemplate.h"
#include "EndInteractorInterface.h"
#include "EEndInterestPointReactionActorType.h"
#include "EndInterestPoint.generated.h"

class UEndTextRenderComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndInterestPoint : public AActor, public IEndInteractorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndInterestPointReactionActorType Type;
    
    UPROPERTY(EditAnywhere)
    float InterestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndInterestPointTemplate InterestTemplateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InterestOverrideID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForcedRecognition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
public:
    AEndInterestPoint();
    
    // Fix for true pure virtual functions not being implemented
};

