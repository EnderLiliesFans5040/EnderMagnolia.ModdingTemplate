#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_Dummy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Dummy : public UCommandModule {
    GENERATED_BODY()
public:
    UCommandModule_Dummy();

};

