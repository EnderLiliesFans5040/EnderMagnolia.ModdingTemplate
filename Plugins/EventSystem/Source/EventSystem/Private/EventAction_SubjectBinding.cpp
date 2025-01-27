#include "EventAction_SubjectBinding.h"

UEventAction_SubjectBinding::UEventAction_SubjectBinding() {
}

FText UEventAction_SubjectBinding::GetSubjectName() const {
    return FText::GetEmpty();
}

AActor* UEventAction_SubjectBinding::GetSubject() const {
    return NULL;
}


