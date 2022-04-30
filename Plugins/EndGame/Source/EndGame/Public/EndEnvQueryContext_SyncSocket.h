#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EndEnvQueryContext_SyncSocket.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndEnvQueryContext_SyncSocket : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEndEnvQueryContext_SyncSocket();
};

