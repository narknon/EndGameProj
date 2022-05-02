#pragma once
#include "CoreMinimal.h"
#include "EndSplineActorBase.h"
#include "BattleAISplineConnect.h"
#include "EndBattleAISpline.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndBattleAISpline : public AEndSplineActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleAISplineConnect> Connect;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    AEndBattleAISpline();
};

