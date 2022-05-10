#include "EndEnvQueryCharacterGenerator.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEndEnvQueryCharacterGenerator::UEndEnvQueryCharacterGenerator() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

