#pragma once
#include "CoreMinimal.h"
#include "EEndNavAreaType.h"
#include "EndNavSwitchingVolume.h"
#include "EndNavBlockingModifierVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavBlockingModifierVolume : public AEndNavSwitchingVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndNavAreaType NavAreaType;
    
public:
    AEndNavBlockingModifierVolume();
};

