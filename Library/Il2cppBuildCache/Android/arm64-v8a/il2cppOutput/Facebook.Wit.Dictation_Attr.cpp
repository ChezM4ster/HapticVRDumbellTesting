#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// Meta.WitAi.Events.EventCategoryAttribute
struct EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210;
// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB;
// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA;
// UnityEngine.MultilineAttribute
struct MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_oldName_0), (void*)value);
	}
};


// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 UnityEngine.PropertyAttribute::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Meta.WitAi.Events.EventCategoryAttribute
struct EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String Meta.WitAi.Events.EventCategoryAttribute::Category
	String_t* ___Category_1;

public:
	inline static int32_t get_offset_of_Category_1() { return static_cast<int32_t>(offsetof(EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0, ___Category_1)); }
	inline String_t* get_Category_1() const { return ___Category_1; }
	inline String_t** get_address_of_Category_1() { return &___Category_1; }
	inline void set_Category_1(String_t* value)
	{
		___Category_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Category_1), (void*)value);
	}
};


// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_1;

public:
	inline static int32_t get_offset_of_header_1() { return static_cast<int32_t>(offsetof(HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB, ___header_1)); }
	inline String_t* get_header_1() const { return ___header_1; }
	inline String_t** get_address_of_header_1() { return &___header_1; }
	inline void set_header_1(String_t* value)
	{
		___header_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_1), (void*)value);
	}
};


// UnityEngine.MultilineAttribute
struct MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Int32 UnityEngine.MultilineAttribute::lines
	int32_t ___lines_1;

public:
	inline static int32_t get_offset_of_lines_1() { return static_cast<int32_t>(offsetof(MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291, ___lines_1)); }
	inline int32_t get_lines_1() const { return ___lines_1; }
	inline int32_t* get_address_of_lines_1() { return &___lines_1; }
	inline void set_lines_1(int32_t value)
	{
		___lines_1 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_1;

public:
	inline static int32_t get_offset_of_tooltip_1() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_1)); }
	inline String_t* get_tooltip_1() const { return ___tooltip_1; }
	inline String_t** get_address_of_tooltip_1() { return &___tooltip_1; }
	inline void set_tooltip_1(String_t* value)
	{
		___tooltip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_1), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void UnityEngine.MultilineAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilineAttribute__ctor_m353DC377C95D4C341F5DDD0F9894878F64E5703E (MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.HeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * __this, String_t* ___header0, const RuntimeMethod* method);
