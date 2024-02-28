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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_t30550FD7E7165898295086090B4681ECFDACC069;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<System.Text.StringBuilder>
struct Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_t8956C826A49866445E54956164D36A98DE3362FF;
// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18;
// System.Action`3<System.Int32,System.Object,System.Single>
struct Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.Single>>
struct Func_2_t45CACCFE85B11B8D92B874D9D1CF7C3314B3B616;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>>
struct Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>>
struct Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>>
struct Func_2_tECA9703E63EABFE1936D82D2F9C616C70B948507;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>>
struct Func_2_t79B2A104B63643432206C5F49CA1C7EECF381024;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>>
struct Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<System.String,System.String>>
struct Func_2_tED9BCD663191171058A80BA54DA2268E87CF89DD;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>
struct Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20;
// System.Func`2<System.UriBuilder,System.UriBuilder>
struct Func_2_t3B8F769F549B32245EF983F325BF4399764EE2A7;
// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t7527D4AFC49170E0807BE8D3DC2CD791288BB98E;
// System.Collections.Generic.IEqualityComparer`1<Meta.WitAi.Events.SpeechEvents>
struct IEqualityComparer_1_t0F855C2687AB7ABE5FA0A1E7425144428F324C84;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<System.Single[]>
struct List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct List_1_t64BEB6EBDA579FAC5EBFC29B5CE7CE6943F29599;
// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>
struct List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D;
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009;
// Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8;
// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305;
// Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0;
// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884;
// System.Predicate`1<Meta.WitAi.VoiceService>
struct Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>
struct RequestCompleteDelegate_1_tF3C43C48558E5DCD7E4F35505B1F31AEBBF173E2;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>
struct RequestCompleteDelegate_1_t1B30556F315D75E50A4EFB878A56527C28BD4866;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>
struct RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C;
// Meta.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.Action>
struct Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_t97BBD372FDB3FCC54138AA078EA6E6A6D286D961;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>
struct VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD;
// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Component>[]
struct SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B;
// System.Collections.Generic.HashSet`1/Slot<Meta.WitAi.Events.SpeechEvents>[]
struct SlotU5BU5D_t52623E95B78EBDFC434CBD211A3665FD200A7A88;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Meta.WitAi.Data.Info.ComposerGraph[]
struct ComposerGraphU5BU5D_tE75DFC400DC95CCAFB649B04D0DF01B0F7D67E3D;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859;
// Meta.WitAi.Events.IWitByteDataReadyHandler[]
struct IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558;
// Meta.WitAi.Events.IWitByteDataSentHandler[]
struct IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Meta.WitAi.Data.Info.WitCharacterInfo[]
struct WitCharacterInfoU5BU5D_tB6EF90AA27D761156B7C76A0B4612C7B1D8AEEF1;
// Meta.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5;
// Meta.WitAi.Data.Info.WitVersionTagInfo[]
struct WitVersionTagInfoU5BU5D_t055499C228409027F28F3D9EF76134E375E6C3BE;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB;
// Meta.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F;
// Meta.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioClipAudioSource
struct AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A;
// Meta.WitAi.AudioDurationTracker
struct AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Net.CookieContainer
struct CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Meta.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t60BBCAD31980E43542AF8E98ECBAEE51A8AEC9B5;
// System.Net.ICredentials
struct ICredentials_t7F4F7C8E1E36461DC5388554FF404E2203D30C48;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tB305F307AFBA6FC6A9DE5ECBBDC2A2130C5B6FAD;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC;
// Meta.WitAi.ITelemetryEventsProvider
struct ITelemetryEventsProvider_t9510930B2567003E15FEB5C0FC41099DB87E3845;
// Meta.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_tA730F4FD31F9C16A7AC4D71C5C92C69712472DAF;
// Meta.WitAi.IVoiceEventProvider
struct IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4;
// System.Net.IWebProxy
struct IWebProxy_t27B6C29F0B62B717A9778AD251E31C21A91C32B3;
// Meta.WitAi.IWitRequestConfiguration
struct IWitRequestConfiguration_t2F1179B108AD6D02195074EC08CC30B7DF8FCA67;
// Meta.WitAi.IWitRequestEndpointInfo
struct IWitRequestEndpointInfo_t81C2B68D09305D820A7918C241B719E72A6ED7E7;
// Meta.WitAi.Interfaces.IWitRequestProvider
struct IWitRequestProvider_t5222C9320576E09C679C9B8609B7489656B8C01D;
// Meta.WitAi.IWitRuntimeConfigProvider
struct IWitRuntimeConfigProvider_t742527BC01D15F9398C4AD1EDE74C0A0DCDC6AB3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21;
// Meta.Voice.NLPRequestResponseEvent
struct NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Net.Cache.RequestCacheBinding
struct RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED;
// System.Net.Cache.RequestCacheProtocol
struct RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// Meta.WitAi.Utilities.StringEvent
struct StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56;
// Meta.Voice.TranscriptionRequestEvent
struct TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriBuilder
struct UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// Meta.WitAi.Requests.VRequest
struct VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D;
// Meta.WitAi.VoiceService
struct VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D;
// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C;
// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709;
// Meta.WitAi.Requests.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7;
// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E;
// Meta.WitAi.Requests.VoiceServiceRequestOptions
struct VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564;
// Meta.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA;
// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B;
// Meta.WitAi.Requests.WitMessageVRequest
struct WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B;
// Meta.WitAi.WitRequest
struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759;
// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705;
// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t37B976412B52D86FD30C0DD7664E3C94C246EB2D;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537;
// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A;
// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975;
// Meta.WitAi.WitService
struct WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C;
// Meta.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t0E65AE8D25F2F7CAF0515024CCAB17ADE75A070D;
// Meta.WitAi.Data.WitStringValue
struct WitStringValue_t480E5A89271EB8C48704B5990F34336DF2EAD4BB;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8;
// Meta.WitAi.Requests.WitUnityRequest
struct WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906;
// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2;
// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D;
// Meta.WitAi.Data.WitValue
struct WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7;
// Meta.WitAi.WrapHttpWebRequest
struct WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
struct U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E;
// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// AudioClipAudioSource/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7;
// AudioClipAudioSource/<ProcessClip>d__25
struct U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// Meta.WitAi.Events.SpeechEvents/<>c
struct U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A;
// Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t48A2EDC7B00777CBE1120B6B1E14CE9060FC23D6;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Net.TimerThread/Queue
struct Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate
struct RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96;
// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9;
// Meta.WitAi.VoiceService/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t47A91BC1F77371131F268A4C6F37DA32BFFA71AF;
// Meta.WitAi.Utilities.VoiceServiceReference/<>c
struct U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A;
// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
struct QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A;
// Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider
struct DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470;
// Meta.WitAi.WitRequest/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E;
// Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112
struct U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379;
// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7;
// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB;
// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B;
// Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86
struct U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E;

IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWitRequestEndpointInfo_t81C2B68D09305D820A7918C241B719E72A6ED7E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
IL2CPP_EXTERN_C String_t* _stringLiteral402F7311BABF77D31EFBF5956A0D15E0A40E52C4;
IL2CPP_EXTERN_C String_t* _stringLiteral70BBAB30B6900EC0E29CCD027B482CF80BD58908;
IL2CPP_EXTERN_C String_t* _stringLiteral84027E56C00686BFC14F4A4673543F9850713BCF;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA99C3E11496601CEE9BFCDB3259DDC84C21CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_m657788DCCD3843AFC25039F4C2F1FD71CA1F5B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9DFCEE5D93F7D6CAE31A029E1CE9DC31815AA6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m820FEB8AA37491DAD3EBBE5D371E69180C321CF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0C3787167F634ED5684B3C96678432BE76E845F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mBC26CDB1DD5E76F92CF64F18675FE575DCBE7FE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m518489C59955E9BCD91ADF716BB6043307541CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPAudioRequest_4_HandleFinalNlpResponse_mD7580DE52D31FF6401E149752B383484345607FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_GetSendError_m73A9C54B83322A8AE2474D03CCE935F6CAE8128E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_SetState_mD12916D2EF71FC547198D078C9DF35E010D46980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_get_InputType_m842B09FB24F8062B50287FD8C2E213A08AD0AC03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestCompleteDelegate_1__ctor_mC36406630AA53FE105E6B12351368328A6198B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeactivateDueToTimeLimitU3Ed__86_System_Collections_IEnumerator_Reset_m4822897C58A2454A7ED9C0D44A1B14E0883A8DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPerformMainThreadCallbacksU3Ed__112_System_Collections_IEnumerator_Reset_m65BDB6F3539A582B1AF26360D321F70BA074A284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcessClipU3Ed__25_System_Collections_IEnumerator_Reset_m2B907A05CEDFF91240810A7FA4D422B467A6D8B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_mC3E9CCE987ECFA525971B1ECA01ECF11308E5DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_SetDownloadProgress_mA2DAC026D55FBFC7D19552B5ED8C98B5F7EA88D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var;
struct ComposerGraph_t05368B27A701CD658A100CC06A1957E9F44E1BFA_marshaled_com;
struct ComposerGraph_t05368B27A701CD658A100CC06A1957E9F44E1BFA_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WitCharacterInfo_t33CC0F60AD57431BBEAF16A0187C3EEB120F32F8_marshaled_com;
struct WitCharacterInfo_t33CC0F60AD57431BBEAF16A0187C3EEB120F32F8_marshaled_pinvoke;
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_com;
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_pinvoke;
struct WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_com;
struct WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_pinvoke;
struct WitVersionTagInfo_t068AD09048FFC457E7C2297E5168859B52502DFB_marshaled_com;
struct WitVersionTagInfo_t068AD09048FFC457E7C2297E5168859B52502DFB_marshaled_pinvoke;
struct WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_com;
struct WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____tail_3)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__tail_3() const { return ____tail_3; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____head_4)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__head_4() const { return ____head_4; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____slots_8)); }
	inline SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t52623E95B78EBDFC434CBD211A3665FD200A7A88* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____slots_8)); }
	inline SlotU5BU5D_t52623E95B78EBDFC434CBD211A3665FD200A7A88* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t52623E95B78EBDFC434CBD211A3665FD200A7A88** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t52623E95B78EBDFC434CBD211A3665FD200A7A88* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009  : public RuntimeObject
{
public:
	// System.Int64 Meta.WitAi.Data.RingBuffer`1/Marker::bufferDataIndex
	int64_t ___bufferDataIndex_0;
	// System.Int32 Meta.WitAi.Data.RingBuffer`1/Marker::index
	int32_t ___index_1;
	// Meta.WitAi.Data.RingBuffer`1<T> Meta.WitAi.Data.RingBuffer`1/Marker::ringBuffer
	RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * ___ringBuffer_2;

public:
	inline static int32_t get_offset_of_bufferDataIndex_0() { return static_cast<int32_t>(offsetof(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009, ___bufferDataIndex_0)); }
	inline int64_t get_bufferDataIndex_0() const { return ___bufferDataIndex_0; }
	inline int64_t* get_address_of_bufferDataIndex_0() { return &___bufferDataIndex_0; }
	inline void set_bufferDataIndex_0(int64_t value)
	{
		___bufferDataIndex_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_ringBuffer_2() { return static_cast<int32_t>(offsetof(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009, ___ringBuffer_2)); }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * get_ringBuffer_2() const { return ___ringBuffer_2; }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 ** get_address_of_ringBuffer_2() { return &___ringBuffer_2; }
	inline void set_ringBuffer_2(RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * value)
	{
		___ringBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ringBuffer_2), (void*)value);
	}
};


// Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0  : public RuntimeObject
{
public:
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onStateChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onStateChange_0;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onInit
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onInit_1;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSend
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onSend_2;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onCancel
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onCancel_3;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onFailed
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onFailed_4;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSuccess
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onSuccess_5;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onComplete
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onComplete_6;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onDownloadProgressChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onDownloadProgressChange_7;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onUploadProgressChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onUploadProgressChange_8;

public:
	inline static int32_t get_offset_of__onStateChange_0() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onStateChange_0)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onStateChange_0() const { return ____onStateChange_0; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onStateChange_0() { return &____onStateChange_0; }
	inline void set__onStateChange_0(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onStateChange_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStateChange_0), (void*)value);
	}

	inline static int32_t get_offset_of__onInit_1() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onInit_1)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onInit_1() const { return ____onInit_1; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onInit_1() { return &____onInit_1; }
	inline void set__onInit_1(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onInit_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onInit_1), (void*)value);
	}

	inline static int32_t get_offset_of__onSend_2() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onSend_2)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onSend_2() const { return ____onSend_2; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onSend_2() { return &____onSend_2; }
	inline void set__onSend_2(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onSend_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onSend_2), (void*)value);
	}

	inline static int32_t get_offset_of__onCancel_3() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onCancel_3)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onCancel_3() const { return ____onCancel_3; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onCancel_3() { return &____onCancel_3; }
	inline void set__onCancel_3(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onCancel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCancel_3), (void*)value);
	}

	inline static int32_t get_offset_of__onFailed_4() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onFailed_4)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onFailed_4() const { return ____onFailed_4; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onFailed_4() { return &____onFailed_4; }
	inline void set__onFailed_4(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onFailed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFailed_4), (void*)value);
	}

	inline static int32_t get_offset_of__onSuccess_5() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onSuccess_5)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onSuccess_5() const { return ____onSuccess_5; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onSuccess_5() { return &____onSuccess_5; }
	inline void set__onSuccess_5(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onSuccess_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onSuccess_5), (void*)value);
	}

	inline static int32_t get_offset_of__onComplete_6() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onComplete_6)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onComplete_6() const { return ____onComplete_6; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onComplete_6() { return &____onComplete_6; }
	inline void set__onComplete_6(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onComplete_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onComplete_6), (void*)value);
	}

	inline static int32_t get_offset_of__onDownloadProgressChange_7() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onDownloadProgressChange_7)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onDownloadProgressChange_7() const { return ____onDownloadProgressChange_7; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onDownloadProgressChange_7() { return &____onDownloadProgressChange_7; }
	inline void set__onDownloadProgressChange_7(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onDownloadProgressChange_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onDownloadProgressChange_7), (void*)value);
	}

	inline static int32_t get_offset_of__onUploadProgressChange_8() { return static_cast<int32_t>(offsetof(VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0, ____onUploadProgressChange_8)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onUploadProgressChange_8() const { return ____onUploadProgressChange_8; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onUploadProgressChange_8() { return &____onUploadProgressChange_8; }
	inline void set__onUploadProgressChange_8(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onUploadProgressChange_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onUploadProgressChange_8), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Meta.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.Data.AudioBufferConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_0;
	// System.Single Meta.WitAi.Data.AudioBufferConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_1;

public:
	inline static int32_t get_offset_of_sampleLengthInMs_0() { return static_cast<int32_t>(offsetof(AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F, ___sampleLengthInMs_0)); }
	inline int32_t get_sampleLengthInMs_0() const { return ___sampleLengthInMs_0; }
	inline int32_t* get_address_of_sampleLengthInMs_0() { return &___sampleLengthInMs_0; }
	inline void set_sampleLengthInMs_0(int32_t value)
	{
		___sampleLengthInMs_0 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_1() { return static_cast<int32_t>(offsetof(AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F, ___micBufferLengthInSeconds_1)); }
	inline float get_micBufferLengthInSeconds_1() const { return ___micBufferLengthInSeconds_1; }
	inline float* get_address_of_micBufferLengthInSeconds_1() { return &___micBufferLengthInSeconds_1; }
	inline void set_micBufferLengthInSeconds_1(float value)
	{
		___micBufferLengthInSeconds_1 = value;
	}
};


// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____overriddenCallbacksHash_1;

public:
	inline static int32_t get_offset_of__overriddenCallbacks_0() { return static_cast<int32_t>(offsetof(EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9, ____overriddenCallbacks_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__overriddenCallbacks_0() const { return ____overriddenCallbacks_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__overriddenCallbacks_0() { return &____overriddenCallbacks_0; }
	inline void set__overriddenCallbacks_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____overriddenCallbacks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____overriddenCallbacks_0), (void*)value);
	}

	inline static int32_t get_offset_of__overriddenCallbacksHash_1() { return static_cast<int32_t>(offsetof(EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9, ____overriddenCallbacksHash_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__overriddenCallbacksHash_1() const { return ____overriddenCallbacksHash_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__overriddenCallbacksHash_1() { return &____overriddenCallbacksHash_1; }
	inline void set__overriddenCallbacksHash_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____overriddenCallbacksHash_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____overriddenCallbacksHash_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_16;

public:
	inline static int32_t get_offset_of__readOnly_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_8)); }
	inline bool get__readOnly_8() const { return ____readOnly_8; }
	inline bool* get_address_of__readOnly_8() { return &____readOnly_8; }
	inline void set__readOnly_8(bool value)
	{
		____readOnly_8 = value;
	}

	inline static int32_t get_offset_of__entriesArray_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_9)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_9() const { return ____entriesArray_9; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_9() { return &____entriesArray_9; }
	inline void set__entriesArray_9(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_9), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_10() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_10)); }
	inline RuntimeObject* get__keyComparer_10() const { return ____keyComparer_10; }
	inline RuntimeObject** get_address_of__keyComparer_10() { return &____keyComparer_10; }
	inline void set__keyComparer_10(RuntimeObject* value)
	{
		____keyComparer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_10), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_11() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_11)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_11() const { return ____entriesTable_11; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_11() { return &____entriesTable_11; }
	inline void set__entriesTable_11(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_11), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_12() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_12)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_12() const { return ____nullKeyEntry_12; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_12() { return &____nullKeyEntry_12; }
	inline void set__nullKeyEntry_12(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_12), (void*)value);
	}

	inline static int32_t get_offset_of__keys_13() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keys_13)); }
	inline KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * get__keys_13() const { return ____keys_13; }
	inline KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 ** get_address_of__keys_13() { return &____keys_13; }
	inline void set__keys_13(KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * value)
	{
		____keys_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_13), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_14() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_14() const { return ____serializationInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_14() { return &____serializationInfo_14; }
	inline void set__serializationInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of__version_15() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_15)); }
	inline int32_t get__version_15() const { return ____version_15; }
	inline int32_t* get_address_of__version_15() { return &____version_15; }
	inline void set__version_15(int32_t value)
	{
		____version_15 = value;
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_17;

public:
	inline static int32_t get_offset_of_defaultComparer_17() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_17)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_17() const { return ___defaultComparer_17; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_17() { return &___defaultComparer_17; }
	inline void set_defaultComparer_17(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_17), (void*)value);
	}
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.UriBuilder
struct UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42  : public RuntimeObject
{
public:
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;

public:
	inline static int32_t get_offset_of__changed_0() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____changed_0)); }
	inline bool get__changed_0() const { return ____changed_0; }
	inline bool* get_address_of__changed_0() { return &____changed_0; }
	inline void set__changed_0(bool value)
	{
		____changed_0 = value;
	}

	inline static int32_t get_offset_of__fragment_1() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____fragment_1)); }
	inline String_t* get__fragment_1() const { return ____fragment_1; }
	inline String_t** get_address_of__fragment_1() { return &____fragment_1; }
	inline void set__fragment_1(String_t* value)
	{
		____fragment_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragment_1), (void*)value);
	}

	inline static int32_t get_offset_of__host_2() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____host_2)); }
	inline String_t* get__host_2() const { return ____host_2; }
	inline String_t** get_address_of__host_2() { return &____host_2; }
	inline void set__host_2(String_t* value)
	{
		____host_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____host_2), (void*)value);
	}

	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____password_3)); }
	inline String_t* get__password_3() const { return ____password_3; }
	inline String_t** get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(String_t* value)
	{
		____password_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_3), (void*)value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_4), (void*)value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}

	inline static int32_t get_offset_of__query_6() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____query_6)); }
	inline String_t* get__query_6() const { return ____query_6; }
	inline String_t** get_address_of__query_6() { return &____query_6; }
	inline void set__query_6(String_t* value)
	{
		____query_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____query_6), (void*)value);
	}

	inline static int32_t get_offset_of__scheme_7() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____scheme_7)); }
	inline String_t* get__scheme_7() const { return ____scheme_7; }
	inline String_t** get_address_of__scheme_7() { return &____scheme_7; }
	inline void set__scheme_7(String_t* value)
	{
		____scheme_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scheme_7), (void*)value);
	}

	inline static int32_t get_offset_of__schemeDelimiter_8() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____schemeDelimiter_8)); }
	inline String_t* get__schemeDelimiter_8() const { return ____schemeDelimiter_8; }
	inline String_t** get_address_of__schemeDelimiter_8() { return &____schemeDelimiter_8; }
	inline void set__schemeDelimiter_8(String_t* value)
	{
		____schemeDelimiter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemeDelimiter_8), (void*)value);
	}

	inline static int32_t get_offset_of__uri_9() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____uri_9)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__uri_9() const { return ____uri_9; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__uri_9() { return &____uri_9; }
	inline void set__uri_9(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____uri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_9), (void*)value);
	}

	inline static int32_t get_offset_of__username_10() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____username_10)); }
	inline String_t* get__username_10() const { return ____username_10; }
	inline String_t** get_address_of__username_10() { return &____username_10; }
	inline void set__username_10(String_t* value)
	{
		____username_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____username_10), (void*)value);
	}
};


// Meta.WitAi.Requests.VRequest
struct VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.Requests.VRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_2;
	// System.Boolean Meta.WitAi.Requests.VRequest::<IsPerforming>k__BackingField
	bool ___U3CIsPerformingU3Ek__BackingField_3;
	// System.Boolean Meta.WitAi.Requests.VRequest::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_4;
	// System.Int32 Meta.WitAi.Requests.VRequest::<ResponseCode>k__BackingField
	int32_t ___U3CResponseCodeU3Ek__BackingField_5;
	// System.Single Meta.WitAi.Requests.VRequest::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_6;
	// System.Single Meta.WitAi.Requests.VRequest::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_7;
	// UnityEngine.Networking.UnityWebRequest Meta.WitAi.Requests.VRequest::_request
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____request_8;
	// Meta.WitAi.Requests.VRequest/RequestProgressDelegate Meta.WitAi.Requests.VRequest::_onDownloadProgress
	RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 * ____onDownloadProgress_9;
	// Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate Meta.WitAi.Requests.VRequest::_onFirstResponse
	RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96 * ____onFirstResponse_10;
	// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest> Meta.WitAi.Requests.VRequest::_onComplete
	RequestCompleteDelegate_1_t1B30556F315D75E50A4EFB878A56527C28BD4866 * ____onComplete_11;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.Requests.VRequest::_coroutine
	CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * ____coroutine_12;

public:
	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ___U3CTimeoutU3Ek__BackingField_2)); }
	inline int32_t get_U3CTimeoutU3Ek__BackingField_2() const { return ___U3CTimeoutU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTimeoutU3Ek__BackingField_2() { return &___U3CTimeoutU3Ek__BackingField_2; }
	inline void set_U3CTimeoutU3Ek__BackingField_2(int32_t value)
	{
		___U3CTimeoutU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsPerformingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ___U3CIsPerformingU3Ek__BackingField_3)); }
	inline bool get_U3CIsPerformingU3Ek__BackingField_3() const { return ___U3CIsPerformingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsPerformingU3Ek__BackingField_3() { return &___U3CIsPerformingU3Ek__BackingField_3; }
	inline void set_U3CIsPerformingU3Ek__BackingField_3(bool value)
	{
		___U3CIsPerformingU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsCompleteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ___U3CIsCompleteU3Ek__BackingField_4)); }
	inline bool get_U3CIsCompleteU3Ek__BackingField_4() const { return ___U3CIsCompleteU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsCompleteU3Ek__BackingField_4() { return &___U3CIsCompleteU3Ek__BackingField_4; }
	inline void set_U3CIsCompleteU3Ek__BackingField_4(bool value)
	{
		___U3CIsCompleteU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ___U3CResponseCodeU3Ek__BackingField_5)); }
	inline int32_t get_U3CResponseCodeU3Ek__BackingField_5() const { return ___U3CResponseCodeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResponseCodeU3Ek__BackingField_5() { return &___U3CResponseCodeU3Ek__BackingField_5; }
	inline void set_U3CResponseCodeU3Ek__BackingField_5(int32_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CUploadProgressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ___U3CUploadProgressU3Ek__BackingField_6)); }
	inline float get_U3CUploadProgressU3Ek__BackingField_6() const { return ___U3CUploadProgressU3Ek__BackingField_6; }
	inline float* get_address_of_U3CUploadProgressU3Ek__BackingField_6() { return &___U3CUploadProgressU3Ek__BackingField_6; }
	inline void set_U3CUploadProgressU3Ek__BackingField_6(float value)
	{
		___U3CUploadProgressU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CDownloadProgressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ___U3CDownloadProgressU3Ek__BackingField_7)); }
	inline float get_U3CDownloadProgressU3Ek__BackingField_7() const { return ___U3CDownloadProgressU3Ek__BackingField_7; }
	inline float* get_address_of_U3CDownloadProgressU3Ek__BackingField_7() { return &___U3CDownloadProgressU3Ek__BackingField_7; }
	inline void set_U3CDownloadProgressU3Ek__BackingField_7(float value)
	{
		___U3CDownloadProgressU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__request_8() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ____request_8)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__request_8() const { return ____request_8; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__request_8() { return &____request_8; }
	inline void set__request_8(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____request_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_8), (void*)value);
	}

	inline static int32_t get_offset_of__onDownloadProgress_9() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ____onDownloadProgress_9)); }
	inline RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 * get__onDownloadProgress_9() const { return ____onDownloadProgress_9; }
	inline RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 ** get_address_of__onDownloadProgress_9() { return &____onDownloadProgress_9; }
	inline void set__onDownloadProgress_9(RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 * value)
	{
		____onDownloadProgress_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onDownloadProgress_9), (void*)value);
	}

	inline static int32_t get_offset_of__onFirstResponse_10() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ____onFirstResponse_10)); }
	inline RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96 * get__onFirstResponse_10() const { return ____onFirstResponse_10; }
	inline RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96 ** get_address_of__onFirstResponse_10() { return &____onFirstResponse_10; }
	inline void set__onFirstResponse_10(RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96 * value)
	{
		____onFirstResponse_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFirstResponse_10), (void*)value);
	}

	inline static int32_t get_offset_of__onComplete_11() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ____onComplete_11)); }
	inline RequestCompleteDelegate_1_t1B30556F315D75E50A4EFB878A56527C28BD4866 * get__onComplete_11() const { return ____onComplete_11; }
	inline RequestCompleteDelegate_1_t1B30556F315D75E50A4EFB878A56527C28BD4866 ** get_address_of__onComplete_11() { return &____onComplete_11; }
	inline void set__onComplete_11(RequestCompleteDelegate_1_t1B30556F315D75E50A4EFB878A56527C28BD4866 * value)
	{
		____onComplete_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onComplete_11), (void*)value);
	}

	inline static int32_t get_offset_of__coroutine_12() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C, ____coroutine_12)); }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * get__coroutine_12() const { return ____coroutine_12; }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F ** get_address_of__coroutine_12() { return &____coroutine_12; }
	inline void set__coroutine_12(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * value)
	{
		____coroutine_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_12), (void*)value);
	}
};

struct VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C_StaticFields
{
public:
	// System.Int32 Meta.WitAi.Requests.VRequest::MaxConcurrentRequests
	int32_t ___MaxConcurrentRequests_0;
	// System.Int32 Meta.WitAi.Requests.VRequest::_requestCount
	int32_t ____requestCount_1;

public:
	inline static int32_t get_offset_of_MaxConcurrentRequests_0() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C_StaticFields, ___MaxConcurrentRequests_0)); }
	inline int32_t get_MaxConcurrentRequests_0() const { return ___MaxConcurrentRequests_0; }
	inline int32_t* get_address_of_MaxConcurrentRequests_0() { return &___MaxConcurrentRequests_0; }
	inline void set_MaxConcurrentRequests_0(int32_t value)
	{
		___MaxConcurrentRequests_0 = value;
	}

	inline static int32_t get_offset_of__requestCount_1() { return static_cast<int32_t>(offsetof(VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C_StaticFields, ____requestCount_1)); }
	inline int32_t get__requestCount_1() const { return ____requestCount_1; }
	inline int32_t* get_address_of__requestCount_1() { return &____requestCount_1; }
	inline void set__requestCount_1(int32_t value)
	{
		____requestCount_1 = value;
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

// Meta.WitAi.Requests.VoiceServiceRequestOptions
struct VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<RequestId>k__BackingField
	String_t* ___U3CRequestIdU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VoiceServiceRequestOptions::<QueryParams>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CQueryParamsU3Ek__BackingField_1;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// System.Single Meta.WitAi.Requests.VoiceServiceRequestOptions::<AudioThreshold>k__BackingField
	float ___U3CAudioThresholdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CRequestIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CRequestIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CRequestIdU3Ek__BackingField_0() const { return ___U3CRequestIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRequestIdU3Ek__BackingField_0() { return &___U3CRequestIdU3Ek__BackingField_0; }
	inline void set_U3CRequestIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CRequestIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQueryParamsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CQueryParamsU3Ek__BackingField_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CQueryParamsU3Ek__BackingField_1() const { return ___U3CQueryParamsU3Ek__BackingField_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CQueryParamsU3Ek__BackingField_1() { return &___U3CQueryParamsU3Ek__BackingField_1; }
	inline void set_U3CQueryParamsU3Ek__BackingField_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CQueryParamsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQueryParamsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAudioThresholdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825, ___U3CAudioThresholdU3Ek__BackingField_3)); }
	inline float get_U3CAudioThresholdU3Ek__BackingField_3() const { return ___U3CAudioThresholdU3Ek__BackingField_3; }
	inline float* get_address_of_U3CAudioThresholdU3Ek__BackingField_3() { return &___U3CAudioThresholdU3Ek__BackingField_3; }
	inline void set_U3CAudioThresholdU3Ek__BackingField_3(float value)
	{
		___U3CAudioThresholdU3Ek__BackingField_3 = value;
	}
};


// Meta.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity> Meta.WitAi.Data.Entities.WitDynamicEntities::entities
	List_1_t64BEB6EBDA579FAC5EBFC29B5CE7CE6943F29599 * ___entities_0;

public:
	inline static int32_t get_offset_of_entities_0() { return static_cast<int32_t>(offsetof(WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA, ___entities_0)); }
	inline List_1_t64BEB6EBDA579FAC5EBFC29B5CE7CE6943F29599 * get_entities_0() const { return ___entities_0; }
	inline List_1_t64BEB6EBDA579FAC5EBFC29B5CE7CE6943F29599 ** get_address_of_entities_0() { return &___entities_0; }
	inline void set_entities_0(List_1_t64BEB6EBDA579FAC5EBFC29B5CE7CE6943F29599 * value)
	{
		___entities_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_0), (void*)value);
	}
};


// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntity::entity
	String_t* ___entity_0;
	// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo> Meta.WitAi.Data.Entities.WitDynamicEntity::keywords
	List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D * ___keywords_1;

public:
	inline static int32_t get_offset_of_entity_0() { return static_cast<int32_t>(offsetof(WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B, ___entity_0)); }
	inline String_t* get_entity_0() const { return ___entity_0; }
	inline String_t** get_address_of_entity_0() { return &___entity_0; }
	inline void set_entity_0(String_t* value)
	{
		___entity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entity_0), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_1() { return static_cast<int32_t>(offsetof(WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B, ___keywords_1)); }
	inline List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D * get_keywords_1() const { return ___keywords_1; }
	inline List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D ** get_address_of_keywords_1() { return &___keywords_1; }
	inline void set_keywords_1(List_1_t2D06AE24221DDF8EBCAEB89C4C0AEBF28075E33D * value)
	{
		___keywords_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywords_1), (void*)value);
	}
};


// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_uriScheme
	String_t* ____uriScheme_0;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_authority
	String_t* ____authority_1;
	// System.Int32 Meta.WitAi.Configuration.WitEndpointConfig::_port
	int32_t ____port_2;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_witApiVersion
	String_t* ____witApiVersion_3;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_message
	String_t* ____message_4;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_speech
	String_t* ____speech_5;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_dictation
	String_t* ____dictation_6;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_synthesize
	String_t* ____synthesize_7;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_event
	String_t* ____event_8;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_converse
	String_t* ____converse_9;

public:
	inline static int32_t get_offset_of__uriScheme_0() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____uriScheme_0)); }
	inline String_t* get__uriScheme_0() const { return ____uriScheme_0; }
	inline String_t** get_address_of__uriScheme_0() { return &____uriScheme_0; }
	inline void set__uriScheme_0(String_t* value)
	{
		____uriScheme_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uriScheme_0), (void*)value);
	}

	inline static int32_t get_offset_of__authority_1() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____authority_1)); }
	inline String_t* get__authority_1() const { return ____authority_1; }
	inline String_t** get_address_of__authority_1() { return &____authority_1; }
	inline void set__authority_1(String_t* value)
	{
		____authority_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____authority_1), (void*)value);
	}

	inline static int32_t get_offset_of__port_2() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____port_2)); }
	inline int32_t get__port_2() const { return ____port_2; }
	inline int32_t* get_address_of__port_2() { return &____port_2; }
	inline void set__port_2(int32_t value)
	{
		____port_2 = value;
	}

	inline static int32_t get_offset_of__witApiVersion_3() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____witApiVersion_3)); }
	inline String_t* get__witApiVersion_3() const { return ____witApiVersion_3; }
	inline String_t** get_address_of__witApiVersion_3() { return &____witApiVersion_3; }
	inline void set__witApiVersion_3(String_t* value)
	{
		____witApiVersion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____witApiVersion_3), (void*)value);
	}

	inline static int32_t get_offset_of__message_4() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____message_4)); }
	inline String_t* get__message_4() const { return ____message_4; }
	inline String_t** get_address_of__message_4() { return &____message_4; }
	inline void set__message_4(String_t* value)
	{
		____message_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_4), (void*)value);
	}

	inline static int32_t get_offset_of__speech_5() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____speech_5)); }
	inline String_t* get__speech_5() const { return ____speech_5; }
	inline String_t** get_address_of__speech_5() { return &____speech_5; }
	inline void set__speech_5(String_t* value)
	{
		____speech_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____speech_5), (void*)value);
	}

	inline static int32_t get_offset_of__dictation_6() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____dictation_6)); }
	inline String_t* get__dictation_6() const { return ____dictation_6; }
	inline String_t** get_address_of__dictation_6() { return &____dictation_6; }
	inline void set__dictation_6(String_t* value)
	{
		____dictation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictation_6), (void*)value);
	}

	inline static int32_t get_offset_of__synthesize_7() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____synthesize_7)); }
	inline String_t* get__synthesize_7() const { return ____synthesize_7; }
	inline String_t** get_address_of__synthesize_7() { return &____synthesize_7; }
	inline void set__synthesize_7(String_t* value)
	{
		____synthesize_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____synthesize_7), (void*)value);
	}

	inline static int32_t get_offset_of__event_8() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____event_8)); }
	inline String_t* get__event_8() const { return ____event_8; }
	inline String_t** get_address_of__event_8() { return &____event_8; }
	inline void set__event_8(String_t* value)
	{
		____event_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_8), (void*)value);
	}

	inline static int32_t get_offset_of__converse_9() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F, ____converse_9)); }
	inline String_t* get__converse_9() const { return ____converse_9; }
	inline String_t** get_address_of__converse_9() { return &____converse_9; }
	inline void set__converse_9(String_t* value)
	{
		____converse_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converse_9), (void*)value);
	}
};

