// Stephen Nelson 2024
// https://github.com/Avelion114


#pragma once

#include "CoreMinimal.h"
#include "ComponentVisualizer.h"


/**
 * 
 */
class DIRECTIONALBOXEDITOR_API FDirectionalBoxVisualizer : public FComponentVisualizer
{
public:

	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;

};
