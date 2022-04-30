#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EEndWireMeshMoveStartType.h"
#include "EndWireMeshMoveDoorWayCreateComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndWireMeshMoveDoorWayCreateComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndWireMeshMoveStartType MoveStartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotCreateGoal;
    
    UEndWireMeshMoveDoorWayCreateComponent();
};

