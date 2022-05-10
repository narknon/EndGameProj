#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "EndBattleDamageSourceCollisionCapsuleComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBattleDamageSourceCollisionCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    FName CategoryID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PossessionActor;
    
public:
    UEndBattleDamageSourceCollisionCapsuleComponent();
};

