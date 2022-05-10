#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "EndPhysicsHandleComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew)
class UEnPhysicsHandleComponent : public UObject
{
    GENERATED_BODY()
public:
    UEnPhysicsHandleComponent();
};

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndPhysicsHandleComponent : public UEnPhysicsHandleComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetScene;
    
public:
    UEndPhysicsHandleComponent();
};

