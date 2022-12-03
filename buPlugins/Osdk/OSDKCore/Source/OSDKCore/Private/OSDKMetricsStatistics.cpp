#include "OSDKMetricsStatistics.h"

FOSDKMetricsStatistics::FOSDKMetricsStatistics() {
    this->CurrentCountOfQueuedMetrics = 0;
    this->MaxCountOfQueuedMetrics = 0;
    this->CountOfQueuedMetrics = 0;
    this->CountOfSentMetrics = 0;
    this->CountOfDroppedMetrics = 0;
    this->CountOfMetricFlushes = 0;
}

