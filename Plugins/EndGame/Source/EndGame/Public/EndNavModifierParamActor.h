#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndNavModifierInfo.h"
#include "EndNavModifierParamActor.generated.h"

UCLASS(Blueprintable)
class AEndNavModifierParamActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<uint32, FEndNavModifierInfo> ModifierInfoTable;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, uint32> ModifierIdTable;
    
public:
    AEndNavModifierParamActor();
};

