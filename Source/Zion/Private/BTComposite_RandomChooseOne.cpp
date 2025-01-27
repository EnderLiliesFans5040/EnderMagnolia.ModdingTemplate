#include "BTComposite_RandomChooseOne.h"

UBTComposite_RandomChooseOne::UBTComposite_RandomChooseOne() {
    this->NodeName = TEXT("[Zion] Random Choose One");
}

void UBTComposite_RandomChooseOne::InitializeMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryInit::Type InitType) const
{
}

void UBTComposite_RandomChooseOne::CleanupMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryClear::Type CleanupType) const
{
}


