#include "OSDKHTTPStatistics.h"

FOSDKHTTPStatistics::FOSDKHTTPStatistics() {
    this->CurrentCountOfQueuedRequests = 0;
    this->MaxCountOfQueuedRequests = 0;
    this->CurrentCountOfActiveRequests = 0;
    this->MaxCountOfActiveRequests = 0;
    this->CountOfCompletedRequests = 0;
    this->CountOfResponseSuccesses = 0;
    this->CountOfResponseFailures = 0;
    this->CountOfResponseCanceled = 0;
    this->SumOfSerializationMilliseconds = 0;
    this->MaxOfSerializationMilliseconds = 0;
    this->SumOfDeserializationMilliseconds = 0;
    this->MaxOfDeserializationMilliseconds = 0;
    this->SumOfQueuedMilliseconds = 0;
    this->MaxOfQueuedMilliseconds = 0;
    this->SumOfTransferMilliseconds = 0;
    this->MaxOfTransferMilliseconds = 0;
    this->SumOfRequestMilliseconds = 0;
    this->MaxOfRequestMilliseconds = 0;
    this->SumOfSentBytes = 0;
    this->MaxOfSentBytes = 0;
    this->SumOfReceivedBytes = 0;
    this->MaxOfReceivedBytes = 0;
}

