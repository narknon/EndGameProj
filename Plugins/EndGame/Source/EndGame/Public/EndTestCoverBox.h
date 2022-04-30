#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndTestCoverBox.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class AEndTestCoverBox : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* WallComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* CameraWallComponent;
    
    AEndTestCoverBox();
};

