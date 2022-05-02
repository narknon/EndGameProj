#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleCharaAttach.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleCharaAttach : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Attached;
    
    UPROPERTY(EditAnywhere)
    uint8 AttachMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerSync;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableTarget;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableAttachedInvincible;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableAttachedCollision;
    
    UPROPERTY(EditAnywhere)
    uint8 KindMesh;
    
    UPROPERTY(EditAnywhere)
    uint8 AttachedResetRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachParentSocketName0;
    
    UPROPERTY(EditAnywhere)
    uint8 AttachedCameraLockPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MasterMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildMeshName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildMeshName2;
    
    UPROPERTY(EditAnywhere)
    uint8 CharacterType;
    
    UPROPERTY(EditAnywhere)
    uint8 AffectedParentStop;
    
    FEndDataTableBattleCharaAttach();
};

