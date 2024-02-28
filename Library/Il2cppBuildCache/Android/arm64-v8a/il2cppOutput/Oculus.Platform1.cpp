#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Oculus.Platform.Message`1/Callback<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.BlockedUserList>
struct Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.DestinationList>
struct Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LaunchBlockFlowResult>
struct Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LaunchUnblockFlowResult>
struct Callback_t17D87388F669046EE27272F01362F88632750BD3;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LinkedAccountList>
struct Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.MicrophoneAvailabilityState>
struct Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F;
// Oculus.Platform.Message`1/Callback<System.Object>
struct Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.OrgScopedID>
struct Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>
struct Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SdkAccountList>
struct Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B;
// Oculus.Platform.Message`1/Callback<System.String>
struct Callback_tD043303749DFDABD54DB83282588105CC2ADB18D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>
struct Callback_t827F915E827EE8044B5F300339FE951E4557B20A;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>
struct Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserAccountAgeCategory>
struct Callback_t116FC09EB31D64C2B06F73D976FD17CD9248E468;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserCapabilityList>
struct Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList>
struct Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserProof>
struct Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>
struct DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>
struct DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F;
// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>
struct DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>
struct DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>
struct DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>
struct DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D;
// System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>
struct Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1;
// System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Boolean>
struct Dictionary_2_tA83C5B43B5F4A13A6B2E489398D98C8BFE81B0B2;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Platform.InitConfigOptions>
struct IEqualityComparer_1_t8E3F1FC0EB3D9D03067E8665047CA014E9D17E4F;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Platform.InitConfigOptions,System.Boolean>
struct KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6;
// System.Collections.Generic.List`1<Oculus.Platform.Models.ApplicationInvite>
struct List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D;
// System.Collections.Generic.List`1<Oculus.Platform.Models.BlockedUser>
struct List_1_t53D10076CF7633DF5E907DE5739196321544077A;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Destination>
struct List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Product>
struct List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>
struct List_1_tEF576F33659755044A466574FB2C3AE99B17F353;
// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>
struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E;
// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554;
// System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>
struct List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906;
// Oculus.Platform.Message`1<Oculus.Platform.Models.HttpTransferUpdate>
struct Message_1_t0F97298AE8C3B061E1CBD75F517F5EE037028F68;
// Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>
struct Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977;
// Oculus.Platform.Message`1<System.String>
struct Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84;
// Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>
struct Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862;
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103;
// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>
struct Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2;
// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>
struct Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>
struct Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>
struct Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530;
// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>
struct Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20;
// Oculus.Platform.Request`1<System.Object>
struct Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46;
// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>
struct Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95;
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>
struct Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4;
// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>
struct Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C;
// Oculus.Platform.Request`1<System.String>
struct Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC;
// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>
struct Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAccountAgeCategory>
struct Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>
struct Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct Request_1_t2CA1B16D395258918A268B17227A7212918D2136;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Platform.InitConfigOptions,System.Boolean>
struct ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Platform.InitConfigOptions,System.Boolean>[]
struct EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Oculus.Platform.Models.Product[]
struct ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A;
// Oculus.Platform.Models.Purchase[]
struct PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498;
// Oculus.Platform.Models.SdkAccount[]
struct SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A;
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// Oculus.Platform.Models.User[]
struct UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D;
// Oculus.Platform.Models.UserCapability[]
struct UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Oculus.Platform.CAPI/ovrKeyValuePair[]
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455;
// Oculus.Platform.Models.ApplicationInviteList
struct ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Oculus.Platform.Models.BlockedUserList
struct BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Oculus.Platform.Models.DestinationList
struct DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C;
// Oculus.Platform.Models.Error
struct Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Oculus.Platform.IVoipPCMSource
struct IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Oculus.Platform.Message
struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Oculus.Platform.Models.PlatformInitialize
struct PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50;
// Oculus.Platform.Models.Product
struct Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70;
// Oculus.Platform.Models.ProductList
struct ProductList_tC2405EC15E1F8BA7208810CB03DC828362BE293F;
// Oculus.Platform.Models.Purchase
struct Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91;
// Oculus.Platform.Models.PurchaseList
struct PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Oculus.Platform.Models.RejoinDialogResult
struct RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B;
// ReportingCallbackSample
struct ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC;
// Oculus.Platform.Request
struct Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2;
// Oculus.Platform.RichPresenceOptions
struct RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950;
// Oculus.Platform.RosterOptions
struct RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Oculus.Platform.Models.SdkAccount
struct SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A;
// Oculus.Platform.Models.SdkAccountList
struct SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67;
// Oculus.Platform.Models.SendInvitesResult
struct SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130;
// Oculus.Platform.Models.ShareMediaResult
struct ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7;
// Oculus.Platform.StandalonePlatform
struct StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A;
// Oculus.Platform.StandalonePlatformSettings
struct StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036;
// System.String
struct String_t;
// Oculus.Platform.Models.SupplementaryMetric
struct SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185;
// Oculus.Platform.Models.SystemVoipState
struct SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// Oculus.Platform.Models.User
struct User_tA163463AE919860D9B337F6104B028990A44B69D;
// Oculus.Platform.Models.UserAccountAgeCategory
struct UserAccountAgeCategory_tCA00754466807485E00D72AD71077CDD3DB99E30;
// Oculus.Platform.Models.UserCapability
struct UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F;
// Oculus.Platform.Models.UserCapabilityList
struct UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3;
// Oculus.Platform.Models.UserDataStoreUpdateResponse
struct UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23;
// Oculus.Platform.Models.UserList
struct UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B;
// Oculus.Platform.UserOptions
struct UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706;
// Oculus.Platform.Models.UserProof
struct UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94;
// Oculus.Platform.Models.UserReportID
struct UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD;
// Oculus.Platform.VoipOptions
struct VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050;
// Oculus.Platform.VoipPCMSourceNative
struct VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13;
// Oculus.Platform.WindowsPlatform
struct WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2;
// Oculus.Platform.CAPI/FilterCallback
struct FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303;
// Oculus.Platform.Callback/RequestCallback
struct RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Oculus.Platform.Message/Callback
struct Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8;
// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF;
// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563;
// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94;
// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD;

IL2CPP_EXTERN_C RuntimeClass* ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEF576F33659755044A466574FB2C3AE99B17F353_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00058DA5D352C716F467D078B396A55F8B3E577B;
IL2CPP_EXTERN_C String_t* _stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6;
IL2CPP_EXTERN_C String_t* _stringLiteral141DB8E2222B0556D3C6A55EC404DB7A9D4332CF;
IL2CPP_EXTERN_C String_t* _stringLiteral21F44D94A63BEE6D780718FB25538264AEC6ED92;
IL2CPP_EXTERN_C String_t* _stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD;
IL2CPP_EXTERN_C String_t* _stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15;
IL2CPP_EXTERN_C String_t* _stringLiteral33157D9C9F7D31AF8194BEB1C5D43B3972AC216D;
IL2CPP_EXTERN_C String_t* _stringLiteral490E7A78D754BCECC6CF945C78681E1F4248DFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral4A48AE0244C4827DF94FFD923478E861AB533848;
IL2CPP_EXTERN_C String_t* _stringLiteral56CBBCD2565BB1E1874EA571ED1232298CB88E75;
IL2CPP_EXTERN_C String_t* _stringLiteral58DE12A61CB8F5C6AE93E6A588A18C0FC42E00E3;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral6502DBEA7DCA489774648AC2338DB14B68A43496;
IL2CPP_EXTERN_C String_t* _stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB40CF1C1F630131B1A52C4D34047CFF6EA8550;
IL2CPP_EXTERN_C String_t* _stringLiteral816745CC7F0FA623F30FB7047D44B28470A22E3D;
IL2CPP_EXTERN_C String_t* _stringLiteral85B005016BA6EACBD6E43AE5406ED06DC90B5130;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m95DD231697F2826CDF057F18C4942819F659B6DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m5BC83E3C43BCDBDE2F7FB98D5FD52AA9C839F5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_HandleMessage_mECFAD6677F9DBD582011DFDA2BE7FD1B87DD3F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.ApplicationInvite>
struct DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6, ____Data_0)); }
	inline List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D * get__Data_0() const { return ____Data_0; }
	inline List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tB50A43C1A0612207A9CE50517AB345FB5AC0136D * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>
struct DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t53D10076CF7633DF5E907DE5739196321544077A * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6, ____Data_0)); }
	inline List_1_t53D10076CF7633DF5E907DE5739196321544077A * get__Data_0() const { return ____Data_0; }
	inline List_1_t53D10076CF7633DF5E907DE5739196321544077A ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t53D10076CF7633DF5E907DE5739196321544077A * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>
struct DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F, ____Data_0)); }
	inline List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 * get__Data_0() const { return ____Data_0; }
	inline List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t09B8C01DCDB19F336AE6D87A86A1B8BF4E0D1027 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____Data_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get__Data_0() const { return ____Data_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>
struct DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755, ____Data_0)); }
	inline List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * get__Data_0() const { return ____Data_0; }
	inline List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>
struct DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6, ____Data_0)); }
	inline List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * get__Data_0() const { return ____Data_0; }
	inline List_1_tEF576F33659755044A466574FB2C3AE99B17F353 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>
struct DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____Data_0)); }
	inline List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * get__Data_0() const { return ____Data_0; }
	inline List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____Data_0)); }
	inline List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * get__Data_0() const { return ____Data_0; }
	inline List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>
struct DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D, ____Data_0)); }
	inline List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * get__Data_0() const { return ____Data_0; }
	inline List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>
struct Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___entries_1)); }
	inline EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t505C8352EB49A15AA9FA5F8DBBB3E0A591C314F4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___keys_7)); }
	inline KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD8EF1F4575BD86BA973B4B53205E9CEA9815A6C6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ___values_8)); }
	inline ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9783753D4A1E7548A5CBD0AEB4FDF3DD43F0C99E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Product>
struct List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____items_1)); }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* get__items_1() const { return ____items_1; }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_StaticFields, ____emptyArray_5)); }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductU5BU5D_t9F7C44EC3E161BC7243D894C612514D28D00EF0A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>
struct List_1_tEF576F33659755044A466574FB2C3AE99B17F353  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____items_1)); }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* get__items_1() const { return ____items_1; }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEF576F33659755044A466574FB2C3AE99B17F353_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEF576F33659755044A466574FB2C3AE99B17F353_StaticFields, ____emptyArray_5)); }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PurchaseU5BU5D_tBAC0A23E296748F8576D9D931BF6451C8F9CC498* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>
struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____items_1)); }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* get__items_1() const { return ____items_1; }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_StaticFields, ____emptyArray_5)); }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____items_1)); }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* get__items_1() const { return ____items_1; }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_StaticFields, ____emptyArray_5)); }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>
struct List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____items_1)); }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* get__items_1() const { return ____items_1; }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_StaticFields, ____emptyArray_5)); }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserCapabilityU5BU5D_t01FC2AC6CC13E1A0E5904D34A24AFF9B4EA6032F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Oculus.Platform.Core
struct Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4  : public RuntimeObject
{
public:

public:
};

struct Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields
{
public:
	// System.Boolean Oculus.Platform.Core::IsPlatformInitialized
	bool ___IsPlatformInitialized_0;
	// System.Boolean Oculus.Platform.Core::LogMessages
	bool ___LogMessages_1;
	// System.String Oculus.Platform.Core::PlatformUninitializedError
	String_t* ___PlatformUninitializedError_2;

public:
	inline static int32_t get_offset_of_IsPlatformInitialized_0() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___IsPlatformInitialized_0)); }
	inline bool get_IsPlatformInitialized_0() const { return ___IsPlatformInitialized_0; }
	inline bool* get_address_of_IsPlatformInitialized_0() { return &___IsPlatformInitialized_0; }
	inline void set_IsPlatformInitialized_0(bool value)
	{
		___IsPlatformInitialized_0 = value;
	}

	inline static int32_t get_offset_of_LogMessages_1() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___LogMessages_1)); }
	inline bool get_LogMessages_1() const { return ___LogMessages_1; }
	inline bool* get_address_of_LogMessages_1() { return &___LogMessages_1; }
	inline void set_LogMessages_1(bool value)
	{
		___LogMessages_1 = value;
	}

	inline static int32_t get_offset_of_PlatformUninitializedError_2() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___PlatformUninitializedError_2)); }
	inline String_t* get_PlatformUninitializedError_2() const { return ___PlatformUninitializedError_2; }
	inline String_t** get_address_of_PlatformUninitializedError_2() { return &___PlatformUninitializedError_2; }
	inline void set_PlatformUninitializedError_2(String_t* value)
	{
		___PlatformUninitializedError_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatformUninitializedError_2), (void*)value);
	}
};


// Oculus.Platform.Models.Error
struct Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Platform.Models.Error::Code
	int32_t ___Code_0;
	// System.Int32 Oculus.Platform.Models.Error::HttpCode
	int32_t ___HttpCode_1;
	// System.String Oculus.Platform.Models.Error::Message
	String_t* ___Message_2;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_HttpCode_1() { return static_cast<int32_t>(offsetof(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89, ___HttpCode_1)); }
	inline int32_t get_HttpCode_1() const { return ___HttpCode_1; }
	inline int32_t* get_address_of_HttpCode_1() { return &___HttpCode_1; }
	inline void set_HttpCode_1(int32_t value)
	{
		___HttpCode_1 = value;
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89, ___Message_2)); }
	inline String_t* get_Message_2() const { return ___Message_2; }
	inline String_t** get_address_of_Message_2() { return &___Message_2; }
	inline void set_Message_2(String_t* value)
	{
		___Message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_2), (void*)value);
	}
};


// Oculus.Platform.Models.Product
struct Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.Product::Description
	String_t* ___Description_0;
	// System.String Oculus.Platform.Models.Product::FormattedPrice
	String_t* ___FormattedPrice_1;
	// System.String Oculus.Platform.Models.Product::Name
	String_t* ___Name_2;
	// System.String Oculus.Platform.Models.Product::Sku
	String_t* ___Sku_3;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_0), (void*)value);
	}

	inline static int32_t get_offset_of_FormattedPrice_1() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___FormattedPrice_1)); }
	inline String_t* get_FormattedPrice_1() const { return ___FormattedPrice_1; }
	inline String_t** get_address_of_FormattedPrice_1() { return &___FormattedPrice_1; }
	inline void set_FormattedPrice_1(String_t* value)
	{
		___FormattedPrice_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FormattedPrice_1), (void*)value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_Sku_3() { return static_cast<int32_t>(offsetof(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70, ___Sku_3)); }
	inline String_t* get_Sku_3() const { return ___Sku_3; }
	inline String_t** get_address_of_Sku_3() { return &___Sku_3; }
	inline void set_Sku_3(String_t* value)
	{
		___Sku_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sku_3), (void*)value);
	}
};


// Oculus.Platform.Models.RejoinDialogResult
struct RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.RejoinDialogResult::RejoinSelected
	bool ___RejoinSelected_0;

public:
	inline static int32_t get_offset_of_RejoinSelected_0() { return static_cast<int32_t>(offsetof(RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B, ___RejoinSelected_0)); }
	inline bool get_RejoinSelected_0() const { return ___RejoinSelected_0; }
	inline bool* get_address_of_RejoinSelected_0() { return &___RejoinSelected_0; }
	inline void set_RejoinSelected_0(bool value)
	{
		___RejoinSelected_0 = value;
	}
};


// Oculus.Platform.Request
struct Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/Callback Oculus.Platform.Request::callback_
	Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback__0;
	// System.UInt64 Oculus.Platform.Request::<RequestID>k__BackingField
	uint64_t ___U3CRequestIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_callback__0() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___callback__0)); }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * get_callback__0() const { return ___callback__0; }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 ** get_address_of_callback__0() { return &___callback__0; }
	inline void set_callback__0(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * value)
	{
		___callback__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___U3CRequestIDU3Ek__BackingField_1)); }
	inline uint64_t get_U3CRequestIDU3Ek__BackingField_1() const { return ___U3CRequestIDU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CRequestIDU3Ek__BackingField_1() { return &___U3CRequestIDU3Ek__BackingField_1; }
	inline void set_U3CRequestIDU3Ek__BackingField_1(uint64_t value)
	{
		___U3CRequestIDU3Ek__BackingField_1 = value;
	}
};


// Oculus.Platform.RichPresence
struct RichPresence_t9C6284B503E07CDD36E54F81A363BB36A534AC1C  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.SendInvitesResult
struct SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130  : public RuntimeObject
{
public:
	// Oculus.Platform.Models.ApplicationInviteList Oculus.Platform.Models.SendInvitesResult::Invites
	ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * ___Invites_0;

public:
	inline static int32_t get_offset_of_Invites_0() { return static_cast<int32_t>(offsetof(SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130, ___Invites_0)); }
	inline ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * get_Invites_0() const { return ___Invites_0; }
	inline ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 ** get_address_of_Invites_0() { return &___Invites_0; }
	inline void set_Invites_0(ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * value)
	{
		___Invites_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invites_0), (void*)value);
	}
};


// Oculus.Platform.StandalonePlatform
struct StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.StandalonePlatformSettings
struct StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036  : public RuntimeObject
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


// Oculus.Platform.Models.SupplementaryMetric
struct SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.SupplementaryMetric::ID
	uint64_t ___ID_0;
	// System.Int64 Oculus.Platform.Models.SupplementaryMetric::Metric
	int64_t ___Metric_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185, ___ID_0)); }
	inline uint64_t get_ID_0() const { return ___ID_0; }
	inline uint64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(uint64_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_Metric_1() { return static_cast<int32_t>(offsetof(SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185, ___Metric_1)); }
	inline int64_t get_Metric_1() const { return ___Metric_1; }
	inline int64_t* get_address_of_Metric_1() { return &___Metric_1; }
	inline void set_Metric_1(int64_t value)
	{
		___Metric_1 = value;
	}
};


// Oculus.Platform.UserAgeCategory
struct UserAgeCategory_tBCDC5FBA97D7B3A941EE7C73499013BF84F5EF83  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.UserCapability
struct UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.UserCapability::Description
	String_t* ___Description_0;
	// System.Boolean Oculus.Platform.Models.UserCapability::IsEnabled
	bool ___IsEnabled_1;
	// System.String Oculus.Platform.Models.UserCapability::Name
	String_t* ___Name_2;
	// System.String Oculus.Platform.Models.UserCapability::ReasonCode
	String_t* ___ReasonCode_3;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsEnabled_1() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___IsEnabled_1)); }
	inline bool get_IsEnabled_1() const { return ___IsEnabled_1; }
	inline bool* get_address_of_IsEnabled_1() { return &___IsEnabled_1; }
	inline void set_IsEnabled_1(bool value)
	{
		___IsEnabled_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_ReasonCode_3() { return static_cast<int32_t>(offsetof(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F, ___ReasonCode_3)); }
	inline String_t* get_ReasonCode_3() const { return ___ReasonCode_3; }
	inline String_t** get_address_of_ReasonCode_3() { return &___ReasonCode_3; }
	inline void set_ReasonCode_3(String_t* value)
	{
		___ReasonCode_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReasonCode_3), (void*)value);
	}
};


// Oculus.Platform.UserDataStore
struct UserDataStore_t20BD3F424C0584C682518AE7C64D9ED2261C36A1  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.UserDataStoreUpdateResponse
struct UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.UserDataStoreUpdateResponse::Success
	bool ___Success_0;

public:
	inline static int32_t get_offset_of_Success_0() { return static_cast<int32_t>(offsetof(UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23, ___Success_0)); }
	inline bool get_Success_0() const { return ___Success_0; }
	inline bool* get_address_of_Success_0() { return &___Success_0; }
	inline void set_Success_0(bool value)
	{
		___Success_0 = value;
	}
};


// Oculus.Platform.Models.UserProof
struct UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.UserProof::Value
	String_t* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// Oculus.Platform.Models.UserReportID
struct UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.UserReportID::DidCancel
	bool ___DidCancel_0;
	// System.UInt64 Oculus.Platform.Models.UserReportID::ID
	uint64_t ___ID_1;

