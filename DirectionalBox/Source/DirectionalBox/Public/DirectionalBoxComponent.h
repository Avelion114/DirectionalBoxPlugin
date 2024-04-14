// Stephen Nelson 2024
// https://github.com/Avelion114

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "DirectionalBoxComponent.generated.h"


class UDirectionalBoxComponent;

UENUM(BlueprintType, meta=(ToolTip="Represents the six sides of a box component."))
enum class EBoxDirection : uint8
{
	None = 0 UMETA(Hidden),
	Front,
	Right,
	Top,
	Back,
	Left,
	Bottom
};


//Delegates for new overlap events that include the directional info
/*
 * @param BoxSide Side of the box that was entered
 */
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SevenParams(FBeginOverlapWithDirectionInfoSignature, UDirectionalBoxComponent, OnBeginOverlapWithDirectionInfo, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult, EBoxDirection, BoxSide);

/*
 * @param BoxSide Side of the box that was exited
 */
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FiveParams(FEndOverlapWithDirectionInfoSignature, UDirectionalBoxComponent, OnEndOverlapWithDirectionInfo, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, EBoxDirection, BoxSide);




UCLASS(ClassGroup=Collision, meta=(DisplayName="Directional Box Collision", BlueprintSpawnableComponent))
class DIRECTIONALBOX_API UDirectionalBoxComponent : public UBoxComponent
{
	GENERATED_BODY()


public:

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:

	EBoxDirection GetBoxSideFromOverlap(const FVector& WorldLocation);

	FVector GetEndOverlapLocation(UPrimitiveComponent* OtherComp);

public:

	/*
	 * Called when another component overlaps this component.
	 * Also returns the side of the box that was overlapped. 
	 */
	UPROPERTY(BlueprintAssignable, Category = Collision)
	FBeginOverlapWithDirectionInfoSignature OnBeginOverlapWithDirectionInfo;


	/*
	 * Called when another component stops overlapping this component.
	 * Also returns the side of the box that was exited on the event.
	 */
	UPROPERTY(BlueprintAssignable, Category = Collision)
	FEndOverlapWithDirectionInfoSignature OnEndOverlapWithDirectionInfo;


	//Extent of visualization lines outside the box
	UPROPERTY(EditAnywhere, Category = Visualization)
	float VisualizationLineExtent = 20;

	//How far the line should start from the center of the box
	UPROPERTY(EditAnywhere, Category = Visualization, meta = (ClampMin = "0", ClampMax = "1"))
	float VisualizationDistanceAlpha;

	UPROPERTY(EditAnywhere, Category = Visualization, meta = (ClampMin = "0"))
	float VisualizationThickness = 1;

	
};