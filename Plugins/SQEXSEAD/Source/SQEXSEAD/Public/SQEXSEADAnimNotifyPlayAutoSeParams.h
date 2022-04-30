#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADANPlayAutoSeSourceType.h"
#include "ESQEXSEADAutoSePartsType.h"
#include "ESQEXSEADAutoSeMotionSoundType.h"
#include "SQEXSEADAnimNotifyPlayAutoSeParams.generated.h"

class USQEXSEADSurfaceAssetReferenceTable;

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAnimNotifyPlayAutoSeParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADANPlayAutoSeSourceType::Type> SourceType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADAutoSeMotionSoundType::Type> MotionSoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSurfaceAssetReferenceTable* SurfaceAssetPathTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SurfaceAssetTableRecordName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADAutoSePartsType::Type> AutoSePartsType;
    
    UPROPERTY(EditAnywhere)
    uint8 AutoSePartsIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCheckIsGrounded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttachToParts: 1;
    
    UPROPERTY(EditAnywhere)
    float SoundVolume;
    
    UPROPERTY(EditAnywhere)
    float SoundPitchMultiplier;
    
    FSQEXSEADAnimNotifyPlayAutoSeParams();
};