public:
	inline static int32_t get_offset_of_DidCancel_0() { return static_cast<int32_t>(offsetof(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB, ___DidCancel_0)); }
	inline bool get_DidCancel_0() const { return ___DidCancel_0; }
	inline bool* get_address_of_DidCancel_0() { return &___DidCancel_0; }
	inline void set_DidCancel_0(bool value)
	{
		___DidCancel_0 = value;
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB, ___ID_1)); }
	inline uint64_t get_ID_1() const { return ___ID_1; }
	inline uint64_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint64_t value)
	{
		___ID_1 = value;
	}
};


// Oculus.Platform.Users
struct Users_t2DDB732114AF6EEC173D2B9A1014199F139ED79C  : public RuntimeObject
{
public:

public:
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

// Oculus.Platform.Voip
struct Voip_tD05F4EB764B22820F29134B5915F2A1463A39FE1  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.VoipPCMSourceNative
struct VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.VoipPCMSourceNative::senderID
	uint64_t ___senderID_0;

public:
	inline static int32_t get_offset_of_senderID_0() { return static_cast<int32_t>(offsetof(VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13, ___senderID_0)); }
	inline uint64_t get_senderID_0() const { return ___senderID_0; }
	inline uint64_t* get_address_of_senderID_0() { return &___senderID_0; }
	inline void set_senderID_0(uint64_t value)
	{
		___senderID_0 = value;
	}
};


// Oculus.Platform.Vrcamera
struct Vrcamera_t634918F934A66F8331B6A0832DE1C83A88A30BAB  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.WindowsPlatform
struct WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Callback/RequestCallback
struct RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/Callback Oculus.Platform.Callback/RequestCallback::messageCallback
	Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___messageCallback_0;

public:
	inline static int32_t get_offset_of_messageCallback_0() { return static_cast<int32_t>(offsetof(RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF, ___messageCallback_0)); }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * get_messageCallback_0() const { return ___messageCallback_0; }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 ** get_address_of_messageCallback_0() { return &___messageCallback_0; }
	inline void set_messageCallback_0(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * value)
	{
		___messageCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageCallback_0), (void*)value);
	}
};


// Oculus.Platform.PlatformInternal/HTTP
struct HTTP_tE160B8E2271028933E732801D6ECC4447A71C3B2  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.PlatformInternal/Users
struct Users_tCAE308317CC9141CCA4C84AD29CE90A5D0EB3843  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103, ___callback__2)); }
	inline Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * get_callback__2() const { return ___callback__2; }
	inline Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>
struct Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2, ___callback__2)); }
	inline Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 * get_callback__2() const { return ___callback__2; }
	inline Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t3F970730ACE194458A921BE66B1DF3E5B76C7F63 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>
struct Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28, ___callback__2)); }
	inline Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C * get_callback__2() const { return ___callback__2; }
	inline Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t937E94AFC49B820FBE098ACB997C71DB9B74FD4C * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>
struct Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0, ___callback__2)); }
	inline Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 * get_callback__2() const { return ___callback__2; }
	inline Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tA8449FE2DEDE202C18755D4BE1B371A979341FD2 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866, ___callback__2)); }
	inline Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * get_callback__2() const { return ___callback__2; }
	inline Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>
struct Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t17D87388F669046EE27272F01362F88632750BD3 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474, ___callback__2)); }
	inline Callback_t17D87388F669046EE27272F01362F88632750BD3 * get_callback__2() const { return ___callback__2; }
	inline Callback_t17D87388F669046EE27272F01362F88632750BD3 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t17D87388F669046EE27272F01362F88632750BD3 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530, ___callback__2)); }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>
struct Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20, ___callback__2)); }
	inline Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F * get_callback__2() const { return ___callback__2; }
	inline Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t0A3B38013D415323A66DA493B074C17AFDB2522F * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>
struct Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95, ___callback__2)); }
	inline Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * get_callback__2() const { return ___callback__2; }
	inline Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>
struct Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4, ___callback__2)); }
	inline Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * get_callback__2() const { return ___callback__2; }
	inline Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>
struct Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C, ___callback__2)); }
	inline Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * get_callback__2() const { return ___callback__2; }
	inline Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<System.String>
struct Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC, ___callback__2)); }
	inline Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * get_callback__2() const { return ___callback__2; }
	inline Callback_tD043303749DFDABD54DB83282588105CC2ADB18D ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>
struct Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF, ___callback__2)); }
	inline Callback_t827F915E827EE8044B5F300339FE951E4557B20A * get_callback__2() const { return ___callback__2; }
	inline Callback_t827F915E827EE8044B5F300339FE951E4557B20A ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t827F915E827EE8044B5F300339FE951E4557B20A * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94, ___callback__2)); }
	inline Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * get_callback__2() const { return ___callback__2; }
	inline Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAccountAgeCategory>
struct Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t116FC09EB31D64C2B06F73D976FD17CD9248E468 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F, ___callback__2)); }
	inline Callback_t116FC09EB31D64C2B06F73D976FD17CD9248E468 * get_callback__2() const { return ___callback__2; }
	inline Callback_t116FC09EB31D64C2B06F73D976FD17CD9248E468 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t116FC09EB31D64C2B06F73D976FD17CD9248E468 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>
struct Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2, ___callback__2)); }
	inline Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 * get_callback__2() const { return ___callback__2; }
	inline Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tCC4A20B6E573D6A3F67DF753238AA82D4F7C8D59 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B, ___callback__2)); }
	inline Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * get_callback__2() const { return ___callback__2; }
	inline Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct Request_1_t2CA1B16D395258918A268B17227A7212918D2136  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t2CA1B16D395258918A268B17227A7212918D2136, ___callback__2)); }
	inline Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE, ___callback__2)); }
	inline Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Models.ApplicationInviteList
struct ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360  : public DeserializableList_1_t0D877458E402543369E9D661AE85176907E474C6
{
public:

public:
};


// Oculus.Platform.Models.BlockedUserList
struct BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217  : public DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6
{
public:

public:
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Oculus.Platform.Models.DestinationList
struct DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C  : public DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F
{
public:

public:
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// Oculus.Platform.Models.ProductList
struct ProductList_tC2405EC15E1F8BA7208810CB03DC828362BE293F  : public DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755
{
public:

public:
};


// Oculus.Platform.Models.PurchaseList
struct PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802  : public DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6
{
public:

public:
};


// Oculus.Platform.Models.SdkAccountList
struct SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67  : public DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// Oculus.Platform.Models.UserCapabilityList
struct UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3  : public DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D
{
public:

public:
};


// Oculus.Platform.Models.UserList
struct UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B  : public DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409
{
public:

public:
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
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


// Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5 
{
public:
	// System.Int32 Oculus.Platform.CAPI/OculusInitParams::sType
	int32_t ___sType_0;
	// System.String Oculus.Platform.CAPI/OculusInitParams::email
	String_t* ___email_1;
	// System.String Oculus.Platform.CAPI/OculusInitParams::password
	String_t* ___password_2;
	// System.UInt64 Oculus.Platform.CAPI/OculusInitParams::appId
	uint64_t ___appId_3;
	// System.String Oculus.Platform.CAPI/OculusInitParams::uriPrefixOverride
	String_t* ___uriPrefixOverride_4;

public:
	inline static int32_t get_offset_of_sType_0() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___sType_0)); }
	inline int32_t get_sType_0() const { return ___sType_0; }
	inline int32_t* get_address_of_sType_0() { return &___sType_0; }
	inline void set_sType_0(int32_t value)
	{
		___sType_0 = value;
	}

	inline static int32_t get_offset_of_email_1() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___email_1)); }
	inline String_t* get_email_1() const { return ___email_1; }
	inline String_t** get_address_of_email_1() { return &___email_1; }
	inline void set_email_1(String_t* value)
	{
		___email_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___email_1), (void*)value);
	}

	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_2), (void*)value);
	}

	inline static int32_t get_offset_of_appId_3() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___appId_3)); }
	inline uint64_t get_appId_3() const { return ___appId_3; }
	inline uint64_t* get_address_of_appId_3() { return &___appId_3; }
	inline void set_appId_3(uint64_t value)
	{
		___appId_3 = value;
	}

	inline static int32_t get_offset_of_uriPrefixOverride_4() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___uriPrefixOverride_4)); }
	inline String_t* get_uriPrefixOverride_4() const { return ___uriPrefixOverride_4; }
	inline String_t** get_address_of_uriPrefixOverride_4() { return &___uriPrefixOverride_4; }
	inline void set_uriPrefixOverride_4(String_t* value)
	{
		___uriPrefixOverride_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uriPrefixOverride_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke
{
	int32_t ___sType_0;
	char* ___email_1;
	char* ___password_2;
	uint64_t ___appId_3;
	char* ___uriPrefixOverride_4;
};
// Native definition for COM marshalling of Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com
{
	int32_t ___sType_0;
	Il2CppChar* ___email_1;
	Il2CppChar* ___password_2;
	uint64_t ___appId_3;
	Il2CppChar* ___uriPrefixOverride_4;
};

// Oculus.Platform.CAPI/ovrNetSyncVec3
struct ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874 
{
public:
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::x
	float ___x_0;
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::y
	float ___y_1;
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// Oculus.Platform.AccountAgeCategory
struct AccountAgeCategory_t7CB3BF78F68DDA2E0D0A19A74FE12B853EBBB766 
{
public:
	// System.Int32 Oculus.Platform.AccountAgeCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AccountAgeCategory_t7CB3BF78F68DDA2E0D0A19A74FE12B853EBBB766, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.AppAgeCategory
struct AppAgeCategory_t20C0A53353711738978F59BB29D1894A7DF687C0 
{
public:
	// System.Int32 Oculus.Platform.AppAgeCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppAgeCategory_t20C0A53353711738978F59BB29D1894A7DF687C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Oculus.Platform.KeyValuePairType
struct KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402 
{
public:
	// System.Int32 Oculus.Platform.KeyValuePairType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Oculus.Platform.Models.Purchase
struct Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.Purchase::DeveloperPayload
	String_t* ___DeveloperPayload_0;
	// System.DateTime Oculus.Platform.Models.Purchase::ExpirationTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___ExpirationTime_1;
	// System.DateTime Oculus.Platform.Models.Purchase::GrantTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___GrantTime_2;
	// System.String Oculus.Platform.Models.Purchase::ID
	String_t* ___ID_3;
	// System.String Oculus.Platform.Models.Purchase::ReportingId
	String_t* ___ReportingId_4;
	// System.String Oculus.Platform.Models.Purchase::Sku
	String_t* ___Sku_5;

public:
	inline static int32_t get_offset_of_DeveloperPayload_0() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___DeveloperPayload_0)); }
	inline String_t* get_DeveloperPayload_0() const { return ___DeveloperPayload_0; }
	inline String_t** get_address_of_DeveloperPayload_0() { return &___DeveloperPayload_0; }
	inline void set_DeveloperPayload_0(String_t* value)
	{
		___DeveloperPayload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeveloperPayload_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExpirationTime_1() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___ExpirationTime_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_ExpirationTime_1() const { return ___ExpirationTime_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_ExpirationTime_1() { return &___ExpirationTime_1; }
	inline void set_ExpirationTime_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___ExpirationTime_1 = value;
	}

	inline static int32_t get_offset_of_GrantTime_2() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___GrantTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_GrantTime_2() const { return ___GrantTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_GrantTime_2() { return &___GrantTime_2; }
	inline void set_GrantTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___GrantTime_2 = value;
	}

	inline static int32_t get_offset_of_ID_3() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___ID_3)); }
	inline String_t* get_ID_3() const { return ___ID_3; }
	inline String_t** get_address_of_ID_3() { return &___ID_3; }
	inline void set_ID_3(String_t* value)
	{
		___ID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ID_3), (void*)value);
	}

	inline static int32_t get_offset_of_ReportingId_4() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___ReportingId_4)); }
	inline String_t* get_ReportingId_4() const { return ___ReportingId_4; }
	inline String_t** get_address_of_ReportingId_4() { return &___ReportingId_4; }
	inline void set_ReportingId_4(String_t* value)
	{
		___ReportingId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReportingId_4), (void*)value);
	}

	inline static int32_t get_offset_of_Sku_5() { return static_cast<int32_t>(offsetof(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91, ___Sku_5)); }
	inline String_t* get_Sku_5() const { return ___Sku_5; }
	inline String_t** get_address_of_Sku_5() { return &___Sku_5; }
	inline void set_Sku_5(String_t* value)
	{
		___Sku_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sku_5), (void*)value);
	}
};


// Oculus.Platform.ReportRequestResponse
struct ReportRequestResponse_tDB4285D5D8F92FA92EB7DAAEF71800006E420791 
{
public:
	// System.Int32 Oculus.Platform.ReportRequestResponse::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReportRequestResponse_tDB4285D5D8F92FA92EB7DAAEF71800006E420791, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.RichPresenceExtraContext
struct RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140 
{
public:
	// System.Int32 Oculus.Platform.RichPresenceExtraContext::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.RichPresenceOptions
struct RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.RichPresenceOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.RosterOptions
struct RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.RosterOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.SdkAccountType
struct SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9 
{
public:
	// System.Int32 Oculus.Platform.SdkAccountType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.ServiceProvider
struct ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B 
{
public:
	// System.Int32 Oculus.Platform.ServiceProvider::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.ShareMediaStatus
struct ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2 
{
public:
	// System.Int32 Oculus.Platform.ShareMediaStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.SystemVoipStatus
struct SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC 
{
public:
	// System.Int32 Oculus.Platform.SystemVoipStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.TimeWindow
struct TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2 
{
public:
	// System.Int32 Oculus.Platform.TimeWindow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.UserOptions
struct UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.UserOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.UserOrdering
struct UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045 
{
public:
	// System.Int32 Oculus.Platform.UserOrdering::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.UserPresenceStatus
struct UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F 
{
public:
	// System.Int32 Oculus.Platform.UserPresenceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipBitrate
struct VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A 
{
public:
	// System.Int32 Oculus.Platform.VoipBitrate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipDtxState
struct VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F 
{
public:
	// System.Int32 Oculus.Platform.VoipDtxState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipMuteState
struct VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62 
{
public:
	// System.Int32 Oculus.Platform.VoipMuteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipOptions
struct VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.VoipOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.VoipSampleRate
struct VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D 
{
public:
	// System.Int32 Oculus.Platform.VoipSampleRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Message/MessageType
struct MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55 
{
public:
	// System.UInt32 Oculus.Platform.Message/MessageType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PlatformInternal/MessageTypeInternal
struct MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551 
{
public:
	// System.UInt32 Oculus.Platform.PlatformInternal/MessageTypeInternal::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Oculus.Platform.Message
struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/MessageType Oculus.Platform.Message::type
	uint32_t ___type_0;
	// System.UInt64 Oculus.Platform.Message::requestID
	uint64_t ___requestID_1;
	// Oculus.Platform.Models.Error Oculus.Platform.Message::error
	Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * ___error_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___type_0)); }
	inline uint32_t get_type_0() const { return ___type_0; }
	inline uint32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(uint32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_requestID_1() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___requestID_1)); }
	inline uint64_t get_requestID_1() const { return ___requestID_1; }
	inline uint64_t* get_address_of_requestID_1() { return &___requestID_1; }
	inline void set_requestID_1(uint64_t value)
	{
		___requestID_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___error_2)); }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * get_error_2() const { return ___error_2; }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 ** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_2), (void*)value);
	}
};

struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields
{
public:
	// Oculus.Platform.Message/ExtraMessageTypesHandler Oculus.Platform.Message::<HandleExtraMessageTypes>k__BackingField
	ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * ___U3CHandleExtraMessageTypesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields, ___U3CHandleExtraMessageTypesU3Ek__BackingField_3)); }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * get_U3CHandleExtraMessageTypesU3Ek__BackingField_3() const { return ___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF ** get_address_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return &___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline void set_U3CHandleExtraMessageTypesU3Ek__BackingField_3(ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * value)
	{
		___U3CHandleExtraMessageTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandleExtraMessageTypesU3Ek__BackingField_3), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Oculus.Platform.Models.SdkAccount
struct SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A  : public RuntimeObject
{
public:
	// Oculus.Platform.SdkAccountType Oculus.Platform.Models.SdkAccount::AccountType
	int32_t ___AccountType_0;
	// System.UInt64 Oculus.Platform.Models.SdkAccount::UserId
	uint64_t ___UserId_1;

public:
	inline static int32_t get_offset_of_AccountType_0() { return static_cast<int32_t>(offsetof(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A, ___AccountType_0)); }
	inline int32_t get_AccountType_0() const { return ___AccountType_0; }
	inline int32_t* get_address_of_AccountType_0() { return &___AccountType_0; }
	inline void set_AccountType_0(int32_t value)
	{
		___AccountType_0 = value;
	}

	inline static int32_t get_offset_of_UserId_1() { return static_cast<int32_t>(offsetof(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A, ___UserId_1)); }
	inline uint64_t get_UserId_1() const { return ___UserId_1; }
	inline uint64_t* get_address_of_UserId_1() { return &___UserId_1; }
	inline void set_UserId_1(uint64_t value)
	{
		___UserId_1 = value;
	}
};


// Oculus.Platform.Models.ShareMediaResult
struct ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7  : public RuntimeObject
{
public:
	// Oculus.Platform.ShareMediaStatus Oculus.Platform.Models.ShareMediaResult::Status
	int32_t ___Status_0;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7, ___Status_0)); }
	inline int32_t get_Status_0() const { return ___Status_0; }
	inline int32_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(int32_t value)
	{
		___Status_0 = value;
	}
};


// Oculus.Platform.Models.SystemVoipState
struct SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D  : public RuntimeObject
{
public:
	// Oculus.Platform.VoipMuteState Oculus.Platform.Models.SystemVoipState::MicrophoneMuted
	int32_t ___MicrophoneMuted_0;
	// Oculus.Platform.SystemVoipStatus Oculus.Platform.Models.SystemVoipState::Status
	int32_t ___Status_1;

public:
	inline static int32_t get_offset_of_MicrophoneMuted_0() { return static_cast<int32_t>(offsetof(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D, ___MicrophoneMuted_0)); }
	inline int32_t get_MicrophoneMuted_0() const { return ___MicrophoneMuted_0; }
	inline int32_t* get_address_of_MicrophoneMuted_0() { return &___MicrophoneMuted_0; }
	inline void set_MicrophoneMuted_0(int32_t value)
	{
		___MicrophoneMuted_0 = value;
	}

	inline static int32_t get_offset_of_Status_1() { return static_cast<int32_t>(offsetof(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D, ___Status_1)); }
	inline int32_t get_Status_1() const { return ___Status_1; }
	inline int32_t* get_address_of_Status_1() { return &___Status_1; }
	inline void set_Status_1(int32_t value)
	{
		___Status_1 = value;
	}
};


// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// Oculus.Platform.Models.User
struct User_tA163463AE919860D9B337F6104B028990A44B69D  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.User::DisplayName
	String_t* ___DisplayName_0;
	// System.UInt64 Oculus.Platform.Models.User::ID
	uint64_t ___ID_1;
	// System.String Oculus.Platform.Models.User::ImageURL
	String_t* ___ImageURL_2;
	// System.String Oculus.Platform.Models.User::OculusID
	String_t* ___OculusID_3;
	// System.String Oculus.Platform.Models.User::Presence
	String_t* ___Presence_4;
	// System.String Oculus.Platform.Models.User::PresenceDeeplinkMessage
	String_t* ___PresenceDeeplinkMessage_5;
	// System.String Oculus.Platform.Models.User::PresenceDestinationApiName
	String_t* ___PresenceDestinationApiName_6;
	// System.String Oculus.Platform.Models.User::PresenceLobbySessionId
	String_t* ___PresenceLobbySessionId_7;
	// System.String Oculus.Platform.Models.User::PresenceMatchSessionId
	String_t* ___PresenceMatchSessionId_8;
	// Oculus.Platform.UserPresenceStatus Oculus.Platform.Models.User::PresenceStatus
	int32_t ___PresenceStatus_9;
	// System.String Oculus.Platform.Models.User::SmallImageUrl
	String_t* ___SmallImageUrl_10;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ID_1)); }
	inline uint64_t get_ID_1() const { return ___ID_1; }
	inline uint64_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint64_t value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_ImageURL_2() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ImageURL_2)); }
	inline String_t* get_ImageURL_2() const { return ___ImageURL_2; }
	inline String_t** get_address_of_ImageURL_2() { return &___ImageURL_2; }
	inline void set_ImageURL_2(String_t* value)
	{
		___ImageURL_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImageURL_2), (void*)value);
	}

	inline static int32_t get_offset_of_OculusID_3() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___OculusID_3)); }
	inline String_t* get_OculusID_3() const { return ___OculusID_3; }
	inline String_t** get_address_of_OculusID_3() { return &___OculusID_3; }
	inline void set_OculusID_3(String_t* value)
	{
		___OculusID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OculusID_3), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_4() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___Presence_4)); }
	inline String_t* get_Presence_4() const { return ___Presence_4; }
	inline String_t** get_address_of_Presence_4() { return &___Presence_4; }
	inline void set_Presence_4(String_t* value)
	{
		___Presence_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Presence_4), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDeeplinkMessage_5() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDeeplinkMessage_5)); }
	inline String_t* get_PresenceDeeplinkMessage_5() const { return ___PresenceDeeplinkMessage_5; }
	inline String_t** get_address_of_PresenceDeeplinkMessage_5() { return &___PresenceDeeplinkMessage_5; }
	inline void set_PresenceDeeplinkMessage_5(String_t* value)
	{
		___PresenceDeeplinkMessage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDeeplinkMessage_5), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDestinationApiName_6() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDestinationApiName_6)); }
	inline String_t* get_PresenceDestinationApiName_6() const { return ___PresenceDestinationApiName_6; }
	inline String_t** get_address_of_PresenceDestinationApiName_6() { return &___PresenceDestinationApiName_6; }
	inline void set_PresenceDestinationApiName_6(String_t* value)
	{
		___PresenceDestinationApiName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDestinationApiName_6), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceLobbySessionId_7() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceLobbySessionId_7)); }
	inline String_t* get_PresenceLobbySessionId_7() const { return ___PresenceLobbySessionId_7; }
	inline String_t** get_address_of_PresenceLobbySessionId_7() { return &___PresenceLobbySessionId_7; }
	inline void set_PresenceLobbySessionId_7(String_t* value)
	{
		___PresenceLobbySessionId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceLobbySessionId_7), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceMatchSessionId_8() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceMatchSessionId_8)); }
	inline String_t* get_PresenceMatchSessionId_8() const { return ___PresenceMatchSessionId_8; }
	inline String_t** get_address_of_PresenceMatchSessionId_8() { return &___PresenceMatchSessionId_8; }
	inline void set_PresenceMatchSessionId_8(String_t* value)
	{
		___PresenceMatchSessionId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceMatchSessionId_8), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceStatus_9() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceStatus_9)); }
	inline int32_t get_PresenceStatus_9() const { return ___PresenceStatus_9; }
	inline int32_t* get_address_of_PresenceStatus_9() { return &___PresenceStatus_9; }
	inline void set_PresenceStatus_9(int32_t value)
	{
		___PresenceStatus_9 = value;
	}

	inline static int32_t get_offset_of_SmallImageUrl_10() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___SmallImageUrl_10)); }
	inline String_t* get_SmallImageUrl_10() const { return ___SmallImageUrl_10; }
	inline String_t** get_address_of_SmallImageUrl_10() { return &___SmallImageUrl_10; }
	inline void set_SmallImageUrl_10(String_t* value)
	{
		___SmallImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmallImageUrl_10), (void*)value);
	}
};


// Oculus.Platform.Models.UserAccountAgeCategory
struct UserAccountAgeCategory_tCA00754466807485E00D72AD71077CDD3DB99E30  : public RuntimeObject
{
public:
	// Oculus.Platform.AccountAgeCategory Oculus.Platform.Models.UserAccountAgeCategory::AgeCategory
	int32_t ___AgeCategory_0;

public:
	inline static int32_t get_offset_of_AgeCategory_0() { return static_cast<int32_t>(offsetof(UserAccountAgeCategory_tCA00754466807485E00D72AD71077CDD3DB99E30, ___AgeCategory_0)); }
	inline int32_t get_AgeCategory_0() const { return ___AgeCategory_0; }
	inline int32_t* get_address_of_AgeCategory_0() { return &___AgeCategory_0; }
	inline void set_AgeCategory_0(int32_t value)
	{
		___AgeCategory_0 = value;
	}
};


// Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 
{
public:
	// System.String Oculus.Platform.CAPI/ovrKeyValuePair::key_
	String_t* ___key__0;
	// Oculus.Platform.KeyValuePairType Oculus.Platform.CAPI/ovrKeyValuePair::valueType_
	int32_t ___valueType__1;
	// System.String Oculus.Platform.CAPI/ovrKeyValuePair::stringValue_
	String_t* ___stringValue__2;
	// System.Int32 Oculus.Platform.CAPI/ovrKeyValuePair::intValue_
	int32_t ___intValue__3;
	// System.Double Oculus.Platform.CAPI/ovrKeyValuePair::doubleValue_
	double ___doubleValue__4;

public:
	inline static int32_t get_offset_of_key__0() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___key__0)); }
	inline String_t* get_key__0() const { return ___key__0; }
	inline String_t** get_address_of_key__0() { return &___key__0; }
	inline void set_key__0(String_t* value)
	{
		___key__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key__0), (void*)value);
	}

	inline static int32_t get_offset_of_valueType__1() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___valueType__1)); }
	inline int32_t get_valueType__1() const { return ___valueType__1; }
	inline int32_t* get_address_of_valueType__1() { return &___valueType__1; }
	inline void set_valueType__1(int32_t value)
	{
		___valueType__1 = value;
	}

	inline static int32_t get_offset_of_stringValue__2() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___stringValue__2)); }
	inline String_t* get_stringValue__2() const { return ___stringValue__2; }
	inline String_t** get_address_of_stringValue__2() { return &___stringValue__2; }
	inline void set_stringValue__2(String_t* value)
	{
		___stringValue__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue__2), (void*)value);
	}

	inline static int32_t get_offset_of_intValue__3() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___intValue__3)); }
	inline int32_t get_intValue__3() const { return ___intValue__3; }
	inline int32_t* get_address_of_intValue__3() { return &___intValue__3; }
	inline void set_intValue__3(int32_t value)
	{
		___intValue__3 = value;
	}

	inline static int32_t get_offset_of_doubleValue__4() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___doubleValue__4)); }
	inline double get_doubleValue__4() const { return ___doubleValue__4; }
	inline double* get_address_of_doubleValue__4() { return &___doubleValue__4; }
	inline void set_doubleValue__4(double value)
	{
		___doubleValue__4 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke
{
	char* ___key__0;
	int32_t ___valueType__1;
	char* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};
// Native definition for COM marshalling of Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com
{
	Il2CppChar* ___key__0;
	int32_t ___valueType__1;
	Il2CppChar* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>
struct Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<System.String>
struct Callback_tD043303749DFDABD54DB83282588105CC2ADB18D  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>
struct Callback_t827F915E827EE8044B5F300339FE951E4557B20A  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>
struct Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977, ___data_4)); }
	inline PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 * get_data_4() const { return ___data_4; }
	inline PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(PlatformInitialize_tB7EE16E921791873DFC8C065BF13FE7996106F50 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<System.String>
struct Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	String_t* ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84, ___data_4)); }
	inline String_t* get_data_4() const { return ___data_4; }
	inline String_t** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(String_t* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Oculus.Platform.CAPI/FilterCallback
struct FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/Callback
struct Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// ReportingCallbackSample
struct ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ReportingCallbackSample::InVRConsole
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___InVRConsole_4;
	// UnityEngine.UI.Text ReportingCallbackSample::DestinationsConsole
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DestinationsConsole_5;

public:
	inline static int32_t get_offset_of_InVRConsole_4() { return static_cast<int32_t>(offsetof(ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC, ___InVRConsole_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_InVRConsole_4() const { return ___InVRConsole_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_InVRConsole_4() { return &___InVRConsole_4; }
	inline void set_InVRConsole_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___InVRConsole_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InVRConsole_4), (void*)value);
	}

	inline static int32_t get_offset_of_DestinationsConsole_5() { return static_cast<int32_t>(offsetof(ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC, ___DestinationsConsole_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DestinationsConsole_5() const { return ___DestinationsConsole_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DestinationsConsole_5() { return &___DestinationsConsole_5; }
	inline void set_DestinationsConsole_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DestinationsConsole_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestinationsConsole_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::initialPlaybackDelayMS
	int32_t ___initialPlaybackDelayMS_4;
	// UnityEngine.AudioSource Oculus.Platform.VoipAudioSourceHiLevel::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// System.Single Oculus.Platform.VoipAudioSourceHiLevel::peakAmplitude
	float ___peakAmplitude_6;
	// Oculus.Platform.IVoipPCMSource Oculus.Platform.VoipAudioSourceHiLevel::pcmSource
	RuntimeObject* ___pcmSource_7;

public:
	inline static int32_t get_offset_of_initialPlaybackDelayMS_4() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___initialPlaybackDelayMS_4)); }
	inline int32_t get_initialPlaybackDelayMS_4() const { return ___initialPlaybackDelayMS_4; }
	inline int32_t* get_address_of_initialPlaybackDelayMS_4() { return &___initialPlaybackDelayMS_4; }
	inline void set_initialPlaybackDelayMS_4(int32_t value)
	{
		___initialPlaybackDelayMS_4 = value;
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_peakAmplitude_6() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___peakAmplitude_6)); }
	inline float get_peakAmplitude_6() const { return ___peakAmplitude_6; }
	inline float* get_address_of_peakAmplitude_6() { return &___peakAmplitude_6; }
	inline void set_peakAmplitude_6(float value)
	{
		___peakAmplitude_6 = value;
	}

	inline static int32_t get_offset_of_pcmSource_7() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___pcmSource_7)); }
	inline RuntimeObject* get_pcmSource_7() const { return ___pcmSource_7; }
	inline RuntimeObject** get_address_of_pcmSource_7() { return &___pcmSource_7; }
	inline void set_pcmSource_7(RuntimeObject* value)
	{
		___pcmSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcmSource_7), (void*)value);
	}
};

struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::audioSystemPlaybackFrequency
	int32_t ___audioSystemPlaybackFrequency_8;
	// System.Boolean Oculus.Platform.VoipAudioSourceHiLevel::verboseLogging
	bool ___verboseLogging_9;

public:
	inline static int32_t get_offset_of_audioSystemPlaybackFrequency_8() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___audioSystemPlaybackFrequency_8)); }
	inline int32_t get_audioSystemPlaybackFrequency_8() const { return ___audioSystemPlaybackFrequency_8; }
	inline int32_t* get_address_of_audioSystemPlaybackFrequency_8() { return &___audioSystemPlaybackFrequency_8; }
	inline void set_audioSystemPlaybackFrequency_8(int32_t value)
	{
		___audioSystemPlaybackFrequency_8 = value;
	}

	inline static int32_t get_offset_of_verboseLogging_9() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___verboseLogging_9)); }
	inline bool get_verboseLogging_9() const { return ___verboseLogging_9; }
	inline bool* get_address_of_verboseLogging_9() { return &___verboseLogging_9; }
	inline void set_verboseLogging_9(bool value)
	{
		___verboseLogging_9 = value;
	}
};


// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Platform.VoipAudioSourceHiLevel Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::parent
	VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * ___parent_4;
	// System.Single[] Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::scratchBuffer
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___scratchBuffer_5;

