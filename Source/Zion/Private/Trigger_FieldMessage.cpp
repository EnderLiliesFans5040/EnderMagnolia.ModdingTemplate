#include "Trigger_FieldMessage.h"
#include "ClearComponent.h"
#include "FieldMessageComponent.h"

ATrigger_FieldMessage::ATrigger_FieldMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FieldMessageComponent = CreateDefaultSubobject<UFieldMessageComponent>(TEXT("FieldMessage"));
    this->ClearComponent = CreateDefaultSubobject<UClearComponent>(TEXT("Clear"));
    this->FieldMessageAsset = NULL;
    this->Cooldown = 0.00f;
    this->FieldMessageComponent->SetupAttachment(RootComponent);
}

void ATrigger_FieldMessage::OnFieldMessageFinished() {
}

void ATrigger_FieldMessage::OnClearStatusChecked(EClearStatus ClearStatus) {
}


