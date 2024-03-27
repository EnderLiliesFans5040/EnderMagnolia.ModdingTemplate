#pragma once
#include "CoreMinimal.h"
#include "EventAction_Convert.h"
#include "Templates/SubclassOf.h"
#include "EventAction_ConvertToNPC.generated.h"

class ACharacterZionNPC;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ConvertToNPC : public UEventAction_Convert {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterZionNPC> NPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionNPC> LoadedNPCClass;
    
public:
    UEventAction_ConvertToNPC();

};

