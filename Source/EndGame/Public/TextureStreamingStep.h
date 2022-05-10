#pragma once
#include "CoreMinimal.h"
#include "TextureStreamingStep.generated.h"

UENUM()
enum class TextureStreamingStep {
    None,
    Wait,
    Finish,
};

