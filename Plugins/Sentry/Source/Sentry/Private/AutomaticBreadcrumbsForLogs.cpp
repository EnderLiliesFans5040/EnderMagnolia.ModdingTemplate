#include "AutomaticBreadcrumbsForLogs.h"

FAutomaticBreadcrumbsForLogs::FAutomaticBreadcrumbsForLogs() {
    this->bOnFatalLog = false;
    this->bOnErrorLog = false;
    this->bOnWarningLog = false;
    this->bOnInfoLog = false;
    this->bOnDebugLog = false;
}

