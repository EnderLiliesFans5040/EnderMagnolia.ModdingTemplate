#include "InputDescription.h"

FInputDescription::FInputDescription() {
    this->InputType = EInputType::UI;
    this->UIInputType = EUIInputType::None;
    this->ActionInputType = EActionInputType::None;
    this->InputAction = NULL;
}