public:
	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___parent_4)); }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * get_parent_4() const { return ___parent_4; }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_4), (void*)value);
	}

	inline static int32_t get_offset_of_scratchBuffer_5() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___scratchBuffer_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_scratchBuffer_5() const { return ___scratchBuffer_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_scratchBuffer_5() { return &___scratchBuffer_5; }
	inline void set_scratchBuffer_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___scratchBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scratchBuffer_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Oculus.Platform.CAPI/ovrKeyValuePair[]
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  m_Items[1];

public:
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___stringValue__2), (void*)NULL);
		#endif
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___stringValue__2), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void Oculus.Platform.Models.DeserializableList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared (Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<System.Object>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * Request_1_OnComplete_m2ACE384D6DB84724178C79998F8BFC39C6B31818_gshared (Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * __this, Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * ___callback0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.Object>::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared (Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * __this, uint64_t ___requestID0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Models.DeserializableList`1<System.Object>::get_HasNextPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.String Oculus.Platform.Models.DeserializableList`1<System.Object>::get_NextUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0A1AC6616615D761104DE54318C385DA8168C3EA_gshared (Dictionary_2_tA83C5B43B5F4A13A6B2E489398D98C8BFE81B0B2 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<System.Object>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_SetNotificationCallback_TisRuntimeObject_mADABF8A37586170951B38A637B83E57B21FC7126_gshared (uint32_t ___type0, Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * ___callback1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetDescription(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetDescription_m1C064FFB668183EFEDDD51E4C3662DC0664EC29C (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetFormattedPrice(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetFormattedPrice_mA0F206EF64A201098D81E8F1203A87061ABD3594 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetName_m87C3130B9F5E84262ACE1AF4817E2D4C00F28F78 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Product_GetSKU(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Product_GetSKU_m0531ABE3C9F562E74CE42E2F595A29DAA24C28B6 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Product>::.ctor()
inline void DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340 (DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_ProductArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_ProductArray_GetSize_m6C2A87C9EAF8ECCFA323A721135045B457974C05 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF (uintptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Product>::.ctor(System.Int32)
inline void List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976 (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455 (uint64_t ___value0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_ProductArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_ProductArray_GetElement_mBF721AA706BABB8B5689FFB1AE4F5754550F748E (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.Product::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Product__ctor_mB7FB491D8CBF0441B194271CF38C221D2F568850 (Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Product>::Add(!0)
inline void List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9 (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * __this, Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D *, Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_ProductArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_ProductArray_GetNextUrl_m9B6A64C4E056A698C6066EBCBF51F1A1F2BF6B93 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetDeveloperPayload(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetDeveloperPayload_m51E81D8AD3788086DB7479C080E8424557EA717A (intptr_t ___obj0, const RuntimeMethod* method);
// System.DateTime Oculus.Platform.CAPI::ovr_Purchase_GetExpirationTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  CAPI_ovr_Purchase_GetExpirationTime_mAA28F4605793BA950E946D9DEF878EF859CCA3CA (intptr_t ___obj0, const RuntimeMethod* method);
// System.DateTime Oculus.Platform.CAPI::ovr_Purchase_GetGrantTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  CAPI_ovr_Purchase_GetGrantTime_m554C8824F7C310595BA81D6DA3C06BEB182C39AD (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetPurchaseStrID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetPurchaseStrID_m1A8E6601C8C25549FC5FA02748015BEA73AAD8A8 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetReportingId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetReportingId_m420810937A63F796ACDFA71915A41E8E03BE8B87 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Purchase_GetSKU(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Purchase_GetSKU_mB5376F5BA72975DF8DED4A2A8FF10248395C94DB (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Purchase>::.ctor()
inline void DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60 (DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_PurchaseArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_PurchaseArray_GetSize_m4439121C6A924CFB4D6022670B5E7947EC7A274F (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>::.ctor(System.Int32)
inline void List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2 (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_PurchaseArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_PurchaseArray_GetElement_mBD648FAA2DAC1D79C1C9720C0E9CBDDA008F9FAB (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.Purchase::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Purchase__ctor_m7F4817017457DC8BE9111B59B8FF76EC0F00B1DF (Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Purchase>::Add(!0)
inline void List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4 (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * __this, Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 *, Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_PurchaseArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_PurchaseArray_GetNextUrl_m547135DC2E4748CEA8552BBCD534AD320BF577E9 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_RejoinDialogResult_GetRejoinSelected(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_RejoinDialogResult_GetRejoinSelected_m47B59583C47F368C040DD24F2A3CFCBC9FFE36A4 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void ReportingCallbackSample::UpdateConsole(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7 (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, String_t* ___value0, const RuntimeMethod* method);
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.Core::AsyncInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * Core_AsyncInitialize_mCCDE08297048079BEA5EF065551E701C13C96DE0 (String_t* ___appId0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41 (Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3 (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * __this, Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * (*) (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *, Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 *, const RuntimeMethod*))Request_1_OnComplete_m2ACE384D6DB84724178C79998F8BFC39C6B31818_gshared)(__this, ___callback0, method);
}
// System.Boolean Oculus.Platform.Message::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * __this, const RuntimeMethod* method);
// Oculus.Platform.Request Oculus.Platform.AbuseReport::ReportRequestHandled(Oculus.Platform.ReportRequestResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * AbuseReport_ReportRequestHandled_mB82DF4285F961652409209FE3886C7B1DB7322EF (int32_t ___response0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<System.String>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.AbuseReport::SetReportButtonPressedNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbuseReport_SetReportButtonPressedNotificationCallback_m0878F977ABE7521FB016EF9333ECBCC0E54FE62C (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request::set_RequestID(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF_inline (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::AddRequest(Oculus.Platform.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_AddRequest_m6E12340AA512A02FA6DA2F03CE8E220A565CAFA4 (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * ___request0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message/Callback::Invoke(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::RunCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_RunCallbacks_mDB88B3AB23E0AFBED6085D332BC5C666BEFD8898 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::RunLimitedCallbacks(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_RunLimitedCallbacks_mF6E9150737245CA294F7C80B6E6D6D228D999894 (uint32_t ___limit0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Core::IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_RichPresence_Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_RichPresence_Clear_m554F1AA044C98D59C287B6308493349D4175AAF0 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___requestID0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_RichPresence_GetDestinations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_RichPresence_GetDestinations_m315D590037EF95ABF6B27A8DB3F4905E910D89E1 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList>::.ctor(System.UInt64)
inline void Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.IntPtr Oculus.Platform.RichPresenceOptions::op_Explicit(Oculus.Platform.RichPresenceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RichPresenceOptions_op_Explicit_mF478BF1D9D16FE00A644C2DF374698768F78619F (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * ___options0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_RichPresence_Set(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_RichPresence_Set_m1E91F15B2A132AE728A16D290ECCCE6348E44A50 (intptr_t ___richPresenceOptions0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539 (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Destination>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_inline (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tEA57DBB42E80E2CE534A747FC16663CBC461383F *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_HTTP_GetWithMessageType(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA (String_t* ___url0, int32_t ___messageType1, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_RichPresenceOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_RichPresenceOptions_Create_m6959C909A10AF0568951C0BA790238F95C548BAD (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RichPresenceOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RichPresenceOptions_Destroy_mF2221A1D8985A038F30F27BF27C5328EB619A915 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_RosterOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_RosterOptions_Create_m7A3486B163E9C37F61DE282362546854087CDEAE (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RosterOptions_AddSuggestedUser(System.IntPtr,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RosterOptions_AddSuggestedUser_mF6F256BEBAAFC0899DA681028D1D73080773604F (intptr_t ___handle0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RosterOptions_ClearSuggestedUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RosterOptions_ClearSuggestedUsers_mA5D7E3A48A5EA7033BF1BA06F43206BA4929B6EA (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RosterOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RosterOptions_Destroy_m646B4A1CD1E1FDD23B931C2CF5C71CFD6349793E (intptr_t ___handle0, const RuntimeMethod* method);
// Oculus.Platform.SdkAccountType Oculus.Platform.CAPI::ovr_SdkAccount_GetAccountType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SdkAccount_GetAccountType_mC2E1133EB86528148975004F29B718EA61AD4006 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_SdkAccount_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_SdkAccount_GetUserId_m970A4B0F927C92026D89136ADF147B142E11FFDC (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>::.ctor()
inline void DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C (DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_SdkAccountArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_SdkAccountArray_GetSize_m7FA8BD0A681B314F2B13F8303B3DBC0E66B4901E (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>::.ctor(System.Int32)
inline void List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572 (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_SdkAccountArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_SdkAccountArray_GetElement_m94BF2B7FDAC075B64F649A2E6C1902A1F0A5405A (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.SdkAccount::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7 (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>::Add(!0)
inline void List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288 (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * __this, SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *, SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_SendInvitesResult_GetInvites(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_SendInvitesResult_GetInvites_m1C81C6EC3B1F4E8993A0D5D92217EB9279A9E3BF (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.ApplicationInviteList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationInviteList__ctor_mBF3A124C10AC8CCEFCD2EFB20D3F2EC4AA624EC5 (ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * __this, intptr_t ___a0, const RuntimeMethod* method);
// Oculus.Platform.ShareMediaStatus Oculus.Platform.CAPI::ovr_ShareMediaResult_GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_ShareMediaResult_GetStatus_mC27964DADCE63B543E03672BFC77A1716364D81A (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.PlatformSettings::get_MobileAppID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformSettings_get_MobileAppID_m04773E35E48A5E96899E35539E9BA86D363F7697 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline (const RuntimeMethod* method);
// System.UInt64 System.UInt64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_mF4BDC98BB5988FA03D4750E7F44A38766C48ADAD (String_t* ___s0, const RuntimeMethod* method);
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitialize(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, uint64_t ___appID0, String_t* ___accessToken1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UnityResetTestPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UnityResetTestPlatform_mAA9C56C069F30DDA00E8E15F9AC793FF2EB41315 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UnityInitGlobals(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UnityInitGlobals_mD93010271FEB9AE86D398DEB83A7D974D718A256 (intptr_t ___loggingCB0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PlatformInitializeWithAccessToken(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PlatformInitializeWithAccessToken_m7AE6DEF63FB0385E174C219E92AA092E0B633119 (uint64_t ___appId0, String_t* ___accessToken1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>::.ctor(System.UInt64)
inline void Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688 (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>::get_Count()
inline int32_t Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1 (Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 *, const RuntimeMethod*))Dictionary_2_get_Count_m0A1AC6616615D761104DE54318C385DA8168C3EA_gshared)(__this, method);
}
// Oculus.Platform.CAPI/ovrKeyValuePair[] Oculus.Platform.CAPI::DictionaryToOVRKeyValuePairs(System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* CAPI_DictionaryToOVRKeyValuePairs_m33039ACF17A4DFB7102D3BB870E4BDD84E68A01F (Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * ___dict0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PlatformInitializeWithAccessTokenAndOptions(System.UInt64,System.String,Oculus.Platform.CAPI/ovrKeyValuePair[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PlatformInitializeWithAccessTokenAndOptions_m358411D37BD1C26DDB5D263BB249D91139BA816A (uint64_t ___appId0, String_t* ___accessToken1, ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* ___configOptions2, uintptr_t ___numOptions3, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_SupplementaryMetric_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_SupplementaryMetric_GetID_m606A0E3DBB03921BC3848204032D16FA213AB3FC (intptr_t ___obj0, const RuntimeMethod* method);
// System.Int64 Oculus.Platform.CAPI::ovr_SupplementaryMetric_GetMetric(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CAPI_ovr_SupplementaryMetric_GetMetric_m75E8565C96444EB9E164D7B526BB06D133996744 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.VoipMuteState Oculus.Platform.CAPI::ovr_SystemVoipState_GetMicrophoneMuted(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SystemVoipState_GetMicrophoneMuted_mACFAC0E6A669BAA76D192487A674CC5853E8A136 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.SystemVoipStatus Oculus.Platform.CAPI::ovr_SystemVoipState_GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SystemVoipState_GetStatus_m90B4964E758086D098299E9ABD65AF85EA1B8469 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetDisplayName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetDisplayName_m79D2FCAC61E4413B3F72F54305D498294AE338ED (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetID_mA83BA4D33092F21AAAB03ABA1F0D5E1B2BF9CEEA (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetImageUrl_m1647E45A5A766481651AF981DA8BD26EE99A68D0 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetOculusID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetOculusID_m554BADFCCA6BA7FA4A2FD9AD7134E7EA88DAEDDD (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresence(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresence_mF5012075F715E47929569AB9711A007D8E329837 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceDeeplinkMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceDeeplinkMessage_mA9DF540B83D3462E25A1919F564627BA9C2F951A (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceDestinationApiName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceDestinationApiName_m6B293BFCDA113BFF62DDF162814C99C514A27B9F (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceLobbySessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceLobbySessionId_m8741502339D1C4012CDF01DF9687C44B02268011 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceMatchSessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceMatchSessionId_mBAE59F719C34DAD257D3579BE1124D4050A814E8 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.UserPresenceStatus Oculus.Platform.CAPI::ovr_User_GetPresenceStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_User_GetPresenceStatus_mF1A68B4B6BFEDB3427E5669C2538CBD4FF440A2C (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetSmallImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetSmallImageUrl_mEF25A58B6C95EB63D428AC117FCED150BFA7181A (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.AccountAgeCategory Oculus.Platform.CAPI::ovr_UserAccountAgeCategory_GetAgeCategory(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_UserAccountAgeCategory_GetAgeCategory_mDFFB377D930FC3505AF670B746AA05D1C4B4252B (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserAgeCategory_Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserAgeCategory_Get_mF0C8B9D4D29642B5334CBD9F26CE7D335E87063D (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserAccountAgeCategory>::.ctor(System.UInt64)
inline void Request_1__ctor_m5BC83E3C43BCDBDE2F7FB98D5FD52AA9C839F5B2 (Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_UserAgeCategory_Report(Oculus.Platform.AppAgeCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserAgeCategory_Report_mA21B12020B844E1C43937429EA8A6CCB4BE78C02 (int32_t ___age_category0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserCapability_GetDescription(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapability_GetDescription_mAD9CB28C0295D38B0E2ADC133772149295EAB3BB (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserCapability_GetIsEnabled(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserCapability_GetIsEnabled_mE5152AC1C76C8D290D17C892A80A368298FB1160 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserCapability_GetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapability_GetName_mDC1AF93CC0A851E0C27414673A2EFB9BCC35869B (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserCapability_GetReasonCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapability_GetReasonCode_mDC9FDAF51C647EAAEBCB443AF9B5A01901157C43 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>::.ctor()
inline void DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_UserCapabilityArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_UserCapabilityArray_GetSize_mA79A06757C74543A486D9258384E7FC98B643914 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>::.ctor(System.Int32)
inline void List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242 (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_UserCapabilityArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserCapabilityArray_GetElement_m09B27F5BDCDD52A6D69FA847C1970B088BA52604 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserCapability::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCapability__ctor_m339976E7D4FAFFE7CD3D609F4876C530D7C74275 (UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.UserCapability>::Add(!0)
inline void List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * __this, UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 *, UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_UserCapabilityArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserCapabilityArray_GetNextUrl_m54A282B9AC8A02F8A96B413DCC922E1ADBE88C1B (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateDeleteEntryByKey_m0E52FF96067754655F2BA0A56C64FE20F84A41D1 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>::.ctor(System.UInt64)
inline void Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408 (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateGetEntries_m35C39C5C06EB8011B4B67871124D28F6133BD03B (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor(System.UInt64)
inline void Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4 (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateGetEntryByKey_m6D3FFD07EA7409F7BF0C8BC610EA91CE855AA1E1 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateWriteEntry_m64C30A59D7253A6FAA9F2A28A4ACECACD42D281B (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicDeleteEntryByKey_m499E4B51F4E611D9205300AA0C52DDB68A47FD05 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicGetEntries_m55AD4C16D002B3705A31EBEA01C738DBF40C044B (uint64_t ___userID0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicGetEntryByKey_mEC7AB95AC43D76408C2E600E0A8E23B14CD73F24 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicWriteEntry_mE2C576EAD8732949BD258CEDBD25B1BB29CEB7F3 (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserDataStoreUpdateResponse_GetSuccess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m0C36C63931711623D5BA4192EBB5F1F2951F991A (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::.ctor()
inline void DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_UserArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_UserArray_GetSize_m38BD39A3E6D4B8573D525ED1D1B112FCAF956BD2 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.User>::.ctor(System.Int32)
inline void List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_UserArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserArray_GetElement_m0619479C1F1520ADDEF134E3D5435467EF933296 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961 (User_tA163463AE919860D9B337F6104B028990A44B69D * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.User>::Add(!0)
inline void List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8 (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * __this, User_tA163463AE919860D9B337F6104B028990A44B69D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_UserArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserArray_GetNextUrl_mA95C138EB69C1CE98D550D235914C0EE382EF63D (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_UserOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserOptions_Create_m60251C8DAB5A03F2552EAF3E89E48FFAE3172570 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_SetMaxUsers(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_SetMaxUsers_mDD81D5F354B885E7E9343A2E2DA0A35136187D00 (intptr_t ___handle0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_AddServiceProvider(System.IntPtr,Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_AddServiceProvider_mBD932E1353292F7251B36D8F6830DA955347840B (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_ClearServiceProviders(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_ClearServiceProviders_m7922D5B53B2DF826ED57DF3278AD1BB6E4C90619 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_SetTimeWindow(System.IntPtr,Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_SetTimeWindow_m596ECBD8F41B3A6B119D92F990A5518019D47F18 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_Destroy_m9E50FD0A41BF5B26BD6EE525D7E57CC94D238080 (intptr_t ___handle0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserProof_GetNonce(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserProof_GetNonce_mF6A1AE97D83D3DD6423455D5A3D6F9471248252B (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserReportID_GetDidCancel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserReportID_GetDidCancel_mB0B91FFA73FA546D655819A69AF3960E59FD39A9 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserReportID_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserReportID_GetID_m8220610EB1BCBE2E0399AD8FC23BCB81732B046B (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_GetLoggedInUserLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_GetLoggedInUserLocale_mC990141AE7AB83CAF32CB5C7E45978DE97F1C0CE (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_Get_mAE29EECCF7FCB204D33C0A31C30E40616299C1EC (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.User>::.ctor(System.UInt64)
inline void Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetAccessToken_m899991AE1663D505CF1DDAC66C6F20F497C510F7 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.String>::.ctor(System.UInt64)
inline void Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetBlockedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetBlockedUsers_m8A7F7DF303AA640C2F9CBBB8F43D384754FC650B (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList>::.ctor(System.UInt64)
inline void Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUser_m8B09DC2F47134337CF635E646AEDFBDBBBE4B150 (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUserFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUserFriends_m27F0E883F04D1961044BAE83A942AE4C2AB61B2E (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>::.ctor(System.UInt64)
inline void Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5 (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetOrgScopedID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetOrgScopedID_mDD36A00BA3DEEBC290E9766FE20A23028082100D (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>::.ctor(System.UInt64)
inline void Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004 (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetSdkAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetSdkAccounts_m08EE62B28E7308F42388587BAE022FF3AEE8773A (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>::.ctor(System.UInt64)
inline void Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88 (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetUserProof_mACFFCCAC2CDD3F5D7469D2CCAC8B24C007B926D0 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>::.ctor(System.UInt64)
inline void Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchBlockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchBlockFlow_m0BBDE990228AB9AAA67B95BDF0DB62098F06BC65 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult>::.ctor(System.UInt64)
inline void Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchFriendRequestFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchFriendRequestFlow_m8FD9F09D6DA42EFF9BE262A8EB00E8AD6569EB89 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>::.ctor(System.UInt64)
inline void Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268 (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchUnblockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchUnblockFlow_m0F11C16B5CE848198711945FF121EBEB5AE5FAA9 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult>::.ctor(System.UInt64)
inline void Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.BlockedUser>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_inline (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_t435BE5DCEE044CD4E239D13C12EB684AF5DF6FD6 *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_inline (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21 (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserCapability>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_inline (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList>::.ctor(System.UInt64)
inline void Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.CAPI::ovr_Voip_Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Start_m0C4835CAE5708EB73AF4421B43F0BC6447D0A21F (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Accept_m9800FE8E4D343E0C0CE2FDC0487FEA5BB26E28A8 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Stop_m0DC234A970B860B06D713DD66F162277CBA5C7E5 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(Oculus.Platform.CAPI/FilterCallback,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer_m1D5F5B3B07B29D553B92A5CA21A02FF11CD8FAF0 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * ___cb0, uintptr_t ___bufferSizeElements1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetMicrophoneMuted(Oculus.Platform.VoipMuteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetMicrophoneMuted_m2EA767996A68B9920B04B54C471D54628C92664C (int32_t ___state0, const RuntimeMethod* method);
// Oculus.Platform.VoipMuteState Oculus.Platform.CAPI::ovr_Voip_GetSystemVoipMicrophoneMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetSystemVoipMicrophoneMuted_mF4624D95D21D432C9A5F72F59A2304875C255394 (const RuntimeMethod* method);
// Oculus.Platform.SystemVoipStatus Oculus.Platform.CAPI::ovr_Voip_GetSystemVoipStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetSystemVoipStatus_mA4CF3DB3823A656E832BC18617FB4105A1F1A30E (const RuntimeMethod* method);
// Oculus.Platform.VoipDtxState Oculus.Platform.CAPI::ovr_Voip_GetIsConnectionUsingDtx(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetIsConnectionUsingDtx_m12173DD61FF2478758A671585481EA2AEA569C20 (uint64_t ___peerID0, const RuntimeMethod* method);
// Oculus.Platform.VoipBitrate Oculus.Platform.CAPI::ovr_Voip_GetLocalBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetLocalBitrate_mF1AD054056CC9EA54CB22E970EA936F0C0BF0B37 (uint64_t ___peerID0, const RuntimeMethod* method);
// Oculus.Platform.VoipBitrate Oculus.Platform.CAPI::ovr_Voip_GetRemoteBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetRemoteBitrate_mD225E49EC7ABDD91FCE45929F96E57F455D8CBC1 (uint64_t ___peerID0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.VoipOptions::op_Explicit(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VoipOptions_op_Explicit_mECDFD67AF4F1C6685115F82D28645BE57BC9FBD2 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___options0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetNewConnectionOptions(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetNewConnectionOptions_m5A52B5110B93D84F8204842ED34DA84C431DAC8A (intptr_t ___voipOptions0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Voip_GetMicrophoneAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Voip_GetMicrophoneAvailability_m99121C9D1331FA1F0946ABD5ADEE29F27522D275 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState>::.ctor(System.UInt64)
inline void Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_Voip_SetSystemVoipSuppressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Voip_SetSystemVoipSuppressed_m6EB89BEC82B94CD4849BF1EBC5CA0C4A7127CACB (bool ___suppressed0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>::.ctor(System.UInt64)
inline void Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052 (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<System.String>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0 (uint32_t ___type0, Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_mADABF8A37586170951B38A637B83E57B21FC7126_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.SystemVoipState>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m95DD231697F2826CDF057F18C4942819F659B6DD (uint32_t ___type0, Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t827F915E827EE8044B5F300339FE951E4557B20A *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_mADABF8A37586170951B38A637B83E57B21FC7126_gshared)(___type0, ___callback1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate>()
inline FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate>()
inline FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE (const RuntimeMethod* method);
// Oculus.Platform.VoipSampleRate Oculus.Platform.VoipAudioSourceHiLevel::SampleRateToEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, int32_t ___rate0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetOutputSampleRate(Oculus.Platform.VoipSampleRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetOutputSampleRate_m6372425AE289A6E61861320B0BCF4A9F5F1FABA6 (int32_t ___rate0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.VoipPCMSourceNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::MSToElements(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_MSToElements_m8A392BF3FF2D7D485E672412DC107E03602AD24E (int32_t ___ms0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_VoipOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_VoipOptions_Create_mD4DD27514BC524AD0912019B1B6367C8CB613C03 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_SetBitrateForNewConnections(System.IntPtr,Oculus.Platform.VoipBitrate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_SetBitrateForNewConnections_mEC0DA6AE80F1A013CB655B6B2DB1890BD9FD9356 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_SetCreateNewConnectionUseDtx(System.IntPtr,Oculus.Platform.VoipDtxState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_SetCreateNewConnectionUseDtx_m2C46012D290A068BCAF4E266FF07D656821AE172 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_Destroy_m55C2B30A237478D8A98A0EBA7AEFD491CC8A6680 (intptr_t ___handle0, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetPCMFloat(System.UInt64,System.Single[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetPCMFloat_mD948F9DACC19FABB9B3BBA070222007A227143FF (uint64_t ___senderID0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___outputBuffer1, uintptr_t ___outputBufferNumElements2, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetPCMSize(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetPCMSize_m1F887B73447D542AEB761EE9F88B424FDE05021C (uint64_t ___senderID0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.WindowsPlatform::getCallbackPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UnityInitWrapperWindows(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UnityInitWrapperWindows_mCF06BCEA646A8E0F124D5DE709556496961B47DD (String_t* ___appId0, intptr_t ___loggingCB1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UnityInitWrapperWindowsAsynchronous(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UnityInitWrapperWindowsAsynchronous_m7B8176215967FCED48A42464C9EDE701EE904186 (String_t* ___appId0, intptr_t ___loggingCB1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44 (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.HttpTransferUpdate>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1 (uint32_t ___type0, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_mADABF8A37586170951B38A637B83E57B21FC7126_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.UserOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.UserOptions::AddServiceProvider(Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.UserOptions::op_Explicit(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___options0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLinkedAccounts(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLinkedAccounts_m228EB54845ED4F04DB92565773630731EEAFCC9E (intptr_t ___userOptions0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>::.ctor(System.UInt64)
inline void Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6 (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetOutputBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetOutputBufferMaxSize_m9799A26F0862BEE54F29A4667ABF9D3C9ED8EF77 (const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.Product::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Product__ctor_mB7FB491D8CBF0441B194271CF38C221D2F568850 (Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Product(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Description = CAPI.ovr_Product_GetDescription(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_Product_GetDescription_m1C064FFB668183EFEDDD51E4C3662DC0664EC29C((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Description_0(L_1);
		// FormattedPrice = CAPI.ovr_Product_GetFormattedPrice(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CAPI_ovr_Product_GetFormattedPrice_mA0F206EF64A201098D81E8F1203A87061ABD3594((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_FormattedPrice_1(L_3);
		// Name = CAPI.ovr_Product_GetName(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CAPI_ovr_Product_GetName_m87C3130B9F5E84262ACE1AF4817E2D4C00F28F78((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_Name_2(L_5);
		// Sku = CAPI.ovr_Product_GetSKU(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_Product_GetSKU_m0531ABE3C9F562E74CE42E2F595A29DAA24C28B6((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_Sku_3(L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.ProductList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductList__ctor_m58AF4F93816E9220F25C729A900621211795F6BF (ProductList_tC2405EC15E1F8BA7208810CB03DC828362BE293F * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public ProductList(IntPtr a) {
		DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340(__this, /*hidden argument*/DeserializableList_1__ctor_m3A3DE43247E2653084A5F8AF875CDE985B10F340_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_ProductArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_ProductArray_GetSize_m6C2A87C9EAF8ECCFA323A721135045B457974C05((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<Product>(count);
		int32_t L_3 = V_0;
		List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * L_4 = (List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D *)il2cpp_codegen_object_new(List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D_il2cpp_TypeInfo_var);
		List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976(L_4, L_3, /*hidden argument*/List_1__ctor_mCFAD7D1858FDE514F0BCFED8CECD3F9FE6653976_RuntimeMethod_var);
		((DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new Product(CAPI.ovr_ProductArray_GetElement(a, (UIntPtr)i)));
		List_1_tDD51D22B352296EA56F43F4F2FFD55135860D63D * L_5 = ((DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_ProductArray_GetElement_mBF721AA706BABB8B5689FFB1AE4F5754550F748E((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 * L_10 = (Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70 *)il2cpp_codegen_object_new(Product_t5AF667541007A6472DE1AB4F7A09ADBDAA51FC70_il2cpp_TypeInfo_var);
		Product__ctor_mB7FB491D8CBF0441B194271CF38C221D2F568850(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9(L_5, L_10, /*hidden argument*/List_1_Add_m17A18C3CAD9EE25DAE85D032AA70031B1E8951C9_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_ProductArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_ProductArray_GetNextUrl_m9B6A64C4E056A698C6066EBCBF51F1A1F2BF6B93((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tAF0413A7C0855E71EF2DF7CB4DC4E5E5F27E2755 *)__this)->set__NextUrl_1(L_15);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.Purchase::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Purchase__ctor_m7F4817017457DC8BE9111B59B8FF76EC0F00B1DF (Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Purchase(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DeveloperPayload = CAPI.ovr_Purchase_GetDeveloperPayload(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_Purchase_GetDeveloperPayload_m51E81D8AD3788086DB7479C080E8424557EA717A((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DeveloperPayload_0(L_1);
		// ExpirationTime = CAPI.ovr_Purchase_GetExpirationTime(o);
		intptr_t L_2 = ___o0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = CAPI_ovr_Purchase_GetExpirationTime_mAA28F4605793BA950E946D9DEF878EF859CCA3CA((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ExpirationTime_1(L_3);
		// GrantTime = CAPI.ovr_Purchase_GetGrantTime(o);
		intptr_t L_4 = ___o0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
		L_5 = CAPI_ovr_Purchase_GetGrantTime_m554C8824F7C310595BA81D6DA3C06BEB182C39AD((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_GrantTime_2(L_5);
		// ID = CAPI.ovr_Purchase_GetPurchaseStrID(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_Purchase_GetPurchaseStrID_m1A8E6601C8C25549FC5FA02748015BEA73AAD8A8((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_ID_3(L_7);
		// ReportingId = CAPI.ovr_Purchase_GetReportingId(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_Purchase_GetReportingId_m420810937A63F796ACDFA71915A41E8E03BE8B87((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_ReportingId_4(L_9);
		// Sku = CAPI.ovr_Purchase_GetSKU(o);
		intptr_t L_10 = ___o0;
		String_t* L_11;
		L_11 = CAPI_ovr_Purchase_GetSKU_mB5376F5BA72975DF8DED4A2A8FF10248395C94DB((intptr_t)L_10, /*hidden argument*/NULL);
		__this->set_Sku_5(L_11);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.PurchaseList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseList__ctor_m9F6F5731BB0F2BE4D2592D58F800695E5EF6C9E8 (PurchaseList_tB5899D214872077DFC94C5CED373C45BD7A14802 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEF576F33659755044A466574FB2C3AE99B17F353_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public PurchaseList(IntPtr a) {
		DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60(__this, /*hidden argument*/DeserializableList_1__ctor_m92E061AE583A8A070C5E2F583EE88AC06C9EDF60_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_PurchaseArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_PurchaseArray_GetSize_m4439121C6A924CFB4D6022670B5E7947EC7A274F((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<Purchase>(count);
		int32_t L_3 = V_0;
		List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * L_4 = (List_1_tEF576F33659755044A466574FB2C3AE99B17F353 *)il2cpp_codegen_object_new(List_1_tEF576F33659755044A466574FB2C3AE99B17F353_il2cpp_TypeInfo_var);
		List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2(L_4, L_3, /*hidden argument*/List_1__ctor_m2E422C9EB987521A521CC96B51FFDA5B2C7EC7B2_RuntimeMethod_var);
		((DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new Purchase(CAPI.ovr_PurchaseArray_GetElement(a, (UIntPtr)i)));
		List_1_tEF576F33659755044A466574FB2C3AE99B17F353 * L_5 = ((DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_PurchaseArray_GetElement_mBD648FAA2DAC1D79C1C9720C0E9CBDDA008F9FAB((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 * L_10 = (Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91 *)il2cpp_codegen_object_new(Purchase_tA33CB35E4A6CD77FF2E2D25CDB4FC7FF90D39D91_il2cpp_TypeInfo_var);
		Purchase__ctor_m7F4817017457DC8BE9111B59B8FF76EC0F00B1DF(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4(L_5, L_10, /*hidden argument*/List_1_Add_m5F02AADD3FC0CA8A8072EFA2913D29A8198FA0A4_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_PurchaseArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_PurchaseArray_GetNextUrl_m547135DC2E4748CEA8552BBCD534AD320BF577E9((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_t9BC2C71287BFAB5F666C907F08CEEF7FFF95D9E6 *)__this)->set__NextUrl_1(L_15);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.RejoinDialogResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RejoinDialogResult__ctor_m5C70362A2AC08F13639253A097FC718D5722F468 (RejoinDialogResult_t0C7C119AB35BB3C10752AFA7A8F4A14CC8594E8B * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RejoinDialogResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// RejoinSelected = CAPI.ovr_RejoinDialogResult_GetRejoinSelected(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_RejoinDialogResult_GetRejoinSelected_m47B59583C47F368C040DD24F2A3CFCBC9FFE36A4((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_RejoinSelected_0(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void ReportingCallbackSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_Start_m06256C70B115DA25C94BA0902DACA4759450E8BF (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB40CF1C1F630131B1A52C4D34047CFF6EA8550);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateConsole("Init Oculus Platform SDK...");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral6FB40CF1C1F630131B1A52C4D34047CFF6EA8550, /*hidden argument*/NULL);
		// Core.AsyncInitialize().OnComplete(message => {
		//   if (message.IsError)
		//   {
		//     // Init failed, nothing will work
		//     UpdateConsole(message.GetError().Message);
		//   }
		//   else
		//   {
		//     UpdateConsole("Init complete!");
		// 
		//     /**
		//      * Listen for when user clicks AUI report button
		//      */
		//     AbuseReport.SetReportButtonPressedNotificationCallback(OnReportButtonIntentNotif);
		//     UpdateConsole("Registered callback");
		//   }
		// });
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_0;
		L_0 = Core_AsyncInitialize_mCCDE08297048079BEA5EF065551E701C13C96DE0((String_t*)NULL, /*hidden argument*/NULL);
		Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * L_1 = (Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 *)il2cpp_codegen_object_new(Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65_il2cpp_TypeInfo_var);
		Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41(L_1, __this, (intptr_t)((intptr_t)ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mF22056459E9D385641C18F2F9C89068B7D46AA41_RuntimeMethod_var);
		NullCheck(L_0);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_2;
		L_2 = Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3(L_0, L_1, /*hidden argument*/Request_1_OnComplete_mE915E39CFF61D24EB87EC36E4B51ECB7F068E6D3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ReportingCallbackSample::OnReportButtonIntentNotif(Oculus.Platform.Message`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816745CC7F0FA623F30FB7047D44B28470A22E3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B005016BA6EACBD6E43AE5406ED06DC90B5130);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (message.IsError)
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// UpdateConsole(message.GetError().Message);
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_2 = ___message0;
		NullCheck(L_2);
		Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * L_3;
		L_3 = VirtFuncInvoker0< Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->get_Message_2();
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, L_4, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_001a:
	{
		// UpdateConsole("Send that response is handled");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral85B005016BA6EACBD6E43AE5406ED06DC90B5130, /*hidden argument*/NULL);
		// AbuseReport.ReportRequestHandled(ReportRequestResponse.Handled);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_5;
		L_5 = AbuseReport_ReportRequestHandled_mB82DF4285F961652409209FE3886C7B1DB7322EF(1, /*hidden argument*/NULL);
		// UpdateConsole("Response has been handled!");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral816745CC7F0FA623F30FB7047D44B28470A22E3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReportingCallbackSample::UpdateConsole(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7 (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00058DA5D352C716F467D078B396A55F8B3E577B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(value);
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// InVRConsole.text =
		//   "Welcome to the Sample Reporting Callback App\n\n" + value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_InVRConsole_4();
		String_t* L_2 = ___value0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral00058DA5D352C716F467D078B396A55F8B3E577B, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void ReportingCallbackSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample__ctor_mDD84CF8E45829F1CDC7760C095D6F3801EC6B35C (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ReportingCallbackSample::<Start>b__2_0(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportingCallbackSample_U3CStartU3Eb__2_0_mB6DF55D208C7E3EA780F26A202C39F0F637CA0C3 (ReportingCallbackSample_t2D673F09526D553E8F6528C904654E5E08740ABC * __this, Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A48AE0244C4827DF94FFD923478E861AB533848);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56CBBCD2565BB1E1874EA571ED1232298CB88E75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (message.IsError)
		Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977 * L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// UpdateConsole(message.GetError().Message);
		Message_1_t5EB7F004A6A1E88B8C611A168A9A407163FE6977 * L_2 = ___message0;
		NullCheck(L_2);
		Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * L_3;
		L_3 = VirtFuncInvoker0< Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * >::Invoke(4 /* Oculus.Platform.Models.Error Oculus.Platform.Message::GetError() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = L_3->get_Message_2();
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// UpdateConsole("Init complete!");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral56CBBCD2565BB1E1874EA571ED1232298CB88E75, /*hidden argument*/NULL);
		// AbuseReport.SetReportButtonPressedNotificationCallback(OnReportButtonIntentNotif);
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_5 = (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *)il2cpp_codegen_object_new(Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var);
		Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47(L_5, __this, (intptr_t)((intptr_t)ReportingCallbackSample_OnReportButtonIntentNotif_m12901383E97DB2A162FC612322FAB4FA073888AC_RuntimeMethod_var), /*hidden argument*/Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var);
		AbuseReport_SetReportButtonPressedNotificationCallback_m0878F977ABE7521FB016EF9333ECBCC0E54FE62C(L_5, /*hidden argument*/NULL);
		// UpdateConsole("Registered callback");
		ReportingCallbackSample_UpdateConsole_m5DCD514700A94425099B62C93B09C909A5139CC7(__this, _stringLiteral4A48AE0244C4827DF94FFD923478E861AB533848, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Request::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	{
		// public Request(ulong requestID)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.RequestID = requestID;
		uint64_t L_0 = ___requestID0;
		Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt64 Oculus.Platform.Request::get_RequestID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Request_get_RequestID_m2FC9CBB00C4E9062465F6B4A7487104F8A7338BC (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, const RuntimeMethod* method)
{
	{
		// public ulong RequestID { get; set; }
		uint64_t L_0 = __this->get_U3CRequestIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Platform.Request::set_RequestID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong RequestID { get; set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CRequestIDU3Ek__BackingField_1(L_0);
		return;
	}
}
// Oculus.Platform.Request Oculus.Platform.Request::OnComplete(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Request_OnComplete_mDD83CB14C5B7BC1C0B9CE8DE61D77F43F918588B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callback_ = callback;
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = ___callback0;
		__this->set_callback__0(L_0);
		// Callback.AddRequest(this);
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_AddRequest_m6E12340AA512A02FA6DA2F03CE8E220A565CAFA4(__this, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// System.Void Oculus.Platform.Request::HandleMessage(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_HandleMessage_mECFAD6677F9DBD582011DFDA2BE7FD1B87DD3F13 (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg0, const RuntimeMethod* method)
{
	{
		// if (callback_ != null)
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = __this->get_callback__0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// callback_(msg);
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_1 = __this->get_callback__0();
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_2 = ___msg0;
		NullCheck(L_1);
		Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37(L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0015:
	{
		// throw new UnityException("Request with no handler.  This should never happen.");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_3 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral490E7A78D754BCECC6CF945C78681E1F4248DFB5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Request_HandleMessage_mECFAD6677F9DBD582011DFDA2BE7FD1B87DD3F13_RuntimeMethod_var)));
	}
}
// System.Void Oculus.Platform.Request::RunCallbacks(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_RunCallbacks_mD91CE87A11706082E13FCB881934C32CCD23F63F (uint32_t ___limit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (limit == 0)
		uint32_t L_0 = ___limit0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// Callback.RunCallbacks();
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_RunCallbacks_mDB88B3AB23E0AFBED6085D332BC5C666BEFD8898(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0009:
	{
		// Callback.RunLimitedCallbacks(limit);
		uint32_t L_1 = ___limit0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_RunLimitedCallbacks_mF6E9150737245CA294F7C80B6E6D6D228D999894(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Platform.Request Oculus.Platform.RichPresence::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * RichPresence_Clear_m378E34D28EC5A0A857791EFAA9D9FDA035C19152 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request(CAPI.ovr_RichPresence_Clear());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_RichPresence_Clear_m554F1AA044C98D59C287B6308493349D4175AAF0(/*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_2 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList> Oculus.Platform.RichPresence::GetDestinations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * RichPresence_GetDestinations_mFB0D23CB0FAFC602FD1DA3076BB2805EBFFE24CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.DestinationList>(CAPI.ovr_RichPresence_GetDestinations());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_RichPresence_GetDestinations_m315D590037EF95ABF6B27A8DB3F4905E910D89E1(/*hidden argument*/NULL);
		Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * L_2 = (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)il2cpp_codegen_object_new(Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A(L_2, L_1, /*hidden argument*/Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)NULL;
	}
}
// Oculus.Platform.Request Oculus.Platform.RichPresence::Set(Oculus.Platform.RichPresenceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * RichPresence_Set_mB923921264D7150B3A75B87291E7109C59D4B77C (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * ___richPresenceOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// return new Request(CAPI.ovr_RichPresence_Set((IntPtr)richPresenceOptions));
		RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * L_1 = ___richPresenceOptions0;
		intptr_t L_2;
		L_2 = RichPresenceOptions_op_Explicit_mF478BF1D9D16FE00A644C2DF374698768F78619F(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_RichPresence_Set_m1E91F15B2A132AE728A16D290ECCCE6348E44A50((intptr_t)L_2, /*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_4 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0018:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.DestinationList> Oculus.Platform.RichPresence::GetNextDestinationListPage(Oculus.Platform.Models.DestinationList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * RichPresence_GetNextDestinationListPage_mC1931CC164EA2E9572EB28CE44D6386F64AC28AA (DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33157D9C9F7D31AF8194BEB1C5D43B3972AC216D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m9D5F4ADF66BD892D1957B8D242BEC5E88BDA9539_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextDestinationListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral33157D9C9F7D31AF8194BEB1C5D43B3972AC216D, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.DestinationList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.RichPresence_GetNextDestinationArrayPage
		//   )
		// );
		DestinationList_t324E6458E9933B4981A5C75342FDBE853371926C * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_mE5FC031A26807CAF44CFEFE2C096E1320370059D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA(L_4, ((int32_t)1731624773), /*hidden argument*/NULL);
		Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 * L_6 = (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)il2cpp_codegen_object_new(Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28_il2cpp_TypeInfo_var);
		Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A(L_6, L_5, /*hidden argument*/Request_1__ctor_m289903812773892D8C1A1F850BBA1ABCB0C8F64A_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1481E43CF6A24116B22D86F3EAC76CBD7F326A28 *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Oculus.Platform.RichPresenceOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RichPresenceOptions__ctor_m9982F99C3C2AECF8DD7C8F3C5BE56D151D0766B4 (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RichPresenceOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_RichPresenceOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_RichPresenceOptions_Create_m6959C909A10AF0568951C0BA790238F95C548BAD(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.RichPresenceOptions::op_Explicit(Oculus.Platform.RichPresenceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RichPresenceOptions_op_Explicit_mF478BF1D9D16FE00A644C2DF374698768F78619F (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.RichPresenceOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RichPresenceOptions_Finalize_mB3870233C19145F22AD397A57FE2195665603473 (RichPresenceOptions_tCDA91DB8252054140B91C3B2E412F3FD35E9B950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_RichPresenceOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RichPresenceOptions_Destroy_mF2221A1D8985A038F30F27BF27C5328EB619A915((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.RosterOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions__ctor_mC2D8EC73EBD1BA5EA04BB93BF0A875803C8DDCB5 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RosterOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_RosterOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_RosterOptions_Create_m7A3486B163E9C37F61DE282362546854087CDEAE(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RosterOptions::AddSuggestedUser(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions_AddSuggestedUser_mACB06D9032944F0BD08268AA17F7D861D9A11EC7 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RosterOptions_AddSuggestedUser(Handle, userID);
		intptr_t L_0 = __this->get_Handle_0();
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RosterOptions_AddSuggestedUser_mF6F256BEBAAFC0899DA681028D1D73080773604F((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RosterOptions::ClearSuggestedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions_ClearSuggestedUsers_m6A6860509561C23357F21271F78409F797F97595 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RosterOptions_ClearSuggestedUsers(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RosterOptions_ClearSuggestedUsers_mA5D7E3A48A5EA7033BF1BA06F43206BA4929B6EA((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.RosterOptions::op_Explicit(Oculus.Platform.RosterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RosterOptions_op_Explicit_m04A3178BBD66CAFC711F88274F9FBBC374CE0D95 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.RosterOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterOptions_Finalize_mF553D67F532DDE2E3BB037A393D15E0F53CCFD42 (RosterOptions_t2EB2264E45DEA2E89EDCC1662EAE600890864B53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_RosterOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RosterOptions_Destroy_m646B4A1CD1E1FDD23B931C2CF5C71CFD6349793E((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.SdkAccount::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7 (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SdkAccount(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AccountType = CAPI.ovr_SdkAccount_GetAccountType(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_SdkAccount_GetAccountType_mC2E1133EB86528148975004F29B718EA61AD4006((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_AccountType_0(L_1);
		// UserId = CAPI.ovr_SdkAccount_GetUserId(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_SdkAccount_GetUserId_m970A4B0F927C92026D89136ADF147B142E11FFDC((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_UserId_1(L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.SdkAccountList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccountList__ctor_m2569AC12C02DCE79DD2F4550750E2BD7CC3725A3 (SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public SdkAccountList(IntPtr a) {
		DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C(__this, /*hidden argument*/DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_SdkAccountArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_SdkAccountArray_GetSize_m7FA8BD0A681B314F2B13F8303B3DBC0E66B4901E((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<SdkAccount>(count);
		int32_t L_3 = V_0;
		List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * L_4 = (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *)il2cpp_codegen_object_new(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var);
		List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572(L_4, L_3, /*hidden argument*/List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var);
		((DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new SdkAccount(CAPI.ovr_SdkAccountArray_GetElement(a, (UIntPtr)i)));
		List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * L_5 = ((DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_SdkAccountArray_GetElement_m94BF2B7FDAC075B64F649A2E6C1902A1F0A5405A((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * L_10 = (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A *)il2cpp_codegen_object_new(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var);
		SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288(L_5, L_10, /*hidden argument*/List_1_Add_mC89D0C471C42416ED7C29A3B871127B4CB308288_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Oculus.Platform.Models.SendInvitesResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendInvitesResult__ctor_mC2AB2F39DB83CB86B7C2A9F980FFD268101C8354 (SendInvitesResult_tEABC6CFCF87F156BE28732AFA9FE2F7FF12D1130 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SendInvitesResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Invites = new ApplicationInviteList(CAPI.ovr_SendInvitesResult_GetInvites(o));
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_SendInvitesResult_GetInvites_m1C81C6EC3B1F4E8993A0D5D92217EB9279A9E3BF((intptr_t)L_0, /*hidden argument*/NULL);
		ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 * L_2 = (ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360 *)il2cpp_codegen_object_new(ApplicationInviteList_t0EB6840C5C83B21438F83AF64477873668826360_il2cpp_TypeInfo_var);
		ApplicationInviteList__ctor_mBF3A124C10AC8CCEFCD2EFB20D3F2EC4AA624EC5(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_Invites_0(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Oculus.Platform.Models.ShareMediaResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareMediaResult__ctor_m0AC8F70EACE4FF4E09F5BB82A1DB5D4AFFBD634E (ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShareMediaResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Status = CAPI.ovr_ShareMediaResult_GetStatus(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_ShareMediaResult_GetStatus_mC27964DADCE63B543E03672BFC77A1716364D81A((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Status_0(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::InitializeInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (String.IsNullOrEmpty(PlatformSettings.MobileAppID))
		String_t* L_0;
		L_0 = PlatformSettings_get_MobileAppID_m04773E35E48A5E96899E35539E9BA86D363F7697(/*hidden argument*/NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// throw new UnityException("Update your App ID by selecting 'Oculus Platform' -> 'Edit Settings'");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6502DBEA7DCA489774648AC2338DB14B68A43496)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var)));
	}

IL_0017:
	{
		// var appID = PlatformSettings.MobileAppID;
		String_t* L_3;
		L_3 = PlatformSettings_get_MobileAppID_m04773E35E48A5E96899E35539E9BA86D363F7697(/*hidden argument*/NULL);
		V_0 = L_3;
		// if (String.IsNullOrEmpty(StandalonePlatformSettings.OculusPlatformTestUserAccessToken))
		String_t* L_4;
		L_4 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// throw new UnityException(
		//     "Update your standalone credentials by selecting 'Oculus Platform' -> 'Edit Settings'");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_6 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral141DB8E2222B0556D3C6A55EC404DB7A9D4332CF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var)));
	}

IL_0034:
	{
		// var accessToken = StandalonePlatformSettings.OculusPlatformTestUserAccessToken;
		String_t* L_7;
		L_7 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline(/*hidden argument*/NULL);
		V_1 = L_7;
		// return AsyncInitialize(UInt64.Parse(appID), accessToken);
		String_t* L_8 = V_0;
		uint64_t L_9;
		L_9 = UInt64_Parse_mF4BDC98BB5988FA03D4750E7F44A38766C48ADAD(L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_11;
		L_11 = StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitialize(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, uint64_t ___appID0, String_t* ___accessToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UnityResetTestPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UnityResetTestPlatform_mAA9C56C069F30DDA00E8E15F9AC793FF2EB41315(/*hidden argument*/NULL);
		// CAPI.ovr_UnityInitGlobals(IntPtr.Zero);
		CAPI_ovr_UnityInitGlobals_mD93010271FEB9AE86D398DEB83A7D974D718A256((intptr_t)(0), /*hidden argument*/NULL);
		// return new Request<Models.PlatformInitialize>(
		//     CAPI.ovr_PlatformInitializeWithAccessToken(appID, accessToken));
		uint64_t L_0 = ___appID0;
		String_t* L_1 = ___accessToken1;
		uint64_t L_2;
		L_2 = CAPI_ovr_PlatformInitializeWithAccessToken_m7AE6DEF63FB0385E174C219E92AA092E0B633119(L_0, L_1, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_3 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_3, L_2, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_3;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitializeWithAccessTokenAndOptions(System.String,System.String,System.Collections.Generic.Dictionary`2<Oculus.Platform.InitConfigOptions,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitializeWithAccessTokenAndOptions_m267A43AB012CCF7B8DC80232AFEBA2702D0C09E6 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, String_t* ___appId0, String_t* ___accessToken1, Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * ___initConfigOptions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* V_1 = NULL;
	{
		// var configCount = (UIntPtr)initConfigOptions.Count;
		Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * L_0 = ___initConfigOptions2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1(L_0, /*hidden argument*/Dictionary_2_get_Count_m2DDB0B3D76FD93404A062FA8361E4BB47407C2E1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		// var configPairs = CAPI.DictionaryToOVRKeyValuePairs(initConfigOptions);
		Dictionary_2_t21B2C2B5C706195B5D9A086C8AB2C0402826FCB1 * L_3 = ___initConfigOptions2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_4;
		L_4 = CAPI_DictionaryToOVRKeyValuePairs_m33039ACF17A4DFB7102D3BB870E4BDD84E68A01F(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// return new Request<Models.PlatformInitialize>(
		//     CAPI.ovr_PlatformInitializeWithAccessTokenAndOptions(UInt64.Parse(appId), accessToken, configPairs,
		//         configCount));
		String_t* L_5 = ___appId0;
		uint64_t L_6;
		L_6 = UInt64_Parse_mF4BDC98BB5988FA03D4750E7F44A38766C48ADAD(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___accessToken1;
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_8 = V_1;
		uintptr_t L_9 = V_0;
		uint64_t L_10;
		L_10 = CAPI_ovr_PlatformInitializeWithAccessTokenAndOptions_m358411D37BD1C26DDB5D263BB249D91139BA816A(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_11 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_11, L_10, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Oculus.Platform.StandalonePlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatform__ctor_m3AE4474A8116A9398BB6F0430B68526EB20A56B2 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserEmail_m4D30CBC3C7A1777CB3373D81BB53D3D068BA2EDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserEmail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserEmail_mEF0E2648284A385C3BE98E419E0541BBF36D6A2A (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserPassword_m9F5330BEDC6B32517A45C3426ABA3C38C3060617 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserPassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserPassword_m8E9C40F2116A3B4D3F083E76B520D683709D550B (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserAccessToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserAccessToken_mD84A3EDCBB83D0DA6B0146ED35A9D2310622141A (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings__ctor_mE40843F44FD1FB58636DE57723CD5ED1570FD762 (StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.SupplementaryMetric::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupplementaryMetric__ctor_mABF7CC54C159B31D2F27F7F2BDCDE160FF222279 (SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SupplementaryMetric(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ID = CAPI.ovr_SupplementaryMetric_GetID(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_SupplementaryMetric_GetID_m606A0E3DBB03921BC3848204032D16FA213AB3FC((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ID_0(L_1);
		// Metric = CAPI.ovr_SupplementaryMetric_GetMetric(o);
		intptr_t L_2 = ___o0;
		int64_t L_3;
		L_3 = CAPI_ovr_SupplementaryMetric_GetMetric_m75E8565C96444EB9E164D7B526BB06D133996744((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Metric_1(L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.SystemVoipState::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemVoipState__ctor_m9CC93A6027110E1938F59AEA8CA304EAD75DE1A5 (SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SystemVoipState(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// MicrophoneMuted = CAPI.ovr_SystemVoipState_GetMicrophoneMuted(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_SystemVoipState_GetMicrophoneMuted_mACFAC0E6A669BAA76D192487A674CC5853E8A136((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_MicrophoneMuted_0(L_1);
		// Status = CAPI.ovr_SystemVoipState_GetStatus(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CAPI_ovr_SystemVoipState_GetStatus_m90B4964E758086D098299E9ABD65AF85EA1B8469((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Status_1(L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961 (User_tA163463AE919860D9B337F6104B028990A44B69D * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public User(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DisplayName = CAPI.ovr_User_GetDisplayName(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_User_GetDisplayName_m79D2FCAC61E4413B3F72F54305D498294AE338ED((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DisplayName_0(L_1);
		// ID = CAPI.ovr_User_GetID(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_User_GetID_mA83BA4D33092F21AAAB03ABA1F0D5E1B2BF9CEEA((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ID_1(L_3);
		// ImageURL = CAPI.ovr_User_GetImageUrl(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CAPI_ovr_User_GetImageUrl_m1647E45A5A766481651AF981DA8BD26EE99A68D0((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_ImageURL_2(L_5);
		// OculusID = CAPI.ovr_User_GetOculusID(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_User_GetOculusID_m554BADFCCA6BA7FA4A2FD9AD7134E7EA88DAEDDD((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_OculusID_3(L_7);
		// Presence = CAPI.ovr_User_GetPresence(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_User_GetPresence_mF5012075F715E47929569AB9711A007D8E329837((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_Presence_4(L_9);
		// PresenceDeeplinkMessage = CAPI.ovr_User_GetPresenceDeeplinkMessage(o);
		intptr_t L_10 = ___o0;
		String_t* L_11;
		L_11 = CAPI_ovr_User_GetPresenceDeeplinkMessage_mA9DF540B83D3462E25A1919F564627BA9C2F951A((intptr_t)L_10, /*hidden argument*/NULL);
		__this->set_PresenceDeeplinkMessage_5(L_11);
		// PresenceDestinationApiName = CAPI.ovr_User_GetPresenceDestinationApiName(o);
		intptr_t L_12 = ___o0;
		String_t* L_13;
		L_13 = CAPI_ovr_User_GetPresenceDestinationApiName_m6B293BFCDA113BFF62DDF162814C99C514A27B9F((intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_PresenceDestinationApiName_6(L_13);
		// PresenceLobbySessionId = CAPI.ovr_User_GetPresenceLobbySessionId(o);
		intptr_t L_14 = ___o0;
		String_t* L_15;
		L_15 = CAPI_ovr_User_GetPresenceLobbySessionId_m8741502339D1C4012CDF01DF9687C44B02268011((intptr_t)L_14, /*hidden argument*/NULL);
		__this->set_PresenceLobbySessionId_7(L_15);
		// PresenceMatchSessionId = CAPI.ovr_User_GetPresenceMatchSessionId(o);
		intptr_t L_16 = ___o0;
		String_t* L_17;
		L_17 = CAPI_ovr_User_GetPresenceMatchSessionId_mBAE59F719C34DAD257D3579BE1124D4050A814E8((intptr_t)L_16, /*hidden argument*/NULL);
		__this->set_PresenceMatchSessionId_8(L_17);
		// PresenceStatus = CAPI.ovr_User_GetPresenceStatus(o);
		intptr_t L_18 = ___o0;
		int32_t L_19;
		L_19 = CAPI_ovr_User_GetPresenceStatus_mF1A68B4B6BFEDB3427E5669C2538CBD4FF440A2C((intptr_t)L_18, /*hidden argument*/NULL);
		__this->set_PresenceStatus_9(L_19);
		// SmallImageUrl = CAPI.ovr_User_GetSmallImageUrl(o);
		intptr_t L_20 = ___o0;
		String_t* L_21;
		L_21 = CAPI_ovr_User_GetSmallImageUrl_mEF25A58B6C95EB63D428AC117FCED150BFA7181A((intptr_t)L_20, /*hidden argument*/NULL);
		__this->set_SmallImageUrl_10(L_21);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserAccountAgeCategory::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAccountAgeCategory__ctor_mBC00223DBC77871643D36CDAC0A5803AB2F34F58 (UserAccountAgeCategory_tCA00754466807485E00D72AD71077CDD3DB99E30 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserAccountAgeCategory(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AgeCategory = CAPI.ovr_UserAccountAgeCategory_GetAgeCategory(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_UserAccountAgeCategory_GetAgeCategory_mDFFB377D930FC3505AF670B746AA05D1C4B4252B((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_AgeCategory_0(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAccountAgeCategory> Oculus.Platform.UserAgeCategory::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F * UserAgeCategory_Get_m3CFB3B2D834AEA4915802FC41ED7EA73BE9ED14F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m5BC83E3C43BCDBDE2F7FB98D5FD52AA9C839F5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserAccountAgeCategory>(CAPI.ovr_UserAgeCategory_Get());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_UserAgeCategory_Get_mF0C8B9D4D29642B5334CBD9F26CE7D335E87063D(/*hidden argument*/NULL);
		Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F * L_2 = (Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F *)il2cpp_codegen_object_new(Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F_il2cpp_TypeInfo_var);
		Request_1__ctor_m5BC83E3C43BCDBDE2F7FB98D5FD52AA9C839F5B2(L_2, L_1, /*hidden argument*/Request_1__ctor_m5BC83E3C43BCDBDE2F7FB98D5FD52AA9C839F5B2_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t9EE9A78521E8FADB5A59BCFDBF21C936D61B378F *)NULL;
	}
}
// Oculus.Platform.Request Oculus.Platform.UserAgeCategory::Report(Oculus.Platform.AppAgeCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * UserAgeCategory_Report_m8C00138F29EAB89F4EA2AA2A9424FAB356D0EBE0 (int32_t ___age_category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request(CAPI.ovr_UserAgeCategory_Report(age_category));
		int32_t L_1 = ___age_category0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_UserAgeCategory_Report_mA21B12020B844E1C43937429EA8A6CCB4BE78C02(L_1, /*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_3 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserCapability::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCapability__ctor_m339976E7D4FAFFE7CD3D609F4876C530D7C74275 (UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserCapability(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Description = CAPI.ovr_UserCapability_GetDescription(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_UserCapability_GetDescription_mAD9CB28C0295D38B0E2ADC133772149295EAB3BB((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Description_0(L_1);
		// IsEnabled = CAPI.ovr_UserCapability_GetIsEnabled(o);
		intptr_t L_2 = ___o0;
		bool L_3;
		L_3 = CAPI_ovr_UserCapability_GetIsEnabled_mE5152AC1C76C8D290D17C892A80A368298FB1160((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_IsEnabled_1(L_3);
		// Name = CAPI.ovr_UserCapability_GetName(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CAPI_ovr_UserCapability_GetName_mDC1AF93CC0A851E0C27414673A2EFB9BCC35869B((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_Name_2(L_5);
		// ReasonCode = CAPI.ovr_UserCapability_GetReasonCode(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_UserCapability_GetReasonCode_mDC9FDAF51C647EAAEBCB443AF9B5A01901157C43((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_ReasonCode_3(L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserCapabilityList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCapabilityList__ctor_m5DBE9663571D2D276A8C9E21E860983C0D30C5D5 (UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserCapabilityList(IntPtr a) {
		DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C(__this, /*hidden argument*/DeserializableList_1__ctor_m43641FCE2D16F09D46F6C7A8A6D6E0BF19725B2C_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_UserCapabilityArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_UserCapabilityArray_GetSize_mA79A06757C74543A486D9258384E7FC98B643914((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<UserCapability>(count);
		int32_t L_3 = V_0;
		List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * L_4 = (List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 *)il2cpp_codegen_object_new(List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906_il2cpp_TypeInfo_var);
		List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242(L_4, L_3, /*hidden argument*/List_1__ctor_m696EF4D0DD92DB0B1D9BFC1E27A9419639F90242_RuntimeMethod_var);
		((DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new UserCapability(CAPI.ovr_UserCapabilityArray_GetElement(a, (UIntPtr)i)));
		List_1_t728718E1F1216C2BDCC4E2A01188327DC0EAA906 * L_5 = ((DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_UserCapabilityArray_GetElement_m09B27F5BDCDD52A6D69FA847C1970B088BA52604((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F * L_10 = (UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F *)il2cpp_codegen_object_new(UserCapability_tB48EA6CA6E3148984471B07C3A39A9F0C24BA17F_il2cpp_TypeInfo_var);
		UserCapability__ctor_m339976E7D4FAFFE7CD3D609F4876C530D7C74275(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC(L_5, L_10, /*hidden argument*/List_1_Add_m56D32AE1DDDD91B262A0CA2A8057618867FD6EAC_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_UserCapabilityArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_UserCapabilityArray_GetNextUrl_m54A282B9AC8A02F8A96B413DCC922E1ADBE88C1B((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tE840B90FEA5CB0FF6BA66F6A200383B2AEA6383D *)__this)->set__NextUrl_1(L_15);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PrivateDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PrivateDeleteEntryByKey_m4DDF9A0CCF9C935429B622B45F8C7E68CCC4BA4F (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PrivateDeleteEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PrivateDeleteEntryByKey_m0E52FF96067754655F2BA0A56C64FE20F84A41D1(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_4 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_4, L_3, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PrivateGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PrivateGetEntries_m70D45F7FC7B3DDE92A63B4611CDBCAD6C1FD83DD (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PrivateGetEntries(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_UserDataStore_PrivateGetEntries_m35C39C5C06EB8011B4B67871124D28F6133BD03B(L_1, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_3 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_3, L_2, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PrivateGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PrivateGetEntryByKey_mB480A1AF869E5420D7A4F4D1ED0DEBEC79C32E03 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PrivateGetEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PrivateGetEntryByKey_m6D3FFD07EA7409F7BF0C8BC610EA91CE855AA1E1(L_1, L_2, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_4 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_4, L_3, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PrivateWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PrivateWriteEntry_mE0805F5AF737101EB0AB8C5491E693D9B74A7888 (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PrivateWriteEntry(userID, key, value));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		String_t* L_3 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_UserDataStore_PrivateWriteEntry_m64C30A59D7253A6FAA9F2A28A4ACECACD42D281B(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_5 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_5, L_4, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PublicDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PublicDeleteEntryByKey_mFEE0E1DD4639C8FD75EC8CF1EBD1892AFF488C21 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PublicDeleteEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PublicDeleteEntryByKey_m499E4B51F4E611D9205300AA0C52DDB68A47FD05(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_4 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_4, L_3, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PublicGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PublicGetEntries_mE786FF78983319A247C55309CD40145039F62A76 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PublicGetEntries(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_UserDataStore_PublicGetEntries_m55AD4C16D002B3705A31EBEA01C738DBF40C044B(L_1, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_3 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_3, L_2, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PublicGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PublicGetEntryByKey_mA275EAA4A72AF91A539E44029DA68E170CDB2FEE (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PublicGetEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PublicGetEntryByKey_mEC7AB95AC43D76408C2E600E0A8E23B14CD73F24(L_1, L_2, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_4 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_4, L_3, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PublicWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PublicWriteEntry_m80FDFCBE06E95494FE84136A88FB28EA1062088B (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PublicWriteEntry(userID, key, value));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		String_t* L_3 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_UserDataStore_PublicWriteEntry_mE2C576EAD8732949BD258CEDBD25B1BB29CEB7F3(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_5 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_5, L_4, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserDataStoreUpdateResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserDataStoreUpdateResponse__ctor_m3E731729E3C2C7895BFA9B683F4927F77FB144D0 (UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserDataStoreUpdateResponse(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Success = CAPI.ovr_UserDataStoreUpdateResponse_GetSuccess(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m0C36C63931711623D5BA4192EBB5F1F2951F991A((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Success_0(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserList(IntPtr a) {
		DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090(__this, /*hidden argument*/DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_UserArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_UserArray_GetSize_m38BD39A3E6D4B8573D525ED1D1B112FCAF956BD2((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<User>(count);
		int32_t L_3 = V_0;
		List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * L_4 = (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *)il2cpp_codegen_object_new(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var);
		List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF(L_4, L_3, /*hidden argument*/List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var);
		((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new User(CAPI.ovr_UserArray_GetElement(a, (UIntPtr)i)));
		List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * L_5 = ((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_UserArray_GetElement_m0619479C1F1520ADDEF134E3D5435467EF933296((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_10 = (User_tA163463AE919860D9B337F6104B028990A44B69D *)il2cpp_codegen_object_new(User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8(L_5, L_10, /*hidden argument*/List_1_Add_m773ED65631C74CA443136DA7A533B5312FAA6EC8_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_UserArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_UserArray_GetNextUrl_mA95C138EB69C1CE98D550D235914C0EE382EF63D((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->set__NextUrl_1(L_15);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.UserOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_UserOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_UserOptions_Create_m60251C8DAB5A03F2552EAF3E89E48FFAE3172570(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::SetMaxUsers(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_SetMaxUsers_mEFF3198E7239A108005098C5165E40774D59728C (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_SetMaxUsers(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		uint32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_SetMaxUsers_mDD81D5F354B885E7E9343A2E2DA0A35136187D00((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::AddServiceProvider(Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_AddServiceProvider(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_AddServiceProvider_mBD932E1353292F7251B36D8F6830DA955347840B((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::ClearServiceProviders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_ClearServiceProviders_m887F0C1CC06AD92A20D2178F99957AEE12C6991E (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_ClearServiceProviders(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_ClearServiceProviders_m7922D5B53B2DF826ED57DF3278AD1BB6E4C90619((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::SetTimeWindow(Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_SetTimeWindow_m658F7DA0EFFE210A40028214926BE49A21D2325D (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_SetTimeWindow(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_SetTimeWindow_m596ECBD8F41B3A6B119D92F990A5518019D47F18((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.UserOptions::op_Explicit(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.UserOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_Finalize_mD8821B4A02C933008F2BDF9F3219E884E0651279 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_UserOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_Destroy_m9E50FD0A41BF5B26BD6EE525D7E57CC94D238080((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserProof::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProof__ctor_m471A1FE83FF7096DF8FB1478D23CF69B322AE015 (UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserProof(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Value = CAPI.ovr_UserProof_GetNonce(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_UserProof_GetNonce_mF6A1AE97D83D3DD6423455D5A3D6F9471248252B((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Value_0(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.UserReportID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserReportID__ctor_m803040AD62252F061FD2ABF0E74770B1AD920928 (UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserReportID(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DidCancel = CAPI.ovr_UserReportID_GetDidCancel(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_UserReportID_GetDidCancel_mB0B91FFA73FA546D655819A69AF3960E59FD39A9((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DidCancel_0(L_1);
		// ID = CAPI.ovr_UserReportID_GetID(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_UserReportID_GetID_m8220610EB1BCBE2E0399AD8FC23BCB81732B046B((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ID_1(L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Oculus.Platform.Users::GetLoggedInUserLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Users_GetLoggedInUserLocale_mE0CBC50A81EBCE633DC2D0727CC1A90B9A4E6758 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_GetLoggedInUserLocale();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_GetLoggedInUserLocale_mC990141AE7AB83CAF32CB5C7E45978DE97F1C0CE(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * Users_Get_m4038D667AD9AEBB5ABE036F670BCF495B1E12F1A (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.User>(CAPI.ovr_User_Get(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_Get_mAE29EECCF7FCB204D33C0A31C30E40616299C1EC(L_1, /*hidden argument*/NULL);
		Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * L_3 = (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)il2cpp_codegen_object_new(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA(L_3, L_2, /*hidden argument*/Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.String> Oculus.Platform.Users::GetAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * Users_GetAccessToken_m9E8476310123B065A4E5E4DB5FDBF2A37CE324A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<string>(CAPI.ovr_User_GetAccessToken());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetAccessToken_m899991AE1663D505CF1DDAC66C6F20F497C510F7(/*hidden argument*/NULL);
		Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * L_2 = (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *)il2cpp_codegen_object_new(Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var);
		Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA(L_2, L_1, /*hidden argument*/Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList> Oculus.Platform.Users::GetBlockedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * Users_GetBlockedUsers_m88706D6392053144E132ADD1DDE86487CAAEB17D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.BlockedUserList>(CAPI.ovr_User_GetBlockedUsers());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetBlockedUsers_m8A7F7DF303AA640C2F9CBBB8F43D384754FC650B(/*hidden argument*/NULL);
		Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * L_2 = (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)il2cpp_codegen_object_new(Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF(L_2, L_1, /*hidden argument*/Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * Users_GetLoggedInUser_mBCFD598B92BDA831CAE1CD631D01BB8B87F86749 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.User>(CAPI.ovr_User_GetLoggedInUser());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetLoggedInUser_m8B09DC2F47134337CF635E646AEDFBDBBBE4B150(/*hidden argument*/NULL);
		Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * L_2 = (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)il2cpp_codegen_object_new(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA(L_2, L_1, /*hidden argument*/Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Users::GetLoggedInUserFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Users_GetLoggedInUserFriends_mD9922F3FB5237792541E63A9AE705F28C61134B4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserList>(CAPI.ovr_User_GetLoggedInUserFriends());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetLoggedInUserFriends_m27F0E883F04D1961044BAE83A942AE4C2AB61B2E(/*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_2 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_2, L_1, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID> Oculus.Platform.Users::GetOrgScopedID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * Users_GetOrgScopedID_m7B0E03576D75F3BB93EAA0E29FC06E01A9740B38 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.OrgScopedID>(CAPI.ovr_User_GetOrgScopedID(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_GetOrgScopedID_mDD36A00BA3DEEBC290E9766FE20A23028082100D(L_1, /*hidden argument*/NULL);
		Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * L_3 = (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *)il2cpp_codegen_object_new(Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var);
		Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004(L_3, L_2, /*hidden argument*/Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList> Oculus.Platform.Users::GetSdkAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * Users_GetSdkAccounts_m907E6C9D3E90BC5446A8D424F692B07BB178D663 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.SdkAccountList>(CAPI.ovr_User_GetSdkAccounts());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetSdkAccounts_m08EE62B28E7308F42388587BAE022FF3AEE8773A(/*hidden argument*/NULL);
		Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * L_2 = (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *)il2cpp_codegen_object_new(Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var);
		Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88(L_2, L_1, /*hidden argument*/Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> Oculus.Platform.Users::GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * Users_GetUserProof_mED9C873070F615053A1F434B85D650035285606C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserProof>(CAPI.ovr_User_GetUserProof());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetUserProof_mACFFCCAC2CDD3F5D7469D2CCAC8B24C007B926D0(/*hidden argument*/NULL);
		Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * L_2 = (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *)il2cpp_codegen_object_new(Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var);
		Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB(L_2, L_1, /*hidden argument*/Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult> Oculus.Platform.Users::LaunchBlockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 * Users_LaunchBlockFlow_m6960C799AB177F56E5E033263BB0962F815A03C4 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LaunchBlockFlowResult>(CAPI.ovr_User_LaunchBlockFlow(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchBlockFlow_m0BBDE990228AB9AAA67B95BDF0DB62098F06BC65(L_1, /*hidden argument*/NULL);
		Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 * L_3 = (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 *)il2cpp_codegen_object_new(Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0_il2cpp_TypeInfo_var);
		Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A(L_3, L_2, /*hidden argument*/Request_1__ctor_m85814122DF721A867C209F99ABC596083D6B2B8A_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tDFBA89E096E61EBA5A840A18EBBC6B23691601E0 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult> Oculus.Platform.Users::LaunchFriendRequestFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * Users_LaunchFriendRequestFlow_m6C6D656F9FF552832F25BBD706C888690484F839 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LaunchFriendRequestFlowResult>(CAPI.ovr_User_LaunchFriendRequestFlow(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchFriendRequestFlow_m8FD9F09D6DA42EFF9BE262A8EB00E8AD6569EB89(L_1, /*hidden argument*/NULL);
		Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * L_3 = (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *)il2cpp_codegen_object_new(Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var);
		Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268(L_3, L_2, /*hidden argument*/Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult> Oculus.Platform.Users::LaunchUnblockFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 * Users_LaunchUnblockFlow_mA9B943D414049D2136980CDA99B82A8455925D12 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LaunchUnblockFlowResult>(CAPI.ovr_User_LaunchUnblockFlow(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchUnblockFlow_m0F11C16B5CE848198711945FF121EBEB5AE5FAA9(L_1, /*hidden argument*/NULL);
		Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 * L_3 = (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 *)il2cpp_codegen_object_new(Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474_il2cpp_TypeInfo_var);
		Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED(L_3, L_2, /*hidden argument*/Request_1__ctor_m1306DAE221B558E3A47D274CE2408926817D1BED_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tAF48B9C61DC45A574D742E190F6DFF8ECF580474 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList> Oculus.Platform.Users::GetNextBlockedUserListPage(Oculus.Platform.Models.BlockedUserList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * Users_GetNextBlockedUserListPage_m242ADB3279F9D486A4B160E300D25C89762A6A5A (BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58DE12A61CB8F5C6AE93E6A588A18C0FC42E00E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217 * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m995AA758FBC10B2B3E0028C5D27D43179DF8292D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextBlockedUserListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral58DE12A61CB8F5C6AE93E6A588A18C0FC42E00E3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.BlockedUserList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextBlockedUserArrayPage
		//   )
		// );
		BlockedUserList_t20AD549DD95869C17BEDB3C6E40C5A3A676A7217 * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_m7DD393613BE46161C8E2A1B0E928EA1C69AE29F1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA(L_4, ((int32_t)2083192267), /*hidden argument*/NULL);
		Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 * L_6 = (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)il2cpp_codegen_object_new(Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2_il2cpp_TypeInfo_var);
		Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF(L_6, L_5, /*hidden argument*/Request_1__ctor_m98B80C96AF4560018815A517E71DF883DC8DCDFF_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tF333A40E4601D22ED79ABF5F5A1873AA72D44FE2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Users::GetNextUserListPage(Oculus.Platform.Models.UserList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Users_GetNextUserListPage_mB4655181C353F01489CF276D1DFA7961CAF85E81 (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextUserListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.UserList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextUserArrayPage
		//   )
		// );
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA(L_4, ((int32_t)645723971), /*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_6 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_6, L_5, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList> Oculus.Platform.Users::GetNextUserCapabilityListPage(Oculus.Platform.Models.UserCapabilityList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 * Users_GetNextUserCapabilityListPage_m4027093EC7F95580AA0DC85BE13E84A94D2418DE (UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F44D94A63BEE6D780718FB25538264AEC6ED92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_mE059563362B27EB7EAF4F86333239CFB86D00D21_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextUserCapabilityListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral21F44D94A63BEE6D780718FB25538264AEC6ED92, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.UserCapabilityList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextUserCapabilityArrayPage
		//   )
		// );
		UserCapabilityList_tE6E0C6B90D759BA45471A3E25033D243082FACB3 * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_m279F6891EEFC911DEA93D377E2DEAB297B7BBB00_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA(L_4, ((int32_t)587854745), /*hidden argument*/NULL);
		Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 * L_6 = (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *)il2cpp_codegen_object_new(Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2_il2cpp_TypeInfo_var);
		Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E(L_6, L_5, /*hidden argument*/Request_1__ctor_m9FEEA564AFAA6516976DBE0B1FC24D2D1DC9163E_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t1EBB9593C8E1D336A3E87CFE10282F0676A73DE2 *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Voip::Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Start_mD4A981F8F83C17D7613E54E8AD0B5E967E2E11B3 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Start(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Start_m0C4835CAE5708EB73AF4421B43F0BC6447D0A21F(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Accept_m1DFFD97D573CD70906B96AF35D610EAFA5963E03 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Accept(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Accept_m9800FE8E4D343E0C0CE2FDC0487FEA5BB26E28A8(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Stop_mA24A0BDF812EB1364972B0B9C95DFBEF3F59C9C7 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Stop(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Stop_m0DC234A970B860B06D713DD66F162277CBA5C7E5(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneFilterCallback(Oculus.Platform.CAPI/FilterCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneFilterCallback_mF2E82F4AEA6C5860B22A3897D32558E93FEA3905 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// CAPI.ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(callback, (UIntPtr)CAPI.VoipFilterBufferSize);
		FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)((int32_t)480))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer_m1D5F5B3B07B29D553B92A5CA21A02FF11CD8FAF0(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneMuted(Oculus.Platform.VoipMuteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneMuted_mECC3892E9AFD0937444A1DB2D2874C053C63A440 (int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_SetMicrophoneMuted(state);
		int32_t L_1 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetMicrophoneMuted_m2EA767996A68B9920B04B54C471D54628C92664C(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// Oculus.Platform.VoipMuteState Oculus.Platform.Voip::GetSystemVoipMicrophoneMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetSystemVoipMicrophoneMuted_m462E94A54D92A68B123B1F1180E3C4AA33F0A110 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_Voip_GetSystemVoipMicrophoneMuted();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_Voip_GetSystemVoipMicrophoneMuted_mF4624D95D21D432C9A5F72F59A2304875C255394(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return VoipMuteState.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.SystemVoipStatus Oculus.Platform.Voip::GetSystemVoipStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetSystemVoipStatus_mA063EEBF5BCFF7F7CD15AA1C2091A46E32038776 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_Voip_GetSystemVoipStatus();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_Voip_GetSystemVoipStatus_mA4CF3DB3823A656E832BC18617FB4105A1F1A30E(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return SystemVoipStatus.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipDtxState Oculus.Platform.Voip::GetIsConnectionUsingDtx(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetIsConnectionUsingDtx_m7C8408AFFCCCAA469FDB50167D10A216B5F14606 (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetIsConnectionUsingDtx(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetIsConnectionUsingDtx_m12173DD61FF2478758A671585481EA2AEA569C20(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipDtxState.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipBitrate Oculus.Platform.Voip::GetLocalBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetLocalBitrate_m3EF5DADB2FFE678F988D3C92B2BC02E0112B8728 (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetLocalBitrate(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetLocalBitrate_mF1AD054056CC9EA54CB22E970EA936F0C0BF0B37(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipBitrate.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipBitrate Oculus.Platform.Voip::GetRemoteBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetRemoteBitrate_m10C4BB911D6BFC985E9F0B3BE046FC3E8C41B1EF (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetRemoteBitrate(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetRemoteBitrate_mD225E49EC7ABDD91FCE45929F96E57F455D8CBC1(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipBitrate.Unknown;
		return (int32_t)(0);
	}
}
// System.Void Oculus.Platform.Voip::SetNewConnectionOptions(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetNewConnectionOptions_m30BB5938E60842C3E570374BB67B0CEF8A864480 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___voipOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// CAPI.ovr_Voip_SetNewConnectionOptions((IntPtr)voipOptions);
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_1 = ___voipOptions0;
		intptr_t L_2;
		L_2 = VoipOptions_op_Explicit_mECDFD67AF4F1C6685115F82D28645BE57BC9FBD2(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetNewConnectionOptions_m5A52B5110B93D84F8204842ED34DA84C431DAC8A((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.MicrophoneAvailabilityState> Oculus.Platform.Voip::GetMicrophoneAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 * Voip_GetMicrophoneAvailability_mF72DA6538EA6D2997353941D55FEFE5390982313 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.MicrophoneAvailabilityState>(CAPI.ovr_Voip_GetMicrophoneAvailability());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Voip_GetMicrophoneAvailability_m99121C9D1331FA1F0946ABD5ADEE29F27522D275(/*hidden argument*/NULL);
		Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 * L_2 = (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 *)il2cpp_codegen_object_new(Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20_il2cpp_TypeInfo_var);
		Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F(L_2, L_1, /*hidden argument*/Request_1__ctor_m824D0335DA37056088F467A43E54D7E658917E1F_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tBC7F7DCC5A9E7CBDB423A825F1D1FBB82F0FBD20 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState> Oculus.Platform.Voip::SetSystemVoipSuppressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * Voip_SetSystemVoipSuppressed_m3D3535249EE7735754460897C32908AAE5A60E93 (bool ___suppressed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.SystemVoipState>(CAPI.ovr_Voip_SetSystemVoipSuppressed(suppressed));
		bool L_1 = ___suppressed0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Voip_SetSystemVoipSuppressed_m6EB89BEC82B94CD4849BF1EBC5CA0C4A7127CACB(L_1, /*hidden argument*/NULL);
		Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * L_3 = (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *)il2cpp_codegen_object_new(Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var);
		Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052(L_3, L_2, /*hidden argument*/Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// Debug.LogError(Oculus.Platform.Core.PlatformUninitializedError);
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_PlatformUninitializedError_2();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *)NULL;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneAvailabilityStateUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneAvailabilityStateUpdateNotificationCallback_mEE29758BEE652A5FBA834BFE37DD10F17DAC4A9E (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Voip_MicrophoneAvailabilityStateUpdate,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0(((int32_t)1042336599), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetSystemVoipStateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetSystemVoipStateNotificationCallback_mB75B1F3DE9B75DEC587E4F85AE2E847231EC974E (Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m95DD231697F2826CDF057F18C4942819F659B6DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Voip_SystemVoipState,
		//   callback
		// );
		Callback_t827F915E827EE8044B5F300339FE951E4557B20A * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m95DD231697F2826CDF057F18C4942819F659B6DD(((int32_t)1490179237), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m95DD231697F2826CDF057F18C4942819F659B6DD_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::set_senderID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_set_senderID_m288B4C24C5D9628FC7FC0A35B1AC80A3DFE10193 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { pcmSource.SetSenderID(value); }
		RuntimeObject* L_0 = __this->get_pcmSource_7();
		uint64_t L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(1 /* System.Void Oculus.Platform.IVoipPCMSource::SetSenderID(System.UInt64) */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_0, L_1);
		// set { pcmSource.SetSenderID(value); }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Stop_mFC59095BE1119B99A7B4A44DC25CC5E9FA1B2DB5 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// Oculus.Platform.VoipSampleRate Oculus.Platform.VoipAudioSourceHiLevel::SampleRateToEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, int32_t ___rate0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___rate0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)24000))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___rate0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)44100))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___rate0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)48000)))))
		{
			goto IL_001e;
		}
	}
	{
		// return VoipSampleRate.HZ48000;
		return (int32_t)(3);
	}

IL_001a:
	{
		// return VoipSampleRate.HZ44100;
		return (int32_t)(2);
	}

IL_001c:
	{
		// return VoipSampleRate.HZ24000;
		return (int32_t)(1);
	}

IL_001e:
	{
		// return VoipSampleRate.Unknown;
		return (int32_t)(0);
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Awake_mE7525A754D5B14E3EA9931C0ACC5F071DCE02D23 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreatePCMSource();
		VirtActionInvoker0::Invoke(4 /* System.Void Oculus.Platform.VoipAudioSourceHiLevel::CreatePCMSource() */, __this);
		// if (audioSource == null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		__this->set_audioSource_5(L_3);
	}

IL_0025:
	{
		// audioSource.gameObject.AddComponent<FilterReadDelegate>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_5();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * L_6;
		L_6 = GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD(L_5, /*hidden argument*/GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m68ED3D1B86F14160DD0C09594F8017E58CEC08BD_RuntimeMethod_var);
		// var filterDelegate = audioSource.gameObject.GetComponent<FilterReadDelegate>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_5();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * L_9;
		L_9 = GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29(L_8, /*hidden argument*/GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m55AA61AB85FADE7081CA4BA1D292C6F6F1D74A29_RuntimeMethod_var);
		// filterDelegate.parent = this;
		NullCheck(L_9);
		L_9->set_parent_4(__this);
		// initialPlaybackDelayMS = 40;
		__this->set_initialPlaybackDelayMS_4(((int32_t)40));
		// audioSystemPlaybackFrequency = AudioSettings.outputSampleRate;
		int32_t L_10;
		L_10 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->set_audioSystemPlaybackFrequency_8(L_10);
		// CAPI.ovr_Voip_SetOutputSampleRate(SampleRateToEnum(audioSystemPlaybackFrequency));
		int32_t L_11 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		int32_t L_12;
		L_12 = VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1(__this, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetOutputSampleRate_m6372425AE289A6E61861320B0BCF4A9F5F1FABA6(L_12, /*hidden argument*/NULL);
		// if (verboseLogging)
		bool L_13 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		// Debug.LogFormat("freq {0}", audioSystemPlaybackFrequency);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_16 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6, L_15, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Start_m5FD556DFBAE15AA023F598D238A7AB753ADF2674 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::CreatePCMSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_CreatePCMSource_m81783FF495599298C6EFC14A6C36821811333B73 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource = new VoipPCMSourceNative();
		VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * L_0 = (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 *)il2cpp_codegen_object_new(VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var);
		VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92(L_0, /*hidden argument*/NULL);
		__this->set_pcmSource_7(L_0);
		// }
		return;
	}
}
// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::MSToElements(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_MSToElements_m8A392BF3FF2D7D485E672412DC107E03602AD24E (int32_t ___ms0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ms * audioSystemPlaybackFrequency / 1000;
		int32_t L_0 = ___ms0;
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_1 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))/(int32_t)((int32_t)1000)));
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Update_m7D9272AB8D68F55948FAEC2CE7D04AA2B31CD72E (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource.Update();
		RuntimeObject* L_0 = __this->get_pcmSource_7();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Oculus.Platform.IVoipPCMSource::Update() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_0);
		// if (!audioSource.isPlaying && pcmSource.PeekSizeElements() >= MSToElements(initialPlaybackDelayMS))
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_pcmSource_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = __this->get_initialPlaybackDelayMS_4();
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = VoipAudioSourceHiLevel_MSToElements_m8A392BF3FF2D7D485E672412DC107E03602AD24E(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0065;
		}
	}
	{
		// if (verboseLogging)
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		bool L_7 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogFormat("buffered {0} elements, starting playback", pcmSource.PeekSizeElements());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		RuntimeObject* L_10 = __this->get_pcmSource_7();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD, L_9, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = __this->get_audioSource_5();
		NullCheck(L_14);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_14, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel__ctor_mA5EA82C6470B9890562ED05C00B9FDF23ED1EE2D (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel__cctor_mFB76DC04CB0313B1A4D24DC3E168949468DC0203 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Oculus.Platform.VoipOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions__ctor_m349A78ED85161639C44A484886D4BB94AB28259B (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoipOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_VoipOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_VoipOptions_Create_mD4DD27514BC524AD0912019B1B6367C8CB613C03(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipOptions::SetBitrateForNewConnections(Oculus.Platform.VoipBitrate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_SetBitrateForNewConnections_m5DD59D56FBC6DC31DC85458D333CCEF48FE0FC74 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_VoipOptions_SetBitrateForNewConnections(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_SetBitrateForNewConnections_mEC0DA6AE80F1A013CB655B6B2DB1890BD9FD9356((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipOptions::SetCreateNewConnectionUseDtx(Oculus.Platform.VoipDtxState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_SetCreateNewConnectionUseDtx_m5724ECB20B91C3AAD9BF41BDB22D5947C983F8D2 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_VoipOptions_SetCreateNewConnectionUseDtx(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_SetCreateNewConnectionUseDtx_m2C46012D290A068BCAF4E266FF07D656821AE172((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.VoipOptions::op_Explicit(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VoipOptions_op_Explicit_mECDFD67AF4F1C6685115F82D28645BE57BC9FBD2 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.VoipOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_Finalize_mA8150FC50480BDF0BC9E3392C68BC20EAF8D9336 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// CAPI.ovr_VoipOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_Destroy_m55C2B30A237478D8A98A0EBA7AEFD491CC8A6680((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Oculus.Platform.VoipPCMSourceNative::GetPCM(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipPCMSourceNative_GetPCM_m330D8B296E58AF7E92216E6E52E2410EACB722D9 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dest0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)CAPI.ovr_Voip_GetPCMFloat(senderID, dest, (UIntPtr)length);
		uint64_t L_0 = __this->get_senderID_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___dest0;
		int32_t L_2 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_3;
		L_3 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = CAPI_ovr_Voip_GetPCMFloat_mD948F9DACC19FABB9B3BBA070222007A227143FF(L_0, L_1, L_3, /*hidden argument*/NULL);
		uint32_t L_5;
		L_5 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::SetSenderID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative_SetSenderID_mB83CE6ECD69B5C9D557A3FCA29C9AFE2D42C5949 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, uint64_t ___senderID0, const RuntimeMethod* method)
{
	{
		// this.senderID = senderID;
		uint64_t L_0 = ___senderID0;
		__this->set_senderID_0(L_0);
		// }
		return;
	}
}
// System.Int32 Oculus.Platform.VoipPCMSourceNative::PeekSizeElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipPCMSourceNative_PeekSizeElements_m29BBD16775799A2003520BAB51263D5F2B672A0B (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)CAPI.ovr_Voip_GetPCMSize(senderID);
		uint64_t L_0 = __this->get_senderID_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_Voip_GetPCMSize_m1F887B73447D542AEB761EE9F88B424FDE05021C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative_Update_m11989EE78BA0D517D7B34C344F02CFF908165D27 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Oculus.Platform.Vrcamera::SetGetDataChannelMessageUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vrcamera_SetGetDataChannelMessageUpdateNotificationCallback_m8FD047FF72F81BF9417E78F58CC865CF35ACE50D (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Vrcamera_GetDataChannelMessageUpdate,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0(((int32_t)1860498236), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Vrcamera::SetGetSurfaceUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vrcamera_SetGetSurfaceUpdateNotificationCallback_m3D10942E5EE7732B978AF7B3FCBE7CE123ABBB51 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Vrcamera_GetSurfaceUpdate,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0(((int32_t)938610820), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_mC44C45FF96F6AEA373A138F70CF1557F2B7163E0_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.WindowsPlatform::CPPLogCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsPlatform_CPPLogCallback_m15852470B6EB7DE65D27DBE1C2F71E60CE6AE95B (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, intptr_t ___tag0, intptr_t ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("{0}: {1}", Marshal.PtrToStringAnsi(tag), Marshal.PtrToStringAnsi(message)));
		intptr_t L_0 = ___tag0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___message1;
		String_t* L_3;
		L_3 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_1, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.WindowsPlatform::getCallbackPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Boolean Oculus.Platform.WindowsPlatform::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (String.IsNullOrEmpty(appId))
		String_t* L_0 = ___appId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new UnityException("AppID must not be null or empty");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347_RuntimeMethod_var)));
	}

IL_0013:
	{
		// CAPI.ovr_UnityInitWrapperWindows(appId, getCallbackPointer());
		String_t* L_3 = ___appId0;
		intptr_t L_4;
		L_4 = WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = CAPI_ovr_UnityInitWrapperWindows_mCF06BCEA646A8E0F124D5DE709556496961B47DD(L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.WindowsPlatform::AsyncInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (String.IsNullOrEmpty(appId))
		String_t* L_0 = ___appId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new UnityException("AppID must not be null or empty");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new Request<Models.PlatformInitialize>(
		//     CAPI.ovr_UnityInitWrapperWindowsAsynchronous(appId, getCallbackPointer()));
		String_t* L_3 = ___appId0;
		intptr_t L_4;
		L_4 = WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_UnityInitWrapperWindowsAsynchronous_m7B8176215967FCED48A42464C9EDE701EE904186(L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_6 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_6, L_5, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void Oculus.Platform.WindowsPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsPlatform__ctor_m9912552D07BB1447E692D1D40FE8CCB1BBB3C6BF (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(int16_t*, uintptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pcmData0' to native representation
	int16_t* ____pcmData0_marshaled = NULL;
	if (___pcmData0 != NULL)
	{
		____pcmData0_marshaled = reinterpret_cast<int16_t*>((___pcmData0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____pcmData0_marshaled, ___pcmDataLength1, ___frequency2, ___numChannels3);

}
// System.Void Oculus.Platform.CAPI/FilterCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback__ctor_mAFC9FE121057123728CE41E392E4C07FDF2C1FB6 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.CAPI/FilterCallback::Invoke(System.Int16[],System.UIntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback_Invoke_mE02FDBF7FFA47F639A2B77241ADEC097956300E1 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
					else
						GenericVirtActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
					else
						VirtActionInvoker4< Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.CAPI/FilterCallback::BeginInvoke(System.Int16[],System.UIntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterCallback_BeginInvoke_mBAD9199C195E160A7F2E6488EB6A15C2C77550EA (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___pcmData0;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___pcmDataLength1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___frequency2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___numChannels3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Oculus.Platform.CAPI/FilterCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback_EndInvoke_mE5D9DD6BAB4992838DC9D38F15DC0CD8B93CF411 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled)
{
	marshaled.___sType_0 = unmarshaled.get_sType_0();
	marshaled.___email_1 = il2cpp_codegen_marshal_string(unmarshaled.get_email_1());
	marshaled.___password_2 = il2cpp_codegen_marshal_string(unmarshaled.get_password_2());
	marshaled.___appId_3 = unmarshaled.get_appId_3();
	marshaled.___uriPrefixOverride_4 = il2cpp_codegen_marshal_string(unmarshaled.get_uriPrefixOverride_4());
}
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke_back(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled)
{
	int32_t unmarshaled_sType_temp_0 = 0;
	unmarshaled_sType_temp_0 = marshaled.___sType_0;
	unmarshaled.set_sType_0(unmarshaled_sType_temp_0);
	unmarshaled.set_email_1(il2cpp_codegen_marshal_string_result(marshaled.___email_1));
	unmarshaled.set_password_2(il2cpp_codegen_marshal_string_result(marshaled.___password_2));
	uint64_t unmarshaled_appId_temp_3 = 0;
	unmarshaled_appId_temp_3 = marshaled.___appId_3;
	unmarshaled.set_appId_3(unmarshaled_appId_temp_3);
	unmarshaled.set_uriPrefixOverride_4(il2cpp_codegen_marshal_string_result(marshaled.___uriPrefixOverride_4));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke_cleanup(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___email_1);
	marshaled.___email_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___password_2);
	marshaled.___password_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___uriPrefixOverride_4);
	marshaled.___uriPrefixOverride_4 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled)
{
	marshaled.___sType_0 = unmarshaled.get_sType_0();
	marshaled.___email_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_email_1());
	marshaled.___password_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_password_2());
	marshaled.___appId_3 = unmarshaled.get_appId_3();
	marshaled.___uriPrefixOverride_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_uriPrefixOverride_4());
}
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com_back(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled)
{
	int32_t unmarshaled_sType_temp_0 = 0;
	unmarshaled_sType_temp_0 = marshaled.___sType_0;
	unmarshaled.set_sType_0(unmarshaled_sType_temp_0);
	unmarshaled.set_email_1(il2cpp_codegen_marshal_bstring_result(marshaled.___email_1));
	unmarshaled.set_password_2(il2cpp_codegen_marshal_bstring_result(marshaled.___password_2));
	uint64_t unmarshaled_appId_temp_3 = 0;
	unmarshaled_appId_temp_3 = marshaled.___appId_3;
	unmarshaled.set_appId_3(unmarshaled_appId_temp_3);
	unmarshaled.set_uriPrefixOverride_4(il2cpp_codegen_marshal_bstring_result(marshaled.___uriPrefixOverride_4));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com_cleanup(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___email_1);
	marshaled.___email_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___password_2);
	marshaled.___password_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___uriPrefixOverride_4);
	marshaled.___uriPrefixOverride_4 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_string(unmarshaled.get_key__0());
	marshaled.___valueType__1 = unmarshaled.get_valueType__1();
	marshaled.___stringValue__2 = il2cpp_codegen_marshal_string(unmarshaled.get_stringValue__2());
	marshaled.___intValue__3 = unmarshaled.get_intValue__3();
	marshaled.___doubleValue__4 = unmarshaled.get_doubleValue__4();
}
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke_back(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_string_result(marshaled.___key__0));
	int32_t unmarshaled_valueType__temp_1 = 0;
	unmarshaled_valueType__temp_1 = marshaled.___valueType__1;
	unmarshaled.set_valueType__1(unmarshaled_valueType__temp_1);
	unmarshaled.set_stringValue__2(il2cpp_codegen_marshal_string_result(marshaled.___stringValue__2));
	int32_t unmarshaled_intValue__temp_3 = 0;
	unmarshaled_intValue__temp_3 = marshaled.___intValue__3;
	unmarshaled.set_intValue__3(unmarshaled_intValue__temp_3);
	double unmarshaled_doubleValue__temp_4 = 0.0;
	unmarshaled_doubleValue__temp_4 = marshaled.___doubleValue__4;
	unmarshaled.set_doubleValue__4(unmarshaled_doubleValue__temp_4);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke_cleanup(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___key__0);
	marshaled.___key__0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___stringValue__2);
	marshaled.___stringValue__2 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_key__0());
	marshaled.___valueType__1 = unmarshaled.get_valueType__1();
	marshaled.___stringValue__2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_stringValue__2());
	marshaled.___intValue__3 = unmarshaled.get_intValue__3();
	marshaled.___doubleValue__4 = unmarshaled.get_doubleValue__4();
}
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com_back(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_bstring_result(marshaled.___key__0));
	int32_t unmarshaled_valueType__temp_1 = 0;
	unmarshaled_valueType__temp_1 = marshaled.___valueType__1;
	unmarshaled.set_valueType__1(unmarshaled_valueType__temp_1);
	unmarshaled.set_stringValue__2(il2cpp_codegen_marshal_bstring_result(marshaled.___stringValue__2));
	int32_t unmarshaled_intValue__temp_3 = 0;
	unmarshaled_intValue__temp_3 = marshaled.___intValue__3;
	unmarshaled.set_intValue__3(unmarshaled_intValue__temp_3);
	double unmarshaled_doubleValue__temp_4 = 0.0;
	unmarshaled_doubleValue__temp_4 = marshaled.___doubleValue__4;
	unmarshaled.set_doubleValue__4(unmarshaled_doubleValue__temp_4);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com_cleanup(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___key__0);
	marshaled.___key__0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___stringValue__2);
	marshaled.___stringValue__2 = NULL;
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44 (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.String;
		__this->set_valueType__1(0);
		// stringValue_ = value;
		String_t* L_1 = ___value1;
		__this->set_stringValue__2(L_1);
		// intValue_ = 0;
		__this->set_intValue__3(0);
		// doubleValue_ = 0.0;
		__this->set_doubleValue__4((0.0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44(_thisAdjusted, ___key0, ___value1, method);
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.Int;
		__this->set_valueType__1(1);
		// intValue_ = value;
		int32_t L_1 = ___value1;
		__this->set_intValue__3(L_1);
		// stringValue_ = null;
		__this->set_stringValue__2((String_t*)NULL);
		// doubleValue_ = 0.0;
		__this->set_doubleValue__4((0.0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA(_thisAdjusted, ___key0, ___value1, method);
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.Double;
		__this->set_valueType__1(2);
		// doubleValue_ = value;
		double L_1 = ___value1;
		__this->set_doubleValue__4(L_1);
		// stringValue_ = null;
		__this->set_stringValue__2((String_t*)NULL);
		// intValue_ = 0;
		__this->set_intValue__3(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E(_thisAdjusted, ___key0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Oculus.Platform.Callback/RequestCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback__ctor_m3B77D4730A2A359D3EA979B86606A15D203283C1 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, const RuntimeMethod* method)
{
	{
		// public RequestCallback()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Callback/RequestCallback::.ctor(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback__ctor_mB95BB8E3F42EBDB5546542F47CB412DD97FCAE03 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback0, const RuntimeMethod* method)
{
	{
		// public RequestCallback(Message.Callback callback)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.messageCallback = callback;
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = ___callback0;
		__this->set_messageCallback_0(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Callback/RequestCallback::HandleMessage(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback_HandleMessage_mE69959A7787F575EE024BDBF803CB42538E2D3C3 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg0, const RuntimeMethod* method)
{
	{
		// if (messageCallback != null)
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = __this->get_messageCallback_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// messageCallback(msg);
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_1 = __this->get_messageCallback_0();
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_2 = ___msg0;
		NullCheck(L_1);
		Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Message/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mAC564D6964EDAEDEB158A4FEB741444645CEFAEB (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Message/Callback::Invoke(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.Message/Callback::BeginInvoke(Oculus.Platform.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m5B4DC917F8773EDCD11662E01027295E04086E30 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Message/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_m629498715CDFA7B26764CEDBEA3DB2A2F29FE27F (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Message/ExtraMessageTypesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraMessageTypesHandler__ctor_m8CCAD880D1B65AC804C1C29FEEAC2309AB794672 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::Invoke(System.IntPtr,Oculus.Platform.Message/MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_Invoke_mF3C0E6177A016D6B3AAB79420833149C6A171873 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, const RuntimeMethod* method)
{
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___messageHandle0, ___message_type1, targetMethod);
			}
			else
			{
				// closed
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___messageHandle0, ___message_type1);
					else
						result = GenericVirtFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___messageHandle0, ___message_type1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___messageHandle0, ___message_type1);
					else
						result = VirtFuncInvoker2< Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___messageHandle0, ___message_type1);
				}
			}
			else
			{
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Message/ExtraMessageTypesHandler::BeginInvoke(System.IntPtr,Oculus.Platform.Message/MessageType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtraMessageTypesHandler_BeginInvoke_m2EEB388D56B9E86FB9AF9055E09E94CA1080B7B9 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___messageHandle0);
	__d_args[1] = Box(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var, &___message_type1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_EndInvoke_mC66AAD40993CE67A2E25F6FE2A45284E5DA71A6D (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Oculus.Platform.PlatformInternal/HTTP::SetHttpTransferUpdateCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_SetHttpTransferUpdateCallback_m903F66BAA503323EE1C4E0CD4F3D11A9C450265A (Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_HTTP_Transfer,
		//   callback
		// );
		Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1(((int32_t)2111073839), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_m9CFC8DD9140CCE385DF71285C5D305CF839213F1_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList> Oculus.Platform.PlatformInternal/Users::GetLinkedAccounts(Oculus.Platform.ServiceProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * Users_GetLinkedAccounts_mEEFB6FC17804B8C75BA287AFA1438E0CDC48754A (ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* ___providers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * V_0 = NULL;
	ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// UserOptions userOpts = new UserOptions();
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_1 = (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 *)il2cpp_codegen_object_new(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_2 = ___providers0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0022;
	}

IL_0013:
	{
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// userOpts.AddServiceProvider(provider);
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6(L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0022:
	{
		// foreach (ServiceProvider provider in providers)
		int32_t L_10 = V_2;
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LinkedAccountList>(CAPI.ovr_User_GetLinkedAccounts((IntPtr)userOpts));
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_12 = V_0;
		intptr_t L_13;
		L_13 = UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_14;
		L_14 = CAPI_ovr_User_GetLinkedAccounts_m228EB54845ED4F04DB92565773630731EEAFCC9E((intptr_t)L_13, /*hidden argument*/NULL);
		Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * L_15 = (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)il2cpp_codegen_object_new(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6(L_15, L_14, /*hidden argument*/Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		return L_15;
	}

IL_0039:
	{
		// return null;
		return (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_mE62CADC1A93D3878C4AF2CAB4600B7A43E8D656E (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_m4CBFE3D9C43F42E512587B34F68FA069B9EF9989 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___msg1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.StandalonePlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m951569774A2ED1032DEB433269D86118D66270F9 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mD26CA4B73B70214F81E2A8D930EF8EE00EC37A92 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_Awake_m9538F15D80113236A3A698AD436CB902883F5080 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bufferSizeElements = (int)CAPI.ovr_Voip_GetOutputBufferMaxSize();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_0;
		L_0 = CAPI_ovr_Voip_GetOutputBufferMaxSize_m9799A26F0862BEE54F29A4667ABF9D3C9ED8EF77(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// scratchBuffer = new float[bufferSizeElements];
		int32_t L_2 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_scratchBuffer_5(L_3);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	{
		// int sizeToFetch = data.Length / channels;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = ___channels1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))/(int32_t)L_1));
		// int sourceBufferSize = sizeToFetch;
		int32_t L_2 = V_0;
		V_1 = L_2;
		// if (sourceBufferSize > scratchBuffer.Length)
		int32_t L_3 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_scratchBuffer_5();
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		// Array.Clear(data, 0, data.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___data0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___data0;
		NullCheck(L_6);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// throw new Exception(string.Format(
		//     "Audio system tried to pull {0} bytes, max voip internal ring buffer size {1}", sizeToFetch,
		//     scratchBuffer.Length));
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = __this->get_scratchBuffer_5();
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66)), L_9, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var)));
	}

IL_0040:
	{
		// int available = parent.pcmSource.PeekSizeElements();
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_15 = __this->get_parent_4();
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->get_pcmSource_7();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_16);
		V_2 = L_17;
		// if (available < sourceBufferSize)
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_007f;
		}
	}
	{
		// if (verboseLogging)
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		bool L_20 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_20)
		{
			goto IL_007e;
		}
	}
	{
		// Debug.LogFormat(
		//     "Voip starved! Want {0}, but only have {1} available",
		//     sourceBufferSize,
		//     available);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_22;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0, L_26, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// return;
		return;
	}

IL_007f:
	{
		// int copied = parent.pcmSource.GetPCM(scratchBuffer, sourceBufferSize);
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_30 = __this->get_parent_4();
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->get_pcmSource_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = __this->get_scratchBuffer_5();
		int32_t L_33 = V_1;
		NullCheck(L_31);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker2< int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, int32_t >::Invoke(0 /* System.Int32 Oculus.Platform.IVoipPCMSource::GetPCM(System.Single[],System.Int32) */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_31, L_32, L_33);
		V_3 = L_34;
		// if (copied < sourceBufferSize)
		int32_t L_35 = V_3;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_00be;
		}
	}
	{
		// Debug.LogWarningFormat(
		//     "GetPCM() returned {0} samples, expected {1}",
		//     copied,
		//     sourceBufferSize);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_37;
		int32_t L_39 = V_3;
		int32_t L_40 = L_39;
		RuntimeObject * L_41 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_38;
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_45);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D, L_42, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00be:
	{
		// int dest = 0;
		V_4 = 0;
		// float tmpPeakAmp = -1;
		V_5 = (-1.0f);
		// for (int i = 0; i < sizeToFetch; i++)
		V_6 = 0;
		goto IL_0103;
	}

IL_00cd:
	{
		// float val = scratchBuffer[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = __this->get_scratchBuffer_5();
		int32_t L_47 = V_6;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		float L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_7 = L_49;
		// for (int j = 0; j < channels; j++)
		V_8 = 0;
		goto IL_00f8;
	}

IL_00dd:
	{
		// data[dest++] = val;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = ___data0;
		int32_t L_51 = V_4;
		int32_t L_52 = L_51;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		float L_53 = V_7;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (float)L_53);
		// if (val > tmpPeakAmp)
		float L_54 = V_7;
		float L_55 = V_5;
		if ((!(((float)L_54) > ((float)L_55))))
		{
			goto IL_00f2;
		}
	}
	{
		// tmpPeakAmp = val;
		float L_56 = V_7;
		V_5 = L_56;
	}

IL_00f2:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_57 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_00f8:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_58 = V_8;
		int32_t L_59 = ___channels1;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_60 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0103:
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_61 = V_6;
		int32_t L_62 = V_0;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00cd;
		}
	}
	{
		// parent.peakAmplitude = tmpPeakAmp;
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_63 = __this->get_parent_4();
		float L_64 = V_5;
		NullCheck(L_63);
		L_63->set_peakAmplitude_6(L_64);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate__ctor_m30ADF76B8C36FA9BEC6180830B5B661E457DDD78 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_m75D3B3850C8B2DE6435D1495E90BDF37BDEA5124 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_mED9E5A5F33A4FC185CA7A813EF24AB13080A2F30 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___tag0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___msg1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.WindowsPlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m0384626C20F86718E03B4DA02A456C3067B49029 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mBC6914A5F0EE519B48B8E21FF21FE3DE3E93B658 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF_inline (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong RequestID { get; set; }
		uint64_t L_0 = ___value0;
		__this->set_U3CRequestIDU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IsPlatformInitialized;
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_IsPlatformInitialized_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method)
{
	{
		// get { return _NextUrl; }
		String_t* L_0 = (String_t*)__this->get__NextUrl_1();
		return (String_t*)L_0;
	}
}
