// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirectionalBox/Public/DirectionalBoxComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalBoxComponent() {}
// Cross Module References
	DIRECTIONALBOX_API UClass* Z_Construct_UClass_UDirectionalBoxComponent();
	DIRECTIONALBOX_API UClass* Z_Construct_UClass_UDirectionalBoxComponent_NoRegister();
	DIRECTIONALBOX_API UEnum* Z_Construct_UEnum_DirectionalBox_EBoxDirection();
	DIRECTIONALBOX_API UFunction* Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature();
	DIRECTIONALBOX_API UFunction* Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_DirectionalBox();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoxDirection;
	static UEnum* EBoxDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoxDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoxDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DirectionalBox_EBoxDirection, (UObject*)Z_Construct_UPackage__Script_DirectionalBox(), TEXT("EBoxDirection"));
		}
		return Z_Registration_Info_UEnum_EBoxDirection.OuterSingleton;
	}
	template<> DIRECTIONALBOX_API UEnum* StaticEnum<EBoxDirection>()
	{
		return EBoxDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::Enumerators[] = {
		{ "EBoxDirection::None", (int64)EBoxDirection::None },
		{ "EBoxDirection::Front", (int64)EBoxDirection::Front },
		{ "EBoxDirection::Right", (int64)EBoxDirection::Right },
		{ "EBoxDirection::Top", (int64)EBoxDirection::Top },
		{ "EBoxDirection::Back", (int64)EBoxDirection::Back },
		{ "EBoxDirection::Left", (int64)EBoxDirection::Left },
		{ "EBoxDirection::Bottom", (int64)EBoxDirection::Bottom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "EBoxDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "EBoxDirection::Bottom" },
		{ "Front.Name", "EBoxDirection::Front" },
		{ "Left.Name", "EBoxDirection::Left" },
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
		{ "None.Name", "EBoxDirection::None" },
		{ "Right.Name", "EBoxDirection::Right" },
		{ "Top.Name", "EBoxDirection::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DirectionalBox,
		nullptr,
		"EBoxDirection",
		"EBoxDirection",
		Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DirectionalBox_EBoxDirection()
	{
		if (!Z_Registration_Info_UEnum_EBoxDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoxDirection.InnerSingleton, Z_Construct_UEnum_DirectionalBox_EBoxDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoxDirection.InnerSingleton;
	}
	struct Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics
	{
		struct _Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
			EBoxDirection Direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData), Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms), &Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_SweepResult_MetaData), Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms, Direction), Z_Construct_UEnum_DirectionalBox_EBoxDirection, METADATA_PARAMS(0, nullptr) }; // 3349804061
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_SweepResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates for new overlap events that include the directional info\n" },
#endif
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates for new overlap events that include the directional info" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DirectionalBox, nullptr, "BeginOverlapWithDirectionInfoSignature__DelegateSignature", "DirectionalBoxComponent", "OnBeginOverlapWithDirectionInfo", Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBeginOverlapWithDirectionInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& BeginOverlapWithDirectionInfoSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult, EBoxDirection Direction)
{
	struct _Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
		EBoxDirection Direction;
	};
	_Script_DirectionalBox_eventBeginOverlapWithDirectionInfoSignature_Parms Parms;
	Parms.OverlappedComponent=OverlappedComponent;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.OtherBodyIndex=OtherBodyIndex;
	Parms.bFromSweep=bFromSweep ? true : false;
	Parms.SweepResult=SweepResult;
	Parms.Direction=Direction;
	BeginOverlapWithDirectionInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics
	{
		struct _Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			EBoxDirection Direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData), Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms, Direction), Z_Construct_UEnum_DirectionalBox_EBoxDirection, METADATA_PARAMS(0, nullptr) }; // 3349804061
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DirectionalBox, nullptr, "EndOverlapWithDirectionInfoSignature__DelegateSignature", "DirectionalBoxComponent", "OnEndOverlapWithDirectionInfo", Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEndOverlapWithDirectionInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& EndOverlapWithDirectionInfoSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, EBoxDirection Direction)
{
	struct _Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		EBoxDirection Direction;
	};
	_Script_DirectionalBox_eventEndOverlapWithDirectionInfoSignature_Parms Parms;
	Parms.OverlappedComponent=OverlappedComponent;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.OtherBodyIndex=OtherBodyIndex;
	Parms.Direction=Direction;
	EndOverlapWithDirectionInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDirectionalBoxComponent::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalBoxComponent::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void UDirectionalBoxComponent::StaticRegisterNativesUDirectionalBoxComponent()
	{
		UClass* Class = UDirectionalBoxComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &UDirectionalBoxComponent::execOnBeginOverlap },
			{ "OnEndOverlap", &UDirectionalBoxComponent::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics
	{
		struct DirectionalBoxComponent_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DirectionalBoxComponent_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DirectionalBoxComponent_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalBoxComponent, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::DirectionalBoxComponent_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::DirectionalBoxComponent_eventOnBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics
	{
		struct DirectionalBoxComponent_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalBoxComponent_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalBoxComponent, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::DirectionalBoxComponent_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::DirectionalBoxComponent_eventOnEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalBoxComponent);
	UClass* Z_Construct_UClass_UDirectionalBoxComponent_NoRegister()
	{
		return UDirectionalBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDirectionalBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginOverlapWithDirectionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginOverlapWithDirectionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndOverlapWithDirectionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndOverlapWithDirectionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationLineExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisualizationLineExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationDistanceAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisualizationDistanceAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisualizationThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectionalBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DirectionalBox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDirectionalBoxComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectionalBoxComponent_OnBeginOverlap, "OnBeginOverlap" }, // 3474990471
		{ &Z_Construct_UFunction_UDirectionalBoxComponent_OnEndOverlap, "OnEndOverlap" }, // 512143457
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "DirectionalBoxComponent.h" },
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnBeginOverlapWithDirectionInfo_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnBeginOverlapWithDirectionInfo = { "OnBeginOverlapWithDirectionInfo", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalBoxComponent, OnBeginOverlapWithDirectionInfo), Z_Construct_USparseDelegateFunction_DirectionalBox_BeginOverlapWithDirectionInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnBeginOverlapWithDirectionInfo_MetaData), Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnBeginOverlapWithDirectionInfo_MetaData) }; // 2602752561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnEndOverlapWithDirectionInfo_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnEndOverlapWithDirectionInfo = { "OnEndOverlapWithDirectionInfo", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalBoxComponent, OnEndOverlapWithDirectionInfo), Z_Construct_USparseDelegateFunction_DirectionalBox_EndOverlapWithDirectionInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnEndOverlapWithDirectionInfo_MetaData), Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnEndOverlapWithDirectionInfo_MetaData) }; // 3800212206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationLineExtent_MetaData[] = {
		{ "Category", "Visualization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Extent of visualization lines outside the box\n" },
