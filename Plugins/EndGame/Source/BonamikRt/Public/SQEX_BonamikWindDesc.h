#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESQEX_Bonamik_WindType.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikWindDesc.generated.h"

UCLASS(Blueprintable)
class BONAMIKRT_API USQEX_BonamikWindDesc : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_WindType> m_WindType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WindForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RandomRange;
    
    UPROPERTY(EditAnywhere)
    float m_RandomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WaveMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WaveFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WaveMagOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WaveFreqOffset;
    
    UPROPERTY(EditAnywhere)
    float m_WaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CustomWaveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CustomWaveOffset;
    
    UPROPERTY(EditAnywhere)
    float m_CustomWaveTime;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_DataX;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_DataY;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_DataZ;
    
    UPROPERTY(EditAnywhere)
    float m_PointStrength;
    
    UPROPERTY(EditAnywhere)
    float m_BlastRange;
    
    UPROPERTY(EditAnywhere)
    float m_BlastSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_PointRadius;
    
    UPROPERTY(EditAnywhere)
    float m_PeakInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LoopNum;
    
    USQEX_BonamikWindDesc();
};

