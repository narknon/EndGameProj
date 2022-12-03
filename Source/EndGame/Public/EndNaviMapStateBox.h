#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEndNaviMapOpenGroup.h"
#include "EEndNaviMapLayer.h"
#include "EEndNaviMapVisitGroup.h"
#include "EEndSceneNaviMapState.h"
#include "EndNaviMapStateBox.generated.h"

UCLASS(Blueprintable)
class AEndNaviMapStateBox : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndNaviMapLayer LayerNumber;
    
    UPROPERTY(EditAnywhere)
    EEndNaviMapOpenGroup OpenGroupNumber;
    
    UPROPERTY(EditAnywhere)
    EEndNaviMapVisitGroup VisitGroupNumber;
    
    UPROPERTY(EditAnywhere)
    EEndSceneNaviMapState TargetState;
    
    AEndNaviMapStateBox();
};

