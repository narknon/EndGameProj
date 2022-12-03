#pragma once
#include "CoreMinimal.h"
#include "Interfaces/Interface_AssetUserData.h"
#include "UObject/Object.h"
#include "EndAssetPack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndAssetPack : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AssetUserData;
    
    UEndAssetPack();
    
    // Fix for true pure virtual functions not being implemented
};

