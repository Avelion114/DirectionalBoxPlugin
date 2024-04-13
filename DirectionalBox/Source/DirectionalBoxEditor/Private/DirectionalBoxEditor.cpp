#include "DirectionalBoxEditor.h"
#include "DirectionalBoxComponent.h"
#include "DirectionalBoxVisualizer.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"


IMPLEMENT_GAME_MODULE(FDirectionalBoxEditorModule, DirectionalBoxEditor);

void FDirectionalBoxEditorModule::StartupModule()
{
	//Check if editor is valid
	if(GUnrealEd)
	{
		GUnrealEd->RegisterComponentVisualizer(UDirectionalBoxComponent::StaticClass()->GetFName(), MakeShareable(new FDirectionalBoxVisualizer));

	}
}

void FDirectionalBoxEditorModule::ShutdownModule()
{
	if(GUnrealEd)
	{
		GUnrealEd->UnregisterComponentVisualizer(UDirectionalBoxComponent::StaticClass()->GetFName());
	}
}
