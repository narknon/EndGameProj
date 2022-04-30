#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "EndNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class AEndNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AEndNavLinkProxy();
};

