#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h"
#include "EndBattleNavQueryContext.generated.h"

class UObject;
class AActor;


UCLASS(Blueprintable, EditInlineNew)
class UEnEnvQueryContext_BlueprintBase : public UObject
{
    GENERATED_BODY()
};

UCLASS(Blueprintable, EditInlineNew)
class UEndBattleNavQueryContext : public UEnvQueryContext_BlueprintBase {
    GENERATED_BODY()
public:
    UEndBattleNavQueryContext();
    /*UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocationContext(AActor* Actor) const;*/
    
};

