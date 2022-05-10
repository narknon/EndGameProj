#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEN2002_02Controller.generated.h"

class AEndNavModifierVolume;

UCLASS(Blueprintable)
class AEndBattleAIEN2002_02Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndNavModifierVolume* CurrentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndNavModifierVolume* WebVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndNavModifierVolume* NextVolume;
    
public:
    AEndBattleAIEN2002_02Controller();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJumpNavVolume(TArray<FVector> InPoints, const FString& InBattleScene);
    
};

