#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "EEndNaviMapOpenGroup.h"
#include "EEndNaviMapLayer.h"
#include "EEndNaviMapUniqueIndexOffset.h"
#include "EEndNaviMapSplitNum.h"
#include "EEndNaviMapVisitGroup.h"
#include "EndNaviMapVolumePoly.h"
#include "EndNaviMapVolume.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndNaviMapVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndNaviMapLayer LayerNumber;
    
    UPROPERTY(EditAnywhere)
    EEndNaviMapOpenGroup OpenGroupNumber;
    
    UPROPERTY(EditAnywhere)
    EEndNaviMapVisitGroup VisitGroupNumber;
    
    UPROPERTY(EditAnywhere)
    EEndNaviMapSplitNum SplitNum;
    
    UPROPERTY(EditAnywhere)
    EEndNaviMapUniqueIndexOffset UniqueIndexOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreGenetateTexture;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueIndex2nd;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndNaviMapVolumePoly> VolumePolys;
    
    AEndNaviMapVolume();
};

