#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BonamikBoxWindData.h"
#include "UObject/NoExportTypes.h"
#include "EndBonamikBoxWindComponent.generated.h"

class USQEX_BonamikWind;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndBonamikBoxWindComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonamikBoxWindData WindData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    float AreaMargin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWind* BonamikWind;
    
public:
    UEndBonamikBoxWindComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
};

