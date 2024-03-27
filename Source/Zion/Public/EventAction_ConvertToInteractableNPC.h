#pragma once
#include "CoreMinimal.h"
#include "EventAction_Convert.h"
#include "InteractableNPCData.h"
#include "Templates/SubclassOf.h"
#include "EventAction_ConvertToInteractableNPC.generated.h"

class ACharacterZionNPC;
class AInteractable_EventNPC;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ConvertToInteractableNPC : public UEventAction_Convert {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInteractable_EventNPC> InteractableNPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterZionNPC> NPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractableNPCData> NPCDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInteractable_EventNPC> LoadedInteractableNPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionNPC> LoadedNPCClass;
    
public:
    UEventAction_ConvertToInteractableNPC();

};

