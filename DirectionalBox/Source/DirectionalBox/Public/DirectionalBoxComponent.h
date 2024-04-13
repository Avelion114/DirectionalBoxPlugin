// Stephen Nelson 2024
// https://github.com/Avelion114

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "DirectionalBoxComponent.generated.h"


class UDirectionalBoxComponent;

UENUM(BlueprintType)
enum class EBoxDirection : uint8
{
	None = 0,
	Front,
	Right,
	Top,
	Back,
	Left,
	Bottom
};


//Delegates for new overlap events that include the directional info
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SevenParams(FBeginOverlapWithDirectionInfoSignature, UDirectionalBoxComponent, OnBeginOverlapWithDirectionInfo, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult, EBoxDirection, Direction);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FiveParams(FEndOverlapWithDirectionInfoSignature, UDirectionalBoxComponent, OnEndOverlapWithDirectionInfo, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, EBoxDirection, Direction);


UCLASS(meta=(BlueprintSpawnableComponent))
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

	UPROPERTY(BlueprintAssignable, Category = Collision)
	FBeginOverlapWithDirectionInfoSignature OnBeginOverlapWithDirectionInfo;

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