struct WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F_StaticFields
{
public:
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Configuration.WitEndpointConfig::defaultEndpointConfig
	WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * ___defaultEndpointConfig_10;

public:
	inline static int32_t get_offset_of_defaultEndpointConfig_10() { return static_cast<int32_t>(offsetof(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F_StaticFields, ___defaultEndpointConfig_10)); }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * get_defaultEndpointConfig_10() const { return ___defaultEndpointConfig_10; }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F ** get_address_of_defaultEndpointConfig_10() { return &___defaultEndpointConfig_10; }
	inline void set_defaultEndpointConfig_10(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * value)
	{
		___defaultEndpointConfig_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEndpointConfig_10), (void*)value);
	}
};


// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A  : public RuntimeObject
{
public:
	// Meta.WitAi.WitResponseReference Meta.WitAi.WitResponseReference::child
	WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * ___child_0;
	// System.String Meta.WitAi.WitResponseReference::path
	String_t* ___path_1;

public:
	inline static int32_t get_offset_of_child_0() { return static_cast<int32_t>(offsetof(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A, ___child_0)); }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * get_child_0() const { return ___child_0; }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A ** get_address_of_child_0() { return &___child_0; }
	inline void set_child_0(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * value)
	{
		___child_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_0), (void*)value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_1), (void*)value);
	}
};


// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975  : public RuntimeObject
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___witConfiguration_0;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Meta.WitAi.Interfaces.CustomTranscriptionProvider Meta.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * ___customTranscriptionProvider_10;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;

public:
	inline static int32_t get_offset_of_witConfiguration_0() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___witConfiguration_0)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get_witConfiguration_0() const { return ___witConfiguration_0; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of_witConfiguration_0() { return &___witConfiguration_0; }
	inline void set_witConfiguration_0(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		___witConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witConfiguration_0), (void*)value);
	}

	inline static int32_t get_offset_of_minKeepAliveVolume_1() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minKeepAliveVolume_1)); }
	inline float get_minKeepAliveVolume_1() const { return ___minKeepAliveVolume_1; }
	inline float* get_address_of_minKeepAliveVolume_1() { return &___minKeepAliveVolume_1; }
	inline void set_minKeepAliveVolume_1(float value)
	{
		___minKeepAliveVolume_1 = value;
	}

	inline static int32_t get_offset_of_minKeepAliveTimeInSeconds_2() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minKeepAliveTimeInSeconds_2)); }
	inline float get_minKeepAliveTimeInSeconds_2() const { return ___minKeepAliveTimeInSeconds_2; }
	inline float* get_address_of_minKeepAliveTimeInSeconds_2() { return &___minKeepAliveTimeInSeconds_2; }
	inline void set_minKeepAliveTimeInSeconds_2(float value)
	{
		___minKeepAliveTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_minTranscriptionKeepAliveTimeInSeconds_3() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___minTranscriptionKeepAliveTimeInSeconds_3)); }
	inline float get_minTranscriptionKeepAliveTimeInSeconds_3() const { return ___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline float* get_address_of_minTranscriptionKeepAliveTimeInSeconds_3() { return &___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline void set_minTranscriptionKeepAliveTimeInSeconds_3(float value)
	{
		___minTranscriptionKeepAliveTimeInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_maxRecordingTime_4() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___maxRecordingTime_4)); }
	inline float get_maxRecordingTime_4() const { return ___maxRecordingTime_4; }
	inline float* get_address_of_maxRecordingTime_4() { return &___maxRecordingTime_4; }
	inline void set_maxRecordingTime_4(float value)
	{
		___maxRecordingTime_4 = value;
	}

	inline static int32_t get_offset_of_soundWakeThreshold_5() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___soundWakeThreshold_5)); }
	inline float get_soundWakeThreshold_5() const { return ___soundWakeThreshold_5; }
	inline float* get_address_of_soundWakeThreshold_5() { return &___soundWakeThreshold_5; }
	inline void set_soundWakeThreshold_5(float value)
	{
		___soundWakeThreshold_5 = value;
	}

	inline static int32_t get_offset_of_sampleLengthInMs_6() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___sampleLengthInMs_6)); }
	inline int32_t get_sampleLengthInMs_6() const { return ___sampleLengthInMs_6; }
	inline int32_t* get_address_of_sampleLengthInMs_6() { return &___sampleLengthInMs_6; }
	inline void set_sampleLengthInMs_6(int32_t value)
	{
		___sampleLengthInMs_6 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_7() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___micBufferLengthInSeconds_7)); }
	inline float get_micBufferLengthInSeconds_7() const { return ___micBufferLengthInSeconds_7; }
	inline float* get_address_of_micBufferLengthInSeconds_7() { return &___micBufferLengthInSeconds_7; }
	inline void set_micBufferLengthInSeconds_7(float value)
	{
		___micBufferLengthInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_maxConcurrentRequests_8() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___maxConcurrentRequests_8)); }
	inline int32_t get_maxConcurrentRequests_8() const { return ___maxConcurrentRequests_8; }
	inline int32_t* get_address_of_maxConcurrentRequests_8() { return &___maxConcurrentRequests_8; }
	inline void set_maxConcurrentRequests_8(int32_t value)
	{
		___maxConcurrentRequests_8 = value;
	}

	inline static int32_t get_offset_of_sendAudioToWit_9() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___sendAudioToWit_9)); }
	inline bool get_sendAudioToWit_9() const { return ___sendAudioToWit_9; }
	inline bool* get_address_of_sendAudioToWit_9() { return &___sendAudioToWit_9; }
	inline void set_sendAudioToWit_9(bool value)
	{
		___sendAudioToWit_9 = value;
	}

	inline static int32_t get_offset_of_customTranscriptionProvider_10() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___customTranscriptionProvider_10)); }
	inline CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * get_customTranscriptionProvider_10() const { return ___customTranscriptionProvider_10; }
	inline CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 ** get_address_of_customTranscriptionProvider_10() { return &___customTranscriptionProvider_10; }
	inline void set_customTranscriptionProvider_10(CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342 * value)
	{
		___customTranscriptionProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customTranscriptionProvider_10), (void*)value);
	}

	inline static int32_t get_offset_of_alwaysRecord_11() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___alwaysRecord_11)); }
	inline bool get_alwaysRecord_11() const { return ___alwaysRecord_11; }
	inline bool* get_address_of_alwaysRecord_11() { return &___alwaysRecord_11; }
	inline void set_alwaysRecord_11(bool value)
	{
		___alwaysRecord_11 = value;
	}

	inline static int32_t get_offset_of_preferredActivationOffset_12() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975, ___preferredActivationOffset_12)); }
	inline float get_preferredActivationOffset_12() const { return ___preferredActivationOffset_12; }
	inline float* get_address_of_preferredActivationOffset_12() { return &___preferredActivationOffset_12; }
	inline void set_preferredActivationOffset_12(float value)
	{
		___preferredActivationOffset_12 = value;
	}
};


// Meta.WitAi.WrapHttpWebRequest
struct WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542  : public RuntimeObject
{
public:
	// System.Net.HttpWebRequest Meta.WitAi.WrapHttpWebRequest::_httpWebRequest
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ____httpWebRequest_0;

public:
	inline static int32_t get_offset_of__httpWebRequest_0() { return static_cast<int32_t>(offsetof(WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542, ____httpWebRequest_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get__httpWebRequest_0() const { return ____httpWebRequest_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of__httpWebRequest_0() { return &____httpWebRequest_0; }
	inline void set__httpWebRequest_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		____httpWebRequest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____httpWebRequest_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
struct U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>4__this
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * ___U3CU3E4__this_2;
	// UnityEngine.Component Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::component
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___U3CU3E4__this_2)); }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_component_3() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E, ___component_3)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_component_3() const { return ___component_3; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_component_3() { return &___component_3; }
	inline void set_component_3(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___component_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___component_3), (void*)value);
	}
};


// AudioClipAudioSource/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7  : public RuntimeObject
{
public:
	// System.String AudioClipAudioSource/<>c__DisplayClass34_0::clipName
	String_t* ___clipName_0;

public:
	inline static int32_t get_offset_of_clipName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7, ___clipName_0)); }
	inline String_t* get_clipName_0() const { return ___clipName_0; }
	inline String_t** get_address_of_clipName_0() { return &___clipName_0; }
	inline void set_clipName_0(String_t* value)
	{
		___clipName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipName_0), (void*)value);
	}
};


// AudioClipAudioSource/<ProcessClip>d__25
struct U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2  : public RuntimeObject
{
public:
	// System.Int32 AudioClipAudioSource/<ProcessClip>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AudioClipAudioSource/<ProcessClip>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single[] AudioClipAudioSource/<ProcessClip>d__25::clipData
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___clipData_2;
	// AudioClipAudioSource AudioClipAudioSource/<ProcessClip>d__25::<>4__this
	AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * ___U3CU3E4__this_3;
	// System.Int32 AudioClipAudioSource/<ProcessClip>d__25::<chunkSize>5__2
	int32_t ___U3CchunkSizeU3E5__2_4;
	// System.Int32 AudioClipAudioSource/<ProcessClip>d__25::<index>5__3
	int32_t ___U3CindexU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_clipData_2() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___clipData_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_clipData_2() const { return ___clipData_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_clipData_2() { return &___clipData_2; }
	inline void set_clipData_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___clipData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CU3E4__this_3)); }
	inline AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CchunkSizeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CchunkSizeU3E5__2_4)); }
	inline int32_t get_U3CchunkSizeU3E5__2_4() const { return ___U3CchunkSizeU3E5__2_4; }
	inline int32_t* get_address_of_U3CchunkSizeU3E5__2_4() { return &___U3CchunkSizeU3E5__2_4; }
	inline void set_U3CchunkSizeU3E5__2_4(int32_t value)
	{
		___U3CchunkSizeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CindexU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2, ___U3CindexU3E5__3_5)); }
	inline int32_t get_U3CindexU3E5__3_5() const { return ___U3CindexU3E5__3_5; }
	inline int32_t* get_address_of_U3CindexU3E5__3_5() { return &___U3CindexU3E5__3_5; }
	inline void set_U3CindexU3E5__3_5(int32_t value)
	{
		___U3CindexU3E5__3_5 = value;
	}
};


// Meta.WitAi.Events.SpeechEvents/<>c
struct U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields
{
public:
	// Meta.WitAi.Events.SpeechEvents/<>c Meta.WitAi.Events.SpeechEvents/<>c::<>9
	U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * ___U3CU3E9_0;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_0
	Func_2_t79B2A104B63643432206C5F49CA1C7EECF381024 * ___U3CU3E9__85_0_1;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_1
	Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * ___U3CU3E9__85_1_2;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_2
	Func_2_tECA9703E63EABFE1936D82D2F9C616C70B948507 * ___U3CU3E9__85_2_3;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_3
	Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * ___U3CU3E9__85_3_4;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_4
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_4_5;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_5
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_5_6;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_6
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_6_7;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_7
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_7_8;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_8
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_8_9;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_9
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_9_10;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_10
	Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * ___U3CU3E9__85_10_11;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_11
	Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 * ___U3CU3E9__85_11_12;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_12
	Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 * ___U3CU3E9__85_12_13;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<System.String,System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_13
	Func_2_tED9BCD663191171058A80BA54DA2268E87CF89DD * ___U3CU3E9__85_13_14;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_14
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_14_15;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_15
	Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * ___U3CU3E9__85_15_16;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_16
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_16_17;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_17
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___U3CU3E9__85_17_18;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.Single>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_18
	Func_2_t45CACCFE85B11B8D92B874D9D1CF7C3314B3B616 * ___U3CU3E9__85_18_19;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_19
	Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * ___U3CU3E9__85_19_20;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_20
	Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * ___U3CU3E9__85_20_21;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_0_1)); }
	inline Func_2_t79B2A104B63643432206C5F49CA1C7EECF381024 * get_U3CU3E9__85_0_1() const { return ___U3CU3E9__85_0_1; }
	inline Func_2_t79B2A104B63643432206C5F49CA1C7EECF381024 ** get_address_of_U3CU3E9__85_0_1() { return &___U3CU3E9__85_0_1; }
	inline void set_U3CU3E9__85_0_1(Func_2_t79B2A104B63643432206C5F49CA1C7EECF381024 * value)
	{
		___U3CU3E9__85_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_1_2)); }
	inline Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * get_U3CU3E9__85_1_2() const { return ___U3CU3E9__85_1_2; }
	inline Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 ** get_address_of_U3CU3E9__85_1_2() { return &___U3CU3E9__85_1_2; }
	inline void set_U3CU3E9__85_1_2(Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * value)
	{
		___U3CU3E9__85_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_2_3)); }
	inline Func_2_tECA9703E63EABFE1936D82D2F9C616C70B948507 * get_U3CU3E9__85_2_3() const { return ___U3CU3E9__85_2_3; }
	inline Func_2_tECA9703E63EABFE1936D82D2F9C616C70B948507 ** get_address_of_U3CU3E9__85_2_3() { return &___U3CU3E9__85_2_3; }
	inline void set_U3CU3E9__85_2_3(Func_2_tECA9703E63EABFE1936D82D2F9C616C70B948507 * value)
	{
		___U3CU3E9__85_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_3_4)); }
	inline Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * get_U3CU3E9__85_3_4() const { return ___U3CU3E9__85_3_4; }
	inline Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 ** get_address_of_U3CU3E9__85_3_4() { return &___U3CU3E9__85_3_4; }
	inline void set_U3CU3E9__85_3_4(Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * value)
	{
		___U3CU3E9__85_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_4_5)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_4_5() const { return ___U3CU3E9__85_4_5; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_4_5() { return &___U3CU3E9__85_4_5; }
	inline void set_U3CU3E9__85_4_5(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_5_6)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_5_6() const { return ___U3CU3E9__85_5_6; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_5_6() { return &___U3CU3E9__85_5_6; }
	inline void set_U3CU3E9__85_5_6(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_6_7)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_6_7() const { return ___U3CU3E9__85_6_7; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_6_7() { return &___U3CU3E9__85_6_7; }
	inline void set_U3CU3E9__85_6_7(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_7_8)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_7_8() const { return ___U3CU3E9__85_7_8; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_7_8() { return &___U3CU3E9__85_7_8; }
	inline void set_U3CU3E9__85_7_8(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_7_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_8_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_8_9)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_8_9() const { return ___U3CU3E9__85_8_9; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_8_9() { return &___U3CU3E9__85_8_9; }
	inline void set_U3CU3E9__85_8_9(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_8_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_8_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_9_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_9_10)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_9_10() const { return ___U3CU3E9__85_9_10; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_9_10() { return &___U3CU3E9__85_9_10; }
	inline void set_U3CU3E9__85_9_10(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_9_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_9_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_10_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_10_11)); }
	inline Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * get_U3CU3E9__85_10_11() const { return ___U3CU3E9__85_10_11; }
	inline Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E ** get_address_of_U3CU3E9__85_10_11() { return &___U3CU3E9__85_10_11; }
	inline void set_U3CU3E9__85_10_11(Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * value)
	{
		___U3CU3E9__85_10_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_10_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_11_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_11_12)); }
	inline Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 * get_U3CU3E9__85_11_12() const { return ___U3CU3E9__85_11_12; }
	inline Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 ** get_address_of_U3CU3E9__85_11_12() { return &___U3CU3E9__85_11_12; }
	inline void set_U3CU3E9__85_11_12(Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 * value)
	{
		___U3CU3E9__85_11_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_11_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_12_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_12_13)); }
	inline Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 * get_U3CU3E9__85_12_13() const { return ___U3CU3E9__85_12_13; }
	inline Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 ** get_address_of_U3CU3E9__85_12_13() { return &___U3CU3E9__85_12_13; }
	inline void set_U3CU3E9__85_12_13(Func_2_tDAA7CDCA960BE7F01DDF760D779A905FF588E141 * value)
	{
		___U3CU3E9__85_12_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_12_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_13_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_13_14)); }
	inline Func_2_tED9BCD663191171058A80BA54DA2268E87CF89DD * get_U3CU3E9__85_13_14() const { return ___U3CU3E9__85_13_14; }
	inline Func_2_tED9BCD663191171058A80BA54DA2268E87CF89DD ** get_address_of_U3CU3E9__85_13_14() { return &___U3CU3E9__85_13_14; }
	inline void set_U3CU3E9__85_13_14(Func_2_tED9BCD663191171058A80BA54DA2268E87CF89DD * value)
	{
		___U3CU3E9__85_13_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_13_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_14_15() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_14_15)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_14_15() const { return ___U3CU3E9__85_14_15; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_14_15() { return &___U3CU3E9__85_14_15; }
	inline void set_U3CU3E9__85_14_15(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_14_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_14_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_15_16() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_15_16)); }
	inline Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * get_U3CU3E9__85_15_16() const { return ___U3CU3E9__85_15_16; }
	inline Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 ** get_address_of_U3CU3E9__85_15_16() { return &___U3CU3E9__85_15_16; }
	inline void set_U3CU3E9__85_15_16(Func_2_t958F8FB96E8CEEEB274340311FE998B523B6C549 * value)
	{
		___U3CU3E9__85_15_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_15_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_16_17() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_16_17)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_16_17() const { return ___U3CU3E9__85_16_17; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_16_17() { return &___U3CU3E9__85_16_17; }
	inline void set_U3CU3E9__85_16_17(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_16_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_16_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_17_18() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_17_18)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_U3CU3E9__85_17_18() const { return ___U3CU3E9__85_17_18; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_U3CU3E9__85_17_18() { return &___U3CU3E9__85_17_18; }
	inline void set_U3CU3E9__85_17_18(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___U3CU3E9__85_17_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_17_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_18_19() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_18_19)); }
	inline Func_2_t45CACCFE85B11B8D92B874D9D1CF7C3314B3B616 * get_U3CU3E9__85_18_19() const { return ___U3CU3E9__85_18_19; }
	inline Func_2_t45CACCFE85B11B8D92B874D9D1CF7C3314B3B616 ** get_address_of_U3CU3E9__85_18_19() { return &___U3CU3E9__85_18_19; }
	inline void set_U3CU3E9__85_18_19(Func_2_t45CACCFE85B11B8D92B874D9D1CF7C3314B3B616 * value)
	{
		___U3CU3E9__85_18_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_18_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_19_20() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_19_20)); }
	inline Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * get_U3CU3E9__85_19_20() const { return ___U3CU3E9__85_19_20; }
	inline Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E ** get_address_of_U3CU3E9__85_19_20() { return &___U3CU3E9__85_19_20; }
	inline void set_U3CU3E9__85_19_20(Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * value)
	{
		___U3CU3E9__85_19_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_19_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__85_20_21() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields, ___U3CU3E9__85_20_21)); }
	inline Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * get_U3CU3E9__85_20_21() const { return ___U3CU3E9__85_20_21; }
	inline Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E ** get_address_of_U3CU3E9__85_20_21() { return &___U3CU3E9__85_20_21; }
	inline void set_U3CU3E9__85_20_21(Func_2_t83071FC98020B8858E4A5B088B4DF53FF8D9066E * value)
	{
		___U3CU3E9__85_20_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__85_20_21), (void*)value);
	}
};


// Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t48A2EDC7B00777CBE1120B6B1E14CE9060FC23D6  : public RuntimeObject
{
public:
	// Meta.WitAi.Events.SpeechEvents Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::<>4__this
	SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___U3CU3E4__this_0;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::getEvent
	Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * ___getEvent_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass86_0_t48A2EDC7B00777CBE1120B6B1E14CE9060FC23D6, ___U3CU3E4__this_0)); }
	inline SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_getEvent_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass86_0_t48A2EDC7B00777CBE1120B6B1E14CE9060FC23D6, ___getEvent_1)); }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * get_getEvent_1() const { return ___getEvent_1; }
	inline Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 ** get_address_of_getEvent_1() { return &___getEvent_1; }
	inline void set_getEvent_1(Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * value)
	{
		___getEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getEvent_1), (void*)value);
	}
};


// Meta.WitAi.VoiceService/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t47A91BC1F77371131F268A4C6F37DA32BFFA71AF  : public RuntimeObject
{
public:
	// Meta.WitAi.VoiceService Meta.WitAi.VoiceService/<>c__DisplayClass55_0::<>4__this
	VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ___U3CU3E4__this_0;
	// Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.VoiceService/<>c__DisplayClass55_0::audioRequest
	VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * ___audioRequest_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t47A91BC1F77371131F268A4C6F37DA32BFFA71AF, ___U3CU3E4__this_0)); }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_audioRequest_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t47A91BC1F77371131F268A4C6F37DA32BFFA71AF, ___audioRequest_1)); }
	inline VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * get_audioRequest_1() const { return ___audioRequest_1; }
	inline VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C ** get_address_of_audioRequest_1() { return &___audioRequest_1; }
	inline void set_audioRequest_1(VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * value)
	{
		___audioRequest_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioRequest_1), (void*)value);
	}
};


// Meta.WitAi.Utilities.VoiceServiceReference/<>c
struct U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields
{
public:
	// Meta.WitAi.Utilities.VoiceServiceReference/<>c Meta.WitAi.Utilities.VoiceServiceReference/<>c::<>9
	U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * ___U3CU3E9_0;
	// System.Predicate`1<Meta.WitAi.VoiceService> Meta.WitAi.Utilities.VoiceServiceReference/<>c::<>9__2_0
	Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Predicate_1_tE5FBBDBB370F917B789E6D8CC275D4A70F325CA6 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
struct QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::key
	String_t* ___key_0;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider
struct DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706  : public RuntimeObject
{
public:

public:
};


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932  : public RuntimeObject
{
public:
	// Meta.WitAi.Data.Entities.WitDynamicEntity Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::dynamicEntity
	WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___dynamicEntity_0;

public:
	inline static int32_t get_offset_of_dynamicEntity_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932, ___dynamicEntity_0)); }
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * get_dynamicEntity_0() const { return ___dynamicEntity_0; }
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B ** get_address_of_dynamicEntity_0() { return &___dynamicEntity_0; }
	inline void set_dynamicEntity_0(WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * value)
	{
		___dynamicEntity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicEntity_0), (void*)value);
	}
};


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::entityName
	String_t* ___entityName_0;

public:
	inline static int32_t get_offset_of_entityName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8, ___entityName_0)); }
	inline String_t* get_entityName_0() const { return ___entityName_0; }
	inline String_t** get_address_of_entityName_0() { return &___entityName_0; }
	inline void set_entityName_0(String_t* value)
	{
		___entityName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityName_0), (void*)value);
	}
};


// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470  : public RuntimeObject
{
public:
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::entityName
	String_t* ___entityName_0;

public:
	inline static int32_t get_offset_of_entityName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470, ___entityName_0)); }
	inline String_t* get_entityName_0() const { return ___entityName_0; }
	inline String_t** get_address_of_entityName_0() { return &___entityName_0; }
	inline void set_entityName_0(String_t* value)
	{
		___entityName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityName_0), (void*)value);
	}
};


// Meta.WitAi.WitRequest/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E  : public RuntimeObject
{
public:
	// Meta.WitAi.WitRequest Meta.WitAi.WitRequest/<>c__DisplayClass99_0::<>4__this
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___U3CU3E4__this_0;
	// System.String Meta.WitAi.WitRequest/<>c__DisplayClass99_0::stringResponse
	String_t* ___stringResponse_1;
	// System.String Meta.WitAi.WitRequest/<>c__DisplayClass99_0::transcription
	String_t* ___transcription_2;
	// System.Boolean Meta.WitAi.WitRequest/<>c__DisplayClass99_0::hasResponse
	bool ___hasResponse_3;
	// System.Boolean Meta.WitAi.WitRequest/<>c__DisplayClass99_0::isFinal
	bool ___isFinal_4;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitRequest/<>c__DisplayClass99_0::responseNode
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___responseNode_5;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___U3CU3E4__this_0)); }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_stringResponse_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___stringResponse_1)); }
	inline String_t* get_stringResponse_1() const { return ___stringResponse_1; }
	inline String_t** get_address_of_stringResponse_1() { return &___stringResponse_1; }
	inline void set_stringResponse_1(String_t* value)
	{
		___stringResponse_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringResponse_1), (void*)value);
	}

	inline static int32_t get_offset_of_transcription_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___transcription_2)); }
	inline String_t* get_transcription_2() const { return ___transcription_2; }
	inline String_t** get_address_of_transcription_2() { return &___transcription_2; }
	inline void set_transcription_2(String_t* value)
	{
		___transcription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transcription_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasResponse_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___hasResponse_3)); }
	inline bool get_hasResponse_3() const { return ___hasResponse_3; }
	inline bool* get_address_of_hasResponse_3() { return &___hasResponse_3; }
	inline void set_hasResponse_3(bool value)
	{
		___hasResponse_3 = value;
	}

	inline static int32_t get_offset_of_isFinal_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___isFinal_4)); }
	inline bool get_isFinal_4() const { return ___isFinal_4; }
	inline bool* get_address_of_isFinal_4() { return &___isFinal_4; }
	inline void set_isFinal_4(bool value)
	{
		___isFinal_4 = value;
	}

	inline static int32_t get_offset_of_responseNode_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E, ___responseNode_5)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get_responseNode_5() const { return ___responseNode_5; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of_responseNode_5() { return &___responseNode_5; }
	inline void set_responseNode_5(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		___responseNode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseNode_5), (void*)value);
	}
};


// Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112
struct U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Meta.WitAi.WitRequest Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::<>4__this
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379, ___U3CU3E4__this_2)); }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86
struct U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Meta.WitAi.WitService Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::<>4__this
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E, ___U3CU3E4__this_2)); }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>
struct Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533, ____set_0)); }
	inline HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533, ____current_3)); }
	inline SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * get__current_3() const { return ____current_3; }
	inline SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E  : public VoiceRequestEvents_1_t20DEF86029105C2344E07D06312F4C0A4AB01AE0
{
public:
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioInputStateChange
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onAudioInputStateChange_9;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioActivation
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onAudioActivation_10;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStartListening
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onStartListening_11;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioDeactivation
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onAudioDeactivation_12;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStopListening
	VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * ____onStopListening_13;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onPartialTranscription
	TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * ____onPartialTranscription_14;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onFullTranscription
	TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * ____onFullTranscription_15;

public:
	inline static int32_t get_offset_of__onAudioInputStateChange_9() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onAudioInputStateChange_9)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onAudioInputStateChange_9() const { return ____onAudioInputStateChange_9; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onAudioInputStateChange_9() { return &____onAudioInputStateChange_9; }
	inline void set__onAudioInputStateChange_9(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onAudioInputStateChange_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAudioInputStateChange_9), (void*)value);
	}

	inline static int32_t get_offset_of__onAudioActivation_10() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onAudioActivation_10)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onAudioActivation_10() const { return ____onAudioActivation_10; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onAudioActivation_10() { return &____onAudioActivation_10; }
	inline void set__onAudioActivation_10(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onAudioActivation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAudioActivation_10), (void*)value);
	}

	inline static int32_t get_offset_of__onStartListening_11() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onStartListening_11)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onStartListening_11() const { return ____onStartListening_11; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onStartListening_11() { return &____onStartListening_11; }
	inline void set__onStartListening_11(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onStartListening_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStartListening_11), (void*)value);
	}

	inline static int32_t get_offset_of__onAudioDeactivation_12() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onAudioDeactivation_12)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onAudioDeactivation_12() const { return ____onAudioDeactivation_12; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onAudioDeactivation_12() { return &____onAudioDeactivation_12; }
	inline void set__onAudioDeactivation_12(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onAudioDeactivation_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAudioDeactivation_12), (void*)value);
	}

	inline static int32_t get_offset_of__onStopListening_13() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onStopListening_13)); }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * get__onStopListening_13() const { return ____onStopListening_13; }
	inline VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 ** get_address_of__onStopListening_13() { return &____onStopListening_13; }
	inline void set__onStopListening_13(VoiceServiceRequestEvent_tB8959842EDEF820543B4708039E05AAE59F2C2F7 * value)
	{
		____onStopListening_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStopListening_13), (void*)value);
	}

	inline static int32_t get_offset_of__onPartialTranscription_14() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onPartialTranscription_14)); }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * get__onPartialTranscription_14() const { return ____onPartialTranscription_14; }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 ** get_address_of__onPartialTranscription_14() { return &____onPartialTranscription_14; }
	inline void set__onPartialTranscription_14(TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * value)
	{
		____onPartialTranscription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPartialTranscription_14), (void*)value);
	}

	inline static int32_t get_offset_of__onFullTranscription_15() { return static_cast<int32_t>(offsetof(TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E, ____onFullTranscription_15)); }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * get__onFullTranscription_15() const { return ____onFullTranscription_15; }
	inline TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 ** get_address_of__onFullTranscription_15() { return &____onFullTranscription_15; }
	inline void set__onFullTranscription_15(TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27 * value)
	{
		____onFullTranscription_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFullTranscription_15), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_t97BBD372FDB3FCC54138AA078EA6E6A6D286D961  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t97BBD372FDB3FCC54138AA078EA6E6A6D286D961, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
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

// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883  : public Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_7;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____caps_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_4), (void*)value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__capcoll_6() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcoll_6)); }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * get__capcoll_6() const { return ____capcoll_6; }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 ** get_address_of__capcoll_6() { return &____capcoll_6; }
	inline void set__capcoll_6(CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * value)
	{
		____capcoll_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capcoll_6), (void*)value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_7), (void*)value);
	}
};

struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields, ____emptygroup_3)); }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptygroup_3), (void*)value);
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_19;

