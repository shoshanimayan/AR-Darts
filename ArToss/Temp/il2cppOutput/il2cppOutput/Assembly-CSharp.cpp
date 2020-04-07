#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF;
// toss
struct toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6;

IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral17D817A73C5909CED212CC71F864C44AC347BACD;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF6F70A8DA2F5C6D32911D2F1F274155E8379F1;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m33804AA998817D014AD506ED843AEA0461273B67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t toss_ResetBall_mB668BD5C92A028C1C2468C3A8614597DDD268631_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t toss_Start_m0251AC38FADD815894C9E7371FC0A10D2AC577D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t toss_Update_m84DF1695246FF8EA80367A81CC5223FFBAFA0168_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CtrackablesParentU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_ContentOffsetGameObject_6;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___m_Camera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___U3CtrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CtrackablesParentU3Ek__BackingField_5() const { return ___U3CtrackablesParentU3Ek__BackingField_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CtrackablesParentU3Ek__BackingField_5() { return &___U3CtrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CtrackablesParentU3Ek__BackingField_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CtrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentOffsetGameObject_6() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___m_ContentOffsetGameObject_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_ContentOffsetGameObject_6() const { return ___m_ContentOffsetGameObject_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_ContentOffsetGameObject_6() { return &___m_ContentOffsetGameObject_6; }
	inline void set_m_ContentOffsetGameObject_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_ContentOffsetGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentOffsetGameObject_6), (void*)value);
	}
};


// toss
struct  toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single toss::m_ThrowForce
	float ___m_ThrowForce_4;
	// System.Single toss::m_ThrowDirectionX
	float ___m_ThrowDirectionX_5;
	// System.Single toss::m_ThrowDirectionY
	float ___m_ThrowDirectionY_6;
	// UnityEngine.Vector3 toss::m_BallCameraOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_BallCameraOffset_7;
	// UnityEngine.Vector3 toss::startPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition_8;
	// UnityEngine.Vector3 toss::direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction_9;
	// System.Single toss::startTime
	float ___startTime_10;
	// System.Single toss::endTime
	float ___endTime_11;
	// System.Single toss::duration
	float ___duration_12;
	// System.Boolean toss::directionChosen
	bool ___directionChosen_13;
	// System.Boolean toss::throwStarted
	bool ___throwStarted_14;
	// UnityEngine.GameObject toss::ARCam
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ARCam_15;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin toss::m_SessionOrigin
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___m_SessionOrigin_16;
	// UnityEngine.Rigidbody toss::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_17;

