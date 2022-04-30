#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndItemDropComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndItemDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MakoStoneDamageSourceOwnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMakoStoneEffect;
    
    UEndItemDropComponent();
};

