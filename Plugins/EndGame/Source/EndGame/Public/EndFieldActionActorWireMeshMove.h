#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WireMovePointData.h"
#include "EndFieldActionActorWireMeshMove.generated.h"

class UEndWireMeshMoveDoorWayCreateComponent;
class UEndTextRenderComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndFieldActionActorWireMeshMove : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointSpaceLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndWireMeshMoveDoorWayCreateComponent* EndWireMeshMoveDoorWayCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndWireMeshMoveDoorWayCreateComponent* EndWireMeshMoveDoorWayCreate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWireMovePointData> PointData;
    
    UPROPERTY(EditAnywhere)
    uint32 PointMaxNum;
    
    AEndFieldActionActorWireMeshMove();
};

