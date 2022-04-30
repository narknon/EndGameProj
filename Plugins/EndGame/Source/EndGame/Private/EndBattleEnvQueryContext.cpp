#include "EndBattleEnvQueryContext.h"

class AEndCharacter;
class UEndEnvQueryComponent;



TArray<FVector> UEndBattleEnvQueryContext::GetTargetLocationContexts(UEndEnvQueryComponent* InQuery, bool InParty, float InDistance) const {
    return TArray<FVector>();
}

TArray<AEndCharacter*> UEndBattleEnvQueryContext::GetTargetContexts(UEndEnvQueryComponent* InQuery, bool InParty, float InDistance) const {
    return TArray<AEndCharacter*>();
}

UEndBattleEnvQueryContext::UEndBattleEnvQueryContext() {
}

