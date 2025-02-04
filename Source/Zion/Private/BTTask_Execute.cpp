#include "BTTask_Execute.h"

UBTTask_Execute::UBTTask_Execute() {
    this->NodeName = TEXT("[Zion] Execute");
    this->bRequireInstantUpdate = false;
    this->bClearOnAbort = false;
}

void UBTTask_Execute::OnFinishCommand(const UCommand* Command, ECommandFinishType FinishType) {
}