public:
	inline static int32_t get_offset_of_m_ThrowForce_4() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___m_ThrowForce_4)); }
	inline float get_m_ThrowForce_4() const { return ___m_ThrowForce_4; }
	inline float* get_address_of_m_ThrowForce_4() { return &___m_ThrowForce_4; }
	inline void set_m_ThrowForce_4(float value)
	{
		___m_ThrowForce_4 = value;
	}

	inline static int32_t get_offset_of_m_ThrowDirectionX_5() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___m_ThrowDirectionX_5)); }
	inline float get_m_ThrowDirectionX_5() const { return ___m_ThrowDirectionX_5; }
	inline float* get_address_of_m_ThrowDirectionX_5() { return &___m_ThrowDirectionX_5; }
	inline void set_m_ThrowDirectionX_5(float value)
	{
		___m_ThrowDirectionX_5 = value;
	}

	inline static int32_t get_offset_of_m_ThrowDirectionY_6() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___m_ThrowDirectionY_6)); }
	inline float get_m_ThrowDirectionY_6() const { return ___m_ThrowDirectionY_6; }
	inline float* get_address_of_m_ThrowDirectionY_6() { return &___m_ThrowDirectionY_6; }
	inline void set_m_ThrowDirectionY_6(float value)
	{
		___m_ThrowDirectionY_6 = value;
	}

	inline static int32_t get_offset_of_m_BallCameraOffset_7() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___m_BallCameraOffset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_BallCameraOffset_7() const { return ___m_BallCameraOffset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_BallCameraOffset_7() { return &___m_BallCameraOffset_7; }
	inline void set_m_BallCameraOffset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_BallCameraOffset_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___startPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startPosition_8() const { return ___startPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startPosition_8 = value;
	}

	inline static int32_t get_offset_of_direction_9() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___direction_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_direction_9() const { return ___direction_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_direction_9() { return &___direction_9; }
	inline void set_direction_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___direction_9 = value;
	}

	inline static int32_t get_offset_of_startTime_10() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___startTime_10)); }
	inline float get_startTime_10() const { return ___startTime_10; }
	inline float* get_address_of_startTime_10() { return &___startTime_10; }
	inline void set_startTime_10(float value)
	{
		___startTime_10 = value;
	}

	inline static int32_t get_offset_of_endTime_11() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___endTime_11)); }
	inline float get_endTime_11() const { return ___endTime_11; }
	inline float* get_address_of_endTime_11() { return &___endTime_11; }
	inline void set_endTime_11(float value)
	{
		___endTime_11 = value;
	}

	inline static int32_t get_offset_of_duration_12() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___duration_12)); }
	inline float get_duration_12() const { return ___duration_12; }
	inline float* get_address_of_duration_12() { return &___duration_12; }
	inline void set_duration_12(float value)
	{
		___duration_12 = value;
	}

	inline static int32_t get_offset_of_directionChosen_13() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___directionChosen_13)); }
	inline bool get_directionChosen_13() const { return ___directionChosen_13; }
	inline bool* get_address_of_directionChosen_13() { return &___directionChosen_13; }
	inline void set_directionChosen_13(bool value)
	{
		___directionChosen_13 = value;
	}

	inline static int32_t get_offset_of_throwStarted_14() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___throwStarted_14)); }
	inline bool get_throwStarted_14() const { return ___throwStarted_14; }
	inline bool* get_address_of_throwStarted_14() { return &___throwStarted_14; }
	inline void set_throwStarted_14(bool value)
	{
		___throwStarted_14 = value;
	}

	inline static int32_t get_offset_of_ARCam_15() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___ARCam_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ARCam_15() const { return ___ARCam_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ARCam_15() { return &___ARCam_15; }
	inline void set_ARCam_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ARCam_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARCam_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_SessionOrigin_16() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___m_SessionOrigin_16)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_m_SessionOrigin_16() const { return ___m_SessionOrigin_16; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_m_SessionOrigin_16() { return &___m_SessionOrigin_16; }
	inline void set_m_SessionOrigin_16(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___m_SessionOrigin_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SessionOrigin_16), (void*)value);
	}

	inline static int32_t get_offset_of_rb_17() { return static_cast<int32_t>(offsetof(toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6, ___rb_17)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_17() const { return ___rb_17; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_17() { return &___rb_17; }
	inline void set_rb_17(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * GameObject_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m33804AA998817D014AD506ED843AEA0461273B67 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, String_t* ___n0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void toss::ResetBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void toss_ResetBall_mB668BD5C92A028C1C2468C3A8614597DDD268631 (toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mA8946A1A06B07CE6DFF2F1A9081A2E2AA406FDC9 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m1839DCBC87B01EFD0B4936E84E503E38774B962C (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void toss::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void toss_Start_m0251AC38FADD815894C9E7371FC0A10D2AC577D7 (toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (toss_Start_m0251AC38FADD815894C9E7371FC0A10D2AC577D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var);
		__this->set_rb_17(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralCEF6F70A8DA2F5C6D32911D2F1F274155E8379F1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_3 = GameObject_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m33804AA998817D014AD506ED843AEA0461273B67(L_2, /*hidden argument*/GameObject_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m33804AA998817D014AD506ED843AEA0461273B67_RuntimeMethod_var);
		__this->set_m_SessionOrigin_16(L_3);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_4 = __this->get_m_SessionOrigin_16();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_5, _stringLiteral17D817A73C5909CED212CC71F864C44AC347BACD, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		__this->set_ARCam_15(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_ARCam_15();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_8, L_10, /*hidden argument*/NULL);
		toss_ResetBall_mB668BD5C92A028C1C2468C3A8614597DDD268631(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void toss::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void toss_Update_m84DF1695246FF8EA80367A81CC5223FFBAFA0168 (toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (toss_Update_m84DF1695246FF8EA80367A81CC5223FFBAFA0168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		__this->set_startPosition_8(L_1);
		float L_2 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_startTime_10(L_2);
		__this->set_throwStarted_14((bool)1);
		__this->set_directionChosen_13((bool)0);
		goto IL_0071;
	}

IL_002e:
	{
		bool L_3 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		float L_4 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_endTime_11(L_4);
		float L_5 = __this->get_endTime_11();
		float L_6 = __this->get_startTime_10();
		__this->set_duration_12(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_startPosition_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_7, L_8, /*hidden argument*/NULL);
		__this->set_direction_9(L_9);
		__this->set_directionChosen_13((bool)1);
	}

IL_0071:
	{
		bool L_10 = __this->get_directionChosen_13();
		if (!L_10)
		{
			goto IL_0181;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_11 = __this->get_rb_17();
		NullCheck(L_11);
		Rigidbody_set_mass_mA8946A1A06B07CE6DFF2F1A9081A2E2AA406FDC9(L_11, (1.0f), /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_12 = __this->get_rb_17();
		NullCheck(L_12);
		Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA(L_12, (bool)1, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_13 = __this->get_rb_17();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_ARCam_15();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_m_ThrowForce_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_duration_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_18, L_19, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_ARCam_15();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_24 = __this->get_address_of_direction_9();
		float L_25 = L_24->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_m_ThrowDirectionY_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_28, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_ARCam_15();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_33 = __this->get_address_of_direction_9();
		float L_34 = L_33->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_m_ThrowDirectionX_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_35, L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_37, /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38(L_13, L_38, /*hidden argument*/NULL);
		__this->set_startTime_10((0.0f));
		__this->set_duration_12((0.0f));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_39), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_startPosition_8(L_39);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_40), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_9(L_40);
		__this->set_throwStarted_14((bool)0);
		__this->set_directionChosen_13((bool)0);
	}

IL_0181:
	{
		float L_41 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_42 = __this->get_endTime_11();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_42))) >= ((float)(5.0f)))))
		{
			goto IL_01ad;
		}
	}
	{
		float L_43 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_44 = __this->get_endTime_11();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_43, (float)L_44))) <= ((float)(6.0f)))))
		{
			goto IL_01ad;
		}
	}
	{
		toss_ResetBall_mB668BD5C92A028C1C2468C3A8614597DDD268631(__this, /*hidden argument*/NULL);
	}

