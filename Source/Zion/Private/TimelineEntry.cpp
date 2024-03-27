#include "TimelineEntry.h"

FTimelineEntry::FTimelineEntry() {
    this->ActiveType = ETimelineEntryActiveType::OneShot;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
}

