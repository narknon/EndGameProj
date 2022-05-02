#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableMapIconInfo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableMapIconInfo : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ViewFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationID;
    
    UPROPERTY(EditAnywhere)
    uint8 IconType;
    
    UPROPERTY(EditAnywhere)
    uint8 ViewNavimap;
    
    UPROPERTY(EditAnywhere)
    uint8 ViewCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InText;
    
    UPROPERTY(EditAnywhere)
    uint8 ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    float OffsetX;
    
    UPROPERTY(EditAnywhere)
    float OffsetY;
    
    UPROPERTY(EditAnywhere)
    float OffsetZ;
    
    UPROPERTY(EditAnywhere)
    float HeightFromOffset;
    
    UPROPERTY(EditAnywhere)
    float ViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NaviMapLayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterID;
    
    FEndDataTableMapIconInfo();
};