// System.Void UnityEngine.HideInInspector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9 (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.EventCategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCategoryAttribute__ctor_mED05048C500208BD7488425112E3B4FCD9D296AD (EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0 * __this, String_t* ___category0, const RuntimeMethod* method);
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * __this, String_t* ___oldName0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
static void Facebook_Wit_Dictation_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_CustomAttributesCacheGenerator_dictationService(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DictationServiceAudioEventReference_t972010547CB28659171E02C2AA34F75BC94C0425_CustomAttributesCacheGenerator__dictationServiceReference(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_CustomAttributesCacheGenerator_dictationEvents(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x76\x65\x6E\x74\x73\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x66\x69\x72\x65\x20\x62\x65\x66\x6F\x72\x65\x2C\x20\x64\x75\x72\x69\x6E\x67\x20\x61\x6E\x64\x20\x61\x66\x74\x65\x72\x20\x61\x6E\x20\x61\x63\x74\x69\x76\x61\x74\x69\x6F\x6E"), NULL);
	}
}
static void MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_witDictation(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_linesBetweenActivations(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_activationSeparator(CustomAttributesCache* cache)
{
	{
		MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 * tmp = (MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 *)cache->attributes[0];
		MultilineAttribute__ctor_m353DC377C95D4C341F5DDD0F9894878F64E5703E(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_onTranscriptionUpdated(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x45\x76\x65\x6E\x74\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_CustomAttributesCacheGenerator_witRuntimeConfiguration(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator__onDictationSessionStarted(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0 * tmp = (EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0 *)cache->attributes[2];
		EventCategoryAttribute__ctor_mED05048C500208BD7488425112E3B4FCD9D296AD(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x63\x74\x61\x74\x69\x6F\x6E\x20\x45\x76\x65\x6E\x74\x73"), NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[3];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x61\x6C\x6C\x65\x64\x20\x77\x68\x65\x6E\x20\x61\x6E\x20\x69\x6E\x64\x69\x76\x69\x64\x75\x61\x6C\x20\x64\x69\x63\x74\x61\x74\x69\x6F\x6E\x20\x73\x65\x73\x73\x69\x6F\x6E\x20\x68\x61\x73\x20\x73\x74\x61\x72\x74\x65\x64\x2E\x20\x54\x68\x69\x73\x20\x63\x61\x6E\x20\x69\x6E\x63\x6C\x75\x64\x65\x20\x6D\x75\x6C\x74\x69\x70\x6C\x65\x20\x73\x65\x72\x76\x65\x72\x20\x61\x63\x74\x69\x76\x61\x74\x69\x6F\x6E\x73\x20\x69\x66\x20\x64\x69\x63\x74\x61\x74\x69\x6F\x6E\x20\x69\x73\x20\x73\x65\x74\x20\x75\x70\x20\x74\x6F\x20\x61\x75\x74\x6F\x6D\x61\x74\x69\x63\x61\x6C\x6C\x79\x20\x72\x65\x61\x63\x74\x69\x76\x61\x74\x65\x20\x77\x68\x65\x6E\x20\x74\x68\x65\x20\x73\x65\x72\x76\x65\x72\x20\x65\x6E\x64\x70\x6F\x69\x6E\x74\x73\x20\x61\x6E\x20\x75\x74\x74\x65\x72\x61\x6E\x63\x65\x2E"), NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[4];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6F\x6E\x44\x69\x63\x74\x61\x74\x69\x6F\x6E\x53\x65\x73\x73\x69\x6F\x6E\x53\x74\x61\x72\x74\x65\x64"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator__onDictationSessionStopped(CustomAttributesCache* cache)
{
	{
		EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0 * tmp = (EventCategoryAttribute_t898C954C046EA17C4A914C1A66A3AF3725A210A0 *)cache->attributes[0];
		EventCategoryAttribute__ctor_mED05048C500208BD7488425112E3B4FCD9D296AD(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x63\x74\x61\x74\x69\x6F\x6E\x20\x45\x76\x65\x6E\x74\x73"), NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6F\x6E\x44\x69\x63\x74\x61\x74\x69\x6F\x6E\x53\x65\x73\x73\x69\x6F\x6E\x53\x74\x6F\x70\x70\x65\x64"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[2];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[3];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[4];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x61\x6C\x6C\x65\x64\x20\x77\x68\x65\x6E\x20\x61\x20\x64\x69\x63\x74\x61\x74\x69\x6F\x6E\x20\x69\x73\x20\x63\x6F\x6D\x70\x6C\x65\x74\x65\x64\x20\x61\x66\x74\x65\x72\x20\x44\x65\x61\x63\x74\x69\x76\x61\x74\x65\x20\x68\x61\x73\x20\x62\x65\x65\x6E\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x72\x20\x61\x75\x74\x6F\x2D\x72\x65\x61\x63\x74\x69\x76\x61\x74\x65\x20\x69\x73\x20\x64\x69\x73\x61\x62\x6C\x65\x64\x2E"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onDictationSessionStarted_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x66\x6F\x72\x20\x27\x4F\x6E\x44\x69\x63\x74\x61\x74\x69\x6F\x6E\x53\x65\x73\x73\x69\x6F\x6E\x53\x74\x61\x72\x74\x65\x64\x27\x20\x65\x76\x65\x6E\x74"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onDictationSessionStopped_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x66\x6F\x72\x20\x27\x4F\x6E\x44\x69\x63\x74\x61\x74\x69\x6F\x6E\x53\x65\x73\x73\x69\x6F\x6E\x53\x74\x6F\x70\x70\x65\x64\x27\x20\x65\x76\x65\x6E\x74"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onStart_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x66\x6F\x72\x20\x27\x4F\x6E\x53\x74\x61\x72\x74\x4C\x69\x73\x74\x65\x6E\x69\x6E\x67\x27\x20\x65\x76\x65\x6E\x74"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onStopped_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x66\x6F\x72\x20\x27\x4F\x6E\x53\x74\x6F\x70\x70\x65\x64\x4C\x69\x73\x74\x65\x6E\x69\x6E\x67\x27\x20\x65\x76\x65\x6E\x74"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onMicAudioLevel_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x66\x6F\x72\x20\x27\x4F\x6E\x4D\x69\x63\x4C\x65\x76\x65\x6C\x43\x68\x61\x6E\x67\x65\x64\x27\x20\x65\x76\x65\x6E\x74"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onError_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x66\x6F\x72\x20\x27\x4F\x6E\x45\x72\x72\x6F\x72\x27\x20\x65\x76\x65\x6E\x74"), NULL);
	}
}
static void DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onResponse_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x66\x6F\x72\x20\x27\x4F\x6E\x52\x65\x73\x70\x6F\x6E\x73\x65\x27\x20\x65\x76\x65\x6E\x74"), NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Facebook_Wit_Dictation_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Facebook_Wit_Dictation_AttributeGenerators[19] = 
{
	U3CU3Ec_t0CEC13F8F55794936A5C40057DE78F13B22ED5EC_CustomAttributesCacheGenerator,
	DictationServiceReference_tD9C98EAE177D020B6F9E959430EF0852C5303836_CustomAttributesCacheGenerator_dictationService,
	DictationServiceAudioEventReference_t972010547CB28659171E02C2AA34F75BC94C0425_CustomAttributesCacheGenerator__dictationServiceReference,
	DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265_CustomAttributesCacheGenerator_dictationEvents,
	MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_witDictation,
	MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_linesBetweenActivations,
	MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_activationSeparator,
	MultiRequestTranscription_t159F8A0EE652FA514BA1C209736824184938C42B_CustomAttributesCacheGenerator_onTranscriptionUpdated,
	WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_CustomAttributesCacheGenerator_witRuntimeConfiguration,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator__onDictationSessionStarted,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator__onDictationSessionStopped,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onDictationSessionStarted_PropertyInfo,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onDictationSessionStopped_PropertyInfo,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onStart_PropertyInfo,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onStopped_PropertyInfo,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onMicAudioLevel_PropertyInfo,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onError_PropertyInfo,
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC_CustomAttributesCacheGenerator_DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC____onResponse_PropertyInfo,
	Facebook_Wit_Dictation_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
