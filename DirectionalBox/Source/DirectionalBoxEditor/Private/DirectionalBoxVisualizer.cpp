// Stephen Nelson 2024
// https://github.com/Avelion114



#include "DirectionalBoxVisualizer.h"
#include "DirectionalBoxComponent.h"

void FDirectionalBoxVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	if(const UDirectionalBoxComponent* DBoxComponent = Cast<UDirectionalBoxComponent>(Component))
	{
		const float T = DBoxComponent->VisualizationThickness;
		const float E = DBoxComponent->VisualizationLineExtent;
		const float A = DBoxComponent->VisualizationDistanceAlpha;

		const FVector XWall = DBoxComponent->GetComponentLocation() + (DBoxComponent->GetForwardVector() * DBoxComponent->GetScaledBoxExtent().X);
		const FVector YWall= DBoxComponent->GetComponentLocation() + (DBoxComponent->GetRightVector() * DBoxComponent->GetScaledBoxExtent().Y);
		const FVector ZWall = DBoxComponent->GetComponentLocation() + (DBoxComponent->GetUpVector() * DBoxComponent->GetScaledBoxExtent().Z);

		PDI->DrawLine(FMath::Lerp(DBoxComponent->GetComponentLocation(), XWall, A), XWall + DBoxComponent->GetForwardVector() * E, FLinearColor::Red, SDPG_Foreground, T);
		PDI->DrawLine(FMath::Lerp(DBoxComponent->GetComponentLocation(), YWall, A), YWall + (DBoxComponent->GetRightVector() * E), FLinearColor::Green, SDPG_Foreground, T);
		PDI->DrawLine(FMath::Lerp(DBoxComponent->GetComponentLocation(), ZWall, A), ZWall + (DBoxComponent->GetUpVector() * E), FLinearColor::Blue, SDPG_Foreground, T);
	}

}
