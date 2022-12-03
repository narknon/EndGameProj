#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "EndTargetPoint.generated.h"

class UEndTextRenderComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndTargetPoint : public ATargetPoint, public INavRelevantInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
public:
    AEndTargetPoint();
    
    // Fix for true pure virtual functions not being implemented
};