public:
	inline static int32_t get_offset_of__all_18() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_18)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_18() const { return ____all_18; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_18() { return &____all_18; }
	inline void set__all_18(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_18), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_19() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_19() const { return ____allKeys_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_19() { return &____allKeys_19; }
	inline void set__allKeys_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_19), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
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


// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D  : public EventRegistry_t7FCE15ECC05DF338C701E788D137969E5EEB66B9
{
public:
	// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.SpeechEvents::_onRequestOptionSetup
	WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * ____onRequestOptionSetup_3;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onRequestInitialized
	VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * ____onRequestInitialized_4;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.SpeechEvents::_onRequestCreated
	WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * ____onRequestCreated_5;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onSend
	VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * ____onSend_6;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMinimumWakeThresholdHit
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onMinimumWakeThresholdHit_8;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMicDataSent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onMicDataSent_9;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToDeactivation
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onStoppedListeningDueToDeactivation_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToInactivity
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onStoppedListeningDueToInactivity_11;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToTimeout
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onStoppedListeningDueToTimeout_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborting
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onAborting_14;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onAborted_15;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onCanceled
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ____onCanceled_16;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onPartialResponse
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * ____onPartialResponse_18;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onResponse
	WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * ____onResponse_19;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::_onError
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * ____onError_20;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onRequestCompleted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onRequestCompleted_21;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onComplete
	VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * ____onComplete_22;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStartListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onStartListening_24;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ____onStoppedListening_25;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::_onMicLevelChanged
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * ____onMicLevelChanged_26;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onPartialTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ____onPartialTranscription_28;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onFullTranscription
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * ____onFullTranscription_29;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents> Meta.WitAi.Events.SpeechEvents::_listeners
	HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * ____listeners_30;

public:
	inline static int32_t get_offset_of__onRequestOptionSetup_3() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onRequestOptionSetup_3)); }
	inline WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * get__onRequestOptionSetup_3() const { return ____onRequestOptionSetup_3; }
	inline WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E ** get_address_of__onRequestOptionSetup_3() { return &____onRequestOptionSetup_3; }
	inline void set__onRequestOptionSetup_3(WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * value)
	{
		____onRequestOptionSetup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRequestOptionSetup_3), (void*)value);
	}

	inline static int32_t get_offset_of__onRequestInitialized_4() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onRequestInitialized_4)); }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * get__onRequestInitialized_4() const { return ____onRequestInitialized_4; }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 ** get_address_of__onRequestInitialized_4() { return &____onRequestInitialized_4; }
	inline void set__onRequestInitialized_4(VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * value)
	{
		____onRequestInitialized_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRequestInitialized_4), (void*)value);
	}

	inline static int32_t get_offset_of__onRequestCreated_5() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onRequestCreated_5)); }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * get__onRequestCreated_5() const { return ____onRequestCreated_5; }
	inline WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 ** get_address_of__onRequestCreated_5() { return &____onRequestCreated_5; }
	inline void set__onRequestCreated_5(WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * value)
	{
		____onRequestCreated_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRequestCreated_5), (void*)value);
	}

	inline static int32_t get_offset_of__onSend_6() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onSend_6)); }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * get__onSend_6() const { return ____onSend_6; }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 ** get_address_of__onSend_6() { return &____onSend_6; }
	inline void set__onSend_6(VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * value)
	{
		____onSend_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onSend_6), (void*)value);
	}

	inline static int32_t get_offset_of__onMinimumWakeThresholdHit_8() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onMinimumWakeThresholdHit_8)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onMinimumWakeThresholdHit_8() const { return ____onMinimumWakeThresholdHit_8; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onMinimumWakeThresholdHit_8() { return &____onMinimumWakeThresholdHit_8; }
	inline void set__onMinimumWakeThresholdHit_8(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onMinimumWakeThresholdHit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onMinimumWakeThresholdHit_8), (void*)value);
	}

	inline static int32_t get_offset_of__onMicDataSent_9() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onMicDataSent_9)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onMicDataSent_9() const { return ____onMicDataSent_9; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onMicDataSent_9() { return &____onMicDataSent_9; }
	inline void set__onMicDataSent_9(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onMicDataSent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onMicDataSent_9), (void*)value);
	}

	inline static int32_t get_offset_of__onStoppedListeningDueToDeactivation_10() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onStoppedListeningDueToDeactivation_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onStoppedListeningDueToDeactivation_10() const { return ____onStoppedListeningDueToDeactivation_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onStoppedListeningDueToDeactivation_10() { return &____onStoppedListeningDueToDeactivation_10; }
	inline void set__onStoppedListeningDueToDeactivation_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onStoppedListeningDueToDeactivation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStoppedListeningDueToDeactivation_10), (void*)value);
	}

	inline static int32_t get_offset_of__onStoppedListeningDueToInactivity_11() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onStoppedListeningDueToInactivity_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onStoppedListeningDueToInactivity_11() const { return ____onStoppedListeningDueToInactivity_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onStoppedListeningDueToInactivity_11() { return &____onStoppedListeningDueToInactivity_11; }
	inline void set__onStoppedListeningDueToInactivity_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onStoppedListeningDueToInactivity_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStoppedListeningDueToInactivity_11), (void*)value);
	}

	inline static int32_t get_offset_of__onStoppedListeningDueToTimeout_12() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onStoppedListeningDueToTimeout_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onStoppedListeningDueToTimeout_12() const { return ____onStoppedListeningDueToTimeout_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onStoppedListeningDueToTimeout_12() { return &____onStoppedListeningDueToTimeout_12; }
	inline void set__onStoppedListeningDueToTimeout_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onStoppedListeningDueToTimeout_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStoppedListeningDueToTimeout_12), (void*)value);
	}

	inline static int32_t get_offset_of__onAborting_14() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onAborting_14)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onAborting_14() const { return ____onAborting_14; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onAborting_14() { return &____onAborting_14; }
	inline void set__onAborting_14(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onAborting_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAborting_14), (void*)value);
	}

	inline static int32_t get_offset_of__onAborted_15() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onAborted_15)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onAborted_15() const { return ____onAborted_15; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onAborted_15() { return &____onAborted_15; }
	inline void set__onAborted_15(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onAborted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onAborted_15), (void*)value);
	}

	inline static int32_t get_offset_of__onCanceled_16() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onCanceled_16)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get__onCanceled_16() const { return ____onCanceled_16; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of__onCanceled_16() { return &____onCanceled_16; }
	inline void set__onCanceled_16(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		____onCanceled_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCanceled_16), (void*)value);
	}

	inline static int32_t get_offset_of__onPartialResponse_18() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onPartialResponse_18)); }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * get__onPartialResponse_18() const { return ____onPartialResponse_18; }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 ** get_address_of__onPartialResponse_18() { return &____onPartialResponse_18; }
	inline void set__onPartialResponse_18(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * value)
	{
		____onPartialResponse_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPartialResponse_18), (void*)value);
	}

	inline static int32_t get_offset_of__onResponse_19() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onResponse_19)); }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * get__onResponse_19() const { return ____onResponse_19; }
	inline WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 ** get_address_of__onResponse_19() { return &____onResponse_19; }
	inline void set__onResponse_19(WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * value)
	{
		____onResponse_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onResponse_19), (void*)value);
	}

	inline static int32_t get_offset_of__onError_20() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onError_20)); }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * get__onError_20() const { return ____onError_20; }
	inline WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B ** get_address_of__onError_20() { return &____onError_20; }
	inline void set__onError_20(WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * value)
	{
		____onError_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onError_20), (void*)value);
	}

	inline static int32_t get_offset_of__onRequestCompleted_21() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onRequestCompleted_21)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onRequestCompleted_21() const { return ____onRequestCompleted_21; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onRequestCompleted_21() { return &____onRequestCompleted_21; }
	inline void set__onRequestCompleted_21(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onRequestCompleted_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRequestCompleted_21), (void*)value);
	}

	inline static int32_t get_offset_of__onComplete_22() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onComplete_22)); }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * get__onComplete_22() const { return ____onComplete_22; }
	inline VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 ** get_address_of__onComplete_22() { return &____onComplete_22; }
	inline void set__onComplete_22(VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * value)
	{
		____onComplete_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onComplete_22), (void*)value);
	}

	inline static int32_t get_offset_of__onStartListening_24() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onStartListening_24)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onStartListening_24() const { return ____onStartListening_24; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onStartListening_24() { return &____onStartListening_24; }
	inline void set__onStartListening_24(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onStartListening_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStartListening_24), (void*)value);
	}

	inline static int32_t get_offset_of__onStoppedListening_25() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onStoppedListening_25)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get__onStoppedListening_25() const { return ____onStoppedListening_25; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of__onStoppedListening_25() { return &____onStoppedListening_25; }
	inline void set__onStoppedListening_25(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		____onStoppedListening_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onStoppedListening_25), (void*)value);
	}

	inline static int32_t get_offset_of__onMicLevelChanged_26() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onMicLevelChanged_26)); }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * get__onMicLevelChanged_26() const { return ____onMicLevelChanged_26; }
	inline WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B ** get_address_of__onMicLevelChanged_26() { return &____onMicLevelChanged_26; }
	inline void set__onMicLevelChanged_26(WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * value)
	{
		____onMicLevelChanged_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onMicLevelChanged_26), (void*)value);
	}

	inline static int32_t get_offset_of__onPartialTranscription_28() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onPartialTranscription_28)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get__onPartialTranscription_28() const { return ____onPartialTranscription_28; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of__onPartialTranscription_28() { return &____onPartialTranscription_28; }
	inline void set__onPartialTranscription_28(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		____onPartialTranscription_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPartialTranscription_28), (void*)value);
	}

	inline static int32_t get_offset_of__onFullTranscription_29() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____onFullTranscription_29)); }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * get__onFullTranscription_29() const { return ____onFullTranscription_29; }
	inline WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 ** get_address_of__onFullTranscription_29() { return &____onFullTranscription_29; }
	inline void set__onFullTranscription_29(WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * value)
	{
		____onFullTranscription_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFullTranscription_29), (void*)value);
	}

	inline static int32_t get_offset_of__listeners_30() { return static_cast<int32_t>(offsetof(SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D, ____listeners_30)); }
	inline HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * get__listeners_30() const { return ____listeners_30; }
	inline HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 ** get_address_of__listeners_30() { return &____listeners_30; }
	inline void set__listeners_30(HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * value)
	{
		____listeners_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listeners_30), (void*)value);
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Boolean System.Net.WebResponse::m_IsCacheFresh
	bool ___m_IsCacheFresh_1;
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_2;

public:
	inline static int32_t get_offset_of_m_IsCacheFresh_1() { return static_cast<int32_t>(offsetof(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0, ___m_IsCacheFresh_1)); }
	inline bool get_m_IsCacheFresh_1() const { return ___m_IsCacheFresh_1; }
	inline bool* get_address_of_m_IsCacheFresh_1() { return &___m_IsCacheFresh_1; }
	inline void set_m_IsCacheFresh_1(bool value)
	{
		___m_IsCacheFresh_1 = value;
	}

	inline static int32_t get_offset_of_m_IsFromCache_2() { return static_cast<int32_t>(offsetof(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0, ___m_IsFromCache_2)); }
	inline bool get_m_IsFromCache_2() const { return ___m_IsFromCache_2; }
	inline bool* get_address_of_m_IsFromCache_2() { return &___m_IsFromCache_2; }
	inline void set_m_IsFromCache_2(bool value)
	{
		___m_IsFromCache_2 = value;
	}
};


// Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D 
{
public:
	// Meta.WitAi.Data.Info.ComposerGraph[] Meta.WitAi.Data.Info.WitComposerInfo::canvases
	ComposerGraphU5BU5D_tE75DFC400DC95CCAFB649B04D0DF01B0F7D67E3D* ___canvases_0;

public:
	inline static int32_t get_offset_of_canvases_0() { return static_cast<int32_t>(offsetof(WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D, ___canvases_0)); }
	inline ComposerGraphU5BU5D_tE75DFC400DC95CCAFB649B04D0DF01B0F7D67E3D* get_canvases_0() const { return ___canvases_0; }
	inline ComposerGraphU5BU5D_tE75DFC400DC95CCAFB649B04D0DF01B0F7D67E3D** get_address_of_canvases_0() { return &___canvases_0; }
	inline void set_canvases_0(ComposerGraphU5BU5D_tE75DFC400DC95CCAFB649B04D0DF01B0F7D67E3D* value)
	{
		___canvases_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvases_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D_marshaled_pinvoke
{
	ComposerGraph_t05368B27A701CD658A100CC06A1957E9F44E1BFA_marshaled_pinvoke* ___canvases_0;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D_marshaled_com
{
	ComposerGraph_t05368B27A701CD658A100CC06A1957E9F44E1BFA_marshaled_com* ___canvases_0;
};

// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F  : public VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825
{
public:
	// Meta.WitAi.Interfaces.IDynamicEntitiesProvider Meta.WitAi.Configuration.WitRequestOptions::dynamicEntities
	RuntimeObject* ___dynamicEntities_4;
	// System.Int32 Meta.WitAi.Configuration.WitRequestOptions::nBestIntents
	int32_t ___nBestIntents_5;
	// System.String Meta.WitAi.Configuration.WitRequestOptions::tag
	String_t* ___tag_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Configuration.WitRequestOptions::additionalParameters
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___additionalParameters_7;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.Configuration.WitRequestOptions::onResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onResponse_8;

public:
	inline static int32_t get_offset_of_dynamicEntities_4() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___dynamicEntities_4)); }
	inline RuntimeObject* get_dynamicEntities_4() const { return ___dynamicEntities_4; }
	inline RuntimeObject** get_address_of_dynamicEntities_4() { return &___dynamicEntities_4; }
	inline void set_dynamicEntities_4(RuntimeObject* value)
	{
		___dynamicEntities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicEntities_4), (void*)value);
	}

	inline static int32_t get_offset_of_nBestIntents_5() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___nBestIntents_5)); }
	inline int32_t get_nBestIntents_5() const { return ___nBestIntents_5; }
	inline int32_t* get_address_of_nBestIntents_5() { return &___nBestIntents_5; }
	inline void set_nBestIntents_5(int32_t value)
	{
		___nBestIntents_5 = value;
	}

	inline static int32_t get_offset_of_tag_6() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___tag_6)); }
	inline String_t* get_tag_6() const { return ___tag_6; }
	inline String_t** get_address_of_tag_6() { return &___tag_6; }
	inline void set_tag_6(String_t* value)
	{
		___tag_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_6), (void*)value);
	}

	inline static int32_t get_offset_of_additionalParameters_7() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___additionalParameters_7)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_additionalParameters_7() const { return ___additionalParameters_7; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_additionalParameters_7() { return &___additionalParameters_7; }
	inline void set_additionalParameters_7(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___additionalParameters_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalParameters_7), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_8() { return static_cast<int32_t>(offsetof(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F, ___onResponse_8)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onResponse_8() const { return ___onResponse_8; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onResponse_8() { return &___onResponse_8; }
	inline void set_onResponse_8(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onResponse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_8), (void*)value);
	}
};


// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25  : public VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C
{
public:
	// System.String Meta.WitAi.Requests.WitVRequest::<RequestId>k__BackingField
	String_t* ___U3CRequestIdU3Ek__BackingField_16;
	// Meta.WitAi.IWitRequestConfiguration Meta.WitAi.Requests.WitVRequest::<Configuration>k__BackingField
	RuntimeObject* ___U3CConfigurationU3Ek__BackingField_17;
	// System.Boolean Meta.WitAi.Requests.WitVRequest::_useServerToken
	bool ____useServerToken_18;

public:
	inline static int32_t get_offset_of_U3CRequestIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25, ___U3CRequestIdU3Ek__BackingField_16)); }
	inline String_t* get_U3CRequestIdU3Ek__BackingField_16() const { return ___U3CRequestIdU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CRequestIdU3Ek__BackingField_16() { return &___U3CRequestIdU3Ek__BackingField_16; }
	inline void set_U3CRequestIdU3Ek__BackingField_16(String_t* value)
	{
		___U3CRequestIdU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestIdU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25, ___U3CConfigurationU3Ek__BackingField_17)); }
	inline RuntimeObject* get_U3CConfigurationU3Ek__BackingField_17() const { return ___U3CConfigurationU3Ek__BackingField_17; }
	inline RuntimeObject** get_address_of_U3CConfigurationU3Ek__BackingField_17() { return &___U3CConfigurationU3Ek__BackingField_17; }
	inline void set_U3CConfigurationU3Ek__BackingField_17(RuntimeObject* value)
	{
		___U3CConfigurationU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of__useServerToken_18() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25, ____useServerToken_18)); }
	inline bool get__useServerToken_18() const { return ____useServerToken_18; }
	inline bool* get_address_of__useServerToken_18() { return &____useServerToken_18; }
	inline void set__useServerToken_18(bool value)
	{
		____useServerToken_18 = value;
	}
};

struct WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields
{
public:
	// System.Func`2<System.UriBuilder,System.UriBuilder> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUri
	Func_2_t3B8F769F549B32245EF983F325BF4399764EE2A7 * ___OnProvideCustomUri_13;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Meta.WitAi.Requests.WitVRequest::OnProvideCustomHeaders
	Action_1_t30550FD7E7165898295086090B4681ECFDACC069 * ___OnProvideCustomHeaders_14;
	// System.Action`1<System.Text.StringBuilder> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUserAgent
	Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___OnProvideCustomUserAgent_15;
	// System.String Meta.WitAi.Requests.WitVRequest::_operatingSystem
	String_t* ____operatingSystem_19;
	// System.String Meta.WitAi.Requests.WitVRequest::_deviceModel
	String_t* ____deviceModel_20;
	// System.String Meta.WitAi.Requests.WitVRequest::_appIdentifier
	String_t* ____appIdentifier_21;
	// System.String Meta.WitAi.Requests.WitVRequest::_unityVersion
	String_t* ____unityVersion_22;

public:
	inline static int32_t get_offset_of_OnProvideCustomUri_13() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields, ___OnProvideCustomUri_13)); }
	inline Func_2_t3B8F769F549B32245EF983F325BF4399764EE2A7 * get_OnProvideCustomUri_13() const { return ___OnProvideCustomUri_13; }
	inline Func_2_t3B8F769F549B32245EF983F325BF4399764EE2A7 ** get_address_of_OnProvideCustomUri_13() { return &___OnProvideCustomUri_13; }
	inline void set_OnProvideCustomUri_13(Func_2_t3B8F769F549B32245EF983F325BF4399764EE2A7 * value)
	{
		___OnProvideCustomUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnProvideCustomUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnProvideCustomHeaders_14() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields, ___OnProvideCustomHeaders_14)); }
	inline Action_1_t30550FD7E7165898295086090B4681ECFDACC069 * get_OnProvideCustomHeaders_14() const { return ___OnProvideCustomHeaders_14; }
	inline Action_1_t30550FD7E7165898295086090B4681ECFDACC069 ** get_address_of_OnProvideCustomHeaders_14() { return &___OnProvideCustomHeaders_14; }
	inline void set_OnProvideCustomHeaders_14(Action_1_t30550FD7E7165898295086090B4681ECFDACC069 * value)
	{
		___OnProvideCustomHeaders_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnProvideCustomHeaders_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnProvideCustomUserAgent_15() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields, ___OnProvideCustomUserAgent_15)); }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * get_OnProvideCustomUserAgent_15() const { return ___OnProvideCustomUserAgent_15; }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B ** get_address_of_OnProvideCustomUserAgent_15() { return &___OnProvideCustomUserAgent_15; }
	inline void set_OnProvideCustomUserAgent_15(Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * value)
	{
		___OnProvideCustomUserAgent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnProvideCustomUserAgent_15), (void*)value);
	}

	inline static int32_t get_offset_of__operatingSystem_19() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields, ____operatingSystem_19)); }
	inline String_t* get__operatingSystem_19() const { return ____operatingSystem_19; }
	inline String_t** get_address_of__operatingSystem_19() { return &____operatingSystem_19; }
	inline void set__operatingSystem_19(String_t* value)
	{
		____operatingSystem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____operatingSystem_19), (void*)value);
	}

	inline static int32_t get_offset_of__deviceModel_20() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields, ____deviceModel_20)); }
	inline String_t* get__deviceModel_20() const { return ____deviceModel_20; }
	inline String_t** get_address_of__deviceModel_20() { return &____deviceModel_20; }
	inline void set__deviceModel_20(String_t* value)
	{
		____deviceModel_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deviceModel_20), (void*)value);
	}

	inline static int32_t get_offset_of__appIdentifier_21() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields, ____appIdentifier_21)); }
	inline String_t* get__appIdentifier_21() const { return ____appIdentifier_21; }
	inline String_t** get_address_of__appIdentifier_21() { return &____appIdentifier_21; }
	inline void set__appIdentifier_21(String_t* value)
	{
		____appIdentifier_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____appIdentifier_21), (void*)value);
	}

	inline static int32_t get_offset_of__unityVersion_22() { return static_cast<int32_t>(offsetof(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25_StaticFields, ____unityVersion_22)); }
	inline String_t* get__unityVersion_22() const { return ____unityVersion_22; }
	inline String_t** get_address_of__unityVersion_22() { return &____unityVersion_22; }
	inline void set__unityVersion_22(String_t* value)
	{
		____unityVersion_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unityVersion_22), (void*)value);
	}
};


// Meta.Voice.NLPAudioRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83  : public TranscriptionRequestEvents_1_t6CBA7B41D8F619A52560B3245734DB7DB86E860E
{
public:
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onPartialResponse
	NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * ____onPartialResponse_16;
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onFullResponse
	NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * ____onFullResponse_17;

public:
	inline static int32_t get_offset_of__onPartialResponse_16() { return static_cast<int32_t>(offsetof(NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83, ____onPartialResponse_16)); }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * get__onPartialResponse_16() const { return ____onPartialResponse_16; }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC ** get_address_of__onPartialResponse_16() { return &____onPartialResponse_16; }
	inline void set__onPartialResponse_16(NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * value)
	{
		____onPartialResponse_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPartialResponse_16), (void*)value);
	}

	inline static int32_t get_offset_of__onFullResponse_17() { return static_cast<int32_t>(offsetof(NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83, ____onFullResponse_17)); }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * get__onFullResponse_17() const { return ____onFullResponse_17; }
	inline NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC ** get_address_of__onFullResponse_17() { return &____onFullResponse_17; }
	inline void set__onFullResponse_17(NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC * value)
	{
		____onFullResponse_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onFullResponse_17), (void*)value);
	}
};


// System.Net.Security.AuthenticationLevel
struct AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.DecompressionMethods
struct DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC 
{
public:
	// System.Int32 System.Net.DecompressionMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC, ___value___2)); }
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

// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B  : public Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * ____groupcoll_9;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_13;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_14;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ____matches_15;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____matchcount_16;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_17;

public:
	inline static int32_t get_offset_of__groupcoll_9() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____groupcoll_9)); }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * get__groupcoll_9() const { return ____groupcoll_9; }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 ** get_address_of__groupcoll_9() { return &____groupcoll_9; }
	inline void set__groupcoll_9(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * value)
	{
		____groupcoll_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groupcoll_9), (void*)value);
	}

	inline static int32_t get_offset_of__regex_10() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____regex_10)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_10() const { return ____regex_10; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_10() { return &____regex_10; }
	inline void set__regex_10(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_10), (void*)value);
	}

	inline static int32_t get_offset_of__textbeg_11() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textbeg_11)); }
	inline int32_t get__textbeg_11() const { return ____textbeg_11; }
	inline int32_t* get_address_of__textbeg_11() { return &____textbeg_11; }
	inline void set__textbeg_11(int32_t value)
	{
		____textbeg_11 = value;
	}

	inline static int32_t get_offset_of__textpos_12() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textpos_12)); }
	inline int32_t get__textpos_12() const { return ____textpos_12; }
	inline int32_t* get_address_of__textpos_12() { return &____textpos_12; }
	inline void set__textpos_12(int32_t value)
	{
		____textpos_12 = value;
	}

	inline static int32_t get_offset_of__textend_13() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textend_13)); }
	inline int32_t get__textend_13() const { return ____textend_13; }
	inline int32_t* get_address_of__textend_13() { return &____textend_13; }
	inline void set__textend_13(int32_t value)
	{
		____textend_13 = value;
	}

	inline static int32_t get_offset_of__textstart_14() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textstart_14)); }
	inline int32_t get__textstart_14() const { return ____textstart_14; }
	inline int32_t* get_address_of__textstart_14() { return &____textstart_14; }
	inline void set__textstart_14(int32_t value)
	{
		____textstart_14 = value;
	}

	inline static int32_t get_offset_of__matches_15() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matches_15)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get__matches_15() const { return ____matches_15; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of__matches_15() { return &____matches_15; }
	inline void set__matches_15(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		____matches_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_15), (void*)value);
	}

	inline static int32_t get_offset_of__matchcount_16() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matchcount_16)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__matchcount_16() const { return ____matchcount_16; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__matchcount_16() { return &____matchcount_16; }
	inline void set__matchcount_16(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____matchcount_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matchcount_16), (void*)value);
	}

	inline static int32_t get_offset_of__balancing_17() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____balancing_17)); }
	inline bool get__balancing_17() const { return ____balancing_17; }
	inline bool* get_address_of__balancing_17() { return &____balancing_17; }
	inline void set__balancing_17(bool value)
	{
		____balancing_17 = value;
	}
};

struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____empty_8;

public:
	inline static int32_t get_offset_of__empty_8() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields, ____empty_8)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__empty_8() const { return ____empty_8; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__empty_8() { return &____empty_8; }
	inline void set__empty_8(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____empty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_8), (void*)value);
	}
};


// Meta.Voice.NLPRequestInputType
struct NLPRequestInputType_t7A6629AFA3FFCE9B1B71C453B0223F23FB5FDDFB 
{
public:
	// System.Int32 Meta.Voice.NLPRequestInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NLPRequestInputType_t7A6629AFA3FFCE9B1B71C453B0223F23FB5FDDFB, ___value___2)); }
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

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Utilities.StringEvent
struct StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Security.Principal.TokenImpersonationLevel
struct TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.Voice.VoiceAudioInputState
struct VoiceAudioInputState_t043AF7B08F526F7498F9D056CFADF06D2A8613E2 
{
public:
	// System.Int32 Meta.Voice.VoiceAudioInputState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoiceAudioInputState_t043AF7B08F526F7498F9D056CFADF06D2A8613E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D  : public SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D
{
public:
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataReady
	WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * ____onByteDataReady_32;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataSent
	WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * ____onByteDataSent_33;
	// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::_onValidatePartialResponse
	WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * ____onValidatePartialResponse_34;

public:
	inline static int32_t get_offset_of__onByteDataReady_32() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ____onByteDataReady_32)); }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * get__onByteDataReady_32() const { return ____onByteDataReady_32; }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 ** get_address_of__onByteDataReady_32() { return &____onByteDataReady_32; }
	inline void set__onByteDataReady_32(WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * value)
	{
		____onByteDataReady_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onByteDataReady_32), (void*)value);
	}

	inline static int32_t get_offset_of__onByteDataSent_33() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ____onByteDataSent_33)); }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * get__onByteDataSent_33() const { return ____onByteDataSent_33; }
	inline WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 ** get_address_of__onByteDataSent_33() { return &____onByteDataSent_33; }
	inline void set__onByteDataSent_33(WitByteDataEvent_tF93A441E4A0179DCD3F8001D67630C0027C4AA34 * value)
	{
		____onByteDataSent_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onByteDataSent_33), (void*)value);
	}

	inline static int32_t get_offset_of__onValidatePartialResponse_34() { return static_cast<int32_t>(offsetof(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D, ____onValidatePartialResponse_34)); }
	inline WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * get__onValidatePartialResponse_34() const { return ____onValidatePartialResponse_34; }
	inline WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D ** get_address_of__onValidatePartialResponse_34() { return &____onValidatePartialResponse_34; }
	inline void set__onValidatePartialResponse_34(WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * value)
	{
		____onValidatePartialResponse_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onValidatePartialResponse_34), (void*)value);
	}
};


// Meta.Voice.VoiceRequestState
struct VoiceRequestState_t2D141E064B67ACB096E93544D6EDB53D70DA7A87 
{
public:
	// System.Int32 Meta.Voice.VoiceRequestState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoiceRequestState_t2D141E064B67ACB096E93544D6EDB53D70DA7A87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709  : public UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4
{
public:

public:
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Data.Info.WitAppTrainingStatus
struct WitAppTrainingStatus_tE1AD40C115731E5AFCF95CA2B2E50AA975EA8CA6 
{
public:
	// System.Int32 Meta.WitAi.Data.Info.WitAppTrainingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WitAppTrainingStatus_tE1AD40C115731E5AFCF95CA2B2E50AA975EA8CA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B  : public UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4
{
public:

public:
};


// Meta.WitAi.Requests.WitMessageVRequest
struct WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6  : public WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25
{
public:

public:
};


// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759  : public UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015
{
public:

public:
};


// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E  : public UnityEvent_1_t97BBD372FDB3FCC54138AA078EA6E6A6D286D961
{
public:

public:
};


// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705  : public UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C
{
public:

public:
};


// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D  : public UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3
{
public:

public:
};


// System.Net.HttpWebRequest/NtlmAuthState
struct NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535 
{
public:
	// System.Int32 System.Net.HttpWebRequest/NtlmAuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Meta.Voice.NLPRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPRequestEvents_1_t3FAF79BC8A9130B1F147A5CD3569332D1006E5B9  : public NLPAudioRequestEvents_1_t032DFDCD8D787E451F875356C46C74E89CC44E83
{
public:

public:
};


// Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>
struct VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD  : public RuntimeObject
{
public:
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_2;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	RuntimeObject * ___U3COptionsU3Ek__BackingField_3;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	RuntimeObject * ___U3CEventsU3Ek__BackingField_4;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	RuntimeObject * ___U3CResultsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD, ___U3CStateU3Ek__BackingField_0)); }
	inline int32_t get_U3CStateU3Ek__BackingField_0() const { return ___U3CStateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_0() { return &___U3CStateU3Ek__BackingField_0; }
	inline void set_U3CStateU3Ek__BackingField_0(int32_t value)
	{
		___U3CStateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDownloadProgressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD, ___U3CDownloadProgressU3Ek__BackingField_1)); }
	inline float get_U3CDownloadProgressU3Ek__BackingField_1() const { return ___U3CDownloadProgressU3Ek__BackingField_1; }
	inline float* get_address_of_U3CDownloadProgressU3Ek__BackingField_1() { return &___U3CDownloadProgressU3Ek__BackingField_1; }
	inline void set_U3CDownloadProgressU3Ek__BackingField_1(float value)
	{
		___U3CDownloadProgressU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUploadProgressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD, ___U3CUploadProgressU3Ek__BackingField_2)); }
	inline float get_U3CUploadProgressU3Ek__BackingField_2() const { return ___U3CUploadProgressU3Ek__BackingField_2; }
	inline float* get_address_of_U3CUploadProgressU3Ek__BackingField_2() { return &___U3CUploadProgressU3Ek__BackingField_2; }
	inline void set_U3CUploadProgressU3Ek__BackingField_2(float value)
	{
		___U3CUploadProgressU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD, ___U3COptionsU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3COptionsU3Ek__BackingField_3() const { return ___U3COptionsU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3COptionsU3Ek__BackingField_3() { return &___U3COptionsU3Ek__BackingField_3; }
	inline void set_U3COptionsU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3COptionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD, ___U3CEventsU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CEventsU3Ek__BackingField_4() const { return ___U3CEventsU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CEventsU3Ek__BackingField_4() { return &___U3CEventsU3Ek__BackingField_4; }
	inline void set_U3CEventsU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CEventsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD, ___U3CResultsU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CResultsU3Ek__BackingField_5() const { return ___U3CResultsU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CResultsU3Ek__BackingField_5() { return &___U3CResultsU3Ek__BackingField_5; }
	inline void set_U3CResultsU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CResultsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultsU3Ek__BackingField_5), (void*)value);
	}
};


// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335  : public RuntimeObject
{
public:
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_2;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___U3COptionsU3Ek__BackingField_3;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___U3CEventsU3Ek__BackingField_4;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * ___U3CResultsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CStateU3Ek__BackingField_0)); }
	inline int32_t get_U3CStateU3Ek__BackingField_0() const { return ___U3CStateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_0() { return &___U3CStateU3Ek__BackingField_0; }
	inline void set_U3CStateU3Ek__BackingField_0(int32_t value)
	{
		___U3CStateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDownloadProgressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CDownloadProgressU3Ek__BackingField_1)); }
	inline float get_U3CDownloadProgressU3Ek__BackingField_1() const { return ___U3CDownloadProgressU3Ek__BackingField_1; }
	inline float* get_address_of_U3CDownloadProgressU3Ek__BackingField_1() { return &___U3CDownloadProgressU3Ek__BackingField_1; }
	inline void set_U3CDownloadProgressU3Ek__BackingField_1(float value)
	{
		___U3CDownloadProgressU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUploadProgressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CUploadProgressU3Ek__BackingField_2)); }
	inline float get_U3CUploadProgressU3Ek__BackingField_2() const { return ___U3CUploadProgressU3Ek__BackingField_2; }
	inline float* get_address_of_U3CUploadProgressU3Ek__BackingField_2() { return &___U3CUploadProgressU3Ek__BackingField_2; }
	inline void set_U3CUploadProgressU3Ek__BackingField_2(float value)
	{
		___U3CUploadProgressU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3COptionsU3Ek__BackingField_3)); }
	inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * get_U3COptionsU3Ek__BackingField_3() const { return ___U3COptionsU3Ek__BackingField_3; }
	inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F ** get_address_of_U3COptionsU3Ek__BackingField_3() { return &___U3COptionsU3Ek__BackingField_3; }
	inline void set_U3COptionsU3Ek__BackingField_3(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * value)
	{
		___U3COptionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CEventsU3Ek__BackingField_4)); }
	inline VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * get_U3CEventsU3Ek__BackingField_4() const { return ___U3CEventsU3Ek__BackingField_4; }
	inline VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E ** get_address_of_U3CEventsU3Ek__BackingField_4() { return &___U3CEventsU3Ek__BackingField_4; }
	inline void set_U3CEventsU3Ek__BackingField_4(VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * value)
	{
		___U3CEventsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335, ___U3CResultsU3Ek__BackingField_5)); }
	inline VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * get_U3CResultsU3Ek__BackingField_5() const { return ___U3CResultsU3Ek__BackingField_5; }
	inline VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA ** get_address_of_U3CResultsU3Ek__BackingField_5() { return &___U3CResultsU3Ek__BackingField_5; }
	inline void set_U3CResultsU3Ek__BackingField_5(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * value)
	{
		___U3CResultsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultsU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
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

// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_9;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_10;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_13;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_14;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_15;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_16;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_9() const { return ___caps_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_9() { return &___caps_9; }
	inline void set_caps_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_9), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_10)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_10() const { return ___capnames_10; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_10), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_11() const { return ___capslist_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_11() { return &___capslist_11; }
	inline void set_capslist_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_11), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_runnerref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_13)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_13() const { return ___runnerref_13; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_13() { return &___runnerref_13; }
	inline void set_runnerref_13(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_13), (void*)value);
	}

	inline static int32_t get_offset_of_replref_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_14)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_14() const { return ___replref_14; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_14() { return &___replref_14; }
	inline void set_replref_14(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_14), (void*)value);
	}

	inline static int32_t get_offset_of_code_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_15)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_15() const { return ___code_15; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_15() { return &___code_15; }
	inline void set_code_15(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_15), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_16)); }
	inline bool get_refsInitialized_16() const { return ___refsInitialized_16; }
	inline bool* get_address_of_refsInitialized_16() { return &___refsInitialized_16; }
	inline void set_refsInitialized_16(bool value)
	{
		___refsInitialized_16 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_7;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_8;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_17;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_18;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_7() const { return ___FallbackDefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_7() { return &___FallbackDefaultMatchTimeout_7; }
	inline void set_FallbackDefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_8() const { return ___DefaultMatchTimeout_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_8() { return &___DefaultMatchTimeout_8; }
	inline void set_DefaultMatchTimeout_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_8 = value;
	}

	inline static int32_t get_offset_of_livecode_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_17)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_17() const { return ___livecode_17; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_17() { return &___livecode_17; }
	inline void set_livecode_17(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_17), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_18() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_18)); }
	inline int32_t get_cacheSize_18() const { return ___cacheSize_18; }
	inline int32_t* get_address_of_cacheSize_18() { return &___cacheSize_18; }
	inline void set_cacheSize_18(int32_t value)
	{
		___cacheSize_18 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_23;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_24;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_45;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_46;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_23() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_23() const { return ___m_CommonHeaders_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_23() { return &___m_CommonHeaders_23; }
	inline void set_m_CommonHeaders_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_24() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_24)); }
	inline int32_t get_m_NumCommonHeaders_24() const { return ___m_NumCommonHeaders_24; }
	inline int32_t* get_address_of_m_NumCommonHeaders_24() { return &___m_NumCommonHeaders_24; }
	inline void set_m_NumCommonHeaders_24(int32_t value)
	{
		___m_NumCommonHeaders_24 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_45() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_45)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_45() const { return ___m_InnerCollection_45; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_45() { return &___m_InnerCollection_45; }
	inline void set_m_InnerCollection_45(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_46() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_46)); }
	inline uint16_t get_m_Type_46() const { return ___m_Type_46; }
	inline uint16_t* get_address_of_m_Type_46() { return &___m_Type_46; }
	inline void set_m_Type_46(uint16_t value)
	{
		___m_Type_46 = value;
	}
};

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_22;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_25;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_26;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_47;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_48;

public:
	inline static int32_t get_offset_of_HInfo_22() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_22)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_22() const { return ___HInfo_22; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_22() { return &___HInfo_22; }
	inline void set_HInfo_22(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_25() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_25() const { return ___s_CommonHeaderNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_25() { return &___s_CommonHeaderNames_25; }
	inline void set_s_CommonHeaderNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_26() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_26)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_26() const { return ___s_CommonHeaderHints_26; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_26() { return &___s_CommonHeaderHints_26; }
	inline void set_s_CommonHeaderHints_26(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_26), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_47() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_47)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_47() const { return ___HttpTrimCharacters_47; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_47() { return &___HttpTrimCharacters_47; }
	inline void set_HttpTrimCharacters_47(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_47), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_48() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_48)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_48() const { return ___RfcCharMap_48; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_48() { return &___RfcCharMap_48; }
	inline void set_RfcCharMap_48(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_48), (void*)value);
	}
};


// System.Net.WebRequest
struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_5;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_6;
	// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::m_CachePolicy
	RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * ___m_CachePolicy_7;
	// System.Net.Cache.RequestCacheProtocol System.Net.WebRequest::m_CacheProtocol
	RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 * ___m_CacheProtocol_8;
	// System.Net.Cache.RequestCacheBinding System.Net.WebRequest::m_CacheBinding
	RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 * ___m_CacheBinding_9;

