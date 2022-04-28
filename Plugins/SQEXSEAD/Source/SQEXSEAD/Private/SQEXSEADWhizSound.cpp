#include "SQEXSEADWhizSound.h"
#include "SQEXSEADWhizSeComponent.h"

ASQEXSEADWhizSound::ASQEXSEADWhizSound() {
    this->Sound = NULL;
    this->WhizComponent = CreateDefaultSubobject<USQEXSEADWhizSeComponent>(TEXT("WhizSeComponent0"));
}

