// Stephen Nelson 2024
// https://github.com/Avelion114


#include "DirectionalBoxComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UDirectionalBoxComponent::BeginPlay()
{
	OnComponentBeginOverlap.AddDynamic(this, &UDirectionalBoxComponent::OnBeginOverlap);
	OnComponentEndOverlap.AddDynamic(this, &UDirectionalBoxComponent::OnEndOverlap);
}

void UDirectionalBoxComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	const EBoxDirection Direction = GetBoxSideFromOverlap(SweepResult.ImpactPoint);

	OnBeginOverlapWithDirectionInfo.Broadcast(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult, Direction);
}

void UDirectionalBoxComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	const EBoxDirection Direction = GetBoxSideFromOverlap(GetEndOverlapLocation(OtherComp));

	OnEndOverlapWithDirectionInfo.Broadcast(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, Direction);
}

EBoxDirection UDirectionalBoxComponent::GetBoxSideFromOverlap(const FVector& WorldLocation)
{
	
	FVector Location = UKismetMathLibrary::InverseTransformLocation(GetComponentTransform(), WorldLocation);
	FVector Extent = GetScaledBoxExtent();
	Extent.Normalize();
	Location /= Extent;
	Location.Normalize();
	FVector Value = Location.GetAbs();
	int32 Index = -1;
	float Max;
	UKismetMathLibrary::MaxOfFloatArray({ static_cast<float>(Value.X), static_cast<float>(Value.Y), static_cast<float>(Value.Z) }, Index, Max);

	switch (Index)
	{
	case 0:
		return ((Location.X > 0) ? EBoxDirection::Front : EBoxDirection::Back);
	case 1:
		return ((Location.Y > 0) ? EBoxDirection::Right : EBoxDirection::Left);
	case 2:
		return ((Location.Z > 0) ? EBoxDirection::Top : EBoxDirection::Bottom);
	}

	return EBoxDirection::None;
}

FVector UDirectionalBoxComponent::GetEndOverlapLocation(UPrimitiveComponent* OtherComp)
{
	FHitResult OutHit;
	FCollisionShape Shape;
	Shape.SetSphere(FMath::Max(GetScaledBoxExtent().X, GetScaledBoxExtent().Y));

	OtherComp->SweepComponent(OutHit, GetComponentLocation(), OtherComp->GetComponentLocation(), FQuat{ 0, 0, 0, 0 }, Shape);
	return OutHit.ImpactPoint;
}