public:
	inline static int32_t get_offset_of_m_AuthenticationLevel_5() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_AuthenticationLevel_5)); }
	inline int32_t get_m_AuthenticationLevel_5() const { return ___m_AuthenticationLevel_5; }
	inline int32_t* get_address_of_m_AuthenticationLevel_5() { return &___m_AuthenticationLevel_5; }
	inline void set_m_AuthenticationLevel_5(int32_t value)
	{
		___m_AuthenticationLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_ImpersonationLevel_6() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_ImpersonationLevel_6)); }
	inline int32_t get_m_ImpersonationLevel_6() const { return ___m_ImpersonationLevel_6; }
	inline int32_t* get_address_of_m_ImpersonationLevel_6() { return &___m_ImpersonationLevel_6; }
	inline void set_m_ImpersonationLevel_6(int32_t value)
	{
		___m_ImpersonationLevel_6 = value;
	}

	inline static int32_t get_offset_of_m_CachePolicy_7() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_CachePolicy_7)); }
	inline RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * get_m_CachePolicy_7() const { return ___m_CachePolicy_7; }
	inline RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED ** get_address_of_m_CachePolicy_7() { return &___m_CachePolicy_7; }
	inline void set_m_CachePolicy_7(RequestCachePolicy_tC080799EE2DA10B7F24B2E69ABBF5636EB2D43ED * value)
	{
		___m_CachePolicy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachePolicy_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheProtocol_8() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_CacheProtocol_8)); }
	inline RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 * get_m_CacheProtocol_8() const { return ___m_CacheProtocol_8; }
	inline RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 ** get_address_of_m_CacheProtocol_8() { return &___m_CacheProtocol_8; }
	inline void set_m_CacheProtocol_8(RequestCacheProtocol_tD3294F615CA528D71DE764785CCE49EBBAD3E2A7 * value)
	{
		___m_CacheProtocol_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheProtocol_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheBinding_9() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_CacheBinding_9)); }
	inline RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 * get_m_CacheBinding_9() const { return ___m_CacheBinding_9; }
	inline RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 ** get_address_of_m_CacheBinding_9() { return &___m_CacheBinding_9; }
	inline void set_m_CacheBinding_9(RequestCacheBinding_tE74959972BA5BEBD27642CC91FD5E4A0A6BFA447 * value)
	{
		___m_CacheBinding_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheBinding_9), (void*)value);
	}
};

struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields
{
public:
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___s_PrefixList_2;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * ___s_DefaultTimerQueue_4;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * ___webRequestCreate_10;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_12;

public:
	inline static int32_t get_offset_of_s_PrefixList_2() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_PrefixList_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_s_PrefixList_2() const { return ___s_PrefixList_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_s_PrefixList_2() { return &___s_PrefixList_2; }
	inline void set_s_PrefixList_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___s_PrefixList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrefixList_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultTimerQueue_4() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultTimerQueue_4)); }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * get_s_DefaultTimerQueue_4() const { return ___s_DefaultTimerQueue_4; }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB ** get_address_of_s_DefaultTimerQueue_4() { return &___s_DefaultTimerQueue_4; }
	inline void set_s_DefaultTimerQueue_4(Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * value)
	{
		___s_DefaultTimerQueue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultTimerQueue_4), (void*)value);
	}

	inline static int32_t get_offset_of_webRequestCreate_10() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___webRequestCreate_10)); }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * get_webRequestCreate_10() const { return ___webRequestCreate_10; }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A ** get_address_of_webRequestCreate_10() { return &___webRequestCreate_10; }
	inline void set_webRequestCreate_10(DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * value)
	{
		___webRequestCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequestCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxy_11() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxy_11)); }
	inline RuntimeObject* get_s_DefaultWebProxy_11() const { return ___s_DefaultWebProxy_11; }
	inline RuntimeObject** get_address_of_s_DefaultWebProxy_11() { return &___s_DefaultWebProxy_11; }
	inline void set_s_DefaultWebProxy_11(RuntimeObject* value)
	{
		___s_DefaultWebProxy_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultWebProxy_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxyInitialized_12() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxyInitialized_12)); }
	inline bool get_s_DefaultWebProxyInitialized_12() const { return ___s_DefaultWebProxyInitialized_12; }
	inline bool* get_address_of_s_DefaultWebProxyInitialized_12() { return &___s_DefaultWebProxyInitialized_12; }
	inline void set_s_DefaultWebProxyInitialized_12(bool value)
	{
		___s_DefaultWebProxyInitialized_12 = value;
	}
};


// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F 
{
public:
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	// Meta.WitAi.Data.Info.WitVersionTagInfo[] Meta.WitAi.Data.Info.WitAppInfo::versionTags
	WitVersionTagInfoU5BU5D_t055499C228409027F28F3D9EF76134E375E6C3BE* ___versionTags_12;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* ___voices_13;
	// Meta.WitAi.Data.Info.WitComposerInfo Meta.WitAi.Data.Info.WitAppInfo::composer
	WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D  ___composer_14;
	// Meta.WitAi.Data.Info.WitCharacterInfo[] Meta.WitAi.Data.Info.WitAppInfo::characters
	WitCharacterInfoU5BU5D_tB6EF90AA27D761156B7C76A0B4612C7B1D8AEEF1* ___characters_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_lang_2() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lang_2)); }
	inline String_t* get_lang_2() const { return ___lang_2; }
	inline String_t** get_address_of_lang_2() { return &___lang_2; }
	inline void set_lang_2(String_t* value)
	{
		___lang_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lang_2), (void*)value);
	}

	inline static int32_t get_offset_of_isPrivate_3() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___isPrivate_3)); }
	inline bool get_isPrivate_3() const { return ___isPrivate_3; }
	inline bool* get_address_of_isPrivate_3() { return &___isPrivate_3; }
	inline void set_isPrivate_3(bool value)
	{
		___isPrivate_3 = value;
	}

	inline static int32_t get_offset_of_createdAt_4() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___createdAt_4)); }
	inline String_t* get_createdAt_4() const { return ___createdAt_4; }
	inline String_t** get_address_of_createdAt_4() { return &___createdAt_4; }
	inline void set_createdAt_4(String_t* value)
	{
		___createdAt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createdAt_4), (void*)value);
	}

	inline static int32_t get_offset_of_trainingStatus_5() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___trainingStatus_5)); }
	inline int32_t get_trainingStatus_5() const { return ___trainingStatus_5; }
	inline int32_t* get_address_of_trainingStatus_5() { return &___trainingStatus_5; }
	inline void set_trainingStatus_5(int32_t value)
	{
		___trainingStatus_5 = value;
	}

	inline static int32_t get_offset_of_lastTrainDuration_6() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lastTrainDuration_6)); }
	inline int32_t get_lastTrainDuration_6() const { return ___lastTrainDuration_6; }
	inline int32_t* get_address_of_lastTrainDuration_6() { return &___lastTrainDuration_6; }
	inline void set_lastTrainDuration_6(int32_t value)
	{
		___lastTrainDuration_6 = value;
	}

	inline static int32_t get_offset_of_lastTrainedAt_7() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___lastTrainedAt_7)); }
	inline String_t* get_lastTrainedAt_7() const { return ___lastTrainedAt_7; }
	inline String_t** get_address_of_lastTrainedAt_7() { return &___lastTrainedAt_7; }
	inline void set_lastTrainedAt_7(String_t* value)
	{
		___lastTrainedAt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastTrainedAt_7), (void*)value);
	}

	inline static int32_t get_offset_of_nextTrainAt_8() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___nextTrainAt_8)); }
	inline String_t* get_nextTrainAt_8() const { return ___nextTrainAt_8; }
	inline String_t** get_address_of_nextTrainAt_8() { return &___nextTrainAt_8; }
	inline void set_nextTrainAt_8(String_t* value)
	{
		___nextTrainAt_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextTrainAt_8), (void*)value);
	}

	inline static int32_t get_offset_of_intents_9() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___intents_9)); }
	inline WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* get_intents_9() const { return ___intents_9; }
	inline WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB** get_address_of_intents_9() { return &___intents_9; }
	inline void set_intents_9(WitIntentInfoU5BU5D_t907483605F080B17229D8E2F5CC2F3C9327739DB* value)
	{
		___intents_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intents_9), (void*)value);
	}

	inline static int32_t get_offset_of_entities_10() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___entities_10)); }
	inline WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* get_entities_10() const { return ___entities_10; }
	inline WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835** get_address_of_entities_10() { return &___entities_10; }
	inline void set_entities_10(WitEntityInfoU5BU5D_tF35266071D8F3C655816FAFED44519D56A649835* value)
	{
		___entities_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_10), (void*)value);
	}

	inline static int32_t get_offset_of_traits_11() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___traits_11)); }
	inline WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* get_traits_11() const { return ___traits_11; }
	inline WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5** get_address_of_traits_11() { return &___traits_11; }
	inline void set_traits_11(WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* value)
	{
		___traits_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___traits_11), (void*)value);
	}

	inline static int32_t get_offset_of_versionTags_12() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___versionTags_12)); }
	inline WitVersionTagInfoU5BU5D_t055499C228409027F28F3D9EF76134E375E6C3BE* get_versionTags_12() const { return ___versionTags_12; }
	inline WitVersionTagInfoU5BU5D_t055499C228409027F28F3D9EF76134E375E6C3BE** get_address_of_versionTags_12() { return &___versionTags_12; }
	inline void set_versionTags_12(WitVersionTagInfoU5BU5D_t055499C228409027F28F3D9EF76134E375E6C3BE* value)
	{
		___versionTags_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___versionTags_12), (void*)value);
	}

	inline static int32_t get_offset_of_voices_13() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___voices_13)); }
	inline WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* get_voices_13() const { return ___voices_13; }
	inline WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282** get_address_of_voices_13() { return &___voices_13; }
	inline void set_voices_13(WitVoiceInfoU5BU5D_t6945BFE4B715F90280C64B87231A49D3145E1282* value)
	{
		___voices_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voices_13), (void*)value);
	}

	inline static int32_t get_offset_of_composer_14() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___composer_14)); }
	inline WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D  get_composer_14() const { return ___composer_14; }
	inline WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D * get_address_of_composer_14() { return &___composer_14; }
	inline void set_composer_14(WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D  value)
	{
		___composer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___composer_14))->___canvases_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_characters_15() { return static_cast<int32_t>(offsetof(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F, ___characters_15)); }
	inline WitCharacterInfoU5BU5D_tB6EF90AA27D761156B7C76A0B4612C7B1D8AEEF1* get_characters_15() const { return ___characters_15; }
	inline WitCharacterInfoU5BU5D_tB6EF90AA27D761156B7C76A0B4612C7B1D8AEEF1** get_address_of_characters_15() { return &___characters_15; }
	inline void set_characters_15(WitCharacterInfoU5BU5D_tB6EF90AA27D761156B7C76A0B4612C7B1D8AEEF1* value)
	{
		___characters_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characters_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	WitVersionTagInfo_t068AD09048FFC457E7C2297E5168859B52502DFB_marshaled_pinvoke* ___versionTags_12;
	WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_pinvoke* ___voices_13;
	WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D_marshaled_pinvoke ___composer_14;
	WitCharacterInfo_t33CC0F60AD57431BBEAF16A0187C3EEB120F32F8_marshaled_pinvoke* ___characters_15;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_t4B4BFE3F8E57C8AD2521619DBF59EACC73CCD320_marshaled_com* ___intents_9;
	WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_t3AB6A2912E5F5B4AD432A3F7030228B6C74316D5* ___traits_11;
	WitVersionTagInfo_t068AD09048FFC457E7C2297E5168859B52502DFB_marshaled_com* ___versionTags_12;
	WitVoiceInfo_tF5D8D9777CC854E844F0080BEF2773CD586D81F6_marshaled_com* ___voices_13;
	WitComposerInfo_t09AA330932A47AE4CDB56A3FD08AE16AF42B836D_marshaled_com ___composer_14;
	WitCharacterInfo_t33CC0F60AD57431BBEAF16A0187C3EEB120F32F8_marshaled_com* ___characters_15;
};

// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 
{
public:
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___request_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_request_0() const { return ___request_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_0), (void*)value);
	}

	inline static int32_t get_offset_of_isProxy_1() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isProxy_1)); }
	inline bool get_isProxy_1() const { return ___isProxy_1; }
	inline bool* get_address_of_isProxy_1() { return &___isProxy_1; }
	inline void set_isProxy_1(bool value)
	{
		___isProxy_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_ntlm_auth_state_3() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___ntlm_auth_state_3)); }
	inline int32_t get_ntlm_auth_state_3() const { return ___ntlm_auth_state_3; }
	inline int32_t* get_address_of_ntlm_auth_state_3() { return &___ntlm_auth_state_3; }
	inline void set_ntlm_auth_state_3(int32_t value)
	{
		___ntlm_auth_state_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_pinvoke
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_com
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>
struct Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>
struct RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C  : public MulticastDelegate_t
{
public:

public:
};


// Meta.Voice.TranscriptionRequest`4<System.Object,System.Object,System.Object,System.Object>
struct TranscriptionRequest_4_t38EF07F38D1F8468DBCEC1EE48064DC6F33D84AE  : public VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD
{
public:
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CAudioInputStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TranscriptionRequest_4_t38EF07F38D1F8468DBCEC1EE48064DC6F33D84AE, ___U3CAudioInputStateU3Ek__BackingField_6)); }
	inline int32_t get_U3CAudioInputStateU3Ek__BackingField_6() const { return ___U3CAudioInputStateU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CAudioInputStateU3Ek__BackingField_6() { return &___U3CAudioInputStateU3Ek__BackingField_6; }
	inline void set_U3CAudioInputStateU3Ek__BackingField_6(int32_t value)
	{
		___U3CAudioInputStateU3Ek__BackingField_6 = value;
	}
};


// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17  : public VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335
{
public:
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CAudioInputStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17, ___U3CAudioInputStateU3Ek__BackingField_6)); }
	inline int32_t get_U3CAudioInputStateU3Ek__BackingField_6() const { return ___U3CAudioInputStateU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CAudioInputStateU3Ek__BackingField_6() { return &___U3CAudioInputStateU3Ek__BackingField_6; }
	inline void set_U3CAudioInputStateU3Ek__BackingField_6(int32_t value)
	{
		___U3CAudioInputStateU3Ek__BackingField_6 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A  : public WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___requestUri_13;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___actualUri_14;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_15;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_16;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_17;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___certificates_18;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_19;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_20;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_21;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * ___continueDelegate_22;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * ___cookieContainer_23;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_24;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_25;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_26;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___webHeaders_27;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_28;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_29;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_30;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_31;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_32;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_33;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_34;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_35;
	// System.Version System.Net.HttpWebRequest::version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_36;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_37;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___actualVersion_38;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_39;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_40;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___servicePoint_41;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_42;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___writeStream_43;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___webResponse_44;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___responseTask_45;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___currentOperation_46;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_47;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_48;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_49;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_50;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_51;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_52;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_53;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_54;
	// System.Int32 System.Net.HttpWebRequest::maxResponseHeadersLength
	int32_t ___maxResponseHeadersLength_55;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_57;
	// Mono.Security.Interface.MonoTlsProvider System.Net.HttpWebRequest::tlsProvider
	MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * ___tlsProvider_58;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * ___tlsSettings_59;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * ___certValidationCallback_60;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___auth_state_61;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___proxy_auth_state_62;
	// System.String System.Net.HttpWebRequest::host
	String_t* ___host_63;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * ___ResendContentFactory_64;
	// System.Int32 System.Net.HttpWebRequest::ID
	int32_t ___ID_65;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_66;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_67;
	// System.Boolean System.Net.HttpWebRequest::<ReuseConnection>k__BackingField
	bool ___U3CReuseConnectionU3Ek__BackingField_68;

public:
	inline static int32_t get_offset_of_requestUri_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestUri_13)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_requestUri_13() const { return ___requestUri_13; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_requestUri_13() { return &___requestUri_13; }
	inline void set_requestUri_13(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___requestUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_actualUri_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualUri_14)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_actualUri_14() const { return ___actualUri_14; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_actualUri_14() { return &___actualUri_14; }
	inline void set_actualUri_14(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___actualUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_hostChanged_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___hostChanged_15)); }
	inline bool get_hostChanged_15() const { return ___hostChanged_15; }
	inline bool* get_address_of_hostChanged_15() { return &___hostChanged_15; }
	inline void set_hostChanged_15(bool value)
	{
		___hostChanged_15 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowAutoRedirect_16)); }
	inline bool get_allowAutoRedirect_16() const { return ___allowAutoRedirect_16; }
	inline bool* get_address_of_allowAutoRedirect_16() { return &___allowAutoRedirect_16; }
	inline void set_allowAutoRedirect_16(bool value)
	{
		___allowAutoRedirect_16 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowBuffering_17)); }
	inline bool get_allowBuffering_17() const { return ___allowBuffering_17; }
	inline bool* get_address_of_allowBuffering_17() { return &___allowBuffering_17; }
	inline void set_allowBuffering_17(bool value)
	{
		___allowBuffering_17 = value;
	}

	inline static int32_t get_offset_of_certificates_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certificates_18)); }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * get_certificates_18() const { return ___certificates_18; }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B ** get_address_of_certificates_18() { return &___certificates_18; }
	inline void set_certificates_18(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * value)
	{
		___certificates_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificates_18), (void*)value);
	}

	inline static int32_t get_offset_of_connectionGroup_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___connectionGroup_19)); }
	inline String_t* get_connectionGroup_19() const { return ___connectionGroup_19; }
	inline String_t** get_address_of_connectionGroup_19() { return &___connectionGroup_19; }
	inline void set_connectionGroup_19(String_t* value)
	{
		___connectionGroup_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionGroup_19), (void*)value);
	}

	inline static int32_t get_offset_of_haveContentLength_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveContentLength_20)); }
	inline bool get_haveContentLength_20() const { return ___haveContentLength_20; }
	inline bool* get_address_of_haveContentLength_20() { return &___haveContentLength_20; }
	inline void set_haveContentLength_20(bool value)
	{
		___haveContentLength_20 = value;
	}

	inline static int32_t get_offset_of_contentLength_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___contentLength_21)); }
	inline int64_t get_contentLength_21() const { return ___contentLength_21; }
	inline int64_t* get_address_of_contentLength_21() { return &___contentLength_21; }
	inline void set_contentLength_21(int64_t value)
	{
		___contentLength_21 = value;
	}

	inline static int32_t get_offset_of_continueDelegate_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___continueDelegate_22)); }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * get_continueDelegate_22() const { return ___continueDelegate_22; }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F ** get_address_of_continueDelegate_22() { return &___continueDelegate_22; }
	inline void set_continueDelegate_22(HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * value)
	{
		___continueDelegate_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueDelegate_22), (void*)value);
	}

	inline static int32_t get_offset_of_cookieContainer_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___cookieContainer_23)); }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * get_cookieContainer_23() const { return ___cookieContainer_23; }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 ** get_address_of_cookieContainer_23() { return &___cookieContainer_23; }
	inline void set_cookieContainer_23(CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * value)
	{
		___cookieContainer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookieContainer_23), (void*)value);
	}

	inline static int32_t get_offset_of_credentials_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___credentials_24)); }
	inline RuntimeObject* get_credentials_24() const { return ___credentials_24; }
	inline RuntimeObject** get_address_of_credentials_24() { return &___credentials_24; }
	inline void set_credentials_24(RuntimeObject* value)
	{
		___credentials_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credentials_24), (void*)value);
	}

	inline static int32_t get_offset_of_haveResponse_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveResponse_25)); }
	inline bool get_haveResponse_25() const { return ___haveResponse_25; }
	inline bool* get_address_of_haveResponse_25() { return &___haveResponse_25; }
	inline void set_haveResponse_25(bool value)
	{
		___haveResponse_25 = value;
	}

	inline static int32_t get_offset_of_requestSent_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestSent_26)); }
	inline bool get_requestSent_26() const { return ___requestSent_26; }
	inline bool* get_address_of_requestSent_26() { return &___requestSent_26; }
	inline void set_requestSent_26(bool value)
	{
		___requestSent_26 = value;
	}

	inline static int32_t get_offset_of_webHeaders_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webHeaders_27)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_webHeaders_27() const { return ___webHeaders_27; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_webHeaders_27() { return &___webHeaders_27; }
	inline void set_webHeaders_27(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___webHeaders_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webHeaders_27), (void*)value);
	}

	inline static int32_t get_offset_of_keepAlive_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___keepAlive_28)); }
	inline bool get_keepAlive_28() const { return ___keepAlive_28; }
	inline bool* get_address_of_keepAlive_28() { return &___keepAlive_28; }
	inline void set_keepAlive_28(bool value)
	{
		___keepAlive_28 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___maxAutoRedirect_29)); }
	inline int32_t get_maxAutoRedirect_29() const { return ___maxAutoRedirect_29; }
	inline int32_t* get_address_of_maxAutoRedirect_29() { return &___maxAutoRedirect_29; }
	inline void set_maxAutoRedirect_29(int32_t value)
	{
		___maxAutoRedirect_29 = value;
	}

	inline static int32_t get_offset_of_mediaType_30() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___mediaType_30)); }
	inline String_t* get_mediaType_30() const { return ___mediaType_30; }
	inline String_t** get_address_of_mediaType_30() { return &___mediaType_30; }
	inline void set_mediaType_30(String_t* value)
	{
		___mediaType_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaType_30), (void*)value);
	}

	inline static int32_t get_offset_of_method_31() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___method_31)); }
	inline String_t* get_method_31() const { return ___method_31; }
	inline String_t** get_address_of_method_31() { return &___method_31; }
	inline void set_method_31(String_t* value)
	{
		___method_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_31), (void*)value);
	}

	inline static int32_t get_offset_of_initialMethod_32() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___initialMethod_32)); }
	inline String_t* get_initialMethod_32() const { return ___initialMethod_32; }
	inline String_t** get_address_of_initialMethod_32() { return &___initialMethod_32; }
	inline void set_initialMethod_32(String_t* value)
	{
		___initialMethod_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialMethod_32), (void*)value);
	}

	inline static int32_t get_offset_of_pipelined_33() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___pipelined_33)); }
	inline bool get_pipelined_33() const { return ___pipelined_33; }
	inline bool* get_address_of_pipelined_33() { return &___pipelined_33; }
	inline void set_pipelined_33(bool value)
	{
		___pipelined_33 = value;
	}

	inline static int32_t get_offset_of_preAuthenticate_34() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___preAuthenticate_34)); }
	inline bool get_preAuthenticate_34() const { return ___preAuthenticate_34; }
	inline bool* get_address_of_preAuthenticate_34() { return &___preAuthenticate_34; }
	inline void set_preAuthenticate_34(bool value)
	{
		___preAuthenticate_34 = value;
	}

	inline static int32_t get_offset_of_usedPreAuth_35() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___usedPreAuth_35)); }
	inline bool get_usedPreAuth_35() const { return ___usedPreAuth_35; }
	inline bool* get_address_of_usedPreAuth_35() { return &___usedPreAuth_35; }
	inline void set_usedPreAuth_35(bool value)
	{
		___usedPreAuth_35 = value;
	}

	inline static int32_t get_offset_of_version_36() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___version_36)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_version_36() const { return ___version_36; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_version_36() { return &___version_36; }
	inline void set_version_36(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___version_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_36), (void*)value);
	}

	inline static int32_t get_offset_of_force_version_37() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___force_version_37)); }
	inline bool get_force_version_37() const { return ___force_version_37; }
	inline bool* get_address_of_force_version_37() { return &___force_version_37; }
	inline void set_force_version_37(bool value)
	{
		___force_version_37 = value;
	}

	inline static int32_t get_offset_of_actualVersion_38() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualVersion_38)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_actualVersion_38() const { return ___actualVersion_38; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_actualVersion_38() { return &___actualVersion_38; }
	inline void set_actualVersion_38(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___actualVersion_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualVersion_38), (void*)value);
	}

	inline static int32_t get_offset_of_proxy_39() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_39)); }
	inline RuntimeObject* get_proxy_39() const { return ___proxy_39; }
	inline RuntimeObject** get_address_of_proxy_39() { return &___proxy_39; }
	inline void set_proxy_39(RuntimeObject* value)
	{
		___proxy_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxy_39), (void*)value);
	}

	inline static int32_t get_offset_of_sendChunked_40() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___sendChunked_40)); }
	inline bool get_sendChunked_40() const { return ___sendChunked_40; }
	inline bool* get_address_of_sendChunked_40() { return &___sendChunked_40; }
	inline void set_sendChunked_40(bool value)
	{
		___sendChunked_40 = value;
	}

	inline static int32_t get_offset_of_servicePoint_41() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___servicePoint_41)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_servicePoint_41() const { return ___servicePoint_41; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_servicePoint_41() { return &___servicePoint_41; }
	inline void set_servicePoint_41(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___servicePoint_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___servicePoint_41), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_42() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___timeout_42)); }
	inline int32_t get_timeout_42() const { return ___timeout_42; }
	inline int32_t* get_address_of_timeout_42() { return &___timeout_42; }
	inline void set_timeout_42(int32_t value)
	{
		___timeout_42 = value;
	}

	inline static int32_t get_offset_of_writeStream_43() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___writeStream_43)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_writeStream_43() const { return ___writeStream_43; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_writeStream_43() { return &___writeStream_43; }
	inline void set_writeStream_43(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___writeStream_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeStream_43), (void*)value);
	}

	inline static int32_t get_offset_of_webResponse_44() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webResponse_44)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_webResponse_44() const { return ___webResponse_44; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_webResponse_44() { return &___webResponse_44; }
	inline void set_webResponse_44(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___webResponse_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webResponse_44), (void*)value);
	}

	inline static int32_t get_offset_of_responseTask_45() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___responseTask_45)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_responseTask_45() const { return ___responseTask_45; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_responseTask_45() { return &___responseTask_45; }
	inline void set_responseTask_45(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___responseTask_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseTask_45), (void*)value);
	}

	inline static int32_t get_offset_of_currentOperation_46() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___currentOperation_46)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_currentOperation_46() const { return ___currentOperation_46; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_currentOperation_46() { return &___currentOperation_46; }
	inline void set_currentOperation_46(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___currentOperation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentOperation_46), (void*)value);
	}

	inline static int32_t get_offset_of_aborted_47() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___aborted_47)); }
	inline int32_t get_aborted_47() const { return ___aborted_47; }
	inline int32_t* get_address_of_aborted_47() { return &___aborted_47; }
	inline void set_aborted_47(int32_t value)
	{
		___aborted_47 = value;
	}

	inline static int32_t get_offset_of_gotRequestStream_48() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___gotRequestStream_48)); }
	inline bool get_gotRequestStream_48() const { return ___gotRequestStream_48; }
	inline bool* get_address_of_gotRequestStream_48() { return &___gotRequestStream_48; }
	inline void set_gotRequestStream_48(bool value)
	{
		___gotRequestStream_48 = value;
	}

	inline static int32_t get_offset_of_redirects_49() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___redirects_49)); }
	inline int32_t get_redirects_49() const { return ___redirects_49; }
	inline int32_t* get_address_of_redirects_49() { return &___redirects_49; }
	inline void set_redirects_49(int32_t value)
	{
		___redirects_49 = value;
	}

	inline static int32_t get_offset_of_expectContinue_50() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___expectContinue_50)); }
	inline bool get_expectContinue_50() const { return ___expectContinue_50; }
	inline bool* get_address_of_expectContinue_50() { return &___expectContinue_50; }
	inline void set_expectContinue_50(bool value)
	{
		___expectContinue_50 = value;
	}

	inline static int32_t get_offset_of_getResponseCalled_51() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___getResponseCalled_51)); }
	inline bool get_getResponseCalled_51() const { return ___getResponseCalled_51; }
	inline bool* get_address_of_getResponseCalled_51() { return &___getResponseCalled_51; }
	inline void set_getResponseCalled_51(bool value)
	{
		___getResponseCalled_51 = value;
	}

	inline static int32_t get_offset_of_locker_52() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___locker_52)); }
	inline RuntimeObject * get_locker_52() const { return ___locker_52; }
	inline RuntimeObject ** get_address_of_locker_52() { return &___locker_52; }
	inline void set_locker_52(RuntimeObject * value)
	{
		___locker_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_52), (void*)value);
	}

	inline static int32_t get_offset_of_finished_reading_53() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___finished_reading_53)); }
	inline bool get_finished_reading_53() const { return ___finished_reading_53; }
	inline bool* get_address_of_finished_reading_53() { return &___finished_reading_53; }
	inline void set_finished_reading_53(bool value)
	{
		___finished_reading_53 = value;
	}

	inline static int32_t get_offset_of_auto_decomp_54() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auto_decomp_54)); }
	inline int32_t get_auto_decomp_54() const { return ___auto_decomp_54; }
	inline int32_t* get_address_of_auto_decomp_54() { return &___auto_decomp_54; }
	inline void set_auto_decomp_54(int32_t value)
	{
		___auto_decomp_54 = value;
	}

	inline static int32_t get_offset_of_maxResponseHeadersLength_55() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___maxResponseHeadersLength_55)); }
	inline int32_t get_maxResponseHeadersLength_55() const { return ___maxResponseHeadersLength_55; }
	inline int32_t* get_address_of_maxResponseHeadersLength_55() { return &___maxResponseHeadersLength_55; }
	inline void set_maxResponseHeadersLength_55(int32_t value)
	{
		___maxResponseHeadersLength_55 = value;
	}

	inline static int32_t get_offset_of_readWriteTimeout_57() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___readWriteTimeout_57)); }
	inline int32_t get_readWriteTimeout_57() const { return ___readWriteTimeout_57; }
	inline int32_t* get_address_of_readWriteTimeout_57() { return &___readWriteTimeout_57; }
	inline void set_readWriteTimeout_57(int32_t value)
	{
		___readWriteTimeout_57 = value;
	}

	inline static int32_t get_offset_of_tlsProvider_58() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsProvider_58)); }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * get_tlsProvider_58() const { return ___tlsProvider_58; }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 ** get_address_of_tlsProvider_58() { return &___tlsProvider_58; }
	inline void set_tlsProvider_58(MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * value)
	{
		___tlsProvider_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsProvider_58), (void*)value);
	}

	inline static int32_t get_offset_of_tlsSettings_59() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsSettings_59)); }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * get_tlsSettings_59() const { return ___tlsSettings_59; }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 ** get_address_of_tlsSettings_59() { return &___tlsSettings_59; }
	inline void set_tlsSettings_59(MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * value)
	{
		___tlsSettings_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsSettings_59), (void*)value);
	}

	inline static int32_t get_offset_of_certValidationCallback_60() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certValidationCallback_60)); }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * get_certValidationCallback_60() const { return ___certValidationCallback_60; }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA ** get_address_of_certValidationCallback_60() { return &___certValidationCallback_60; }
	inline void set_certValidationCallback_60(ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * value)
	{
		___certValidationCallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certValidationCallback_60), (void*)value);
	}

	inline static int32_t get_offset_of_auth_state_61() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auth_state_61)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_auth_state_61() const { return ___auth_state_61; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_auth_state_61() { return &___auth_state_61; }
	inline void set_auth_state_61(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___auth_state_61 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___auth_state_61))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_proxy_auth_state_62() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_auth_state_62)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_proxy_auth_state_62() const { return ___proxy_auth_state_62; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_proxy_auth_state_62() { return &___proxy_auth_state_62; }
	inline void set_proxy_auth_state_62(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___proxy_auth_state_62 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___proxy_auth_state_62))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_host_63() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___host_63)); }
	inline String_t* get_host_63() const { return ___host_63; }
	inline String_t** get_address_of_host_63() { return &___host_63; }
	inline void set_host_63(String_t* value)
	{
		___host_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_63), (void*)value);
	}

	inline static int32_t get_offset_of_ResendContentFactory_64() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___ResendContentFactory_64)); }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * get_ResendContentFactory_64() const { return ___ResendContentFactory_64; }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 ** get_address_of_ResendContentFactory_64() { return &___ResendContentFactory_64; }
	inline void set_ResendContentFactory_64(Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * value)
	{
		___ResendContentFactory_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResendContentFactory_64), (void*)value);
	}

	inline static int32_t get_offset_of_ID_65() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___ID_65)); }
	inline int32_t get_ID_65() const { return ___ID_65; }
	inline int32_t* get_address_of_ID_65() { return &___ID_65; }
	inline void set_ID_65(int32_t value)
	{
		___ID_65 = value;
	}

	inline static int32_t get_offset_of_U3CThrowOnErrorU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___U3CThrowOnErrorU3Ek__BackingField_66)); }
	inline bool get_U3CThrowOnErrorU3Ek__BackingField_66() const { return ___U3CThrowOnErrorU3Ek__BackingField_66; }
	inline bool* get_address_of_U3CThrowOnErrorU3Ek__BackingField_66() { return &___U3CThrowOnErrorU3Ek__BackingField_66; }
	inline void set_U3CThrowOnErrorU3Ek__BackingField_66(bool value)
	{
		___U3CThrowOnErrorU3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_unsafe_auth_blah_67() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___unsafe_auth_blah_67)); }
	inline bool get_unsafe_auth_blah_67() const { return ___unsafe_auth_blah_67; }
	inline bool* get_address_of_unsafe_auth_blah_67() { return &___unsafe_auth_blah_67; }
	inline void set_unsafe_auth_blah_67(bool value)
	{
		___unsafe_auth_blah_67 = value;
	}

	inline static int32_t get_offset_of_U3CReuseConnectionU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___U3CReuseConnectionU3Ek__BackingField_68)); }
	inline bool get_U3CReuseConnectionU3Ek__BackingField_68() const { return ___U3CReuseConnectionU3Ek__BackingField_68; }
	inline bool* get_address_of_U3CReuseConnectionU3Ek__BackingField_68() { return &___U3CReuseConnectionU3Ek__BackingField_68; }
	inline void set_U3CReuseConnectionU3Ek__BackingField_68(bool value)
	{
		___U3CReuseConnectionU3Ek__BackingField_68 = value;
	}
};

struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_56;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_56() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields, ___defaultMaxResponseHeadersLength_56)); }
	inline int32_t get_defaultMaxResponseHeadersLength_56() const { return ___defaultMaxResponseHeadersLength_56; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_56() { return &___defaultMaxResponseHeadersLength_56; }
	inline void set_defaultMaxResponseHeadersLength_56(int32_t value)
	{
		___defaultMaxResponseHeadersLength_56 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E  : public NLPRequestEvents_1_t3FAF79BC8A9130B1F147A5CD3569332D1006E5B9
{
public:

public:
};


// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  ____appInfo_5;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_6;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * ___endpointConfiguration_8;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_10;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_11;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___excludedAssemblies_12;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::relaxedResolution
	bool ___relaxedResolution_13;

public:
	inline static int32_t get_offset_of__clientAccessToken_4() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____clientAccessToken_4)); }
	inline String_t* get__clientAccessToken_4() const { return ____clientAccessToken_4; }
	inline String_t** get_address_of__clientAccessToken_4() { return &____clientAccessToken_4; }
	inline void set__clientAccessToken_4(String_t* value)
	{
		____clientAccessToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clientAccessToken_4), (void*)value);
	}

	inline static int32_t get_offset_of__appInfo_5() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____appInfo_5)); }
	inline WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  get__appInfo_5() const { return ____appInfo_5; }
	inline WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F * get_address_of__appInfo_5() { return &____appInfo_5; }
	inline void set__appInfo_5(WitAppInfo_t77DF5B2F43DF1D0C10EEDD809E18D0942C58995F  value)
	{
		____appInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___lang_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___createdAt_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___lastTrainedAt_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___nextTrainAt_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___intents_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___entities_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___traits_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___versionTags_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___voices_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____appInfo_5))->___composer_14))->___canvases_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____appInfo_5))->___characters_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__configurationId_6() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____configurationId_6)); }
	inline String_t* get__configurationId_6() const { return ____configurationId_6; }
	inline String_t** get_address_of__configurationId_6() { return &____configurationId_6; }
	inline void set__configurationId_6(String_t* value)
	{
		____configurationId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____configurationId_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutMS_7() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___timeoutMS_7)); }
	inline int32_t get_timeoutMS_7() const { return ___timeoutMS_7; }
	inline int32_t* get_address_of_timeoutMS_7() { return &___timeoutMS_7; }
	inline void set_timeoutMS_7(int32_t value)
	{
		___timeoutMS_7 = value;
	}

	inline static int32_t get_offset_of_endpointConfiguration_8() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___endpointConfiguration_8)); }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * get_endpointConfiguration_8() const { return ___endpointConfiguration_8; }
	inline WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F ** get_address_of_endpointConfiguration_8() { return &___endpointConfiguration_8; }
	inline void set_endpointConfiguration_8(WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * value)
	{
		___endpointConfiguration_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endpointConfiguration_8), (void*)value);
	}

	inline static int32_t get_offset_of_isDemoOnly_9() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___isDemoOnly_9)); }
	inline bool get_isDemoOnly_9() const { return ___isDemoOnly_9; }
	inline bool* get_address_of_isDemoOnly_9() { return &___isDemoOnly_9; }
	inline void set_isDemoOnly_9(bool value)
	{
		___isDemoOnly_9 = value;
	}

	inline static int32_t get_offset_of_useConduit_10() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___useConduit_10)); }
	inline bool get_useConduit_10() const { return ___useConduit_10; }
	inline bool* get_address_of_useConduit_10() { return &___useConduit_10; }
	inline void set_useConduit_10(bool value)
	{
		___useConduit_10 = value;
	}

	inline static int32_t get_offset_of__manifestLocalPath_11() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ____manifestLocalPath_11)); }
	inline String_t* get__manifestLocalPath_11() const { return ____manifestLocalPath_11; }
	inline String_t** get_address_of__manifestLocalPath_11() { return &____manifestLocalPath_11; }
	inline void set__manifestLocalPath_11(String_t* value)
	{
		____manifestLocalPath_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manifestLocalPath_11), (void*)value);
	}

	inline static int32_t get_offset_of_excludedAssemblies_12() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___excludedAssemblies_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_excludedAssemblies_12() const { return ___excludedAssemblies_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_excludedAssemblies_12() { return &___excludedAssemblies_12; }
	inline void set_excludedAssemblies_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___excludedAssemblies_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___excludedAssemblies_12), (void*)value);
	}

	inline static int32_t get_offset_of_relaxedResolution_13() { return static_cast<int32_t>(offsetof(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564, ___relaxedResolution_13)); }
	inline bool get_relaxedResolution_13() const { return ___relaxedResolution_13; }
	inline bool* get_address_of_relaxedResolution_13() { return &___relaxedResolution_13; }
	inline void set_relaxedResolution_13(bool value)
	{
		___relaxedResolution_13 = value;
	}
};


// Meta.WitAi.Data.WitValue
struct WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Meta.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::reference
	WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * ___reference_5;

public:
	inline static int32_t get_offset_of_path_4() { return static_cast<int32_t>(offsetof(WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7, ___path_4)); }
	inline String_t* get_path_4() const { return ___path_4; }
	inline String_t** get_address_of_path_4() { return &___path_4; }
	inline void set_path_4(String_t* value)
	{
		___path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_4), (void*)value);
	}

	inline static int32_t get_offset_of_reference_5() { return static_cast<int32_t>(offsetof(WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7, ___reference_5)); }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * get_reference_5() const { return ___reference_5; }
	inline WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A ** get_address_of_reference_5() { return &___reference_5; }
	inline void set_reference_5(WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * value)
	{
		___reference_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_5), (void*)value);
	}
};


// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate
struct RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB  : public MulticastDelegate_t
{
public:

public:
};


// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B  : public MulticastDelegate_t
{
public:

public:
};


// Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8  : public TranscriptionRequest_4_t38EF07F38D1F8468DBCEC1EE48064DC6F33D84AE
{
public:
	// System.Boolean Meta.Voice.NLPAudioRequest`4::_isFinalized
	bool ____isFinalized_7;

public:
	inline static int32_t get_offset_of__isFinalized_7() { return static_cast<int32_t>(offsetof(NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8, ____isFinalized_7)); }
	inline bool get__isFinalized_7() const { return ____isFinalized_7; }
	inline bool* get_address_of__isFinalized_7() { return &____isFinalized_7; }
	inline void set__isFinalized_7(bool value)
	{
		____isFinalized_7 = value;
	}
};


// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305  : public TranscriptionRequest_4_t48CE42F3DAAA291D18A3C2E068FD5D44F09B4E17
{
public:
	// System.Boolean Meta.Voice.NLPAudioRequest`4::_isFinalized
	bool ____isFinalized_7;

public:
	inline static int32_t get_offset_of__isFinalized_7() { return static_cast<int32_t>(offsetof(NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305, ____isFinalized_7)); }
	inline bool get__isFinalized_7() const { return ____isFinalized_7; }
	inline bool* get_address_of__isFinalized_7() { return &____isFinalized_7; }
	inline void set__isFinalized_7(bool value)
	{
		____isFinalized_7 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Meta.WitAi.Data.WitStringValue
struct WitStringValue_t480E5A89271EB8C48704B5990F34336DF2EAD4BB  : public WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7
{
public:

public:
};


// Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0  : public NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8
{
public:
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_8;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_9;

public:
	inline static int32_t get_offset_of_U3CInputTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0, ___U3CInputTypeU3Ek__BackingField_8)); }
	inline int32_t get_U3CInputTypeU3Ek__BackingField_8() const { return ___U3CInputTypeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CInputTypeU3Ek__BackingField_8() { return &___U3CInputTypeU3Ek__BackingField_8; }
	inline void set_U3CInputTypeU3Ek__BackingField_8(int32_t value)
	{
		___U3CInputTypeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of__initialized_9() { return static_cast<int32_t>(offsetof(NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0, ____initialized_9)); }
	inline bool get__initialized_9() const { return ____initialized_9; }
	inline bool* get_address_of__initialized_9() { return &____initialized_9; }
	inline void set__initialized_9(bool value)
	{
		____initialized_9 = value;
	}
};


// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884  : public NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305
{
public:
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_8;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_9;

public:
	inline static int32_t get_offset_of_U3CInputTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884, ___U3CInputTypeU3Ek__BackingField_8)); }
	inline int32_t get_U3CInputTypeU3Ek__BackingField_8() const { return ___U3CInputTypeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CInputTypeU3Ek__BackingField_8() { return &___U3CInputTypeU3Ek__BackingField_8; }
	inline void set_U3CInputTypeU3Ek__BackingField_8(int32_t value)
	{
		___U3CInputTypeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of__initialized_9() { return static_cast<int32_t>(offsetof(NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884, ____initialized_9)); }
	inline bool get__initialized_9() const { return ____initialized_9; }
	inline bool* get_address_of__initialized_9() { return &____initialized_9; }
	inline void set__initialized_9(bool value)
	{
		____initialized_9 = value;
	}
};


// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Meta.WitAi.Data.AudioBuffer::alwaysRecording
	bool ___alwaysRecording_5;
	// Meta.WitAi.Data.AudioBufferConfiguration Meta.WitAi.Data.AudioBuffer::audioBufferConfiguration
	AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * ___audioBufferConfiguration_6;
	// Meta.WitAi.Events.AudioBufferEvents Meta.WitAi.Data.AudioBuffer::events
	AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E * ___events_7;
	// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::_micInput
	RuntimeObject* ____micInput_8;
	// Meta.WitAi.Data.RingBuffer`1<System.Byte> Meta.WitAi.Data.AudioBuffer::_micDataBuffer
	RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * ____micDataBuffer_9;
	// System.Byte[] Meta.WitAi.Data.AudioBuffer::_byteDataBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____byteDataBuffer_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_waitingRecorders
	HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * ____waitingRecorders_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_activeRecorders
	HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * ____activeRecorders_12;

public:
	inline static int32_t get_offset_of_alwaysRecording_5() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ___alwaysRecording_5)); }
	inline bool get_alwaysRecording_5() const { return ___alwaysRecording_5; }
	inline bool* get_address_of_alwaysRecording_5() { return &___alwaysRecording_5; }
	inline void set_alwaysRecording_5(bool value)
	{
		___alwaysRecording_5 = value;
	}

	inline static int32_t get_offset_of_audioBufferConfiguration_6() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ___audioBufferConfiguration_6)); }
	inline AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * get_audioBufferConfiguration_6() const { return ___audioBufferConfiguration_6; }
	inline AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F ** get_address_of_audioBufferConfiguration_6() { return &___audioBufferConfiguration_6; }
	inline void set_audioBufferConfiguration_6(AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * value)
	{
		___audioBufferConfiguration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioBufferConfiguration_6), (void*)value);
	}

	inline static int32_t get_offset_of_events_7() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ___events_7)); }
	inline AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E * get_events_7() const { return ___events_7; }
	inline AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E ** get_address_of_events_7() { return &___events_7; }
	inline void set_events_7(AudioBufferEvents_t5294EE2126F065957AD72BADF54E7D11591EC39E * value)
	{
		___events_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_7), (void*)value);
	}

	inline static int32_t get_offset_of__micInput_8() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____micInput_8)); }
	inline RuntimeObject* get__micInput_8() const { return ____micInput_8; }
	inline RuntimeObject** get_address_of__micInput_8() { return &____micInput_8; }
	inline void set__micInput_8(RuntimeObject* value)
	{
		____micInput_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micInput_8), (void*)value);
	}

	inline static int32_t get_offset_of__micDataBuffer_9() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____micDataBuffer_9)); }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * get__micDataBuffer_9() const { return ____micDataBuffer_9; }
	inline RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 ** get_address_of__micDataBuffer_9() { return &____micDataBuffer_9; }
	inline void set__micDataBuffer_9(RingBuffer_1_t8D1AE99B6228C7D9B1C835DA4436DEBE9AEA1633 * value)
	{
		____micDataBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micDataBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__byteDataBuffer_10() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____byteDataBuffer_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__byteDataBuffer_10() const { return ____byteDataBuffer_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__byteDataBuffer_10() { return &____byteDataBuffer_10; }
	inline void set__byteDataBuffer_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____byteDataBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byteDataBuffer_10), (void*)value);
	}

	inline static int32_t get_offset_of__waitingRecorders_11() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____waitingRecorders_11)); }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * get__waitingRecorders_11() const { return ____waitingRecorders_11; }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 ** get_address_of__waitingRecorders_11() { return &____waitingRecorders_11; }
	inline void set__waitingRecorders_11(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * value)
	{
		____waitingRecorders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitingRecorders_11), (void*)value);
	}

	inline static int32_t get_offset_of__activeRecorders_12() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB, ____activeRecorders_12)); }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * get__activeRecorders_12() const { return ____activeRecorders_12; }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 ** get_address_of__activeRecorders_12() { return &____activeRecorders_12; }
	inline void set__activeRecorders_12(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * value)
	{
		____activeRecorders_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeRecorders_12), (void*)value);
	}
};

struct AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB_StaticFields
{
public:
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer::_instance
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB_StaticFields, ____instance_4)); }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * get__instance_4() const { return ____instance_4; }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// AudioClipAudioSource
struct AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource AudioClipAudioSource::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> AudioClipAudioSource::_audioClips
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ____audioClips_5;
	// System.Boolean AudioClipAudioSource::_loopRequests
	bool ____loopRequests_6;
	// System.Boolean AudioClipAudioSource::_isRecording
	bool ____isRecording_7;
	// System.Collections.Generic.Queue`1<System.Int32> AudioClipAudioSource::_audioQueue
	Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * ____audioQueue_8;
	// System.Int32 AudioClipAudioSource::clipIndex
	int32_t ___clipIndex_9;
	// System.Single[] AudioClipAudioSource::activeClip
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___activeClip_10;
	// System.Int32 AudioClipAudioSource::activeClipIndex
	int32_t ___activeClipIndex_11;
	// System.Single[] AudioClipAudioSource::activeClipBuffer
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___activeClipBuffer_12;
	// System.Collections.Generic.List`1<System.Single[]> AudioClipAudioSource::clipData
	List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * ___clipData_13;
	// System.Action AudioClipAudioSource::OnStartRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecording_14;
	// System.Action AudioClipAudioSource::OnStartRecordingFailed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecordingFailed_15;
	// System.Action`3<System.Int32,System.Single[],System.Single> AudioClipAudioSource::OnSampleReady
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * ___OnSampleReady_16;
	// System.Action AudioClipAudioSource::OnStopRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStopRecording_17;

public:
	inline static int32_t get_offset_of__audioSource_4() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_4() const { return ____audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_4() { return &____audioSource_4; }
	inline void set__audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of__audioClips_5() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____audioClips_5)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get__audioClips_5() const { return ____audioClips_5; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of__audioClips_5() { return &____audioClips_5; }
	inline void set__audioClips_5(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		____audioClips_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioClips_5), (void*)value);
	}

	inline static int32_t get_offset_of__loopRequests_6() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____loopRequests_6)); }
	inline bool get__loopRequests_6() const { return ____loopRequests_6; }
	inline bool* get_address_of__loopRequests_6() { return &____loopRequests_6; }
	inline void set__loopRequests_6(bool value)
	{
		____loopRequests_6 = value;
	}

	inline static int32_t get_offset_of__isRecording_7() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____isRecording_7)); }
	inline bool get__isRecording_7() const { return ____isRecording_7; }
	inline bool* get_address_of__isRecording_7() { return &____isRecording_7; }
	inline void set__isRecording_7(bool value)
	{
		____isRecording_7 = value;
	}

	inline static int32_t get_offset_of__audioQueue_8() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ____audioQueue_8)); }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * get__audioQueue_8() const { return ____audioQueue_8; }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F ** get_address_of__audioQueue_8() { return &____audioQueue_8; }
	inline void set__audioQueue_8(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * value)
	{
		____audioQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_clipIndex_9() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___clipIndex_9)); }
	inline int32_t get_clipIndex_9() const { return ___clipIndex_9; }
	inline int32_t* get_address_of_clipIndex_9() { return &___clipIndex_9; }
	inline void set_clipIndex_9(int32_t value)
	{
		___clipIndex_9 = value;
	}

	inline static int32_t get_offset_of_activeClip_10() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___activeClip_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_activeClip_10() const { return ___activeClip_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_activeClip_10() { return &___activeClip_10; }
	inline void set_activeClip_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___activeClip_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeClip_10), (void*)value);
	}

	inline static int32_t get_offset_of_activeClipIndex_11() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___activeClipIndex_11)); }
	inline int32_t get_activeClipIndex_11() const { return ___activeClipIndex_11; }
	inline int32_t* get_address_of_activeClipIndex_11() { return &___activeClipIndex_11; }
	inline void set_activeClipIndex_11(int32_t value)
	{
		___activeClipIndex_11 = value;
	}

	inline static int32_t get_offset_of_activeClipBuffer_12() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___activeClipBuffer_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_activeClipBuffer_12() const { return ___activeClipBuffer_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_activeClipBuffer_12() { return &___activeClipBuffer_12; }
	inline void set_activeClipBuffer_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___activeClipBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeClipBuffer_12), (void*)value);
	}

	inline static int32_t get_offset_of_clipData_13() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___clipData_13)); }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * get_clipData_13() const { return ___clipData_13; }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 ** get_address_of_clipData_13() { return &___clipData_13; }
	inline void set_clipData_13(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * value)
	{
		___clipData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipData_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartRecording_14() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnStartRecording_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecording_14() const { return ___OnStartRecording_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecording_14() { return &___OnStartRecording_14; }
	inline void set_OnStartRecording_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecording_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecording_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartRecordingFailed_15() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnStartRecordingFailed_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecordingFailed_15() const { return ___OnStartRecordingFailed_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecordingFailed_15() { return &___OnStartRecordingFailed_15; }
	inline void set_OnStartRecordingFailed_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecordingFailed_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecordingFailed_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnSampleReady_16() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnSampleReady_16)); }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * get_OnSampleReady_16() const { return ___OnSampleReady_16; }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 ** get_address_of_OnSampleReady_16() { return &___OnSampleReady_16; }
	inline void set_OnSampleReady_16(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * value)
	{
		___OnSampleReady_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSampleReady_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnStopRecording_17() { return static_cast<int32_t>(offsetof(AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A, ___OnStopRecording_17)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStopRecording_17() const { return ___OnStopRecording_17; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStopRecording_17() { return &___OnStopRecording_17; }
	inline void set_OnStopRecording_17(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStopRecording_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStopRecording_17), (void*)value);
	}
};


// Meta.WitAi.VoiceService
struct VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Meta.WitAi.VoiceService::_conduitParameterProvider
	RuntimeObject* ____conduitParameterProvider_5;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::events
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * ___events_6;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::telemetryEvents
	TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___telemetryEvents_7;
	// Meta.Conduit.IConduitDispatcher Meta.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.VoiceService::<Requests>k__BackingField
	HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * ___U3CRequestsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__witConfiguration_4() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ____witConfiguration_4)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get__witConfiguration_4() const { return ____witConfiguration_4; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of__witConfiguration_4() { return &____witConfiguration_4; }
	inline void set__witConfiguration_4(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		____witConfiguration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____witConfiguration_4), (void*)value);
	}

	inline static int32_t get_offset_of__conduitParameterProvider_5() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ____conduitParameterProvider_5)); }
	inline RuntimeObject* get__conduitParameterProvider_5() const { return ____conduitParameterProvider_5; }
	inline RuntimeObject** get_address_of__conduitParameterProvider_5() { return &____conduitParameterProvider_5; }
	inline void set__conduitParameterProvider_5(RuntimeObject* value)
	{
		____conduitParameterProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conduitParameterProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_events_6() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___events_6)); }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * get_events_6() const { return ___events_6; }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D ** get_address_of_events_6() { return &___events_6; }
	inline void set_events_6(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * value)
	{
		___events_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_6), (void*)value);
	}

	inline static int32_t get_offset_of_telemetryEvents_7() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___telemetryEvents_7)); }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * get_telemetryEvents_7() const { return ___telemetryEvents_7; }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 ** get_address_of_telemetryEvents_7() { return &___telemetryEvents_7; }
	inline void set_telemetryEvents_7(TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * value)
	{
		___telemetryEvents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___telemetryEvents_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConduitDispatcherU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___U3CConduitDispatcherU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CConduitDispatcherU3Ek__BackingField_8() const { return ___U3CConduitDispatcherU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CConduitDispatcherU3Ek__BackingField_8() { return &___U3CConduitDispatcherU3Ek__BackingField_8; }
	inline void set_U3CConduitDispatcherU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CConduitDispatcherU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConduitDispatcherU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D, ___U3CRequestsU3Ek__BackingField_9)); }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * get_U3CRequestsU3Ek__BackingField_9() const { return ___U3CRequestsU3Ek__BackingField_9; }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 ** get_address_of_U3CRequestsU3Ek__BackingField_9() { return &___U3CRequestsU3Ek__BackingField_9; }
	inline void set_U3CRequestsU3Ek__BackingField_9(HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * value)
	{
		___U3CRequestsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestsU3Ek__BackingField_9), (void*)value);
	}
};


// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t37B976412B52D86FD30C0DD7664E3C94C246EB2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.VoiceService Meta.WitAi.CallbackHandlers.WitResponseHandler::Voice
	VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ___Voice_4;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::ValidateEarly
	bool ___ValidateEarly_5;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::_validated
	bool ____validated_6;

public:
	inline static int32_t get_offset_of_Voice_4() { return static_cast<int32_t>(offsetof(WitResponseHandler_t37B976412B52D86FD30C0DD7664E3C94C246EB2D, ___Voice_4)); }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * get_Voice_4() const { return ___Voice_4; }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D ** get_address_of_Voice_4() { return &___Voice_4; }
	inline void set_Voice_4(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * value)
	{
		___Voice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Voice_4), (void*)value);
	}

	inline static int32_t get_offset_of_ValidateEarly_5() { return static_cast<int32_t>(offsetof(WitResponseHandler_t37B976412B52D86FD30C0DD7664E3C94C246EB2D, ___ValidateEarly_5)); }
	inline bool get_ValidateEarly_5() const { return ___ValidateEarly_5; }
	inline bool* get_address_of_ValidateEarly_5() { return &___ValidateEarly_5; }
	inline void set_ValidateEarly_5(bool value)
	{
		___ValidateEarly_5 = value;
	}

	inline static int32_t get_offset_of__validated_6() { return static_cast<int32_t>(offsetof(WitResponseHandler_t37B976412B52D86FD30C0DD7664E3C94C246EB2D, ____validated_6)); }
	inline bool get__validated_6() const { return ____validated_6; }
	inline bool* get_address_of__validated_6() { return &____validated_6; }
	inline void set__validated_6(bool value)
	{
		____validated_6 = value;
	}
};


// Meta.WitAi.WitService
struct WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Meta.WitAi.WitService::_lastMinVolumeLevelTime
	float ____lastMinVolumeLevelTime_4;
	// Meta.WitAi.WitRequest Meta.WitAi.WitService::_recordingRequest
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * ____recordingRequest_5;
	// System.Boolean Meta.WitAi.WitService::_isSoundWakeActive
	bool ____isSoundWakeActive_6;
	// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> Meta.WitAi.WitService::_lastSampleMarker
	Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * ____lastSampleMarker_7;
	// System.Boolean Meta.WitAi.WitService::_minKeepAliveWasHit
	bool ____minKeepAliveWasHit_8;
	// System.Boolean Meta.WitAi.WitService::_isActive
	bool ____isActive_9;
	// System.Int64 Meta.WitAi.WitService::_minSampleByteCount
	int64_t ____minSampleByteCount_10;
	// Meta.WitAi.IVoiceEventProvider Meta.WitAi.WitService::_voiceEventProvider
	RuntimeObject* ____voiceEventProvider_11;
	// Meta.WitAi.ITelemetryEventsProvider Meta.WitAi.WitService::_telemetryEventsProvider
	RuntimeObject* ____telemetryEventsProvider_12;
	// Meta.WitAi.IWitRuntimeConfigProvider Meta.WitAi.WitService::_runtimeConfigProvider
	RuntimeObject* ____runtimeConfigProvider_13;
	// Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.WitService::_activeTranscriptionProvider
	RuntimeObject* ____activeTranscriptionProvider_14;
	// UnityEngine.Coroutine Meta.WitAi.WitService::_timeLimitCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____timeLimitCoroutine_15;
	// Meta.WitAi.Interfaces.IWitRequestProvider Meta.WitAi.WitService::_witRequestProvider
	RuntimeObject* ____witRequestProvider_16;
	// System.Boolean Meta.WitAi.WitService::_receivedTranscription
	bool ____receivedTranscription_17;
	// System.Single Meta.WitAi.WitService::_lastWordTime
	float ____lastWordTime_18;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.WitService::_transmitRequests
	HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * ____transmitRequests_19;
	// UnityEngine.Coroutine Meta.WitAi.WitService::_queueHandler
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____queueHandler_20;
	// Meta.WitAi.Events.IWitByteDataReadyHandler[] Meta.WitAi.WitService::_dataReadyHandlers
	IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558* ____dataReadyHandlers_21;
	// Meta.WitAi.Events.IWitByteDataSentHandler[] Meta.WitAi.WitService::_dataSentHandlers
	IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965* ____dataSentHandlers_22;
	// Meta.WitAi.Interfaces.IDynamicEntitiesProvider[] Meta.WitAi.WitService::_dynamicEntityProviders
	IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* ____dynamicEntityProviders_23;
	// System.Single Meta.WitAi.WitService::_time
	float ____time_24;
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.WitService::_buffer
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * ____buffer_25;
	// System.Boolean Meta.WitAi.WitService::_bufferDelegates
	bool ____bufferDelegates_26;

public:
	inline static int32_t get_offset_of__lastMinVolumeLevelTime_4() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____lastMinVolumeLevelTime_4)); }
	inline float get__lastMinVolumeLevelTime_4() const { return ____lastMinVolumeLevelTime_4; }
	inline float* get_address_of__lastMinVolumeLevelTime_4() { return &____lastMinVolumeLevelTime_4; }
	inline void set__lastMinVolumeLevelTime_4(float value)
	{
		____lastMinVolumeLevelTime_4 = value;
	}

	inline static int32_t get_offset_of__recordingRequest_5() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____recordingRequest_5)); }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * get__recordingRequest_5() const { return ____recordingRequest_5; }
	inline WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D ** get_address_of__recordingRequest_5() { return &____recordingRequest_5; }
	inline void set__recordingRequest_5(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * value)
	{
		____recordingRequest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordingRequest_5), (void*)value);
	}

	inline static int32_t get_offset_of__isSoundWakeActive_6() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____isSoundWakeActive_6)); }
	inline bool get__isSoundWakeActive_6() const { return ____isSoundWakeActive_6; }
	inline bool* get_address_of__isSoundWakeActive_6() { return &____isSoundWakeActive_6; }
	inline void set__isSoundWakeActive_6(bool value)
	{
		____isSoundWakeActive_6 = value;
	}

	inline static int32_t get_offset_of__lastSampleMarker_7() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____lastSampleMarker_7)); }
	inline Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * get__lastSampleMarker_7() const { return ____lastSampleMarker_7; }
	inline Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 ** get_address_of__lastSampleMarker_7() { return &____lastSampleMarker_7; }
	inline void set__lastSampleMarker_7(Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * value)
	{
		____lastSampleMarker_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSampleMarker_7), (void*)value);
	}

	inline static int32_t get_offset_of__minKeepAliveWasHit_8() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____minKeepAliveWasHit_8)); }
	inline bool get__minKeepAliveWasHit_8() const { return ____minKeepAliveWasHit_8; }
	inline bool* get_address_of__minKeepAliveWasHit_8() { return &____minKeepAliveWasHit_8; }
	inline void set__minKeepAliveWasHit_8(bool value)
	{
		____minKeepAliveWasHit_8 = value;
	}

	inline static int32_t get_offset_of__isActive_9() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____isActive_9)); }
	inline bool get__isActive_9() const { return ____isActive_9; }
	inline bool* get_address_of__isActive_9() { return &____isActive_9; }
	inline void set__isActive_9(bool value)
	{
		____isActive_9 = value;
	}

	inline static int32_t get_offset_of__minSampleByteCount_10() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____minSampleByteCount_10)); }
	inline int64_t get__minSampleByteCount_10() const { return ____minSampleByteCount_10; }
	inline int64_t* get_address_of__minSampleByteCount_10() { return &____minSampleByteCount_10; }
	inline void set__minSampleByteCount_10(int64_t value)
	{
		____minSampleByteCount_10 = value;
	}

	inline static int32_t get_offset_of__voiceEventProvider_11() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____voiceEventProvider_11)); }
	inline RuntimeObject* get__voiceEventProvider_11() const { return ____voiceEventProvider_11; }
	inline RuntimeObject** get_address_of__voiceEventProvider_11() { return &____voiceEventProvider_11; }
	inline void set__voiceEventProvider_11(RuntimeObject* value)
	{
		____voiceEventProvider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceEventProvider_11), (void*)value);
	}

	inline static int32_t get_offset_of__telemetryEventsProvider_12() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____telemetryEventsProvider_12)); }
	inline RuntimeObject* get__telemetryEventsProvider_12() const { return ____telemetryEventsProvider_12; }
	inline RuntimeObject** get_address_of__telemetryEventsProvider_12() { return &____telemetryEventsProvider_12; }
	inline void set__telemetryEventsProvider_12(RuntimeObject* value)
	{
		____telemetryEventsProvider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____telemetryEventsProvider_12), (void*)value);
	}

	inline static int32_t get_offset_of__runtimeConfigProvider_13() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____runtimeConfigProvider_13)); }
	inline RuntimeObject* get__runtimeConfigProvider_13() const { return ____runtimeConfigProvider_13; }
	inline RuntimeObject** get_address_of__runtimeConfigProvider_13() { return &____runtimeConfigProvider_13; }
	inline void set__runtimeConfigProvider_13(RuntimeObject* value)
	{
		____runtimeConfigProvider_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeConfigProvider_13), (void*)value);
	}

	inline static int32_t get_offset_of__activeTranscriptionProvider_14() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____activeTranscriptionProvider_14)); }
	inline RuntimeObject* get__activeTranscriptionProvider_14() const { return ____activeTranscriptionProvider_14; }
	inline RuntimeObject** get_address_of__activeTranscriptionProvider_14() { return &____activeTranscriptionProvider_14; }
	inline void set__activeTranscriptionProvider_14(RuntimeObject* value)
	{
		____activeTranscriptionProvider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeTranscriptionProvider_14), (void*)value);
	}

	inline static int32_t get_offset_of__timeLimitCoroutine_15() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____timeLimitCoroutine_15)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__timeLimitCoroutine_15() const { return ____timeLimitCoroutine_15; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__timeLimitCoroutine_15() { return &____timeLimitCoroutine_15; }
	inline void set__timeLimitCoroutine_15(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____timeLimitCoroutine_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeLimitCoroutine_15), (void*)value);
	}

	inline static int32_t get_offset_of__witRequestProvider_16() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____witRequestProvider_16)); }
	inline RuntimeObject* get__witRequestProvider_16() const { return ____witRequestProvider_16; }
	inline RuntimeObject** get_address_of__witRequestProvider_16() { return &____witRequestProvider_16; }
	inline void set__witRequestProvider_16(RuntimeObject* value)
	{
		____witRequestProvider_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____witRequestProvider_16), (void*)value);
	}

	inline static int32_t get_offset_of__receivedTranscription_17() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____receivedTranscription_17)); }
	inline bool get__receivedTranscription_17() const { return ____receivedTranscription_17; }
	inline bool* get_address_of__receivedTranscription_17() { return &____receivedTranscription_17; }
	inline void set__receivedTranscription_17(bool value)
	{
		____receivedTranscription_17 = value;
	}

	inline static int32_t get_offset_of__lastWordTime_18() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____lastWordTime_18)); }
	inline float get__lastWordTime_18() const { return ____lastWordTime_18; }
	inline float* get_address_of__lastWordTime_18() { return &____lastWordTime_18; }
	inline void set__lastWordTime_18(float value)
	{
		____lastWordTime_18 = value;
	}

	inline static int32_t get_offset_of__transmitRequests_19() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____transmitRequests_19)); }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * get__transmitRequests_19() const { return ____transmitRequests_19; }
	inline HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 ** get_address_of__transmitRequests_19() { return &____transmitRequests_19; }
	inline void set__transmitRequests_19(HashSet_1_tC45BE7A83B31607CE659A640DC2E476E12760643 * value)
	{
		____transmitRequests_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transmitRequests_19), (void*)value);
	}

	inline static int32_t get_offset_of__queueHandler_20() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____queueHandler_20)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__queueHandler_20() const { return ____queueHandler_20; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__queueHandler_20() { return &____queueHandler_20; }
	inline void set__queueHandler_20(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____queueHandler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queueHandler_20), (void*)value);
	}

	inline static int32_t get_offset_of__dataReadyHandlers_21() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____dataReadyHandlers_21)); }
	inline IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558* get__dataReadyHandlers_21() const { return ____dataReadyHandlers_21; }
	inline IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558** get_address_of__dataReadyHandlers_21() { return &____dataReadyHandlers_21; }
	inline void set__dataReadyHandlers_21(IWitByteDataReadyHandlerU5BU5D_t9FE4EC024B8410FB184E613AD128CB3381994558* value)
	{
		____dataReadyHandlers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataReadyHandlers_21), (void*)value);
	}

	inline static int32_t get_offset_of__dataSentHandlers_22() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____dataSentHandlers_22)); }
	inline IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965* get__dataSentHandlers_22() const { return ____dataSentHandlers_22; }
	inline IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965** get_address_of__dataSentHandlers_22() { return &____dataSentHandlers_22; }
	inline void set__dataSentHandlers_22(IWitByteDataSentHandlerU5BU5D_t6EC489A5D7BF4DBD2165DAB2BB784273998ED965* value)
	{
		____dataSentHandlers_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSentHandlers_22), (void*)value);
	}

	inline static int32_t get_offset_of__dynamicEntityProviders_23() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____dynamicEntityProviders_23)); }
	inline IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* get__dynamicEntityProviders_23() const { return ____dynamicEntityProviders_23; }
	inline IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859** get_address_of__dynamicEntityProviders_23() { return &____dynamicEntityProviders_23; }
	inline void set__dynamicEntityProviders_23(IDynamicEntitiesProviderU5BU5D_t10DCCA8D055717AA1F587121FF5E19A7C332D859* value)
	{
		____dynamicEntityProviders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicEntityProviders_23), (void*)value);
	}

	inline static int32_t get_offset_of__time_24() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____time_24)); }
	inline float get__time_24() const { return ____time_24; }
	inline float* get_address_of__time_24() { return &____time_24; }
	inline void set__time_24(float value)
	{
		____time_24 = value;
	}

	inline static int32_t get_offset_of__buffer_25() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____buffer_25)); }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * get__buffer_25() const { return ____buffer_25; }
	inline AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB ** get_address_of__buffer_25() { return &____buffer_25; }
	inline void set__buffer_25(AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * value)
	{
		____buffer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_25), (void*)value);
	}

	inline static int32_t get_offset_of__bufferDelegates_26() { return static_cast<int32_t>(offsetof(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C, ____bufferDelegates_26)); }
	inline bool get__bufferDelegates_26() const { return ____bufferDelegates_26; }
	inline bool* get_address_of__bufferDelegates_26() { return &____bufferDelegates_26; }
	inline void set__bufferDelegates_26(bool value)
	{
		____bufferDelegates_26 = value;
	}
};


