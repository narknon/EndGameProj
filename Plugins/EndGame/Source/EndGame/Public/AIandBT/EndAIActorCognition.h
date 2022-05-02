#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndAIActorCognition.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIActorCognition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RecognizedLocation;
    
    UPROPERTY(EditAnywhere, Transient)
    float LastRecognitionTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    float Interest;
    
    UPROPERTY(EditAnywhere, Transient)
    float Experience;
    
    UPROPERTY(EditAnywhere, Transient)
    float Caution;
    
    FEndAIActorCognition();
};

