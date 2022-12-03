#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "UObject/NoExportTypes.h"
#include "EFieldActionActorType.h"
#include "UObject/NoExportTypes.h"
#include "EndFieldActionTriggerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndFieldActionTriggerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFieldActionActorType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator IconOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawPlane;
    
    UEndFieldActionTriggerComponent();
};

