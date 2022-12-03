#pragma once
#include "CoreMinimal.h"
#include "OnlineSubsystemEOSArtifact.generated.h"

USTRUCT(BlueprintType)
struct FOnlineSubsystemEOSArtifact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CatalogItemID;
    
    ONLINESUBSYSTEMEOS_API FOnlineSubsystemEOSArtifact();
};