// Meta.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t0E65AE8D25F2F7CAF0515024CCAB17ADE75A070D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::entityName
	String_t* ___entityName_4;
	// System.String[] Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::keywords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___keywords_5;

public:
	inline static int32_t get_offset_of_entityName_4() { return static_cast<int32_t>(offsetof(WitSimpleDynamicEntity_t0E65AE8D25F2F7CAF0515024CCAB17ADE75A070D, ___entityName_4)); }
	inline String_t* get_entityName_4() const { return ___entityName_4; }
	inline String_t** get_address_of_entityName_4() { return &___entityName_4; }
	inline void set_entityName_4(String_t* value)
	{
		___entityName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityName_4), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_5() { return static_cast<int32_t>(offsetof(WitSimpleDynamicEntity_t0E65AE8D25F2F7CAF0515024CCAB17ADE75A070D, ___keywords_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_keywords_5() const { return ___keywords_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_keywords_5() { return &___keywords_5; }
	inline void set_keywords_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___keywords_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywords_5), (void*)value);
	}
};


// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_4;
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::_useUpdate
	bool ____useUpdate_5;
	// System.Collections.IEnumerator Meta.WitAi.CoroutineUtility/CoroutinePerformer::_method
	RuntimeObject* ____method_6;
	// UnityEngine.Coroutine Meta.WitAi.CoroutineUtility/CoroutinePerformer::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_7;

public:
	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ___U3CIsRunningU3Ek__BackingField_4)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_4() const { return ___U3CIsRunningU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_4() { return &___U3CIsRunningU3Ek__BackingField_4; }
	inline void set_U3CIsRunningU3Ek__BackingField_4(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__useUpdate_5() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ____useUpdate_5)); }
	inline bool get__useUpdate_5() const { return ____useUpdate_5; }
	inline bool* get_address_of__useUpdate_5() { return &____useUpdate_5; }
	inline void set__useUpdate_5(bool value)
	{
		____useUpdate_5 = value;
	}

	inline static int32_t get_offset_of__method_6() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ____method_6)); }
	inline RuntimeObject* get__method_6() const { return ____method_6; }
	inline RuntimeObject** get_address_of__method_6() { return &____method_6; }
	inline void set__method_6(RuntimeObject* value)
	{
		____method_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____method_6), (void*)value);
	}

	inline static int32_t get_offset_of__coroutine_7() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F, ____coroutine_7)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_7() const { return ____coroutine_7; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_7() { return &____coroutine_7; }
	inline void set__coroutine_7(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_7), (void*)value);
	}
};


// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C  : public NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884
{
public:

public:
};


// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2  : public WitResponseHandler_t37B976412B52D86FD30C0DD7664E3C94C246EB2D
{
public:
	// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_7;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_8;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_9;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * ___onUtteranceMatched_10;
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___regex_11;

public:
	inline static int32_t get_offset_of_searchText_7() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2, ___searchText_7)); }
	inline String_t* get_searchText_7() const { return ___searchText_7; }
	inline String_t** get_address_of_searchText_7() { return &___searchText_7; }
	inline void set_searchText_7(String_t* value)
	{
		___searchText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchText_7), (void*)value);
	}

	inline static int32_t get_offset_of_exactMatch_8() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2, ___exactMatch_8)); }
	inline bool get_exactMatch_8() const { return ___exactMatch_8; }
	inline bool* get_address_of_exactMatch_8() { return &___exactMatch_8; }
	inline void set_exactMatch_8(bool value)
	{
		___exactMatch_8 = value;
	}

	inline static int32_t get_offset_of_useRegex_9() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2, ___useRegex_9)); }
	inline bool get_useRegex_9() const { return ___useRegex_9; }
	inline bool* get_address_of_useRegex_9() { return &___useRegex_9; }
	inline void set_useRegex_9(bool value)
	{
		___useRegex_9 = value;
	}

	inline static int32_t get_offset_of_onUtteranceMatched_10() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2, ___onUtteranceMatched_10)); }
	inline StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * get_onUtteranceMatched_10() const { return ___onUtteranceMatched_10; }
	inline StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF ** get_address_of_onUtteranceMatched_10() { return &___onUtteranceMatched_10; }
	inline void set_onUtteranceMatched_10(StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * value)
	{
		___onUtteranceMatched_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUtteranceMatched_10), (void*)value);
	}

	inline static int32_t get_offset_of_regex_11() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2, ___regex_11)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_regex_11() const { return ___regex_11; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_regex_11() { return &___regex_11; }
	inline void set_regex_11(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___regex_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regex_11), (void*)value);
	}
};


// Meta.WitAi.WitRequest
struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D  : public VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.WitRequest::<Configuration>k__BackingField
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___U3CConfigurationU3Ek__BackingField_10;
	// System.Int32 Meta.WitAi.WitRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_11;
	// Meta.WitAi.Data.AudioEncoding Meta.WitAi.WitRequest::<AudioEncoding>k__BackingField
	AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * ___U3CAudioEncodingU3Ek__BackingField_12;
	// System.String Meta.WitAi.WitRequest::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_13;
	// System.String Meta.WitAi.WitRequest::<Command>k__BackingField
	String_t* ___U3CCommandU3Ek__BackingField_14;
	// System.Boolean Meta.WitAi.WitRequest::<IsPost>k__BackingField
	bool ___U3CIsPostU3Ek__BackingField_15;
	// System.Byte[] Meta.WitAi.WitRequest::postData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___postData_16;
	// System.String Meta.WitAi.WitRequest::postContentType
	String_t* ___postContentType_17;
	// System.String Meta.WitAi.WitRequest::forcedHttpMethodType
	String_t* ___forcedHttpMethodType_18;
	// System.Boolean Meta.WitAi.WitRequest::<HasResponseStarted>k__BackingField
	bool ___U3CHasResponseStartedU3Ek__BackingField_19;
	// System.Boolean Meta.WitAi.WitRequest::<IsInputStreamReady>k__BackingField
	bool ___U3CIsInputStreamReadyU3Ek__BackingField_20;
	// Meta.WitAi.AudioDurationTracker Meta.WitAi.WitRequest::audioDurationTracker
	AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF * ___audioDurationTracker_21;
	// System.Net.HttpWebRequest Meta.WitAi.WitRequest::_request
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ____request_22;
	// System.IO.Stream Meta.WitAi.WitRequest::_writeStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____writeStream_23;
	// System.Object Meta.WitAi.WitRequest::_streamLock
	RuntimeObject * ____streamLock_24;
	// System.Int32 Meta.WitAi.WitRequest::_bytesWritten
	int32_t ____bytesWritten_25;
	// System.String Meta.WitAi.WitRequest::_stackTrace
	String_t* ____stackTrace_26;
	// System.DateTime Meta.WitAi.WitRequest::_requestStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____requestStartTime_27;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Meta.WitAi.WitRequest::_writeBuffer
	ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * ____writeBuffer_28;
	// System.String Meta.WitAi.WitRequest::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_29;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitRequest::_lastResponseData
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ____lastResponseData_30;
	// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent Meta.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * ___onProvideCustomHeaders_31;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onInputStreamReady
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onInputStreamReady_32;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onRawResponse
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onRawResponse_33;
	// Meta.WitAi.WitRequest/OnCustomizeUriEvent Meta.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * ___onCustomizeUri_34;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onPartialTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onPartialTranscription_36;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onFullTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onFullTranscription_37;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onPartialResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onPartialResponse_38;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onResponse
	Action_1_t8956C826A49866445E54956164D36A98DE3362FF * ___onResponse_39;
	// System.Boolean Meta.WitAi.WitRequest::_initialized
	bool ____initialized_40;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.WitRequest::_performer
	CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * ____performer_41;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Meta.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ____mainThreadCallbacks_42;

public:
	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CConfigurationU3Ek__BackingField_10)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get_U3CConfigurationU3Ek__BackingField_10() const { return ___U3CConfigurationU3Ek__BackingField_10; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of_U3CConfigurationU3Ek__BackingField_10() { return &___U3CConfigurationU3Ek__BackingField_10; }
	inline void set_U3CConfigurationU3Ek__BackingField_10(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		___U3CConfigurationU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CTimeoutU3Ek__BackingField_11)); }
	inline int32_t get_U3CTimeoutU3Ek__BackingField_11() const { return ___U3CTimeoutU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTimeoutU3Ek__BackingField_11() { return &___U3CTimeoutU3Ek__BackingField_11; }
	inline void set_U3CTimeoutU3Ek__BackingField_11(int32_t value)
	{
		___U3CTimeoutU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CAudioEncodingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CAudioEncodingU3Ek__BackingField_12)); }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * get_U3CAudioEncodingU3Ek__BackingField_12() const { return ___U3CAudioEncodingU3Ek__BackingField_12; }
	inline AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C ** get_address_of_U3CAudioEncodingU3Ek__BackingField_12() { return &___U3CAudioEncodingU3Ek__BackingField_12; }
	inline void set_U3CAudioEncodingU3Ek__BackingField_12(AudioEncoding_t1D0EA8A3078DCD19768CCABAB5722C62CF8A8D5C * value)
	{
		___U3CAudioEncodingU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioEncodingU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CPathU3Ek__BackingField_13)); }
	inline String_t* get_U3CPathU3Ek__BackingField_13() const { return ___U3CPathU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_13() { return &___U3CPathU3Ek__BackingField_13; }
	inline void set_U3CPathU3Ek__BackingField_13(String_t* value)
	{
		___U3CPathU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CCommandU3Ek__BackingField_14)); }
	inline String_t* get_U3CCommandU3Ek__BackingField_14() const { return ___U3CCommandU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CCommandU3Ek__BackingField_14() { return &___U3CCommandU3Ek__BackingField_14; }
	inline void set_U3CCommandU3Ek__BackingField_14(String_t* value)
	{
		___U3CCommandU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommandU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPostU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CIsPostU3Ek__BackingField_15)); }
	inline bool get_U3CIsPostU3Ek__BackingField_15() const { return ___U3CIsPostU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIsPostU3Ek__BackingField_15() { return &___U3CIsPostU3Ek__BackingField_15; }
	inline void set_U3CIsPostU3Ek__BackingField_15(bool value)
	{
		___U3CIsPostU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_postData_16() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___postData_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_postData_16() const { return ___postData_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_postData_16() { return &___postData_16; }
	inline void set_postData_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___postData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postData_16), (void*)value);
	}

	inline static int32_t get_offset_of_postContentType_17() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___postContentType_17)); }
	inline String_t* get_postContentType_17() const { return ___postContentType_17; }
	inline String_t** get_address_of_postContentType_17() { return &___postContentType_17; }
	inline void set_postContentType_17(String_t* value)
	{
		___postContentType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postContentType_17), (void*)value);
	}

	inline static int32_t get_offset_of_forcedHttpMethodType_18() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___forcedHttpMethodType_18)); }
	inline String_t* get_forcedHttpMethodType_18() const { return ___forcedHttpMethodType_18; }
	inline String_t** get_address_of_forcedHttpMethodType_18() { return &___forcedHttpMethodType_18; }
	inline void set_forcedHttpMethodType_18(String_t* value)
	{
		___forcedHttpMethodType_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forcedHttpMethodType_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasResponseStartedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CHasResponseStartedU3Ek__BackingField_19)); }
	inline bool get_U3CHasResponseStartedU3Ek__BackingField_19() const { return ___U3CHasResponseStartedU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CHasResponseStartedU3Ek__BackingField_19() { return &___U3CHasResponseStartedU3Ek__BackingField_19; }
	inline void set_U3CHasResponseStartedU3Ek__BackingField_19(bool value)
	{
		___U3CHasResponseStartedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsInputStreamReadyU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CIsInputStreamReadyU3Ek__BackingField_20)); }
	inline bool get_U3CIsInputStreamReadyU3Ek__BackingField_20() const { return ___U3CIsInputStreamReadyU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsInputStreamReadyU3Ek__BackingField_20() { return &___U3CIsInputStreamReadyU3Ek__BackingField_20; }
	inline void set_U3CIsInputStreamReadyU3Ek__BackingField_20(bool value)
	{
		___U3CIsInputStreamReadyU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_audioDurationTracker_21() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___audioDurationTracker_21)); }
	inline AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF * get_audioDurationTracker_21() const { return ___audioDurationTracker_21; }
	inline AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF ** get_address_of_audioDurationTracker_21() { return &___audioDurationTracker_21; }
	inline void set_audioDurationTracker_21(AudioDurationTracker_t35D056D83799DC233E51A97DA698DD296084C2EF * value)
	{
		___audioDurationTracker_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioDurationTracker_21), (void*)value);
	}

	inline static int32_t get_offset_of__request_22() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____request_22)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get__request_22() const { return ____request_22; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of__request_22() { return &____request_22; }
	inline void set__request_22(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		____request_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_22), (void*)value);
	}

	inline static int32_t get_offset_of__writeStream_23() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____writeStream_23)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__writeStream_23() const { return ____writeStream_23; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__writeStream_23() { return &____writeStream_23; }
	inline void set__writeStream_23(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____writeStream_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeStream_23), (void*)value);
	}

	inline static int32_t get_offset_of__streamLock_24() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____streamLock_24)); }
	inline RuntimeObject * get__streamLock_24() const { return ____streamLock_24; }
	inline RuntimeObject ** get_address_of__streamLock_24() { return &____streamLock_24; }
	inline void set__streamLock_24(RuntimeObject * value)
	{
		____streamLock_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____streamLock_24), (void*)value);
	}

	inline static int32_t get_offset_of__bytesWritten_25() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____bytesWritten_25)); }
	inline int32_t get__bytesWritten_25() const { return ____bytesWritten_25; }
	inline int32_t* get_address_of__bytesWritten_25() { return &____bytesWritten_25; }
	inline void set__bytesWritten_25(int32_t value)
	{
		____bytesWritten_25 = value;
	}

	inline static int32_t get_offset_of__stackTrace_26() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____stackTrace_26)); }
	inline String_t* get__stackTrace_26() const { return ____stackTrace_26; }
	inline String_t** get_address_of__stackTrace_26() { return &____stackTrace_26; }
	inline void set__stackTrace_26(String_t* value)
	{
		____stackTrace_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_26), (void*)value);
	}

	inline static int32_t get_offset_of__requestStartTime_27() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____requestStartTime_27)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__requestStartTime_27() const { return ____requestStartTime_27; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__requestStartTime_27() { return &____requestStartTime_27; }
	inline void set__requestStartTime_27(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____requestStartTime_27 = value;
	}

	inline static int32_t get_offset_of__writeBuffer_28() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____writeBuffer_28)); }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * get__writeBuffer_28() const { return ____writeBuffer_28; }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 ** get_address_of__writeBuffer_28() { return &____writeBuffer_28; }
	inline void set__writeBuffer_28(ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * value)
	{
		____writeBuffer_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeBuffer_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusDescriptionU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___U3CStatusDescriptionU3Ek__BackingField_29)); }
	inline String_t* get_U3CStatusDescriptionU3Ek__BackingField_29() const { return ___U3CStatusDescriptionU3Ek__BackingField_29; }
	inline String_t** get_address_of_U3CStatusDescriptionU3Ek__BackingField_29() { return &___U3CStatusDescriptionU3Ek__BackingField_29; }
	inline void set_U3CStatusDescriptionU3Ek__BackingField_29(String_t* value)
	{
		___U3CStatusDescriptionU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatusDescriptionU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of__lastResponseData_30() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____lastResponseData_30)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get__lastResponseData_30() const { return ____lastResponseData_30; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of__lastResponseData_30() { return &____lastResponseData_30; }
	inline void set__lastResponseData_30(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		____lastResponseData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastResponseData_30), (void*)value);
	}

	inline static int32_t get_offset_of_onProvideCustomHeaders_31() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onProvideCustomHeaders_31)); }
	inline OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * get_onProvideCustomHeaders_31() const { return ___onProvideCustomHeaders_31; }
	inline OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB ** get_address_of_onProvideCustomHeaders_31() { return &___onProvideCustomHeaders_31; }
	inline void set_onProvideCustomHeaders_31(OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * value)
	{
		___onProvideCustomHeaders_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onProvideCustomHeaders_31), (void*)value);
	}

	inline static int32_t get_offset_of_onInputStreamReady_32() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onInputStreamReady_32)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onInputStreamReady_32() const { return ___onInputStreamReady_32; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onInputStreamReady_32() { return &___onInputStreamReady_32; }
	inline void set_onInputStreamReady_32(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onInputStreamReady_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInputStreamReady_32), (void*)value);
	}

	inline static int32_t get_offset_of_onRawResponse_33() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onRawResponse_33)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onRawResponse_33() const { return ___onRawResponse_33; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onRawResponse_33() { return &___onRawResponse_33; }
	inline void set_onRawResponse_33(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onRawResponse_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRawResponse_33), (void*)value);
	}

	inline static int32_t get_offset_of_onCustomizeUri_34() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onCustomizeUri_34)); }
	inline OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * get_onCustomizeUri_34() const { return ___onCustomizeUri_34; }
	inline OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 ** get_address_of_onCustomizeUri_34() { return &___onCustomizeUri_34; }
	inline void set_onCustomizeUri_34(OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * value)
	{
		___onCustomizeUri_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCustomizeUri_34), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_36() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onPartialTranscription_36)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onPartialTranscription_36() const { return ___onPartialTranscription_36; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onPartialTranscription_36() { return &___onPartialTranscription_36; }
	inline void set_onPartialTranscription_36(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onPartialTranscription_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_36), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_37() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onFullTranscription_37)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onFullTranscription_37() const { return ___onFullTranscription_37; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onFullTranscription_37() { return &___onFullTranscription_37; }
	inline void set_onFullTranscription_37(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onFullTranscription_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_37), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialResponse_38() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onPartialResponse_38)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onPartialResponse_38() const { return ___onPartialResponse_38; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onPartialResponse_38() { return &___onPartialResponse_38; }
	inline void set_onPartialResponse_38(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onPartialResponse_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialResponse_38), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_39() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ___onResponse_39)); }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF * get_onResponse_39() const { return ___onResponse_39; }
	inline Action_1_t8956C826A49866445E54956164D36A98DE3362FF ** get_address_of_onResponse_39() { return &___onResponse_39; }
	inline void set_onResponse_39(Action_1_t8956C826A49866445E54956164D36A98DE3362FF * value)
	{
		___onResponse_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_39), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_40() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____initialized_40)); }
	inline bool get__initialized_40() const { return ____initialized_40; }
	inline bool* get_address_of__initialized_40() { return &____initialized_40; }
	inline void set__initialized_40(bool value)
	{
		____initialized_40 = value;
	}

	inline static int32_t get_offset_of__performer_41() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____performer_41)); }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * get__performer_41() const { return ____performer_41; }
	inline CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F ** get_address_of__performer_41() { return &____performer_41; }
	inline void set__performer_41(CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F * value)
	{
		____performer_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____performer_41), (void*)value);
	}

	inline static int32_t get_offset_of__mainThreadCallbacks_42() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D, ____mainThreadCallbacks_42)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get__mainThreadCallbacks_42() const { return ____mainThreadCallbacks_42; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of__mainThreadCallbacks_42() { return &____mainThreadCallbacks_42; }
	inline void set__mainThreadCallbacks_42(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		____mainThreadCallbacks_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainThreadCallbacks_42), (void*)value);
	}
};

struct WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D_StaticFields
{
public:
	// Meta.WitAi.WitRequest/PreSendRequestDelegate Meta.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * ___onPreSendRequest_35;

public:
	inline static int32_t get_offset_of_onPreSendRequest_35() { return static_cast<int32_t>(offsetof(WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D_StaticFields, ___onPreSendRequest_35)); }
	inline PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * get_onPreSendRequest_35() const { return ___onPreSendRequest_35; }
	inline PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B ** get_address_of_onPreSendRequest_35() { return &___onPreSendRequest_35; }
	inline void set_onPreSendRequest_35(PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * value)
	{
		___onPreSendRequest_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreSendRequest_35), (void*)value);
	}
};


