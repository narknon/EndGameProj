#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EndSwitchableSkeletalMeshPair.generated.h"




class USkeletalMesh;

UCLASS(Blueprintable)
// Class Engine.MaterialOverrideCollection
// 0x0060 (0x0090 - 0x0030)
class UMaterialOverrideCollection : public UDataAsset
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    class USkeleton*                                   Skeleton;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh*                               SkeletalMesh;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, class UMaterialInterface*>      OverrideMaterials;                                        // 0x0040(0x0050) (Edit, ZeroConstructor)
    
};


class UMaterialOverrideCollection;

USTRUCT(BlueprintType)
struct FEndSwitchableSkeletalMeshPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialOverrideCollection* MaterialOverrideCollection;
    
    ENDGAME_API FEndSwitchableSkeletalMeshPair();
};

