#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_SetSpineSkins.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UEventAction_SetSpineSkins : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Skins;
    
public:
    UEventAction_SetSpineSkins();

};

