#pragma once
#include "CoreMinimal.h"
#include "ESimpleCameraCollisionProfileType.h"
#include "GameFramework/Volume.h"
#include "EndSimpleCameraWallVolume.generated.h"

class UEndTextRenderComponent;

UCLASS(Blueprintable)
class AEndSimpleCameraWallVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleCameraCollisionProfileType CollisionProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
public:
    AEndSimpleCameraWallVolume();
};

