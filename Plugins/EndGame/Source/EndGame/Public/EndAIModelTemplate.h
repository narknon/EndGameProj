#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndAIModelTemplate.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, Const)
class ENDGAME_API UEndAIModelTemplate : public UObject {
    GENERATED_BODY()
public:
    UEndAIModelTemplate();
};

