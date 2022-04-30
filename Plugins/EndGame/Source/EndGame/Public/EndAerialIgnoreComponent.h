#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EAerialIgnoreShapeType.h"
#include "UObject/NoExportTypes.h"
#include "EndAerialIgnoreComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndAerialIgnoreComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AerialVolumeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAerialIgnoreShapeType MeshShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(EditAnywhere)
    float SphereRadius;
    
public:
    UEndAerialIgnoreComponent();
};

