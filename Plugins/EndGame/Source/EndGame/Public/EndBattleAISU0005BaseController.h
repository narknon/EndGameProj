#pragma once
#include "CoreMinimal.h"
#include "EndBattleAISummonBaseController.h"
#include "EndBattleAISU0005BaseController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0005BaseController : public AEndBattleAISummonBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float EXModeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EXAbilityPostfix;
    
    UPROPERTY(EditAnywhere)
    float PathFindHeight;
    
public:
    AEndBattleAISU0005BaseController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTurnRed();
    
};

