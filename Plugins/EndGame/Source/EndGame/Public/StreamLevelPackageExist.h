#pragma once
#include "CoreMinimal.h"
#include "StreamLevelPackageExist.generated.h"

UENUM()
enum class StreamLevelPackageExist {
    StreamLevelPackageExist_RESET,
    StreamLevelPackageExist_NONE_FILE,
    StreamLevelPackageExist_EXIT_FILE,
};