IL_01ad:
	{
		return;
	}
}
// System.Void toss::ResetBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void toss_ResetBall_mB668BD5C92A028C1C2468C3A8614597DDD268631 (toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (toss_ResetBall_mB668BD5C92A028C1C2468C3A8614597DDD268631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_rb_17();
		NullCheck(L_0);
		Rigidbody_set_mass_mA8946A1A06B07CE6DFF2F1A9081A2E2AA406FDC9(L_0, (0.0f), /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = __this->get_rb_17();
		NullCheck(L_1);
		Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA(L_1, (bool)0, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_2 = __this->get_rb_17();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_2, L_3, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_4 = __this->get_rb_17();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_set_angularVelocity_m1839DCBC87B01EFD0B4936E84E503E38774B962C(L_4, L_5, /*hidden argument*/NULL);
		__this->set_endTime_11((0.0f));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_ARCam_15();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_ARCam_15();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_12 = __this->get_address_of_m_BallCameraOffset_7();
		float L_13 = L_12->get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_11, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_8, L_14, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_ARCam_15();
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_19 = __this->get_address_of_m_BallCameraOffset_7();
		float L_20 = L_19->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_0;
		NullCheck(L_23);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void toss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void toss__ctor_m2F7823163FCF36226B76D13803A737EB4288BC80 (toss_t1DD4A9F630F204F581878789E1FE2B1D07EE4CB6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_ThrowForce_4((100.0f));
		__this->set_m_ThrowDirectionX_5((0.17f));
		__this->set_m_ThrowDirectionY_6((0.67f));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (-1.4f), (3.0f), /*hidden argument*/NULL);
		__this->set_m_BallCameraOffset_7(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
