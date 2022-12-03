#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ENaviMapIconDirection.h"
#include "EndNaviMapIcon.generated.h"

class UEndTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UEndNaviMapIcon : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ArrowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENaviMapIconDirection ArrowDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ArrowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSecretDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInsideArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEndTextBlock* CachedDistanceTextBlock;
    
public:
    UEndNaviMapIcon();
    UFUNCTION(BlueprintCallable)
    void SetDistance(float InDistance);
    
};

