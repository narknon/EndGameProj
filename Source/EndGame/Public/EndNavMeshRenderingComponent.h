#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavMeshRenderingComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavMeshRenderingComponent -FallbackName=NavMeshRenderingComponent
#include "EndNavMeshRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndNavMeshRenderingComponent : public UNavMeshRenderingComponent {
    GENERATED_BODY()
public:
    UEndNavMeshRenderingComponent();
};

