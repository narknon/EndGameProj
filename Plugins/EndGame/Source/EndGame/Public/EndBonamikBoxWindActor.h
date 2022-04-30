#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "UObject/NoExportTypes.h"
#include "EndBonamikBoxWindActor.generated.h"

class UEndBonamikWindData;
class USQEX_BonamikWind;

UCLASS(Blueprintable)
class AEndBonamikBoxWindActor : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndBonamikWindData* WindData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWind* BonamikWind;
    
public:
    AEndBonamikBoxWindActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

