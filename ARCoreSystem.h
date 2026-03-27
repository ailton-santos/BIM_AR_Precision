#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ARCoreSystem.generated.h"

UCLASS()
class UARCoreSystem : public UActorComponent {
    GENERATED_BODY()
public:
    UARCoreSystem();
    float SpatialPrecisionThreshold;
    void AlignBIMToWorld(FVector RealWorldAnchor, FQuat Rotation);
};