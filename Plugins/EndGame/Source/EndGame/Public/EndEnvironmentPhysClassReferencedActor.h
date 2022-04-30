#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndEnvironmentPhysClassReferencedActor.generated.h"

UCLASS(Blueprintable)
class AEndEnvironmentPhysClassReferencedActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AssetUserData;
    
    AEndEnvironmentPhysClassReferencedActor();
};

