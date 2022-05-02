#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndBattleAIBaseAsyncComponent.generated.h"

class AEndBattleAIController;
class AEndCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBattleAIBaseAsyncComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* thiz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBattleAIController* bai;
    
    UEndBattleAIBaseAsyncComponent();
};

