#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EndBonamikGlobalWindActor.generated.h"

class USQEX_BonamikWind;
class UEndBonamikWindData;

UCLASS(Blueprintable)
class AEndBonamikGlobalWindActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndBonamikWindData* WindData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWind* BonamikWind;
    
public:
    AEndBonamikGlobalWindActor();
    UFUNCTION(BlueprintCallable)
    void SetWindData(UEndBonamikWindData* InWindData);
    
    UFUNCTION(BlueprintCallable)
    void SetDirection(const FVector& InDirection);
    
};

