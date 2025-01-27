#include "CurrencyTransactionInfos.h"

FCurrencyTransactionInfos::FCurrencyTransactionInfos() {
    this->CurrencyType = ECurrencyType::Default;
    this->CostType = EValueType::Fixed;
    this->FixedValue = 0;
}

