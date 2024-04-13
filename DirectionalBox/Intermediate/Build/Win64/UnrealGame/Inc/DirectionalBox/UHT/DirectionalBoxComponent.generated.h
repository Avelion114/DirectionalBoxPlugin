// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirectionalBoxComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
enum class EBoxDirection : uint8;
struct FHitResult;
#ifdef DIRECTIONALBOX_DirectionalBoxComponent_generated_h
#error "DirectionalBoxComponent.generated.h already included, missing '#pragma once' in DirectionalBoxComponent.h"
#endif
#define DIRECTIONALBOX_DirectionalBoxComponent_generated_h

#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_27_DELEGATE \
DIRECTIONALBOX_API void FBeginOverlapWithDirectionInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& BeginOverlapWithDirectionInfoSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult, EBoxDirection Direction);


#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_28_DELEGATE \
DIRECTIONALBOX_API void FEndOverlapWithDirectionInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& EndOverlapWithDirectionInfoSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, EBoxDirection Direction);


#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_SPARSE_DATA
#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_ACCESSORS
#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectionalBoxComponent(); \
	friend struct Z_Construct_UClass_UDirectionalBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UDirectionalBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DirectionalBox"), NO_API) \
	DECLARE_SERIALIZER(UDirectionalBoxComponent)


#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectionalBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDirectionalBoxComponent(UDirectionalBoxComponent&&); \
	NO_API UDirectionalBoxComponent(const UDirectionalBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectionalBoxComponent) \
	NO_API virtual ~UDirectionalBoxComponent();


#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_31_PROLOG
#define FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_SPARSE_DATA \
	FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_ACCESSORS \
	FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIRECTIONALBOX_API UClass* StaticClass<class UDirectionalBoxComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h


#define FOREACH_ENUM_EBOXDIRECTION(op) \
	op(EBoxDirection::None) \
	op(EBoxDirection::Front) \
	op(EBoxDirection::Right) \
	op(EBoxDirection::Top) \
	op(EBoxDirection::Back) \
	op(EBoxDirection::Left) \
	op(EBoxDirection::Bottom) 

enum class EBoxDirection : uint8;
template<> struct TIsUEnumClass<EBoxDirection> { enum { Value = true }; };
template<> DIRECTIONALBOX_API UEnum* StaticEnum<EBoxDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
