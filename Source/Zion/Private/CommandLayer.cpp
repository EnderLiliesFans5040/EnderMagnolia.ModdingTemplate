#include "CommandLayer.h"

FCommandLayer::FCommandLayer() {
    this->CurrCommand = NULL;
    this->LayerType = ECommandLayerType::Default;
}

