#include "TimelineEntry_Move.h"

FTimelineEntry_Move::FTimelineEntry_Move() {
    this->AccumulateMode = ERootMotionAccumulateMode::Override;
    this->MoveFactorCurve = NULL;
}

