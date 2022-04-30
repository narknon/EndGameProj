#pragma once
#include "CoreMinimal.h"
#include "EndBattleNavQueryContext.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h"
#include "EndBattleEnvQueryContext.generated.h"

class UObject;
class AActor;
class AEndCharacter;
class UEndEnvQueryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UEndBattleEnvQueryContext : public UEnEnvQueryContext_BlueprintBase {
    GENERATED_BODY()
public:
    UEndBattleEnvQueryContext();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetTargetLocationContexts(UEndEnvQueryComponent* InQuery, bool InParty, float InDistance) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AEndCharacter*> GetTargetContexts(UEndEnvQueryComponent* InQuery, bool InParty, float InDistance) const;
    
};

