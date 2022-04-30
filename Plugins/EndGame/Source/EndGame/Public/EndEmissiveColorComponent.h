#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndEmissiveColorComponent.generated.h"

class UEndEmissiveColorUserData;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndEmissiveColorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndEmissiveColorUserData* EmissiveColorUserData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> Meshes;
    
public:
    UEndEmissiveColorComponent();
};

