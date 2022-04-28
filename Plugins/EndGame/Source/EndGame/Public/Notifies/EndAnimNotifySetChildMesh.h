#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifySetChildMesh.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifySetChildMesh : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> MeshLabels;
    
    UEndAnimNotifySetChildMesh();
};

