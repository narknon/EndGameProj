#pragma once
#include "CoreMinimal.h"
#include "EndFieldActionSplineComponent.h"
#include "EndDuctSplineLinkInfo.h"
#include "EndDuctMoveSelectMenu.h"
#include "EndDuctActionSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndDuctActionSplineComponent : public UEndFieldActionSplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int8 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndDuctSplineLinkInfo> StartLinkIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndDuctSplineLinkInfo> EndLinkIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDuctMoveSelectMenu LeadSelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDuctMoveSelectMenu EndSelectMenu;
    
public:
    UEndDuctActionSplineComponent();
};

