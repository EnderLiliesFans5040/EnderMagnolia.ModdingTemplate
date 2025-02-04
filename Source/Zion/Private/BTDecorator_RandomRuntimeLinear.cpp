#include "BTDecorator_RandomRuntimeLinear.h"

UBTDecorator_RandomRuntimeLinear::UBTDecorator_RandomRuntimeLinear() {
    this->NodeName = TEXT("[Zion] Random Runtime Linear");
    this->MinSuccessPercentage = 0.00f;
    this->MaxSuccessPercentage = 0.00f;
    this->TimeToReachMaxSuccessPercentage = 0.00f;
    this->BlendType = ERandomRuntimeLinearBlendType::Linear;
    this->EaseExp = 2.00f;
}