// Meta.WitAi.Requests.WitUnityRequest
struct WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906  : public VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C
{
public:
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Requests.WitUnityRequest::<Configuration>k__BackingField
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___U3CConfigurationU3Ek__BackingField_10;
	// Meta.WitAi.Requests.WitVRequest Meta.WitAi.Requests.WitUnityRequest::_request
	WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * ____request_11;
	// System.String Meta.WitAi.Requests.WitUnityRequest::<Endpoint>k__BackingField
	String_t* ___U3CEndpointU3Ek__BackingField_12;
	// System.Boolean Meta.WitAi.Requests.WitUnityRequest::<ShouldPost>k__BackingField
	bool ___U3CShouldPostU3Ek__BackingField_13;
	// System.Boolean Meta.WitAi.Requests.WitUnityRequest::_initialized
	bool ____initialized_14;

public:
	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906, ___U3CConfigurationU3Ek__BackingField_10)); }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * get_U3CConfigurationU3Ek__BackingField_10() const { return ___U3CConfigurationU3Ek__BackingField_10; }
	inline WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 ** get_address_of_U3CConfigurationU3Ek__BackingField_10() { return &___U3CConfigurationU3Ek__BackingField_10; }
	inline void set_U3CConfigurationU3Ek__BackingField_10(WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * value)
	{
		___U3CConfigurationU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of__request_11() { return static_cast<int32_t>(offsetof(WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906, ____request_11)); }
	inline WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * get__request_11() const { return ____request_11; }
	inline WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 ** get_address_of__request_11() { return &____request_11; }
	inline void set__request_11(WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * value)
	{
		____request_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEndpointU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906, ___U3CEndpointU3Ek__BackingField_12)); }
	inline String_t* get_U3CEndpointU3Ek__BackingField_12() const { return ___U3CEndpointU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CEndpointU3Ek__BackingField_12() { return &___U3CEndpointU3Ek__BackingField_12; }
	inline void set_U3CEndpointU3Ek__BackingField_12(String_t* value)
	{
		___U3CEndpointU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEndpointU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldPostU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906, ___U3CShouldPostU3Ek__BackingField_13)); }
	inline bool get_U3CShouldPostU3Ek__BackingField_13() const { return ___U3CShouldPostU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CShouldPostU3Ek__BackingField_13() { return &___U3CShouldPostU3Ek__BackingField_13; }
	inline void set_U3CShouldPostU3Ek__BackingField_13(bool value)
	{
		___U3CShouldPostU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of__initialized_14() { return static_cast<int32_t>(offsetof(WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906, ____initialized_14)); }
	inline bool get__initialized_14() const { return ____initialized_14; }
	inline bool* get_address_of__initialized_14() { return &____initialized_14; }
	inline void set__initialized_14(bool value)
	{
		____initialized_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * m_Items[1];

public:
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NLPRequest_4_get_InputType_m14AFC8847002D49B9941C1E7F5020F09714025D3_gshared_inline (NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0 * __this, const RuntimeMethod* method);
// System.Void Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::SetState(Meta.Voice.VoiceRequestState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NLPRequest_4_SetState_m57756090E357034F413F26DE11FCB6C30E8E7085_gshared (NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0 * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.String Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::GetSendError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NLPRequest_4_GetSendError_m6A880F5E57B86BE8D51BEBE88E84CD130C3D9444_gshared (NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0 * __this, const RuntimeMethod* method);
// !1 Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * VoiceRequest_4_get_Options_m2259A3BB89084FC10657A5587D832BBF2330FCBF_gshared_inline (VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCompleteDelegate_1__ctor_m5F8FCF199BEC664D5CD559903C13841EE47E9C99_gshared (RequestCompleteDelegate_1_tF3C43C48558E5DCD7E4F35505B1F31AEBBF173E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NLPAudioRequest_4_HandleFinalNlpResponse_mFA105471FF7B3252F36381982A8ADC29CF40CAED_gshared (NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___responseData0, String_t* ___error1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Object,System.Single>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m7812AE5D0379032A09C4473551E7D421C251AF81_gshared (Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35 * __this, int32_t ___arg10, RuntimeObject * ___arg21, float ___arg32, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, RuntimeObject ** ___result0, const RuntimeMethod* method);

// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m8359D8C3986BF4D863ED497AF9374A7EF38FE895 (WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * __this, String_t* ___entity0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___keywords1, const RuntimeMethod* method);
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor(Meta.WitAi.Data.Entities.WitDynamicEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_mCC966321CA97DA587F5919D0B9042F0197CFD8F8 (WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA * __this, WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF* ___entity0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String Meta.WitAi.Data.WitStringValue::GetStringValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m546ACF8C7E69D6BD43D265339AD062821F0BB952 (WitStringValue_t480E5A89271EB8C48704B5990F34336DF2EAD4BB * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * WitValue_get_Reference_m5FEAFD66178E523BBDCB03DE4AF551230226F990 (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_m6A9496058E8AB67727BE1658EDFD9ABBFFE454AC (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void Meta.WitAi.Requests.VoiceServiceRequest::.ctor(Meta.Voice.NLPRequestInputType,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequest__ctor_mE729A1605DD6BC00B6E3A0209B9E4944EFF96A6E (VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * __this, int32_t ___newInputType0, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___newOptions1, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___newEvents2, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Configuration(Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Configuration_mD1D8647DC7F5E9B1E86C0CB72BE2A8D9C06DD27D_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___value0, const RuntimeMethod* method);
// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_InputType()
inline int32_t NLPRequest_4_get_InputType_m842B09FB24F8062B50287FD8C2E213A08AD0AC03_inline (NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884 *, const RuntimeMethod*))NLPRequest_4_get_InputType_m14AFC8847002D49B9941C1E7F5020F09714025D3_gshared_inline)(__this, method);
}
// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Requests.WitUnityRequest::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method);
// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::get_RequestId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_RequestId_m3042EA0895AAC67DB1FF5E88924212A40AB4113C_inline (VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestProgressDelegate__ctor_m28B696CB02837C016B6E4904AC7EEC4B792CF22C (RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.WitMessageVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String,Meta.WitAi.Requests.VRequest/RequestProgressDelegate,Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitMessageVRequest__ctor_m291AF273DF135F027DB50B4F1DE3847D6C726EA6 (WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 * __this, RuntimeObject* ___configuration0, String_t* ___requestId1, RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 * ___onDownloadProgress2, RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96 * ___onFirstResponse3, const RuntimeMethod* method);
// Meta.WitAi.IWitRequestEndpointInfo Meta.WitAi.Data.Configuration.WitConfiguration::GetEndpointInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitConfiguration_GetEndpointInfo_mC36372B566D63BC6A67E8B60FC7AFB23A45CA234_inline (WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Endpoint(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Endpoint_mC14F246E12293311B2AD07478A2E97D60CB5535B_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.VRequest::set_Timeout(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VRequest_set_Timeout_m3F2E5F02C61A8E4B1FFB722669D05C5D2B554650_inline (VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_ShouldPost(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_ShouldPost_m6AD7D8CEA4507723C9873B36DFFAB141671E87CF_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetState(Meta.Voice.VoiceRequestState)
inline void NLPRequest_4_SetState_mD12916D2EF71FC547198D078C9DF35E010D46980 (NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	((  void (*) (NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884 *, int32_t, const RuntimeMethod*))NLPRequest_4_SetState_m57756090E357034F413F26DE11FCB6C30E8E7085_gshared)(__this, ___newState0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::GetSendError()
inline String_t* NLPRequest_4_GetSendError_m73A9C54B83322A8AE2474D03CCE935F6CAE8128E (NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884 *, const RuntimeMethod*))NLPRequest_4_GetSendError_m6A880F5E57B86BE8D51BEBE88E84CD130C3D9444_gshared)(__this, method);
}
// System.String Meta.WitAi.Requests.WitUnityRequest::get_Endpoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitUnityRequest_get_Endpoint_m09B2A01B549DCE1883E1B3D7E02B376AD563FBAB_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.Requests.WitUnityRequest::get_ShouldPost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WitUnityRequest_get_ShouldPost_m4C36A0685F284C8907E9AA952E396E0B0C3695FF_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method);
// !1 Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_Options()
inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_inline (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 * __this, const RuntimeMethod* method)
{
	return ((  WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * (*) (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 *, const RuntimeMethod*))VoiceRequest_4_get_Options_m2259A3BB89084FC10657A5587D832BBF2330FCBF_gshared_inline)(__this, method);
}
// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_Text_m8CE34499789FCCF557292C0A3BCAB2578FD60A5E_inline (VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VoiceServiceRequestOptions::get_QueryParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * VoiceServiceRequestOptions_get_QueryParams_mB8266C3A94EA18BE6ED9805038A5B44A5AD14974_inline (VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void RequestCompleteDelegate_1__ctor_mC36406630AA53FE105E6B12351368328A6198B42 (RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C *, RuntimeObject *, intptr_t, const RuntimeMethod*))RequestCompleteDelegate_1__ctor_m5F8FCF199BEC664D5CD559903C13841EE47E9C99_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Boolean,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitMessageVRequest_MessageRequest_mDCF5CB10E4820C69A20D95525DDE28EA9C318546 (WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 * __this, String_t* ___endpoint0, bool ___post1, String_t* ___text2, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___queryParams3, RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C * ___onComplete4, const RuntimeMethod* method);
// System.Int32 Meta.WitAi.Requests.VRequest::get_ResponseCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VRequest_get_ResponseCode_m3B14DA8CDF3407561F563450EF25944F7D641DF7_inline (VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Requests.VoiceServiceRequest::set_StatusCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequest_set_StatusCode_m850B338A234E5510FD188E98535589C1CB307B40 (VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
inline void NLPAudioRequest_4_HandleFinalNlpResponse_mD7580DE52D31FF6401E149752B383484345607FA (NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___responseData0, String_t* ___error1, const RuntimeMethod* method)
{
	((  void (*) (NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305 *, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t*, const RuntimeMethod*))NLPAudioRequest_4_HandleFinalNlpResponse_mFA105471FF7B3252F36381982A8ADC29CF40CAED_gshared)(__this, ___responseData0, ___error1, method);
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mC5D5FE9DACCE4DB5B17BBE7EA0EA33FD9F2C95A8 (WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(!0)
inline void UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * Regex_Match_m9BE3E10B8FBD9F612AC071CC3C68A974E898E233 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B (Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * __this, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A (Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_m2B1585575DC9E7E7DB5C9B84590CE1FBB5820CB7 (StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mDB446181BF2E7930D58A65FB9D1BBC47519EE083 (WitResponseHandler_t37B976412B52D86FD30C0DD7664E3C94C246EB2D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::.ctor()
inline void UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C (UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t76ADD9031D1F52597E9B8D8A448E2AC49527BFF3 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// Meta.WitAi.WitResponseReference Meta.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * WitResultUtilities_GetWitResponseReference_mAE2CBB69B14DB68D435A1BEB0CD4F59D61696063 (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isBatchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isBatchMode_m215E452DEF633146433A61A538F52B84ACA15CBB (const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_KeepAlive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpWebRequest_set_KeepAlive_m8D48A7CC78EFF4175123CD25EFCE7748A010C0D9_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_SendChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_SendChunked_m35DA1E613FF532A49DFF667B8B9DB1F468A8E060 (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Net.HttpWebRequest::get_UserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpWebRequest_get_UserAgent_m7A9652C7730CE09A602F7E8411F1CA6273357F7C (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_UserAgent_m65BC4B6DB21940A86896691156D440026410FE17 (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Add(!0)
inline bool HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7 (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 *, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Contains(!0)
inline bool HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536 (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 *, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Remove(!0)
inline bool HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2 (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 *, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::get_MicInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_get_MicInput_mDCD39279FBE2753505FCA86C5FF3224F46E065FD (AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStartListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * SpeechEvents_get_OnStartListening_m5E68D0FA2F64DC6FE02FC17CBF256D9B6A47C904_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517 (RuntimeObject * ___log0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Single[],System.Single>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2 (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * __this, int32_t ___arg10, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___arg21, float ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, float, const RuntimeMethod*))Action_3_Invoke_m7812AE5D0379032A09C4473551E7D421C251AF81_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void AudioClipAudioSource::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipAudioSource_StopRecording_mB69DA69BA65E08DDCD74EFE3F2C74A00421F486B (AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Events.SpeechEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m17280301FDD47438B2DE2F097BC6FA12BA2C856E (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>::GetEnumerator()
inline Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533  HashSet_1_GetEnumerator_m518489C59955E9BCD91ADF716BB6043307541CC1 (HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533  (*) (HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>::get_Current()
inline SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * Enumerator_get_Current_m0C3787167F634ED5684B3C96678432BE76E845F4_inline (Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 * __this, const RuntimeMethod* method)
{
	return ((  SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * (*) (Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// !1 System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>::Invoke(!0)
inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * Func_2_Invoke_mBC26CDB1DD5E76F92CF64F18675FE575DCBE7FE1 (Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___arg0, const RuntimeMethod* method)
{
	return ((  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * (*) (Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 *, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>::MoveNext()
inline bool Enumerator_MoveNext_m820FEB8AA37491DAD3EBBE5D371E69180C321CF5 (Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>::Dispose()
inline void Enumerator_Dispose_m9DFCEE5D93F7D6CAE31A029E1CE9DC31815AA6B0 (Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Void Meta.WitAi.Utilities.VoiceServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5BF563DD9457E5AC0AD99AB3DCDABA48DB6D997F (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mB2EDA66F8662B93761648F5E88D9D6B74542E2A8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsServerTokenValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsServerTokenValid_m3FDFB76401C7B6E3ACAF589015277DCEF4ED6D62 (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, String_t* ___serverToken0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared)(__this, ___result0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitRequest::HasMainThreadCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitRequest_HasMainThreadCallbacks_m14EED027D8EC177BCCADEBF45C6E3B0524F35D0C (WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * __this, const RuntimeMethod* method);
// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.WitService::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * WitService_get_RuntimeConfiguration_m0F36E2033D66E1B373B75546F2A36DF1C421C706 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean Meta.WitAi.WitService::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_IsRequestActive_m6715096503DE6420CC9FC8F9E1D6DD4137D933BE (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// Meta.WitAi.Events.VoiceEvents Meta.WitAi.WitService::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * WitService_get_VoiceEvents_m39556CBC342B47004B4BE374302707A67CECC52B (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListeningDueToTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * SpeechEvents_get_OnStoppedListeningDueToTimeout_m5CE0321C840182D73780872ED789B24957E59725_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.WitService::DeactivateRequest(UnityEngine.Events.UnityEvent,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_DeactivateRequest_mD63B22CC85D4D7FE06D82F391A5968CD2A4791B1 (WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * __this, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onComplete0, bool ___abort1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA * WitSimpleDynamicEntity_GetDynamicEntities_m03259529D566F4B43F477542FAB4421BA2D5B9A2 (WitSimpleDynamicEntity_t0E65AE8D25F2F7CAF0515024CCAB17ADE75A070D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * V_0 = NULL;
	{
		// var entity = new WitDynamicEntity(entityName, keywords);
		String_t* L_0 = __this->get_entityName_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_keywords_5();
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_2 = (WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B *)il2cpp_codegen_object_new(WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B_il2cpp_TypeInfo_var);
		WitDynamicEntity__ctor_m8359D8C3986BF4D863ED497AF9374A7EF38FE895(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var entities = new WitDynamicEntities(entity);
		WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF* L_3 = (WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF*)(WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF*)SZArrayNew(WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF_il2cpp_TypeInfo_var, (uint32_t)1);
		WitDynamicEntityU5BU5D_t282A3E2307988925DE690FFDE1A49E877953A6EF* L_4 = L_3;
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B *)L_5);
		WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA * L_6 = (WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA *)il2cpp_codegen_object_new(WitDynamicEntities_tBA2598227367F8CF7EBC87CB54BFE36EFDAAE8CA_il2cpp_TypeInfo_var);
		WitDynamicEntities__ctor_mCC966321CA97DA587F5919D0B9042F0197CFD8F8(L_6, L_4, /*hidden argument*/NULL);
		// return entities;
		return L_6;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitSimpleDynamicEntity__ctor_m2D9FB93FD93F46F05C867F3BF0791CABB0493BA7 (WitSimpleDynamicEntity_t0E65AE8D25F2F7CAF0515024CCAB17ADE75A070D * __this, const RuntimeMethod* method)
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
// System.Object Meta.WitAi.Data.WitStringValue::GetValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WitStringValue_GetValue_mCD7CD41566B8D5BEB3748C402A7F330AF10CB8D6 (WitStringValue_t480E5A89271EB8C48704B5990F34336DF2EAD4BB * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	{
		// return GetStringValue(response);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_0 = ___response0;
		String_t* L_1;
		L_1 = WitStringValue_GetStringValue_m546ACF8C7E69D6BD43D265339AD062821F0BB952(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.Data.WitStringValue::Equals(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitStringValue_Equals_m9E051FAFF68EF803C9E8FF0086FF8B139A50C812 (WitStringValue_t480E5A89271EB8C48704B5990F34336DF2EAD4BB * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// if (value is string sValue)
		RuntimeObject * L_0 = ___value1;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return GetStringValue(response) == sValue;
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_2 = ___response0;
		String_t* L_3;
		L_3 = WitStringValue_GetStringValue_m546ACF8C7E69D6BD43D265339AD062821F0BB952(__this, L_2, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0018:
	{
		// return "" + value == GetStringValue(response);
		RuntimeObject * L_6 = ___value1;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0024;
	}

IL_001e:
	{
		RuntimeObject * L_7 = ___value1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		G_B5_0 = L_8;
	}

IL_0024:
	{
		String_t* L_9 = G_B5_0;
		G_B6_0 = L_9;
		if (L_9)
		{
			G_B7_0 = L_9;
			goto IL_002d;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_10 = ___response0;
		String_t* L_11;
		L_11 = WitStringValue_GetStringValue_m546ACF8C7E69D6BD43D265339AD062821F0BB952(__this, L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(G_B7_0, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Meta.WitAi.Data.WitStringValue::GetStringValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m546ACF8C7E69D6BD43D265339AD062821F0BB952 (WitStringValue_t480E5A89271EB8C48704B5990F34336DF2EAD4BB * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_0;
		L_0 = WitValue_get_Reference_m5FEAFD66178E523BBDCB03DE4AF551230226F990(__this, /*hidden argument*/NULL);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Data.WitStringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitStringValue__ctor_mFE32B41CAEB3569B6FA9996F9AEE19F69C6F0922 (WitStringValue_t480E5A89271EB8C48704B5990F34336DF2EAD4BB * __this, const RuntimeMethod* method)
{
	{
		WitValue__ctor_m6A9496058E8AB67727BE1658EDFD9ABBFFE454AC(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m745D154FDAA3D2BF8CD8EB78D82D322BBDF6D743 (WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Requests.WitUnityRequest::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_0 = __this->get_U3CConfigurationU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Configuration(Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_set_Configuration_mD1D8647DC7F5E9B1E86C0CB72BE2A8D9C06DD27D (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___value0, const RuntimeMethod* method)
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_0 = ___value0;
		__this->set_U3CConfigurationU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.String Meta.WitAi.Requests.WitUnityRequest::get_Endpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_get_Endpoint_m09B2A01B549DCE1883E1B3D7E02B376AD563FBAB (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = __this->get_U3CEndpointU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Endpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_set_Endpoint_mC14F246E12293311B2AD07478A2E97D60CB5535B (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CEndpointU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Boolean Meta.WitAi.Requests.WitUnityRequest::get_ShouldPost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUnityRequest_get_ShouldPost_m4C36A0685F284C8907E9AA952E396E0B0C3695FF (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = __this->get_U3CShouldPostU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_ShouldPost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_set_ShouldPost_m6AD7D8CEA4507723C9873B36DFFAB141671E87CF (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldPostU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::.ctor(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.Voice.NLPRequestInputType,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest__ctor_m70EAE11FDC3380FA4B709C9E671EC47EA732C35F (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___newConfiguration0, int32_t ___newDataType1, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___newOptions2, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___newEvents3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWitRequestEndpointInfo_t81C2B68D09305D820A7918C241B719E72A6ED7E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_get_InputType_m842B09FB24F8062B50287FD8C2E213A08AD0AC03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_SetDownloadProgress_mA2DAC026D55FBFC7D19552B5ED8C98B5F7EA88D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitUnityRequest(WitConfiguration newConfiguration, NLPRequestInputType newDataType, WitRequestOptions newOptions, VoiceServiceRequestEvents newEvents) : base(newDataType, newOptions, newEvents)
		int32_t L_0 = ___newDataType1;
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_1 = ___newOptions2;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_2 = ___newEvents3;
		VoiceServiceRequest__ctor_mE729A1605DD6BC00B6E3A0209B9E4944EFF96A6E(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Configuration = newConfiguration;
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_3 = ___newConfiguration0;
		WitUnityRequest_set_Configuration_mD1D8647DC7F5E9B1E86C0CB72BE2A8D9C06DD27D_inline(__this, L_3, /*hidden argument*/NULL);
		// if (InputType == NLPRequestInputType.Text)
		int32_t L_4;
		L_4 = NLPRequest_4_get_InputType_m842B09FB24F8062B50287FD8C2E213A08AD0AC03_inline(__this, /*hidden argument*/NLPRequest_4_get_InputType_m842B09FB24F8062B50287FD8C2E213A08AD0AC03_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_007e;
		}
	}
	{
		// _request = new WitMessageVRequest(Configuration, newOptions.RequestId, SetDownloadProgress);
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_5;
		L_5 = WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D_inline(__this, /*hidden argument*/NULL);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_6 = ___newOptions2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VoiceServiceRequestOptions_get_RequestId_m3042EA0895AAC67DB1FF5E88924212A40AB4113C_inline(L_6, /*hidden argument*/NULL);
		RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 * L_8 = (RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9 *)il2cpp_codegen_object_new(RequestProgressDelegate_t8B535504CFABC896C26B46B1AAC4A8070C01E9C9_il2cpp_TypeInfo_var);
		RequestProgressDelegate__ctor_m28B696CB02837C016B6E4904AC7EEC4B792CF22C(L_8, __this, (intptr_t)((intptr_t)VoiceRequest_4_SetDownloadProgress_mA2DAC026D55FBFC7D19552B5ED8C98B5F7EA88D1_RuntimeMethod_var), /*hidden argument*/NULL);
		WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 * L_9 = (WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 *)il2cpp_codegen_object_new(WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6_il2cpp_TypeInfo_var);
		WitMessageVRequest__ctor_m291AF273DF135F027DB50B4F1DE3847D6C726EA6(L_9, L_5, L_7, L_8, (RequestFirstResponseDelegate_t4442638A91F5B51C0F05936E7D16F3B85AA4AA96 *)NULL, /*hidden argument*/NULL);
		__this->set__request_11(L_9);
		// Endpoint = Configuration.GetEndpointInfo().Message;
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_10;
		L_10 = WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = WitConfiguration_GetEndpointInfo_mC36372B566D63BC6A67E8B60FC7AFB23A45CA234_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String Meta.WitAi.IWitRequestEndpointInfo::get_Message() */, IWitRequestEndpointInfo_t81C2B68D09305D820A7918C241B719E72A6ED7E7_il2cpp_TypeInfo_var, L_11);
		WitUnityRequest_set_Endpoint_mC14F246E12293311B2AD07478A2E97D60CB5535B_inline(__this, L_12, /*hidden argument*/NULL);
		// _request.Timeout = Mathf.RoundToInt(Configuration.timeoutMS / 1000f);
		WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * L_13 = __this->get__request_11();
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_14;
		L_14 = WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_timeoutMS_7();
		int32_t L_16;
		L_16 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)((float)((float)((float)L_15))/(float)(1000.0f))), /*hidden argument*/NULL);
		NullCheck(L_13);
		VRequest_set_Timeout_m3F2E5F02C61A8E4B1FFB722669D05C5D2B554650_inline(L_13, L_16, /*hidden argument*/NULL);
		// ShouldPost = false;
		WitUnityRequest_set_ShouldPost_m6AD7D8CEA4507723C9873B36DFFAB141671E87CF_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00a4;
	}

IL_007e:
	{
		// else if (InputType == NLPRequestInputType.Audio)
		int32_t L_17;
		L_17 = NLPRequest_4_get_InputType_m842B09FB24F8062B50287FD8C2E213A08AD0AC03_inline(__this, /*hidden argument*/NLPRequest_4_get_InputType_m842B09FB24F8062B50287FD8C2E213A08AD0AC03_RuntimeMethod_var);
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00a4;
		}
	}
	{
		// Endpoint = Configuration.GetEndpointInfo().Speech;
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_18;
		L_18 = WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = WitConfiguration_GetEndpointInfo_mC36372B566D63BC6A67E8B60FC7AFB23A45CA234_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Meta.WitAi.IWitRequestEndpointInfo::get_Speech() */, IWitRequestEndpointInfo_t81C2B68D09305D820A7918C241B719E72A6ED7E7_il2cpp_TypeInfo_var, L_19);
		WitUnityRequest_set_Endpoint_mC14F246E12293311B2AD07478A2E97D60CB5535B_inline(__this, L_20, /*hidden argument*/NULL);
		// ShouldPost = true;
		WitUnityRequest_set_ShouldPost_m6AD7D8CEA4507723C9873B36DFFAB141671E87CF_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// _initialized = true;
		__this->set__initialized_14((bool)1);
		// SetState(VoiceRequestState.Initialized);
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetState(Meta.Voice.VoiceRequestState) */, __this, 0);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::SetState(Meta.Voice.VoiceRequestState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_SetState_m07A3B4FC522522DB1351246D959D232A08833B3E (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_SetState_mD12916D2EF71FC547198D078C9DF35E010D46980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_initialized)
		bool L_0 = __this->get__initialized_14();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// base.SetState(newState);
		int32_t L_1 = ___newState0;
		NLPRequest_4_SetState_mD12916D2EF71FC547198D078C9DF35E010D46980(__this, L_1, /*hidden argument*/NLPRequest_4_SetState_mD12916D2EF71FC547198D078C9DF35E010D46980_RuntimeMethod_var);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.String Meta.WitAi.Requests.WitUnityRequest::GetSendError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_GetSendError_m26B996DB72B4F0ABD905EB6FFCCE4B7C2E249531 (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_GetSendError_m73A9C54B83322A8AE2474D03CCE935F6CAE8128E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402F7311BABF77D31EFBF5956A0D15E0A40E52C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70BBAB30B6900EC0E29CCD027B482CF80BD58908);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Configuration == null)
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_0;
		L_0 = WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return "Cannot send request without a valid configuration.";
		return _stringLiteral70BBAB30B6900EC0E29CCD027B482CF80BD58908;
	}

IL_0014:
	{
		// if (_request == null)
		WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * L_2 = __this->get__request_11();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return "Request creation failed.";
		return _stringLiteral402F7311BABF77D31EFBF5956A0D15E0A40E52C4;
	}

IL_0022:
	{
		// return base.GetSendError();
		String_t* L_3;
		L_3 = NLPRequest_4_GetSendError_m73A9C54B83322A8AE2474D03CCE935F6CAE8128E(__this, /*hidden argument*/NLPRequest_4_GetSendError_m73A9C54B83322A8AE2474D03CCE935F6CAE8128E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleSend_m7DDD18C2DBD50FC58DC55B628D88206573EC64CF (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1__ctor_mC36406630AA53FE105E6B12351368328A6198B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 * V_0 = NULL;
	{
		// if (_request is WitMessageVRequest messageRequest)
		WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * L_0 = __this->get__request_11();
		V_0 = ((WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 *)IsInstClass((RuntimeObject*)L_0, WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6_il2cpp_TypeInfo_var));
		WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// messageRequest.MessageRequest(Endpoint, ShouldPost,
		//     Options.Text, Options.QueryParams,
		//     HandleFinalNlpResponse);
		WitMessageVRequest_tFF23943726E743EB93159F71DA2D76D4ABFE08F6 * L_2 = V_0;
		String_t* L_3;
		L_3 = WitUnityRequest_get_Endpoint_m09B2A01B549DCE1883E1B3D7E02B376AD563FBAB_inline(__this, /*hidden argument*/NULL);
		bool L_4;
		L_4 = WitUnityRequest_get_ShouldPost_m4C36A0685F284C8907E9AA952E396E0B0C3695FF_inline(__this, /*hidden argument*/NULL);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_5;
		L_5 = VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_inline(__this, /*hidden argument*/VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VoiceServiceRequestOptions_get_Text_m8CE34499789FCCF557292C0A3BCAB2578FD60A5E_inline(L_5, /*hidden argument*/NULL);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_7;
		L_7 = VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_inline(__this, /*hidden argument*/VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var);
		NullCheck(L_7);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8;
		L_8 = VoiceServiceRequestOptions_get_QueryParams_mB8266C3A94EA18BE6ED9805038A5B44A5AD14974_inline(L_7, /*hidden argument*/NULL);
		RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C * L_9 = (RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C *)il2cpp_codegen_object_new(RequestCompleteDelegate_1_t887B751CEEF25058268EB06A357AEA4146004F8C_il2cpp_TypeInfo_var);
		RequestCompleteDelegate_1__ctor_mC36406630AA53FE105E6B12351368328A6198B42(L_9, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 53)), /*hidden argument*/RequestCompleteDelegate_1__ctor_mC36406630AA53FE105E6B12351368328A6198B42_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_10;
		L_10 = WitMessageVRequest_MessageRequest_mDCF5CB10E4820C69A20D95525DDE28EA9C318546(L_2, L_3, L_4, L_6, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleFinalNlpResponse_mD9A3AE788D137E9D5E1F3D56851F8C01E91BAE0B (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___responseData0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPAudioRequest_4_HandleFinalNlpResponse_mD7580DE52D31FF6401E149752B383484345607FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StatusCode = _request.ResponseCode;
		WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * L_0 = __this->get__request_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VRequest_get_ResponseCode_m3B14DA8CDF3407561F563450EF25944F7D641DF7_inline(L_0, /*hidden argument*/NULL);
		VoiceServiceRequest_set_StatusCode_m850B338A234E5510FD188E98535589C1CB307B40(__this, L_1, /*hidden argument*/NULL);
		// base.HandleFinalNlpResponse(responseData, error);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_2 = ___responseData0;
		String_t* L_3 = ___error1;
		NLPAudioRequest_4_HandleFinalNlpResponse_mD7580DE52D31FF6401E149752B383484345607FA(__this, L_2, L_3, /*hidden argument*/NLPAudioRequest_4_HandleFinalNlpResponse_mD7580DE52D31FF6401E149752B383484345607FA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleCancel_mA1558D361304461E7C1FE5BF8093A463F298C8A5 (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// if (_request != null)
		WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * L_0 = __this->get__request_11();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _request.Cancel();
		WitVRequest_t790CCDDE42DD73A483192CEF5B13CF4A9D5D3B25 * L_1 = __this->get__request_11();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.String Meta.WitAi.Requests.WitUnityRequest::GetActivateAudioError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_GetActivateAudioError_mF43CC0874C7DD4C65CE871F1C574909055206C38 (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84027E56C00686BFC14F4A4673543F9850713BCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Audio request not yet implemented";
		return _stringLiteral84027E56C00686BFC14F4A4673543F9850713BCF;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleAudioActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleAudioActivation_m714A60F84AE04251DA7BAFAAB1F83884468E2F73 (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// SetAudioInputState(VoiceAudioInputState.On);
		VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetAudioInputState(Meta.Voice.VoiceAudioInputState) */, __this, 2);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleAudioDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleAudioDeactivation_mA4B54D29C135B24B28F603FADE9DDBD0564062FC (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// SetAudioInputState(VoiceAudioInputState.Off);
		VirtActionInvoker1< int32_t >::Invoke(38 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetAudioInputState(Meta.Voice.VoiceAudioInputState) */, __this, 0);
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
// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUtteranceMatcher_OnValidateResponse_mC99D9CC7D594F34462AE404A414FC23731BB66DC (WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_1;
		L_1 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (!IsMatch(text))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = WitUtteranceMatcher_IsMatch_mC5D5FE9DACCE4DB5B17BBE7EA0EA33FD9F2C95A8(__this, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return "Required utterance does not match";
		return _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
	}

IL_0020:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseInvalid_mE7E837557EC8C8198B74868682C719102808E483 (WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, String_t* ___error1, const RuntimeMethod* method)
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error){}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseSuccess_m9875BB0677A477B338C5C95BDE95D34E998C21E9 (WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * G_B2_0 = NULL;
	StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * G_B1_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_1;
		L_1 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * L_3 = __this->get_onUtteranceMatched_10();
		StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_5, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mC5D5FE9DACCE4DB5B17BBE7EA0EA33FD9F2C95A8 (WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * V_0 = NULL;
	{
		// if (useRegex)
		bool L_0 = __this->get_useRegex_9();
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (null == regex)
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_1 = __this->get_regex_11();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_2 = __this->get_searchText_7();
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_3 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4(L_3, L_2, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_regex_11(L_3);
	}

IL_0023:
	{
		// var match = regex.Match(text);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_4 = __this->get_regex_11();
		String_t* L_5 = ___text0;
		NullCheck(L_4);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_6;
		L_6 = Regex_Match_m9BE3E10B8FBD9F612AC071CC3C68A974E898E233(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (match.Success)
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_9 = __this->get_exactMatch_8();
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___text0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, L_12, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// return true;
		return (bool)1;
	}

IL_0051:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_14 = __this->get_exactMatch_8();
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_15 = ___text0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_15, /*hidden argument*/NULL);
		String_t* L_17 = __this->get_searchText_7();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0073:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_20 = ___text0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_20, /*hidden argument*/NULL);
		String_t* L_22 = __this->get_searchText_7();
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_21, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_008d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_m929E1218A3DAB8861B860EDD66F379B64B5E37FB (WitUtteranceMatcher_t97D301BD2BA54A174D2AB027B93C24898E0D2EC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->set_exactMatch_8((bool)1);
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF * L_0 = (StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF *)il2cpp_codegen_object_new(StringEvent_t9C69430E517F031F0D14C09E8BE32A2EDAF6C8AF_il2cpp_TypeInfo_var);
		StringEvent__ctor_m2B1585575DC9E7E7DB5C9B84590CE1FBB5820CB7(L_0, /*hidden argument*/NULL);
		__this->set_onUtteranceMatched_10(L_0);
		WitResponseHandler__ctor_mDB446181BF2E7930D58A65FB9D1BBC47519EE083(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.Events.WitValidationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValidationEvent__ctor_m811B34123CDD68F73B77D88C6BAA772D8B490EC6 (WitValidationEvent_tA8CE4A84BE132FF961891B2B34780FDCB33F011D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C(__this, /*hidden argument*/UnityEvent_1__ctor_mBA1F8EB47FBAFE7A30C3CB04455856AE52B01D8C_RuntimeMethod_var);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * WitValue_get_Reference_m5FEAFD66178E523BBDCB03DE4AF551230226F990 (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, const RuntimeMethod* method)
{
	{
		// if (null == reference)
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_0 = __this->get_reference_5();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// reference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_1 = __this->get_path_4();
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_2;
		L_2 = WitResultUtilities_GetWitResponseReference_mAE2CBB69B14DB68D435A1BEB0CD4F59D61696063(L_1, /*hidden argument*/NULL);
		__this->set_reference_5(L_2);
	}

IL_0019:
	{
		// return reference;
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_3 = __this->get_reference_5();
		return L_3;
	}
}
// System.String Meta.WitAi.Data.WitValue::ToString(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitValue_ToString_m67BA6AFFA40AFE6E4277A7677CA073FE69DE43B0 (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t7E8528E5D4DBE5721C2063CFFCA4EBFBB708837A * L_0;
		L_0 = WitValue_get_Reference_m5FEAFD66178E523BBDCB03DE4AF551230226F990(__this, /*hidden argument*/NULL);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_m6A9496058E8AB67727BE1658EDFD9ABBFFE454AC (WitValue_t2AFC8A350B5DC502391C6519ED0AC3B6EB2A5ED7 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Meta.WitAi.WrapHttpWebRequest::.ctor(System.Net.HttpWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest__ctor_m0F2EB86CA250E06B096EEA39B44B879DC209F924 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___httpWebRequest0, const RuntimeMethod* method)
{
	{
		// public WrapHttpWebRequest(HttpWebRequest httpWebRequest)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (Application.isBatchMode)
		bool L_0;
		L_0 = Application_get_isBatchMode_m215E452DEF633146433A61A538F52B84ACA15CBB(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// httpWebRequest.KeepAlive = false;
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_1 = ___httpWebRequest0;
		NullCheck(L_1);
		HttpWebRequest_set_KeepAlive_m8D48A7CC78EFF4175123CD25EFCE7748A010C0D9_inline(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// _httpWebRequest = httpWebRequest;
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_2 = ___httpWebRequest0;
		__this->set__httpWebRequest_0(L_2);
		// }
		return;
	}
}
// System.Net.WebHeaderCollection Meta.WitAi.WrapHttpWebRequest::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * WrapHttpWebRequest_get_Headers_m4BAF82519D6E3221BADE13AA1C79ACE5070273C4 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public WebHeaderCollection Headers { get => _httpWebRequest.Headers; set => _httpWebRequest.Headers = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_1;
		L_1 = VirtFuncInvoker0< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(11 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_Headers(System.Net.WebHeaderCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Headers_mAB9226AD989ED153800F2114A3E721E1B2CABC03 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___value0, const RuntimeMethod* method)
{
	{
		// public WebHeaderCollection Headers { get => _httpWebRequest.Headers; set => _httpWebRequest.Headers = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(12 /* System.Void System.Net.WebRequest::set_Headers(System.Net.WebHeaderCollection) */, L_0, L_1);
		return;
	}
}
// System.String Meta.WitAi.WrapHttpWebRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_Method_m06DD0BDA216AA7737D7C80DA2A46D7DF1221BA05 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public string Method { get => _httpWebRequest.Method; set => _httpWebRequest.Method = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Net.WebRequest::get_Method() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Method_m24F0945CE867A7CB1593BF3F80104EB1394F9578 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Method { get => _httpWebRequest.Method; set => _httpWebRequest.Method = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_0, L_1);
		return;
	}
}
// System.String Meta.WitAi.WrapHttpWebRequest::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_ContentType_mC58AA28A2A3E6D10D890797A266585221FCEB97B (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public string ContentType { get => _httpWebRequest.ContentType; set => _httpWebRequest.ContentType = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Net.WebRequest::get_ContentType() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_ContentType_m1A5FDD24B629D16710E538BD8C4C894799D44DA3 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ContentType { get => _httpWebRequest.ContentType; set => _httpWebRequest.ContentType = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_0, L_1);
		return;
	}
}
// System.Int64 Meta.WitAi.WrapHttpWebRequest::get_ContentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WrapHttpWebRequest_get_ContentLength_m8BDE0D989EDFCCFEA8CC65BB6F1B5856669FCF81 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public long ContentLength { get => _httpWebRequest.ContentLength; set => _httpWebRequest.ContentLength = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(13 /* System.Int64 System.Net.WebRequest::get_ContentLength() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_ContentLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_ContentLength_mA9F10744EBC995F838E0867B24A3DD68E699BE98 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long ContentLength { get => _httpWebRequest.ContentLength; set => _httpWebRequest.ContentLength = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(14 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Boolean Meta.WitAi.WrapHttpWebRequest::get_SendChunked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrapHttpWebRequest_get_SendChunked_m28638FA59DD527D4A57C28091D599840CDA0CBA9 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public bool SendChunked { get => _httpWebRequest.SendChunked; set => _httpWebRequest.SendChunked = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_SendChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_SendChunked_mA7F0B843755E33983D7B338FF9EA230125059CDF (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SendChunked { get => _httpWebRequest.SendChunked; set => _httpWebRequest.SendChunked = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		bool L_1 = ___value0;
		NullCheck(L_0);
		HttpWebRequest_set_SendChunked_m35DA1E613FF532A49DFF667B8B9DB1F468A8E060(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Meta.WitAi.WrapHttpWebRequest::get_UserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_UserAgent_m68D1672C0E1D5894B2FB62A2D77E20AE4BC45E64 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public string UserAgent { get => _httpWebRequest.UserAgent; set => _httpWebRequest.UserAgent = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = HttpWebRequest_get_UserAgent_m7A9652C7730CE09A602F7E8411F1CA6273357F7C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_UserAgent_m1A7D0A196E1F8EE379C37BDE8683B7FB95F67D2F (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserAgent { get => _httpWebRequest.UserAgent; set => _httpWebRequest.UserAgent = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		HttpWebRequest_set_UserAgent_m65BC4B6DB21940A86896691156D440026410FE17(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Meta.WitAi.WrapHttpWebRequest::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrapHttpWebRequest_get_Timeout_mC01D2A62E0117E88E028DF96E097639B430ABE6D (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// public int Timeout { get => _httpWebRequest.Timeout; set => _httpWebRequest.Timeout = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Net.WebRequest::get_Timeout() */, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::set_Timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Timeout_m27B8C207B2163E91866568D8FAB70462D54D7C2D (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Timeout { get => _httpWebRequest.Timeout; set => _httpWebRequest.Timeout = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Net.WebRequest::set_Timeout(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_Abort_mCF118A6B06FCF30C22DD896210A00DF3F5142DD8 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// _httpWebRequest.Abort();
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Net.WebRequest::Abort() */, L_0);
		// }
		return;
	}
}
// System.Void Meta.WitAi.WrapHttpWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_Dispose_m59DBAE8B29B6DBAC0BFD292E1F6138AAD5402B3C (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, const RuntimeMethod* method)
{
	{
		// _httpWebRequest.Abort();
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Net.WebRequest::Abort() */, L_0);
		// _httpWebRequest = null;
		__this->set__httpWebRequest_0((HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A *)NULL);
		// }
		return;
	}
}
// System.IAsyncResult Meta.WitAi.WrapHttpWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapHttpWebRequest_BeginGetRequestStream_m6254840FB0CDD6A3731DA23EB37E854457119311 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.BeginGetRequestStream(callback, state);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___callback0;
		RuntimeObject * L_2 = ___state1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtFuncInvoker2< RuntimeObject*, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(26 /* System.IAsyncResult System.Net.WebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.IAsyncResult Meta.WitAi.WrapHttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapHttpWebRequest_BeginGetResponse_m83D2EB344729ACC92C740EDD8AA964FF2D25322C (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.BeginGetResponse(callback, state);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___callback0;
		RuntimeObject * L_2 = ___state1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtFuncInvoker2< RuntimeObject*, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(24 /* System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.IO.Stream Meta.WitAi.WrapHttpWebRequest::EndGetRequestStream(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WrapHttpWebRequest_EndGetRequestStream_m9A4D032013B19CCDE42D7B8E4277DF54A5B3A795 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.EndGetRequestStream(asyncResult);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		RuntimeObject* L_1 = ___asyncResult0;
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2;
		L_2 = VirtFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject* >::Invoke(27 /* System.IO.Stream System.Net.WebRequest::EndGetRequestStream(System.IAsyncResult) */, L_0, L_1);
		return L_2;
	}
}
// System.Net.WebResponse Meta.WitAi.WrapHttpWebRequest::EndGetResponse(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * WrapHttpWebRequest_EndGetResponse_mFC5429EC01C3623A61F54A32EF7766446A6D1D54 (WrapHttpWebRequest_tE6469F54BAEC233173C3EE2BE55AE7FD2FF12542 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	{
		// return (_httpWebRequest).EndGetResponse(asyncResult);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		RuntimeObject* L_1 = ___asyncResult0;
		NullCheck(L_0);
		WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * L_2;
		L_2 = VirtFuncInvoker1< WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 *, RuntimeObject* >::Invoke(25 /* System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult) */, L_0, L_1);
		return L_2;
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
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30__ctor_m0365B77F9CD992C5F713C82902FF562232A309F2 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30_System_IDisposable_Dispose_mAFE9050776A09DE2706E1EB1FC98562C5208DBA6 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForMicToStartU3Ed__30_MoveNext_m1B77FB822B99AFCA83704ED43F45B7CC041D6FA9 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_m657788DCCD3843AFC25039F4C2F1FD71CA1F5B8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B11_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B10_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _waitingRecorders.Add(component);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_4 = V_1;
		NullCheck(L_4);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_5 = L_4->get__waitingRecorders_11();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_6 = __this->get_component_3();
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7(L_5, L_6, /*hidden argument*/HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var);
		// yield return new WaitUntil(() => null != MicInput && MicInput.IsInputAvailable);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_8 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_9 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_9, L_8, (intptr_t)((intptr_t)AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_m657788DCCD3843AFC25039F4C2F1FD71CA1F5B8C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_10 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!_waitingRecorders.Contains(component))
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_11 = V_1;
		NullCheck(L_11);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_12 = L_11->get__waitingRecorders_11();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13 = __this->get_component_3();
		NullCheck(L_12);
		bool L_14;
		L_14 = HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536(L_12, L_13, /*hidden argument*/HashSet_1_Contains_m624399A0B2E2345240C88630C77404171EB35536_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_006c:
	{
		// _waitingRecorders.Remove(component);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_15 = V_1;
		NullCheck(L_15);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_16 = L_15->get__waitingRecorders_11();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_17 = __this->get_component_3();
		NullCheck(L_16);
		bool L_18;
		L_18 = HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2(L_16, L_17, /*hidden argument*/HashSet_1_Remove_m7AED6ED019E47499A63CEC092639F7017955C5B2_RuntimeMethod_var);
		// _activeRecorders.Add(component);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_19 = V_1;
		NullCheck(L_19);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_20 = L_19->get__activeRecorders_12();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_21 = __this->get_component_3();
		NullCheck(L_20);
		bool L_22;
		L_22 = HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7(L_20, L_21, /*hidden argument*/HashSet_1_Add_mCE866C60930AD13527C9F3AE3E17F8E970679BC7_RuntimeMethod_var);
		// if (!MicInput.IsRecording)
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = AudioBuffer_get_MicInput_mDCD39279FBE2753505FCA86C5FF3224F46E065FD(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Meta.WitAi.Interfaces.IAudioInputSource::get_IsRecording() */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_24);
		if (L_25)
		{
			goto IL_00b3;
		}
	}
	{
		// MicInput.StartRecording(audioBufferConfiguration.sampleLengthInMs);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_26 = V_1;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = AudioBuffer_get_MicInput_mDCD39279FBE2753505FCA86C5FF3224F46E065FD(L_26, /*hidden argument*/NULL);
		AudioBuffer_t872E07C7D0C1523473E483A79D96AF6E3D3E5EBB * L_28 = V_1;
		NullCheck(L_28);
		AudioBufferConfiguration_t1440A55536B26647E98D31BCA8B1853805B6350F * L_29 = L_28->get_audioBufferConfiguration_6();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_sampleLengthInMs_0();
		NullCheck(L_27);
		InterfaceActionInvoker1< int32_t >::Invoke(8 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::StartRecording(System.Int32) */, IAudioInputSource_t26DA5C7EE303EB584B15D0BBAB3DD07D1F1B85A7_il2cpp_TypeInfo_var, L_27, L_30);
	}

IL_00b3:
	{
		// if (component is IVoiceEventProvider v)
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_31 = __this->get_component_3();
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_31, IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var));
		RuntimeObject* L_32 = V_2;
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		// v.VoiceEvents.OnStartListening?.Invoke();
		RuntimeObject* L_33 = V_2;
		NullCheck(L_33);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_34;
		L_34 = InterfaceFuncInvoker0< VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * >::Invoke(0 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.IVoiceEventProvider::get_VoiceEvents() */, IVoiceEventProvider_t5032EE565774395811446B76F32C8FF9A22F92B4_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_35;
		L_35 = SpeechEvents_get_OnStartListening_m5E68D0FA2F64DC6FE02FC17CBF256D9B6A47C904_inline(L_34, /*hidden argument*/NULL);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_36 = L_35;
		G_B10_0 = L_36;
		if (L_36)
		{
			G_B11_0 = L_36;
			goto IL_00d3;
		}
	}
	{
		goto IL_00d8;
	}

IL_00d3:
	{
		NullCheck(G_B11_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B11_0, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForMicToStartU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m08F570CF16B1F55C1845DC974FA72AAC6DD2F018 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_mC3E9CCE987ECFA525971B1ECA01ECF11308E5DD3 (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_mC3E9CCE987ECFA525971B1ECA01ECF11308E5DD3_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_get_Current_m8869853019EA9831E197C5C8BCB660C233E1552A (U3CWaitForMicToStartU3Ed__30_tC47157EB905D8AADBBC36AF02D42E8B311AB2F5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent__ctor_m15B88F6003BF1CC7E54F1CA42A954C16D1BFAFFF (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::Invoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_mA971F17F482AB6E66A9B718661BA40DC7C9F5E6D (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * ___marker0, float ___levelMax1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___marker0, ___levelMax1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, ___marker0, ___levelMax1);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, ___marker0, ___levelMax1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___marker0, ___levelMax1);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___marker0, ___levelMax1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
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
						GenericInterfaceActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(targetMethod, targetThis, ___marker0, ___levelMax1);
					else
						GenericVirtActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(targetMethod, targetThis, ___marker0, ___levelMax1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___marker0, ___levelMax1);
					else
						VirtActionInvoker2< Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___marker0, ___levelMax1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___marker0, ___levelMax1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::BeginInvoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSampleReadyEvent_BeginInvoke_m47963337BE0FDA3722BAEB8E3CE1FF2C5A515397 (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, Marker_t18EFDAA16476EDFE45EA84E1C6643F4456C99009 * ___marker0, float ___levelMax1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___marker0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___levelMax1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_EndInvoke_mB914654E7267919BEB860BD7CEEF9A9EDE12DCF1 (OnSampleReadyEvent_t07C9D72A975A08E838016C2F5F9719839832579D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void AudioClipAudioSource/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mD5AE075E4E2B660BC589BF52D25FDA77B5BEDE26 (U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AudioClipAudioSource/<>c__DisplayClass34_0::<SetActiveClip>b__0(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass34_0_U3CSetActiveClipU3Eb__0_m7FCE806757C1438B24A9AD94217971752D2EDE76 (U3CU3Ec__DisplayClass34_0_t8E278025CF1E9354EEBF913CDEB20C4E004753C7 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// if (clip.name == clipName)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___clip0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_clipName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// return false;
		return (bool)0;
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
// System.Void AudioClipAudioSource/<ProcessClip>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessClipU3Ed__25__ctor_m2E9E66750029DC894AB4C46A7E9A9B88563908C7 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AudioClipAudioSource/<ProcessClip>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessClipU3Ed__25_System_IDisposable_Dispose_mA3E201D6F79B0F1C49AD302131623955F71944D8 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AudioClipAudioSource/<ProcessClip>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcessClipU3Ed__25_MoveNext_m41F19178AD571B382BCB4B3A8C71A7D95957CA73 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA99C3E11496601CEE9BFCDB3259DDC84C21CB8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * V_1 = NULL;
	int32_t V_2 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	float V_4 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_5 = NULL;
	int32_t V_6 = 0;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B9_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_011b;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int chunkSize = 0;
		__this->set_U3CchunkSizeU3E5__2_4(0);
		// for (int index = 0; index < clipData.Length; index += chunkSize)
		__this->set_U3CindexU3E5__3_5(0);
		goto IL_0135;
	}

IL_0034:
	{
		// chunkSize = (int) (16000 * Time.deltaTime);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CchunkSizeU3E5__2_4(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(16000.0f), (float)L_4))));
		// int len = Math.Min(chunkSize, clipData.Length - index);
		int32_t L_5 = __this->get_U3CchunkSizeU3E5__2_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_clipData_2();
		NullCheck(L_6);
		int32_t L_7 = __this->get_U3CindexU3E5__3_5();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)L_7)), /*hidden argument*/NULL);
		V_2 = L_8;
		// var data = new float[chunkSize];
		int32_t L_9 = __this->get_U3CchunkSizeU3E5__2_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_3 = L_10;
		// Array.Copy(clipData, index, data, 0, len);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_clipData_2();
		int32_t L_12 = __this->get_U3CindexU3E5__3_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = V_3;
		int32_t L_14 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_11, L_12, (RuntimeArray *)(RuntimeArray *)L_13, 0, L_14, /*hidden argument*/NULL);
		// var max = float.MinValue;
		V_4 = (-(std::numeric_limits<float>::max)());
		// foreach (var f in data)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = V_3;
		V_5 = L_15;
		V_6 = 0;
		goto IL_00a4;
	}

IL_0090:
	{
		// foreach (var f in data)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = V_5;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// max = Mathf.Max(f, max);
		float L_20 = V_4;
		float L_21;
		L_21 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a4:
	{
		// foreach (var f in data)
		int32_t L_23 = V_6;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = V_5;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0090;
		}
	}
	{
		// VLog.D($"Sending {index}/{clipData.Length} [{data.Length}] samples with a max volume of {max}");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		int32_t L_27 = __this->get_U3CindexU3E5__3_5();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_26;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = __this->get_clipData_2();
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)));
		RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = V_3;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)));
		RuntimeObject * L_37 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_34;
		float L_39 = V_4;
		float L_40 = L_39;
		RuntimeObject * L_41 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
		String_t* L_42;
		L_42 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral9EA99C3E11496601CEE9BFCDB3259DDC84C21CB8, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(L_42, /*hidden argument*/NULL);
		// OnSampleReady?.Invoke(data.Length, data, max);
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_43 = V_1;
		NullCheck(L_43);
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_44 = L_43->get_OnSampleReady_16();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_45 = L_44;
		G_B8_0 = L_45;
		if (L_45)
		{
			G_B9_0 = L_45;
			goto IL_0100;
		}
	}
	{
		goto IL_010b;
	}

IL_0100:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = V_3;
		NullCheck(L_46);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = V_3;
		float L_48 = V_4;
		NullCheck(G_B9_0);
		Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2(G_B9_0, ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))), L_47, L_48, /*hidden argument*/Action_3_Invoke_m47D2C5913168372CE923323D0ACFC4D3275148D2_RuntimeMethod_var);
	}

IL_010b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_011b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int index = 0; index < clipData.Length; index += chunkSize)
		int32_t L_49 = __this->get_U3CindexU3E5__3_5();
		int32_t L_50 = __this->get_U3CchunkSizeU3E5__2_4();
		__this->set_U3CindexU3E5__3_5(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)));
	}

IL_0135:
	{
		// for (int index = 0; index < clipData.Length; index += chunkSize)
		int32_t L_51 = __this->get_U3CindexU3E5__3_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = __this->get_clipData_2();
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		// StopRecording();
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_53 = V_1;
		NullCheck(L_53);
		AudioClipAudioSource_StopRecording_mB69DA69BA65E08DDCD74EFE3F2C74A00421F486B(L_53, /*hidden argument*/NULL);
		// clipIndex++;
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_54 = V_1;
		AudioClipAudioSource_t7BFEBED8C68A08FEF3A83F8AA5C8EF09D5C03F2A * L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = L_55->get_clipIndex_9();
		NullCheck(L_54);
		L_54->set_clipIndex_9(((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1)));
		// }
		return (bool)0;
	}
}
// System.Object AudioClipAudioSource/<ProcessClip>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessClipU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m342A6D29672C6C8E2C9251A6807B07C329E6CA89 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AudioClipAudioSource/<ProcessClip>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessClipU3Ed__25_System_Collections_IEnumerator_Reset_m2B907A05CEDFF91240810A7FA4D422B467A6D8B7 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProcessClipU3Ed__25_System_Collections_IEnumerator_Reset_m2B907A05CEDFF91240810A7FA4D422B467A6D8B7_RuntimeMethod_var)));
	}
}
// System.Object AudioClipAudioSource/<ProcessClip>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessClipU3Ed__25_System_Collections_IEnumerator_get_Current_m8D9F80624B4FD2EFD6F488E063564A7A6895B066 (U3CProcessClipU3Ed__25_tD743BC5364E84FC3B63B9615BD6685A15BCB20A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Meta.WitAi.Events.SpeechEvents/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCE556F7F4279421DA868A4687AB2029A5F689011 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * L_0 = (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A *)il2cpp_codegen_object_new(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m17280301FDD47438B2DE2F097BC6FA12BA2C856E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m17280301FDD47438B2DE2F097BC6FA12BA2C856E (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_0(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t97BBD372FDB3FCC54138AA078EA6E6A6D286D961 * U3CU3Ec_U3CSetEventsU3Eb__85_0_m1B7055E2A21FF977723E6A389902350851A97685 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onRequestOptionSetup, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_t97BBD372FDB3FCC54138AA078EA6E6A6D286D961 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E * L_2 = L_1->get__onRequestOptionSetup_3();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_1(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 * U3CU3Ec_U3CSetEventsU3Eb__85_1_mC0AD6615B22C31B68C8F84A0C63F4BD059705D0C (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onRequestInitialized, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_2 = L_1->get__onRequestInitialized_4();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_2(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 * U3CU3Ec_U3CSetEventsU3Eb__85_2_m902E9E226C4D1A0FCA4D1FC4780676841E86437E (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onRequestCreated, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_tDC901F4AA3737BAF37F72949821C951C06D30015 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759 * L_2 = L_1->get__onRequestCreated_5();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_3(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 * U3CU3Ec_U3CSetEventsU3Eb__85_3_m8E00F36D1CB829E278BB469641325E8EDBEF91BA (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onSend, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_2 = L_1->get__onSend_6();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_4(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_4_m1429431E271AFBDBB4505BC0551E7C18AC54B2B9 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onMinimumWakeThresholdHit, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onMinimumWakeThresholdHit_8();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_5(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_5_m9D6715D776E9F02475659ACD302001BB6692F980 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onMicDataSent, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onMicDataSent_9();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_6(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_6_m7D77F2B278AC45AE95AB27B0B92FF62D17777690 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onStoppedListeningDueToDeactivation, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onStoppedListeningDueToDeactivation_10();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_7(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_7_mDC979C79E7AC3C11169FAE597FDB2DDB35B47EE0 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onStoppedListeningDueToInactivity, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onStoppedListeningDueToInactivity_11();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_8(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_8_m457386E7F9C5852741C3D86DCC53F88F93388B8E (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onAborting, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onAborting_14();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_9(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_9_mD9401FECBA20CB20E2064AC76F860781300BF846 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onAborted, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onAborted_15();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_10(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * U3CU3Ec_U3CSetEventsU3Eb__85_10_m1CB433D17E13E9158336F688A20D1E909656C782 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onCanceled, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = L_1->get__onCanceled_16();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_11(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C * U3CU3Ec_U3CSetEventsU3Eb__85_11_m94F0DC5F169D796DD53601DBA7DFA291BF86C9E1 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onPartialResponse, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_2 = L_1->get__onPartialResponse_18();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_12(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C * U3CU3Ec_U3CSetEventsU3Eb__85_12_m2D15EC68CEDE890EFE406336114388BABAF73EE8 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onResponse, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_tCB3F0A8ACE9F3CF9EAF4AFE51D83A39655DEFD0C *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705 * L_2 = L_1->get__onResponse_19();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`2<System.String,System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_13(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * U3CU3Ec_U3CSetEventsU3Eb__85_13_mF1DD0DF541E2AA6611BD154A9C1DB3F3DFC6C17D (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onError, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_2 = L_1->get__onError_20();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_14(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_14_mA2AA0A244BC135033C252933CB5BC66BD126E46C (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onRequestCompleted, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onRequestCompleted_21();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_15(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 * U3CU3Ec_U3CSetEventsU3Eb__85_15_mE63A6205446233D1FDA30F355609C5A75B6D9497 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onComplete, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_2 = L_1->get__onComplete_22();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_16(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_16_m683AA7F9B54D2734F35788CD063B570F43AB0DC8 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onStartListening, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onStartListening_24();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_17(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * U3CU3Ec_U3CSetEventsU3Eb__85_17_m85440B9851C7EDD52EF94EB919793570BD18D7E8 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onStoppedListening, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1->get__onStoppedListening_25();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Single> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_18(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * U3CU3Ec_U3CSetEventsU3Eb__85_18_m713B5CD5E048F259BBC1CB6A64244A5C8F5181A5 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onMicLevelChanged, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_2 = L_1->get__onMicLevelChanged_26();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_19(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * U3CU3Ec_U3CSetEventsU3Eb__85_19_m832A23C331B449F0DCE73C876181C21A9A36F62D (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onPartialTranscription, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = L_1->get__onPartialTranscription_28();
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_20(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * U3CU3Ec_U3CSetEventsU3Eb__85_20_mB7687A83F8DEAB7AEB794F5078F73269D2DDA5C0 (U3CU3Ec_tCF1C7063B991A610AFEC98D9B8FB054720C67A6A * __this, SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * ___events0, const RuntimeMethod* method)
{
	{
		// SetEvent((events) => events?._onFullTranscription, add);
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = ___events0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *)NULL;
	}

IL_0005:
	{
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_1 = ___events0;
		NullCheck(L_1);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = L_1->get__onFullTranscription_29();
		return L_2;
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
// System.Void Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0__ctor_m49AF70541EC15CB8E179AC1345AC6B2AF4785A9D (U3CU3Ec__DisplayClass86_0_t48A2EDC7B00777CBE1120B6B1E14CE9060FC23D6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::<SetEvent>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0_U3CSetEventU3Eb__0_m8F535E3EC8ADBBB2EB44E3B15775EC82F3C8DD58 (U3CU3Ec__DisplayClass86_0_t48A2EDC7B00777CBE1120B6B1E14CE9060FC23D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9DFCEE5D93F7D6CAE31A029E1CE9DC31815AA6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m820FEB8AA37491DAD3EBBE5D371E69180C321CF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0C3787167F634ED5684B3C96678432BE76E845F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mBC26CDB1DD5E76F92CF64F18675FE575DCBE7FE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m518489C59955E9BCD91ADF716BB6043307541CC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B4_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	{
		// foreach (var listener in _listeners)
		SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853 * L_1 = L_0->get__listeners_30();
		NullCheck(L_1);
		Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533  L_2;
		L_2 = HashSet_1_GetEnumerator_m518489C59955E9BCD91ADF716BB6043307541CC1(L_1, /*hidden argument*/HashSet_1_GetEnumerator_m518489C59955E9BCD91ADF716BB6043307541CC1_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0013:
		{
			// foreach (var listener in _listeners)
			SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_3;
			L_3 = Enumerator_get_Current_m0C3787167F634ED5684B3C96678432BE76E845F4_inline((Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0C3787167F634ED5684B3C96678432BE76E845F4_RuntimeMethod_var);
			V_1 = L_3;
			// getEvent(listener)?.Invoke();
			Func_2_t2FB2E168C30F66E82B5337D1AFA6606D80B2C444 * L_4 = __this->get_getEvent_1();
			SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * L_5 = V_1;
			NullCheck(L_4);
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_6;
			L_6 = Func_2_Invoke_mBC26CDB1DD5E76F92CF64F18675FE575DCBE7FE1(L_4, L_5, /*hidden argument*/Func_2_Invoke_mBC26CDB1DD5E76F92CF64F18675FE575DCBE7FE1_RuntimeMethod_var);
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = L_6;
			G_B3_0 = L_7;
			if (L_7)
			{
				G_B4_0 = L_7;
				goto IL_002d;
			}
		}

IL_002a:
		{
			goto IL_0032;
		}

IL_002d:
		{
			NullCheck(G_B4_0);
			UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B4_0, /*hidden argument*/NULL);
		}

IL_0032:
		{
			// foreach (var listener in _listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_m820FEB8AA37491DAD3EBBE5D371E69180C321CF5((Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m820FEB8AA37491DAD3EBBE5D371E69180C321CF5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0013;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9DFCEE5D93F7D6CAE31A029E1CE9DC31815AA6B0((Enumerator_tEC47F19406D54C7FF6D4EF91FCAE57EDDF884533 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m9DFCEE5D93F7D6CAE31A029E1CE9DC31815AA6B0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
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
// System.Void Meta.WitAi.VoiceService/<>c__DisplayClass55_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0__ctor_m174089C99747F2A87C5D3AFF1EDF6D8491DF7C30 (U3CU3Ec__DisplayClass55_0_t47A91BC1F77371131F268A4C6F37DA32BFFA71AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.WitAi.VoiceService/<>c__DisplayClass55_0::<OnAudioRequestCreated>b__0(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0_U3COnAudioRequestCreatedU3Eb__0_mEFC1DA5541C8DF4520E051C8219527461563B266 (U3CU3Ec__DisplayClass55_0_t47A91BC1F77371131F268A4C6F37DA32BFFA71AF * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response0, const RuntimeMethod* method)
{
	{
		// audioRequest.Events.OnPartialResponse.AddListener((response) => OnAudioPartialResponse(audioRequest));
		VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * L_0 = __this->get_U3CU3E4__this_0();
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_1 = __this->get_audioRequest_1();
		NullCheck(L_0);
		VirtActionInvoker1< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * >::Invoke(46 /* System.Void Meta.WitAi.VoiceService::OnAudioPartialResponse(Meta.WitAi.Requests.VoiceServiceRequest) */, L_0, L_1);
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
// System.Void Meta.WitAi.Utilities.VoiceServiceReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m81B54E418EB2E21E7FEA7926A8D34F9F36823ED5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * L_0 = (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A *)il2cpp_codegen_object_new(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5BF563DD9457E5AC0AD99AB3DCDABA48DB6D997F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.Utilities.VoiceServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5BF563DD9457E5AC0AD99AB3DCDABA48DB6D997F (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Utilities.VoiceServiceReference/<>c::<get_VoiceService>b__2_0(Meta.WitAi.VoiceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_VoiceServiceU3Eb__2_0_mE9B0C26B990DB7F6D13E66B0E51A0AFCA3EC3C43 (U3CU3Ec_t5411EBF2A608F5DEFFCFD03F3A37203814EC818A * __this, VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ___o0, const RuntimeMethod* method)
{
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// voiceService = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * L_0 = ___o0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_rootCount_mB2EDA66F8662B93761648F5E88D9D6B74542E2A8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryParam__ctor_m381178ADDE8F85B16CB8CB85AB64D083C53C7639 (QueryParam_tAFBA3AC0C3D323F4CE5A2CD1F828398B5ED31A90 * __this, const RuntimeMethod* method)
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
// System.Boolean Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsTokenValid(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsTokenValid_m67332A407DCFECE8D82FB87F91F210064A21E76E (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, String_t* ___appId0, String_t* ___token1, const RuntimeMethod* method)
{
	{
		// return IsServerTokenValid(token);
		String_t* L_0 = ___token1;
		bool L_1;
		L_1 = DefaultTokenValidatorProvider_IsServerTokenValid_m3FDFB76401C7B6E3ACAF589015277DCEF4ED6D62(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsServerTokenValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsServerTokenValid_m3FDFB76401C7B6E3ACAF589015277DCEF4ED6D62 (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, String_t* ___serverToken0, const RuntimeMethod* method)
{
	{
		// return null != serverToken && serverToken.Length == 32;
		String_t* L_0 = ___serverToken0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___serverToken0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)32)))? 1 : 0);
	}

IL_000e:
	{
		return (bool)0;
	}
}
// System.Void Meta.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTokenValidatorProvider__ctor_m9979CDB0D9DF6E034E7AA320222D83A33BF15685 (DefaultTokenValidatorProvider_t9F92A20C4A008AF58AE8A657E1FC012828B38706 * __this, const RuntimeMethod* method)
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mA0E771E7B752B465F834379F0CF18113BE52D702 (U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::<Add>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_m56AC29E52C414F58627D0E87ABFE4A887DCCA852 (U3CU3Ec__DisplayClass12_0_tEE248F89C243C6AEC279CEC670AB91DEB9FA9932 * __this, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___e0, const RuntimeMethod* method)
{
	{
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_entity_0();
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_2 = __this->get_dynamicEntity_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_entity_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m73C6C44D91F8ED61EA117752003B65D84DFFE753 (U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::<AddKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mF62DA96E859B2EBE4767BB41F443B313E4ED5109 (U3CU3Ec__DisplayClass14_0_tF88493458837D2FF837660A0E0EA4CDED59F6AD8 * __this, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___e0, const RuntimeMethod* method)
{
	{
		// var entity = entities.Find(e => entityName == e.entity);
		String_t* L_0 = __this->get_entityName_0();
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_entity_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mEBB765D7FE26A17A7A8D48CBF6D495C7DC00878B (U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::<RemoveKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_m45B93EBFFF73C778D4B344BDFA4640E3E6DC0F8F (U3CU3Ec__DisplayClass15_0_t31A21327955EE8C8A7460DECA050CD2DE87AE470 * __this, WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * ___e0, const RuntimeMethod* method)
{
	{
		// int index = entities.FindIndex(e => e.entity == entityName);
		WitDynamicEntity_t4D70B62D9E1C50ACAD12E79D636AA1B7305A621B * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_entity_0();
		String_t* L_2 = __this->get_entityName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Meta.WitAi.WitRequest/<>c__DisplayClass99_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0__ctor_m000BB6E67730BD87F0432B5E69D6B7465CB6FF1D (U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.WitAi.WitRequest/<>c__DisplayClass99_0::<ProcessStringResponse>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0_U3CProcessStringResponseU3Eb__0_mEB207027090DA22C0D2D7D9F66D11BBB94FE5187 (U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onRawResponse?.Invoke(stringResponse));
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0->get_onRawResponse_33();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_stringResponse_1();
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		return;
	}
}
// System.Void Meta.WitAi.WitRequest/<>c__DisplayClass99_0::<ProcessStringResponse>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0_U3CProcessStringResponseU3Eb__1_m6F407C0FFE3EF6A14F4E40D4A6DD85C237D04D48 (U3CU3Ec__DisplayClass99_0_t5A99E96FC2360366308BEF2D1547232A3B11236E * __this, const RuntimeMethod* method)
{
	{
		// if (!string.IsNullOrEmpty(transcription) && (!hasResponse || isFinal))
		String_t* L_0 = __this->get_transcription_2();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		bool L_2 = __this->get_hasResponse_3();
		bool L_3 = __this->get_isFinal_4();
		if (!((int32_t)((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)|(int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		// ApplyTranscription(transcription, isFinal);
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_4 = __this->get_U3CU3E4__this_0();
		String_t* L_5 = __this->get_transcription_2();
		bool L_6 = __this->get_isFinal_4();
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, bool >::Invoke(39 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::ApplyTranscription(System.String,System.Boolean) */, L_4, L_5, L_6);
	}

IL_0036:
	{
		// if (hasResponse)
		bool L_7 = __this->get_hasResponse_3();
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// HandlePartialNlpResponse(responseNode);
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_8 = __this->get_U3CU3E4__this_0();
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_9 = __this->get_responseNode_5();
		NullCheck(L_8);
		VirtActionInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * >::Invoke(50 /* System.Void Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::HandlePartialNlpResponse(Meta.WitAi.Json.WitResponseNode) */, L_8, L_9);
	}

IL_004f:
	{
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
// System.Void Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__112__ctor_m64855B0F5A9B1056F057AA518D8282B5101CBC07 (U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__112_System_IDisposable_Dispose_m868ABBD6531F14EE4970708E75BCD1F8D812F94A (U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPerformMainThreadCallbacksU3Ed__112_MoveNext_mB5A4A2EEF917AFBDB5313F7C5DA2C3182952B3D7 (U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0092;
	}

IL_002b:
	{
		// if (Application.isPlaying && !Application.isBatchMode)
		bool L_3;
		L_3 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		bool L_4;
		L_4 = Application_get_isBatchMode_m215E452DEF633146433A61A538F52B84ACA15CBB(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_5 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_006d;
	}

IL_0056:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006d:
	{
		// while (_mainThreadCallbacks.Count > 0 && _mainThreadCallbacks.TryDequeue(out var result))
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_6 = V_1;
		NullCheck(L_6);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_7 = L_6->get__mainThreadCallbacks_42();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274(L_7, /*hidden argument*/ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_9 = V_1;
		NullCheck(L_9);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_10 = L_9->get__mainThreadCallbacks_42();
		NullCheck(L_10);
		bool L_11;
		L_11 = ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1(L_10, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_2), /*hidden argument*/ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		// result();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = V_2;
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		// }
		goto IL_006d;
	}

IL_0092:
	{
		// while (HasMainThreadCallbacks())
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = WitRequest_HasMainThreadCallbacks_m14EED027D8EC177BCCADEBF45C6E3B0524F35D0C(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_002b;
		}
	}
	{
		// _performer = null;
		WitRequest_t83AC35CF2760762C3D629D83DC984DA88DC8DE2D * L_15 = V_1;
		NullCheck(L_15);
		L_15->set__performer_41((CoroutinePerformer_tDCCCEB81998A1287C8A9294784E87746645E209F *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformMainThreadCallbacksU3Ed__112_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m41E92FF59698E26D43BC989A58BA438D0FA84CE3 (U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__112_System_Collections_IEnumerator_Reset_m65BDB6F3539A582B1AF26360D321F70BA074A284 (U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPerformMainThreadCallbacksU3Ed__112_System_Collections_IEnumerator_Reset_m65BDB6F3539A582B1AF26360D321F70BA074A284_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.WitRequest/<PerformMainThreadCallbacks>d__112::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformMainThreadCallbacksU3Ed__112_System_Collections_IEnumerator_get_Current_m07E5C1D9A4654179E436BD656EA27739A935E4EF (U3CPerformMainThreadCallbacksU3Ed__112_t525170B534E12157940C2178FE36C3697075E379 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Meta.WitAi.WitRequest/OnCustomizeUriEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCustomizeUriEvent__ctor_mC1C64DC1C658BBC16790517F193D7FB0FAAA4ADF (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Uri Meta.WitAi.WitRequest/OnCustomizeUriEvent::Invoke(System.UriBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * OnCustomizeUriEvent_Invoke_m9E983D87746589B7BBF4440099FC511E369B0B86 (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * ___uriBuilder0, const RuntimeMethod* method)
{
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * result = NULL;
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
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
			}
			else
			{
				// closed
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (void*, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___uriBuilder0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(targetMethod, ___uriBuilder0);
					else
						result = GenericVirtFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(targetMethod, ___uriBuilder0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___uriBuilder0);
					else
						result = VirtFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___uriBuilder0);
				}
			}
			else
			{
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(targetMethod, targetThis, ___uriBuilder0);
					else
						result = GenericVirtFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(targetMethod, targetThis, ___uriBuilder0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uriBuilder0);
					else
						result = VirtFuncInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uriBuilder0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
				}
				else
				{
					typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (void*, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___uriBuilder0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Meta.WitAi.WitRequest/OnCustomizeUriEvent::BeginInvoke(System.UriBuilder,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCustomizeUriEvent_BeginInvoke_mC5E289E858A1797F4D3E0A30BF3313D896F7FE46 (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * ___uriBuilder0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___uriBuilder0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Uri Meta.WitAi.WitRequest/OnCustomizeUriEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * OnCustomizeUriEvent_EndInvoke_m97973E6239BBCE9D6ED449B43646AFEAEB1F413D (OnCustomizeUriEvent_tFF46B2349E9CCA017DC20F6D4B0B75976A9BB9D7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProvideCustomHeadersEvent__ctor_m0F5EDB11FEE43CA702C12A0AEAF4E489C5CAB30C (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * OnProvideCustomHeadersEvent_Invoke_mC239B53BA92C2223CA6C5BA3C0C11E0DF882C55C (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, const RuntimeMethod* method)
{
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * result = NULL;
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
			if (___parameterCount == 0)
			{
				// open
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnProvideCustomHeadersEvent_BeginInvoke_m91D9909B0F436694478FDD9465AF0EE4E6806E03 (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * OnProvideCustomHeadersEvent_EndInvoke_mC38D9BF78CEB7E356A0AC7FB36A717DD051D6721 (OnProvideCustomHeadersEvent_t2FEEADA8136850EB35E91F422143BBD574D491EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.WitRequest/PreSendRequestDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate__ctor_mC270E82E20060EA46A124094624B5A36F8133C30 (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Meta.WitAi.WitRequest/PreSendRequestDelegate::Invoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate_Invoke_m948696DE23F81DD44834EE4563B8A19CBA4F90BC (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___src_uri0, ___headers1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___src_uri0, ___headers1, targetMethod);
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
						GenericInterfaceActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(targetMethod, targetThis, ___src_uri0, ___headers1);
					else
						GenericVirtActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(targetMethod, targetThis, ___src_uri0, ___headers1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___src_uri0, ___headers1);
					else
						VirtActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___src_uri0, ___headers1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___src_uri0, ___headers1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___src_uri0, ___headers1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Meta.WitAi.WitRequest/PreSendRequestDelegate::BeginInvoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PreSendRequestDelegate_BeginInvoke_m88693F309A9F2CF6A0D473A00BF7E36135E2BECF (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = *___src_uri0;
	__d_args[1] = *___headers1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Meta.WitAi.WitRequest/PreSendRequestDelegate::EndInvoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate_EndInvoke_mEBA6B1335DAF87ED4EA3C7167203E20E1074AE12 (PreSendRequestDelegate_t48254175C6A6A3B5FC73A6411373D9DC4357036B * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___src_uri0,
	___headers1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__86__ctor_m1660EB24E9CEA212BDC4381E09D25BF88933E928 (U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__86_System_IDisposable_Dispose_m73A8A5857289CCCFB9FBD3D640655903F22AA7A8 (U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeactivateDueToTimeLimitU3Ed__86_MoveNext_m4C0C517CEC6F6F6D458B18E73563FD4E12DA2390 (U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * V_1 = NULL;
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * G_B7_0 = NULL;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * G_B7_1 = NULL;
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * G_B6_0 = NULL;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * G_B6_1 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * G_B8_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(RuntimeConfiguration.maxRecordingTime);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_4 = V_1;
		NullCheck(L_4);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_5;
		L_5 = WitService_get_RuntimeConfiguration_m0F36E2033D66E1B373B75546F2A36DF1C421C706(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = L_5->get_maxRecordingTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (IsRequestActive)
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = WitService_get_IsRequestActive_m6715096503DE6420CC9FC8F9E1D6DD4137D933BE(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		// VLog.D($"Deactivated input due to timeout.\nMax Record Time: {RuntimeConfiguration.maxRecordingTime}");
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_10 = V_1;
		NullCheck(L_10);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_11;
		L_11 = WitService_get_RuntimeConfiguration_m0F36E2033D66E1B373B75546F2A36DF1C421C706(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12 = L_11->get_maxRecordingTime_4();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(L_15, /*hidden argument*/NULL);
		// DeactivateRequest(VoiceEvents?.OnStoppedListeningDueToTimeout, false);
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_16 = V_1;
		WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * L_17 = V_1;
		NullCheck(L_17);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_18;
		L_18 = WitService_get_VoiceEvents_m39556CBC342B47004B4BE374302707A67CECC52B(L_17, /*hidden argument*/NULL);
		VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * L_19 = L_18;
		G_B6_0 = L_19;
		G_B6_1 = L_16;
		if (L_19)
		{
			G_B7_0 = L_19;
			G_B7_1 = L_16;
			goto IL_0079;
		}
	}
	{
		G_B8_0 = ((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_007e;
	}

IL_0079:
	{
		NullCheck(G_B7_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_20;
		L_20 = SpeechEvents_get_OnStoppedListeningDueToTimeout_m5CE0321C840182D73780872ED789B24957E59725_inline(G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_20;
		G_B8_1 = G_B7_1;
	}

IL_007e:
	{
		NullCheck(G_B8_1);
		WitService_DeactivateRequest_mD63B22CC85D4D7FE06D82F391A5968CD2A4791B1(G_B8_1, G_B8_0, (bool)0, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__86_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m59B21FF5864B4E9E17B2E2BDFE33ACDD0F7D045F (U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__86_System_Collections_IEnumerator_Reset_m4822897C58A2454A7ED9C0D44A1B14E0883A8DF7 (U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeactivateDueToTimeLimitU3Ed__86_System_Collections_IEnumerator_Reset_m4822897C58A2454A7ED9C0D44A1B14E0883A8DF7_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__86::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__86_System_Collections_IEnumerator_get_Current_m4E70761C7E9E7BE66A16A279B078C7B6FCC704AB (U3CDeactivateDueToTimeLimitU3Ed__86_t8C9F4C04140E7E9E5B3EAB5A00F5B2850490062E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Configuration_mD1D8647DC7F5E9B1E86C0CB72BE2A8D9C06DD27D_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * ___value0, const RuntimeMethod* method)
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_0 = ___value0;
		__this->set_U3CConfigurationU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * WitUnityRequest_get_Configuration_mC5E6B310A51A78A428B2A449BCA6E2533C6B800D_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_0 = __this->get_U3CConfigurationU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_RequestId_m3042EA0895AAC67DB1FF5E88924212A40AB4113C_inline (VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825 * __this, const RuntimeMethod* method)
{
	{
		// public string RequestId { get; private set; }
		String_t* L_0 = __this->get_U3CRequestIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitConfiguration_GetEndpointInfo_mC36372B566D63BC6A67E8B60FC7AFB23A45CA234_inline (WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * __this, const RuntimeMethod* method)
{
	{
		// public IWitRequestEndpointInfo GetEndpointInfo() => endpointConfiguration;
		WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F * L_0 = __this->get_endpointConfiguration_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Endpoint_mC14F246E12293311B2AD07478A2E97D60CB5535B_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CEndpointU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VRequest_set_Timeout_m3F2E5F02C61A8E4B1FFB722669D05C5D2B554650_inline (VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Timeout { get; set; } = 5;
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_ShouldPost_m6AD7D8CEA4507723C9873B36DFFAB141671E87CF_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldPostU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitUnityRequest_get_Endpoint_m09B2A01B549DCE1883E1B3D7E02B376AD563FBAB_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = __this->get_U3CEndpointU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WitUnityRequest_get_ShouldPost_m4C36A0685F284C8907E9AA952E396E0B0C3695FF_inline (WitUnityRequest_tA064AB4B223A2C0F999C1D0F0FF3EAC3D01B5906 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = __this->get_U3CShouldPostU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_Text_m8CE34499789FCCF557292C0A3BCAB2578FD60A5E_inline (VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825 * __this, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * VoiceServiceRequestOptions_get_QueryParams_mB8266C3A94EA18BE6ED9805038A5B44A5AD14974_inline (VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> QueryParams { get; private set; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CQueryParamsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VRequest_get_ResponseCode_m3B14DA8CDF3407561F563450EF25944F7D641DF7_inline (VRequest_t32E629B703FBDC970ABD43D0B6D178DE4CF0568C * __this, const RuntimeMethod* method)
{
	{
		// public int ResponseCode { get; set; } = 0;
		int32_t L_0 = __this->get_U3CResponseCodeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpWebRequest_set_KeepAlive_m8D48A7CC78EFF4175123CD25EFCE7748A010C0D9_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_keepAlive_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_sendChunked_40();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * SpeechEvents_get_OnStartListening_m5E68D0FA2F64DC6FE02FC17CBF256D9B6A47C904_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent OnStartListening => _onStartListening;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__onStartListening_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * SpeechEvents_get_OnStoppedListeningDueToTimeout_m5CE0321C840182D73780872ED789B24957E59725_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent OnStoppedListeningDueToTimeout => _onStoppedListeningDueToTimeout;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__onStoppedListeningDueToTimeout_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NLPRequest_4_get_InputType_m14AFC8847002D49B9941C1E7F5020F09714025D3_gshared_inline (NLPRequest_4_t8248DF261901E51532E7461560AF47B7781311A0 * __this, const RuntimeMethod* method)
{
	{
		// public NLPRequestInputType InputType { get; private set; }
		int32_t L_0 = (int32_t)__this->get_U3CInputTypeU3Ek__BackingField_8();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * VoiceRequest_4_get_Options_m2259A3BB89084FC10657A5587D832BBF2330FCBF_gshared_inline (VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD * __this, const RuntimeMethod* method)
{
	{
		// public TOptions Options { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3COptionsU3Ek__BackingField_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
