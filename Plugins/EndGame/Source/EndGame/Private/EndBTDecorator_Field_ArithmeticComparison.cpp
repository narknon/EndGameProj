#include "EndBTDecorator_Field_ArithmeticComparison.h"

UEndBTDecorator_Field_ArithmeticComparison::UEndBTDecorator_Field_ArithmeticComparison() {
    this->ValueTypeA = EBTDecorator_Field_ArithmeticComparisonSource::Blackboard;
    this->bUseBlackboardA = true;
    this->bUsePropertyOrFunctionA = false;
    this->bUseLiteralA = false;
    this->LiteralValueA = 1;
    this->ArithmeticOperation = EEndAiMathCmp::Equal;
    this->ValueTypeB = EBTDecorator_Field_ArithmeticComparisonSource::Blackboard;
    this->bUseBlackboardB = false;
    this->bUsePropertyOrFunctionB = false;
    this->bUseLiteralB = true;
    this->LiteralValueB = 1;
}

