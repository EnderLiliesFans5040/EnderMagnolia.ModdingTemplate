#include "FMODEventControlTrack.h"
#include "FMODEventControlSectionTemplate.h"


UFMODEventControlTrack::UFMODEventControlTrack() {
}

bool UFMODEventControlTrack::HasSection(const UMovieSceneSection& Section) const
{
    return false;
}

void UFMODEventControlTrack::AddSection(UMovieSceneSection& Section)
{
}

void UFMODEventControlTrack::RemoveSection(UMovieSceneSection& Section)
{
}

bool UFMODEventControlTrack::IsEmpty() const
{
    return false;
}

const TArray<UMovieSceneSection*>& UFMODEventControlTrack::GetAllSections() const
{
    return ControlSections;
}

bool UFMODEventControlTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return false;
}

UMovieSceneSection* UFMODEventControlTrack::CreateNewSection()
{
    return nullptr;
}



FMovieSceneEvalTemplatePtr UFMODEventControlTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}

#if WITH_EDITORONLY_DATA
FText UFMODEventControlTrack::GetDefaultDisplayName() const
{
    return FText();
}
#endif