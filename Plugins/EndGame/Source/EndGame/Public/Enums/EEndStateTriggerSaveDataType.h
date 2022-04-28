#pragma once
#include "CoreMinimal.h"
#include "EEndStateTriggerSaveDataType.generated.h"

UENUM()
enum class EEndStateTriggerSaveDataType {
    None,
    SnapSaveData,
    SafetySaveData_AutoSaveData,
    AutoSaveData,
    SnapSaveData_AutoSaveData,
    SnapSaveData_SafetySaveData_AutoSaveData,
    SnapOutput_SafetySaveData_AutoSaveData,
    SnapOutput_AutoSaveData,
};

