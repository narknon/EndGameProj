#pragma once
#include "CoreMinimal.h"
#include "EEndCrossSaveJob.generated.h"

UENUM()
enum class EEndCrossSaveJob {
    None,
    Read,
    Upload,
    Download,
    Write,
    ReadUpload,
    DownloadWrite,
};

