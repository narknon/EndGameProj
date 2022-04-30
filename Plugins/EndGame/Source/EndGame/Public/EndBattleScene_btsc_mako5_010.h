#pragma once
#include "CoreMinimal.h"
#include "EndBattleSceneBlueprint.h"
#include "EndBattleScene_btsc_mako5_010.generated.h"

UCLASS(Blueprintable)
class AEndBattleScene_btsc_mako5_010 : public AEndBattleSceneBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName airBusterActorName_;
    
    AEndBattleScene_btsc_mako5_010();
};