#endif
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extent of visualization lines outside the box" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationLineExtent = { "VisualizationLineExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalBoxComponent, VisualizationLineExtent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationLineExtent_MetaData), Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationLineExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationDistanceAlpha_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How far the line should start from the center of the box\n" },
#endif
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far the line should start from the center of the box" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationDistanceAlpha = { "VisualizationDistanceAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalBoxComponent, VisualizationDistanceAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationDistanceAlpha_MetaData), Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationDistanceAlpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationThickness_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DirectionalBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationThickness = { "VisualizationThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalBoxComponent, VisualizationThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationThickness_MetaData), Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationThickness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalBoxComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnBeginOverlapWithDirectionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_OnEndOverlapWithDirectionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationLineExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationDistanceAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalBoxComponent_Statics::NewProp_VisualizationThickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectionalBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalBoxComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalBoxComponent_Statics::ClassParams = {
		&UDirectionalBoxComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDirectionalBoxComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDirectionalBoxComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalBoxComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDirectionalBoxComponent()
	{
		if (!Z_Registration_Info_UClass_UDirectionalBoxComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalBoxComponent.OuterSingleton, Z_Construct_UClass_UDirectionalBoxComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectionalBoxComponent.OuterSingleton;
	}
	template<> DIRECTIONALBOX_API UClass* StaticClass<UDirectionalBoxComponent>()
	{
		return UDirectionalBoxComponent::StaticClass();
	}
	UDirectionalBoxComponent::UDirectionalBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalBoxComponent);
	UDirectionalBoxComponent::~UDirectionalBoxComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_Statics::EnumInfo[] = {
		{ EBoxDirection_StaticEnum, TEXT("EBoxDirection"), &Z_Registration_Info_UEnum_EBoxDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3349804061U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDirectionalBoxComponent, UDirectionalBoxComponent::StaticClass, TEXT("UDirectionalBoxComponent"), &Z_Registration_Info_UClass_UDirectionalBoxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalBoxComponent), 3392621031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_3169396462(TEXT("/Script/DirectionalBox"),
		Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_TheSandbox_Plugins_DirectionalBox_Source_DirectionalBox_Public_DirectionalBoxComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
