#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_t8956C826A49866445E54956164D36A98DE3362FF;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>
struct BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B;
// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>
struct BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_t74BBD6A893019BBC3341F59ED7CC9BD78139D853;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8;
// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F;
// UnityEngine.Events.UnityAction`2<System.Int64,System.Double>
struct UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4;
// UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>
struct UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4;
// Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>
struct VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD;
// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Meta.WitAi.Data.Info.ComposerGraph[]
struct ComposerGraphU5BU5D_tE75DFC400DC95CCAFB649B04D0DF01B0F7D67E3D;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Meta.WitAi.Data.Info.WitCharacterInfo[]
struct WitCharacterInfoU5BU5D_tB6EF90AA27D761156B7C76A0B4612C7B1D8AEEF1;
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
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981;
// Oculus.Voice.Dictation.AppDictationExperience
struct AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778;
// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tB3CEE5DCB73008B536D5DB0865949298E7647342;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Oculus.Voice.Dictation.Configuration.DictationConfiguration
struct DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559;
// Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding
struct DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2;
// Meta.WitAi.Dictation.Events.DictationEvents
struct DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC;
// Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding
struct DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16;
// Meta.WitAi.Dictation.DictationService
struct DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265;
// Meta.WitAi.Dictation.Data.DictationSession
struct DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE;
// Meta.WitAi.Dictation.Events.DictationSessionEvent
struct DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Meta.WitAi.Dictation.IDictationService
struct IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tB305F307AFBA6FC6A9DE5ECBBDC2A2130C5B6FAD;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Oculus.Voice.Dictation.Bindings.Android.IServiceEvents
struct IServiceEvents_t7BA62A4437FF5F3F74ED3029B96EF0B04A396635;
// Meta.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_tA730F4FD31F9C16A7AC4D71C5C92C69712472DAF;
// Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger
struct IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Meta.Voice.NLPRequestResponseEvent
struct NLPRequestResponseEvent_tA075D0C6A95911BB67DB0EDD9BD030F43F985FAC;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl
struct PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2;
// Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding
struct PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942;
// Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSession
struct PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D;
// System.String
struct String_t;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Meta.Voice.TranscriptionRequestEvent
struct TranscriptionRequestEvent_tB1581680DCA7A5C345BE5E17800A2A497CEB4C27;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl
struct VoiceSDKConsoleLoggerImpl_tD46905702F80C5A05F780EAB8A6D204F9E52AEC0;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding
struct VoiceSDKLoggerBinding_t3171F09F1F700AFD5B60C70217B1DABB8CB1587A;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl
struct VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E;
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
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564;
// Meta.WitAi.Dictation.WitDictation
struct WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79;
// Meta.WitAi.Configuration.WitDictationRuntimeConfiguration
struct WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_tEE04BBF5352FB577C5A9BE058EB4C9EDE51DCB1F;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t41E4B19E5E7545A4FBC390A85984AB6BE8D2A759;
// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t03B948AEC568325E9CB115EFA023D91EE134748E;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t7A3013CCA4FC373B9AA98B10EE31EAFCBCD99705;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537;
// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975;
// Meta.WitAi.WitService
struct WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceEvents_t7BA62A4437FF5F3F74ED3029B96EF0B04A396635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKConstants_t738646E449F293D6B25BF801B13A010809ADA578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral009B2393908F71D06D49150F8D76B306E76A6F71;
IL2CPP_EXTERN_C String_t* _stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C;
IL2CPP_EXTERN_C String_t* _stringLiteral0239766E07A0A981D78ECD8F92C9A1B41F1570E0;
IL2CPP_EXTERN_C String_t* _stringLiteral04F7A632CB9093444F04C91A3DED8164C4B86967;
IL2CPP_EXTERN_C String_t* _stringLiteral056880AD9C3883D4939FC264961037B1008555B1;
IL2CPP_EXTERN_C String_t* _stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC;
IL2CPP_EXTERN_C String_t* _stringLiteral07D7733C1C72FF989D87AE755658AECBC4AB8AD8;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE;
IL2CPP_EXTERN_C String_t* _stringLiteral0BCDDF342A73CF6C15DBCBD80233EF8B1AD281CD;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C;
IL2CPP_EXTERN_C String_t* _stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F;
IL2CPP_EXTERN_C String_t* _stringLiteral25E134D9B6EC0561606B43CE3A95ABA0632C02E0;
IL2CPP_EXTERN_C String_t* _stringLiteral3069320ED085708F787A0D80D9D8A2C7536C068F;
IL2CPP_EXTERN_C String_t* _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C;
IL2CPP_EXTERN_C String_t* _stringLiteral3A9BD1F8FCA7193DEF66CA35B6C08EEDED34E362;
IL2CPP_EXTERN_C String_t* _stringLiteral3B322A3FA1E8AF97C5D21A2D349C0D614C4FE854;
IL2CPP_EXTERN_C String_t* _stringLiteral455532645A36B471DC93D48F55B5E5617AE61927;
IL2CPP_EXTERN_C String_t* _stringLiteral45A6A359B020506529C26653998F41906D297BD2;
IL2CPP_EXTERN_C String_t* _stringLiteral4AC2E81C05D485A999126FEC6E060F94A0743EEA;
IL2CPP_EXTERN_C String_t* _stringLiteral4CB08D607F2569F52044A36B9669C50187393E96;
IL2CPP_EXTERN_C String_t* _stringLiteral506946ACAC05C7C39AB9F251A93BEC217C32AAEA;
IL2CPP_EXTERN_C String_t* _stringLiteral56E839DE5BBB0D765B7A3992FA9FE1A49C1CECF8;
IL2CPP_EXTERN_C String_t* _stringLiteral57295FB5294EDE32B96C3B48EEDBAED0915E8B53;
IL2CPP_EXTERN_C String_t* _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51;
IL2CPP_EXTERN_C String_t* _stringLiteral612B514077F211362B9850601E9C65C05DE45FCC;
IL2CPP_EXTERN_C String_t* _stringLiteral62B962D58D79AB658276228C081F11858A78D27B;
IL2CPP_EXTERN_C String_t* _stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral71562A6EF05B696E3C241CD3AC6CBE92C9CC34E4;
IL2CPP_EXTERN_C String_t* _stringLiteral771D27D2324CCFE11F1DD47EF6850E32297CD434;
IL2CPP_EXTERN_C String_t* _stringLiteral813EAED53B08F73CCB784F375C322C4FA878F945;
IL2CPP_EXTERN_C String_t* _stringLiteral816B8FF6B9854A49D2F73CF1BA6D31E9C28CA6CF;
IL2CPP_EXTERN_C String_t* _stringLiteral95C23808B9E62CA71510CCBAC213B2985E5590F6;
IL2CPP_EXTERN_C String_t* _stringLiteral98E6C9E8489820A84E6320A90C8A1A193B1F130E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3;
IL2CPP_EXTERN_C String_t* _stringLiteral9D492B750C3702830906C5EB6DD1B4BC8F3535A7;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB4846BE018F5AA87F040A004BF3942896F0C39;
IL2CPP_EXTERN_C String_t* _stringLiteralA10964CC93D7E488FED7249F5076B722443D1789;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA829E470D52A5E1BCDE6A65AF89257CE29A466AF;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D9C721B449B77D63B038C7A2F8E4F79C9EA02F;
IL2CPP_EXTERN_C String_t* _stringLiteralB0C8B9FB207C48F25C931C8F380C930D0D536222;
IL2CPP_EXTERN_C String_t* _stringLiteralBAE99594C9291FC466C7FDEADF4CE02C97917A51;
IL2CPP_EXTERN_C String_t* _stringLiteralBDEFFB09672EC75ADC86F10D211C50074A938368;
IL2CPP_EXTERN_C String_t* _stringLiteralC1975E9A78A2FD35E6CC7B379E04990FAB148155;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BF53B60F1510677F41C3CDF15E42D9212C54C8;
IL2CPP_EXTERN_C String_t* _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB;
IL2CPP_EXTERN_C String_t* _stringLiteralF0D162E78AA80AA0E3661450758F2F0597EC256D;
IL2CPP_EXTERN_C String_t* _stringLiteralF1791A4023492EC42A6A612D3F7AEB832B83E613;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBACC81B77C56ABE61594350F7EAB185A58A0FB;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnAudioDurationTrackerFinished_mA5B560AEF449D448C55385D12C8C2B351BF34A2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnComplete_mAED0A35820A5234081E2D0622A722C976370F64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnDictationSessionStarted_m92BC06AB6BEBE93E12CC05E5671602421DE79BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnFullTranscription_m3CAAFED17EB5ABACF642D128728A828D892BD083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnPartialTranscription_mA63F15B2FA2A253188664BCD037CB49ACF38F2E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnPlatformServiceNotAvailable_m79AC8E0296D71033FD94F5047E3D2D9EEB88BA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnRequestInit_m73B96075369133D296E6C27CF70E2D5576FACC5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnStarted_mC12266EE60C391CC5CF65CE5D2F8E1C89B6B1F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_OnStopped_mA46807BB912E469942C5717CE6ED86FE4CD07C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppDictationExperience_U3COnEnableU3Eb__37_0_mA9FDE971BEF04801E1A38920230720712EC7ECDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1_Connect_m27CE54891B3C4DC45109D661C2A7E91494F9BCD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1_Disconnect_m1A3BFC80A3FF006F70E4DC90248831B5A7434FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseAndroidConnectionImpl_1__ctor_mAC72972B3E316EBEDBBB4C96E6E6C45BD8D4C71E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mF4596F17F6B46A6B89326BC16C0CDF0B0BBB022E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_m40E1846376AC94FB7E1822D20F79CEC1657581CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPAudioRequest_4_get_ResponseData_mC55C11041510077580FB8F5B4210159AADC03030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m56424D895106AF7BEA7233ED1ECA5CEDDDA915FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB6CC2736D390EADB6604F237F26567D9A8AAA58F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m84C8300462E1DB920BAC221EADABAE50FA049F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mF798B66B371499AA6FF40D8F4354CBFE7DE1C1A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_mDD521536D4079AE31DCD2CB3A2E6E4EC34C1B888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_m3995B3BF171DC56714BCEBB1398B206E418186D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_State_m9206702503076367DC45F6B6D06E175CCA5B796A_RuntimeMethod_var;
struct ComposerGraph_t05368B27A701CD658A100CC06A1957E9F44E1BFA_marshaled_com;
struct ComposerGraph_t05368B27A701CD658A100CC06A1957E9F44E1BFA_marshaled_pinvoke;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
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

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6C3FCDD8AF78B084E358A2C161116D16ED0FD79B 
{
public:

public:
};


// System.Object


// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>
struct BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3  : public RuntimeObject
{
public:
	// System.String Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::fragmentClassName
	String_t* ___fragmentClassName_0;
	// T Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::service
	PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * ___service_1;
	// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::serviceConnection
	AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * ___serviceConnection_2;

public:
	inline static int32_t get_offset_of_fragmentClassName_0() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3, ___fragmentClassName_0)); }
	inline String_t* get_fragmentClassName_0() const { return ___fragmentClassName_0; }
	inline String_t** get_address_of_fragmentClassName_0() { return &___fragmentClassName_0; }
	inline void set_fragmentClassName_0(String_t* value)
	{
		___fragmentClassName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fragmentClassName_0), (void*)value);
	}

	inline static int32_t get_offset_of_service_1() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3, ___service_1)); }
	inline PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * get_service_1() const { return ___service_1; }
	inline PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 ** get_address_of_service_1() { return &___service_1; }
	inline void set_service_1(PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * value)
	{
		___service_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_1), (void*)value);
	}

	inline static int32_t get_offset_of_serviceConnection_2() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3, ___serviceConnection_2)); }
	inline AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * get_serviceConnection_2() const { return ___serviceConnection_2; }
	inline AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 ** get_address_of_serviceConnection_2() { return &___serviceConnection_2; }
	inline void set_serviceConnection_2(AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * value)
	{
		___serviceConnection_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceConnection_2), (void*)value);
	}
};


// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>
struct BaseAndroidConnectionImpl_1_t7F1A6B8EC393A978582068044DBD539FF0EACED4  : public RuntimeObject
{
public:
	// System.String Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::fragmentClassName
	String_t* ___fragmentClassName_0;
	// T Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::service
	VoiceSDKLoggerBinding_t3171F09F1F700AFD5B60C70217B1DABB8CB1587A * ___service_1;
	// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::serviceConnection
	AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * ___serviceConnection_2;

public:
	inline static int32_t get_offset_of_fragmentClassName_0() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t7F1A6B8EC393A978582068044DBD539FF0EACED4, ___fragmentClassName_0)); }
	inline String_t* get_fragmentClassName_0() const { return ___fragmentClassName_0; }
	inline String_t** get_address_of_fragmentClassName_0() { return &___fragmentClassName_0; }
	inline void set_fragmentClassName_0(String_t* value)
	{
		___fragmentClassName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fragmentClassName_0), (void*)value);
	}

	inline static int32_t get_offset_of_service_1() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t7F1A6B8EC393A978582068044DBD539FF0EACED4, ___service_1)); }
	inline VoiceSDKLoggerBinding_t3171F09F1F700AFD5B60C70217B1DABB8CB1587A * get_service_1() const { return ___service_1; }
	inline VoiceSDKLoggerBinding_t3171F09F1F700AFD5B60C70217B1DABB8CB1587A ** get_address_of_service_1() { return &___service_1; }
	inline void set_service_1(VoiceSDKLoggerBinding_t3171F09F1F700AFD5B60C70217B1DABB8CB1587A * value)
	{
		___service_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_1), (void*)value);
	}

	inline static int32_t get_offset_of_serviceConnection_2() { return static_cast<int32_t>(offsetof(BaseAndroidConnectionImpl_1_t7F1A6B8EC393A978582068044DBD539FF0EACED4, ___serviceConnection_2)); }
	inline AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * get_serviceConnection_2() const { return ___serviceConnection_2; }
	inline AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 ** get_address_of_serviceConnection_2() { return &___serviceConnection_2; }
	inline void set_serviceConnection_2(AndroidServiceConnection_tD3ABD6514BA2D8C5738AD49AF16DBC97FBEBE981 * value)
	{
		___serviceConnection_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceConnection_2), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
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


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::binding
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___binding_0;

public:
	inline static int32_t get_offset_of_binding_0() { return static_cast<int32_t>(offsetof(BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6, ___binding_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_binding_0() const { return ___binding_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_binding_0() { return &___binding_0; }
	inline void set_binding_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___binding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___binding_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Oculus.Voice.Dictation.Configuration.DictationConfiguration
struct DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Voice.Dictation.Configuration.DictationConfiguration::multiPhrase
	bool ___multiPhrase_0;
	// System.String Oculus.Voice.Dictation.Configuration.DictationConfiguration::scenario
	String_t* ___scenario_1;
	// System.String Oculus.Voice.Dictation.Configuration.DictationConfiguration::inputType
	String_t* ___inputType_2;

public:
	inline static int32_t get_offset_of_multiPhrase_0() { return static_cast<int32_t>(offsetof(DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559, ___multiPhrase_0)); }
	inline bool get_multiPhrase_0() const { return ___multiPhrase_0; }
	inline bool* get_address_of_multiPhrase_0() { return &___multiPhrase_0; }
	inline void set_multiPhrase_0(bool value)
	{
		___multiPhrase_0 = value;
	}

	inline static int32_t get_offset_of_scenario_1() { return static_cast<int32_t>(offsetof(DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559, ___scenario_1)); }
	inline String_t* get_scenario_1() const { return ___scenario_1; }
	inline String_t** get_address_of_scenario_1() { return &___scenario_1; }
	inline void set_scenario_1(String_t* value)
	{
		___scenario_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenario_1), (void*)value);
	}

	inline static int32_t get_offset_of_inputType_2() { return static_cast<int32_t>(offsetof(DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559, ___inputType_2)); }
	inline String_t* get_inputType_2() const { return ___inputType_2; }
	inline String_t** get_address_of_inputType_2() { return &___inputType_2; }
	inline void set_inputType_2(String_t* value)
	{
		___inputType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputType_2), (void*)value);
	}
};


// Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding
struct DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2  : public RuntimeObject
{
public:
	// Meta.WitAi.Configuration.WitDictationRuntimeConfiguration Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding::_runtimeConfiguration
	WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ____runtimeConfiguration_0;
	// Oculus.Voice.Dictation.Configuration.DictationConfiguration Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding::_dictationConfiguration
	DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * ____dictationConfiguration_1;
	// System.Int32 Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding::MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS
	int32_t ___MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2;

public:
	inline static int32_t get_offset_of__runtimeConfiguration_0() { return static_cast<int32_t>(offsetof(DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2, ____runtimeConfiguration_0)); }
	inline WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * get__runtimeConfiguration_0() const { return ____runtimeConfiguration_0; }
	inline WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 ** get_address_of__runtimeConfiguration_0() { return &____runtimeConfiguration_0; }
	inline void set__runtimeConfiguration_0(WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * value)
	{
		____runtimeConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeConfiguration_0), (void*)value);
	}

	inline static int32_t get_offset_of__dictationConfiguration_1() { return static_cast<int32_t>(offsetof(DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2, ____dictationConfiguration_1)); }
	inline DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * get__dictationConfiguration_1() const { return ____dictationConfiguration_1; }
	inline DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 ** get_address_of__dictationConfiguration_1() { return &____dictationConfiguration_1; }
	inline void set__dictationConfiguration_1(DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * value)
	{
		____dictationConfiguration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictationConfiguration_1), (void*)value);
	}

	inline static int32_t get_offset_of_MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2() { return static_cast<int32_t>(offsetof(DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2, ___MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2)); }
	inline int32_t get_MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2() const { return ___MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2; }
	inline int32_t* get_address_of_MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2() { return &___MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2; }
	inline void set_MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2(int32_t value)
	{
		___MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2 = value;
	}
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


// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56  : public RuntimeObject
{
public:
	// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent Meta.WitAi.Events.TelemetryEvents::OnAudioTrackerFinished
	AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * ___OnAudioTrackerFinished_0;

public:
	inline static int32_t get_offset_of_OnAudioTrackerFinished_0() { return static_cast<int32_t>(offsetof(TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56, ___OnAudioTrackerFinished_0)); }
	inline AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * get_OnAudioTrackerFinished_0() const { return ___OnAudioTrackerFinished_0; }
	inline AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 ** get_address_of_OnAudioTrackerFinished_0() { return &___OnAudioTrackerFinished_0; }
	inline void set_OnAudioTrackerFinished_0(AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * value)
	{
		___OnAudioTrackerFinished_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioTrackerFinished_0), (void*)value);
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


// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA  : public RuntimeObject
{
public:
	// System.Int32 Meta.WitAi.Requests.VoiceServiceRequestResults::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestResults::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestResults::<Transcription>k__BackingField
	String_t* ___U3CTranscriptionU3Ek__BackingField_2;
	// System.Boolean Meta.WitAi.Requests.VoiceServiceRequestResults::<IsFinalTranscription>k__BackingField
	bool ___U3CIsFinalTranscriptionU3Ek__BackingField_3;
	// System.String[] Meta.WitAi.Requests.VoiceServiceRequestResults::<FinalTranscriptions>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CFinalTranscriptionsU3Ek__BackingField_4;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Requests.VoiceServiceRequestResults::<ResponseData>k__BackingField
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___U3CResponseDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA, ___U3CStatusCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CStatusCodeU3Ek__BackingField_0() const { return ___U3CStatusCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStatusCodeU3Ek__BackingField_0() { return &___U3CStatusCodeU3Ek__BackingField_0; }
	inline void set_U3CStatusCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTranscriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA, ___U3CTranscriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CTranscriptionU3Ek__BackingField_2() const { return ___U3CTranscriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTranscriptionU3Ek__BackingField_2() { return &___U3CTranscriptionU3Ek__BackingField_2; }
	inline void set_U3CTranscriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CTranscriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTranscriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsFinalTranscriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA, ___U3CIsFinalTranscriptionU3Ek__BackingField_3)); }
	inline bool get_U3CIsFinalTranscriptionU3Ek__BackingField_3() const { return ___U3CIsFinalTranscriptionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsFinalTranscriptionU3Ek__BackingField_3() { return &___U3CIsFinalTranscriptionU3Ek__BackingField_3; }
	inline void set_U3CIsFinalTranscriptionU3Ek__BackingField_3(bool value)
	{
		___U3CIsFinalTranscriptionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFinalTranscriptionsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA, ___U3CFinalTranscriptionsU3Ek__BackingField_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CFinalTranscriptionsU3Ek__BackingField_4() const { return ___U3CFinalTranscriptionsU3Ek__BackingField_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CFinalTranscriptionsU3Ek__BackingField_4() { return &___U3CFinalTranscriptionsU3Ek__BackingField_4; }
	inline void set_U3CFinalTranscriptionsU3Ek__BackingField_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CFinalTranscriptionsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFinalTranscriptionsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA, ___U3CResponseDataU3Ek__BackingField_5)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get_U3CResponseDataU3Ek__BackingField_5() const { return ___U3CResponseDataU3Ek__BackingField_5; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of_U3CResponseDataU3Ek__BackingField_5() { return &___U3CResponseDataU3Ek__BackingField_5; }
	inline void set_U3CResponseDataU3Ek__BackingField_5(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		___U3CResponseDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseDataU3Ek__BackingField_5), (void*)value);
	}
};


// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F  : public RuntimeObject
{
public:
	// Meta.WitAi.VoiceService Meta.WitAi.Data.VoiceSession::service
	VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * ___service_0;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.VoiceSession::response
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___response_1;
	// System.Boolean Meta.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;

public:
	inline static int32_t get_offset_of_service_0() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___service_0)); }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * get_service_0() const { return ___service_0; }
	inline VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D ** get_address_of_service_0() { return &___service_0; }
	inline void set_service_0(VoiceService_t15E1AD54AE04679EA462A5DE598BFA8C67975D2D * value)
	{
		___service_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_0), (void*)value);
	}

	inline static int32_t get_offset_of_response_1() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___response_1)); }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * get_response_1() const { return ___response_1; }
	inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 ** get_address_of_response_1() { return &___response_1; }
	inline void set_response_1(WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * value)
	{
		___response_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___response_1), (void*)value);
	}

	inline static int32_t get_offset_of_validResponse_2() { return static_cast<int32_t>(offsetof(VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F, ___validResponse_2)); }
	inline bool get_validResponse_2() const { return ___validResponse_2; }
	inline bool* get_address_of_validResponse_2() { return &___validResponse_2; }
	inline void set_validResponse_2(bool value)
	{
		___validResponse_2 = value;
	}
};


// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>
struct UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC, ___m_InvokeArray_3)); }
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


// Meta.WitAi.Dictation.Data.DictationSession
struct DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE  : public VoiceSession_t7B64C7F4CC8D5EAC3EC051916BAE2043B2106E2F
{
public:
	// Meta.WitAi.Dictation.IDictationService Meta.WitAi.Dictation.Data.DictationSession::dictationService
	RuntimeObject* ___dictationService_3;
	// System.String[] Meta.WitAi.Dictation.Data.DictationSession::clientRequestId
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___clientRequestId_4;
	// System.String Meta.WitAi.Dictation.Data.DictationSession::sessionId
	String_t* ___sessionId_5;

public:
	inline static int32_t get_offset_of_dictationService_3() { return static_cast<int32_t>(offsetof(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE, ___dictationService_3)); }
	inline RuntimeObject* get_dictationService_3() const { return ___dictationService_3; }
	inline RuntimeObject** get_address_of_dictationService_3() { return &___dictationService_3; }
	inline void set_dictationService_3(RuntimeObject* value)
	{
		___dictationService_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationService_3), (void*)value);
	}

	inline static int32_t get_offset_of_clientRequestId_4() { return static_cast<int32_t>(offsetof(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE, ___clientRequestId_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_clientRequestId_4() const { return ___clientRequestId_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_clientRequestId_4() { return &___clientRequestId_4; }
	inline void set_clientRequestId_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___clientRequestId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientRequestId_4), (void*)value);
	}

	inline static int32_t get_offset_of_sessionId_5() { return static_cast<int32_t>(offsetof(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE, ___sessionId_5)); }
	inline String_t* get_sessionId_5() const { return ___sessionId_5; }
	inline String_t** get_address_of_sessionId_5() { return &___sessionId_5; }
	inline void set_sessionId_5(String_t* value)
	{
		___sessionId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionId_5), (void*)value);
	}
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


// Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl
struct PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2  : public BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3
{
public:
	// Meta.WitAi.Dictation.IDictationService Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::_baseService
	RuntimeObject* ____baseService_3;
	// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::_serviceAvailable
	bool ____serviceAvailable_4;
	// Meta.WitAi.Configuration.WitDictationRuntimeConfiguration Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::_dictationRuntimeConfiguration
	WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ____dictationRuntimeConfiguration_5;
	// Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::_listenerBinding
	DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * ____listenerBinding_6;
	// Meta.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::<TranscriptionProvider>k__BackingField
	RuntimeObject* ___U3CTranscriptionProviderU3Ek__BackingField_7;
	// System.Action Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::OnServiceNotAvailableEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnServiceNotAvailableEvent_8;

public:
	inline static int32_t get_offset_of__baseService_3() { return static_cast<int32_t>(offsetof(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2, ____baseService_3)); }
	inline RuntimeObject* get__baseService_3() const { return ____baseService_3; }
	inline RuntimeObject** get_address_of__baseService_3() { return &____baseService_3; }
	inline void set__baseService_3(RuntimeObject* value)
	{
		____baseService_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseService_3), (void*)value);
	}

	inline static int32_t get_offset_of__serviceAvailable_4() { return static_cast<int32_t>(offsetof(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2, ____serviceAvailable_4)); }
	inline bool get__serviceAvailable_4() const { return ____serviceAvailable_4; }
	inline bool* get_address_of__serviceAvailable_4() { return &____serviceAvailable_4; }
	inline void set__serviceAvailable_4(bool value)
	{
		____serviceAvailable_4 = value;
	}

	inline static int32_t get_offset_of__dictationRuntimeConfiguration_5() { return static_cast<int32_t>(offsetof(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2, ____dictationRuntimeConfiguration_5)); }
	inline WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * get__dictationRuntimeConfiguration_5() const { return ____dictationRuntimeConfiguration_5; }
	inline WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 ** get_address_of__dictationRuntimeConfiguration_5() { return &____dictationRuntimeConfiguration_5; }
	inline void set__dictationRuntimeConfiguration_5(WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * value)
	{
		____dictationRuntimeConfiguration_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictationRuntimeConfiguration_5), (void*)value);
	}

	inline static int32_t get_offset_of__listenerBinding_6() { return static_cast<int32_t>(offsetof(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2, ____listenerBinding_6)); }
	inline DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * get__listenerBinding_6() const { return ____listenerBinding_6; }
	inline DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 ** get_address_of__listenerBinding_6() { return &____listenerBinding_6; }
	inline void set__listenerBinding_6(DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * value)
	{
		____listenerBinding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listenerBinding_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTranscriptionProviderU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2, ___U3CTranscriptionProviderU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CTranscriptionProviderU3Ek__BackingField_7() const { return ___U3CTranscriptionProviderU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CTranscriptionProviderU3Ek__BackingField_7() { return &___U3CTranscriptionProviderU3Ek__BackingField_7; }
	inline void set_U3CTranscriptionProviderU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CTranscriptionProviderU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTranscriptionProviderU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnServiceNotAvailableEvent_8() { return static_cast<int32_t>(offsetof(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2, ___OnServiceNotAvailableEvent_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnServiceNotAvailableEvent_8() const { return ___OnServiceNotAvailableEvent_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnServiceNotAvailableEvent_8() { return &___OnServiceNotAvailableEvent_8; }
	inline void set_OnServiceNotAvailableEvent_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnServiceNotAvailableEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServiceNotAvailableEvent_8), (void*)value);
	}
};


// Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding
struct PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942  : public BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl
struct VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E  : public BaseAndroidConnectionImpl_1_t7F1A6B8EC393A978582068044DBD539FF0EACED4
{
public:
	// System.Boolean Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::<IsUsingPlatformIntegration>k__BackingField
	bool ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3;
	// System.String Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::<WitApplication>k__BackingField
	String_t* ___U3CWitApplicationU3Ek__BackingField_4;
	// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::consoleLoggerImpl
	VoiceSDKConsoleLoggerImpl_tD46905702F80C5A05F780EAB8A6D204F9E52AEC0 * ___consoleLoggerImpl_5;
	// System.Boolean Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::loggedFirstTranscriptionTime
	bool ___loggedFirstTranscriptionTime_6;

public:
	inline static int32_t get_offset_of_U3CIsUsingPlatformIntegrationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E, ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3)); }
	inline bool get_U3CIsUsingPlatformIntegrationU3Ek__BackingField_3() const { return ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsUsingPlatformIntegrationU3Ek__BackingField_3() { return &___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3; }
	inline void set_U3CIsUsingPlatformIntegrationU3Ek__BackingField_3(bool value)
	{
		___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CWitApplicationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E, ___U3CWitApplicationU3Ek__BackingField_4)); }
	inline String_t* get_U3CWitApplicationU3Ek__BackingField_4() const { return ___U3CWitApplicationU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CWitApplicationU3Ek__BackingField_4() { return &___U3CWitApplicationU3Ek__BackingField_4; }
	inline void set_U3CWitApplicationU3Ek__BackingField_4(String_t* value)
	{
		___U3CWitApplicationU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWitApplicationU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_consoleLoggerImpl_5() { return static_cast<int32_t>(offsetof(VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E, ___consoleLoggerImpl_5)); }
	inline VoiceSDKConsoleLoggerImpl_tD46905702F80C5A05F780EAB8A6D204F9E52AEC0 * get_consoleLoggerImpl_5() const { return ___consoleLoggerImpl_5; }
	inline VoiceSDKConsoleLoggerImpl_tD46905702F80C5A05F780EAB8A6D204F9E52AEC0 ** get_address_of_consoleLoggerImpl_5() { return &___consoleLoggerImpl_5; }
	inline void set_consoleLoggerImpl_5(VoiceSDKConsoleLoggerImpl_tD46905702F80C5A05F780EAB8A6D204F9E52AEC0 * value)
	{
		___consoleLoggerImpl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consoleLoggerImpl_5), (void*)value);
	}

	inline static int32_t get_offset_of_loggedFirstTranscriptionTime_6() { return static_cast<int32_t>(offsetof(VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E, ___loggedFirstTranscriptionTime_6)); }
	inline bool get_loggedFirstTranscriptionTime_6() const { return ___loggedFirstTranscriptionTime_6; }
	inline bool* get_address_of_loggedFirstTranscriptionTime_6() { return &___loggedFirstTranscriptionTime_6; }
	inline void set_loggedFirstTranscriptionTime_6(bool value)
	{
		___loggedFirstTranscriptionTime_6 = value;
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

// Meta.WitAi.Configuration.WitDictationRuntimeConfiguration
struct WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8  : public WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975
{
public:
	// Oculus.Voice.Dictation.Configuration.DictationConfiguration Meta.WitAi.Configuration.WitDictationRuntimeConfiguration::dictationConfiguration
	DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * ___dictationConfiguration_13;

public:
	inline static int32_t get_offset_of_dictationConfiguration_13() { return static_cast<int32_t>(offsetof(WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8, ___dictationConfiguration_13)); }
	inline DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * get_dictationConfiguration_13() const { return ___dictationConfiguration_13; }
	inline DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 ** get_address_of_dictationConfiguration_13() { return &___dictationConfiguration_13; }
	inline void set_dictationConfiguration_13(DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * value)
	{
		___dictationConfiguration_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationConfiguration_13), (void*)value);
	}
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


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778  : public UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC
{
public:

public:
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

// Meta.WitAi.Dictation.Events.DictationEvents
struct DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC  : public SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D
{
public:
	// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::_onDictationSessionStarted
	DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * ____onDictationSessionStarted_32;
	// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::_onDictationSessionStopped
	DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * ____onDictationSessionStopped_33;

public:
	inline static int32_t get_offset_of__onDictationSessionStarted_32() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ____onDictationSessionStarted_32)); }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * get__onDictationSessionStarted_32() const { return ____onDictationSessionStarted_32; }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 ** get_address_of__onDictationSessionStarted_32() { return &____onDictationSessionStarted_32; }
	inline void set__onDictationSessionStarted_32(DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * value)
	{
		____onDictationSessionStarted_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onDictationSessionStarted_32), (void*)value);
	}

	inline static int32_t get_offset_of__onDictationSessionStopped_33() { return static_cast<int32_t>(offsetof(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC, ____onDictationSessionStopped_33)); }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * get__onDictationSessionStopped_33() const { return ____onDictationSessionStopped_33; }
	inline DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 ** get_address_of__onDictationSessionStopped_33() { return &____onDictationSessionStopped_33; }
	inline void set__onDictationSessionStopped_33(DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * value)
	{
		____onDictationSessionStopped_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onDictationSessionStopped_33), (void*)value);
	}
};


// Meta.WitAi.Dictation.Events.DictationSessionEvent
struct DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6  : public UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2
{
public:

public:
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

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSession
struct PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD  : public DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE
{
public:
	// System.String Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSession::platformSessionId
	String_t* ___platformSessionId_6;

public:
	inline static int32_t get_offset_of_platformSessionId_6() { return static_cast<int32_t>(offsetof(PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD, ___platformSessionId_6)); }
	inline String_t* get_platformSessionId_6() const { return ___platformSessionId_6; }
	inline String_t** get_address_of_platformSessionId_6() { return &___platformSessionId_6; }
	inline void set_platformSessionId_6(String_t* value)
	{
		___platformSessionId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformSessionId_6), (void*)value);
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


// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
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


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding
struct DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// Meta.WitAi.Dictation.IDictationService Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::_dictationService
	RuntimeObject* ____dictationService_4;
	// Oculus.Voice.Dictation.Bindings.Android.IServiceEvents Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::_serviceEvents
	RuntimeObject* ____serviceEvents_5;

public:
	inline static int32_t get_offset_of__dictationService_4() { return static_cast<int32_t>(offsetof(DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16, ____dictationService_4)); }
	inline RuntimeObject* get__dictationService_4() const { return ____dictationService_4; }
	inline RuntimeObject** get_address_of__dictationService_4() { return &____dictationService_4; }
	inline void set__dictationService_4(RuntimeObject* value)
	{
		____dictationService_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictationService_4), (void*)value);
	}

	inline static int32_t get_offset_of__serviceEvents_5() { return static_cast<int32_t>(offsetof(DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16, ____serviceEvents_5)); }
	inline RuntimeObject* get__serviceEvents_5() const { return ____serviceEvents_5; }
	inline RuntimeObject** get_address_of__serviceEvents_5() { return &____serviceEvents_5; }
	inline void set__serviceEvents_5(RuntimeObject* value)
	{
		____serviceEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serviceEvents_5), (void*)value);
	}
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

// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.Events.UnityAction`1<Meta.WitAi.Dictation.Data.DictationSession>
struct UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Int64,System.Double>
struct UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
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


// Meta.WitAi.Dictation.DictationService
struct DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::dictationEvents
	DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * ___dictationEvents_4;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.Dictation.DictationService::telemetryEvents
	TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___telemetryEvents_5;

public:
	inline static int32_t get_offset_of_dictationEvents_4() { return static_cast<int32_t>(offsetof(DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265, ___dictationEvents_4)); }
	inline DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * get_dictationEvents_4() const { return ___dictationEvents_4; }
	inline DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC ** get_address_of_dictationEvents_4() { return &___dictationEvents_4; }
	inline void set_dictationEvents_4(DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * value)
	{
		___dictationEvents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEvents_4), (void*)value);
	}

	inline static int32_t get_offset_of_telemetryEvents_5() { return static_cast<int32_t>(offsetof(DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265, ___telemetryEvents_5)); }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * get_telemetryEvents_5() const { return ___telemetryEvents_5; }
	inline TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 ** get_address_of_telemetryEvents_5() { return &___telemetryEvents_5; }
	inline void set_telemetryEvents_5(TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * value)
	{
		___telemetryEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___telemetryEvents_5), (void*)value);
	}
};


// Oculus.Voice.Dictation.AppDictationExperience
struct AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16  : public DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265
{
public:
	// Meta.WitAi.Configuration.WitDictationRuntimeConfiguration Oculus.Voice.Dictation.AppDictationExperience::runtimeConfiguration
	WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ___runtimeConfiguration_6;
	// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::usePlatformServices
	bool ___usePlatformServices_7;
	// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::doNotFallbackToWit
	bool ___doNotFallbackToWit_8;
	// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::enableConsoleLogging
	bool ___enableConsoleLogging_9;
	// Meta.WitAi.Dictation.IDictationService Oculus.Voice.Dictation.AppDictationExperience::_dictationServiceImpl
	RuntimeObject* ____dictationServiceImpl_10;
	// Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger Oculus.Voice.Dictation.AppDictationExperience::_voiceSDKLogger
	RuntimeObject* ____voiceSDKLogger_11;
	// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::_isActive
	bool ____isActive_12;
	// Meta.WitAi.Dictation.Data.DictationSession Oculus.Voice.Dictation.AppDictationExperience::_activeSession
	DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * ____activeSession_13;
	// Meta.WitAi.Configuration.WitRequestOptions Oculus.Voice.Dictation.AppDictationExperience::_activeRequestOptions
	WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ____activeRequestOptions_14;
	// System.Action Oculus.Voice.Dictation.AppDictationExperience::OnInitialized
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnInitialized_15;

public:
	inline static int32_t get_offset_of_runtimeConfiguration_6() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ___runtimeConfiguration_6)); }
	inline WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * get_runtimeConfiguration_6() const { return ___runtimeConfiguration_6; }
	inline WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 ** get_address_of_runtimeConfiguration_6() { return &___runtimeConfiguration_6; }
	inline void set_runtimeConfiguration_6(WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * value)
	{
		___runtimeConfiguration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeConfiguration_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePlatformServices_7() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ___usePlatformServices_7)); }
	inline bool get_usePlatformServices_7() const { return ___usePlatformServices_7; }
	inline bool* get_address_of_usePlatformServices_7() { return &___usePlatformServices_7; }
	inline void set_usePlatformServices_7(bool value)
	{
		___usePlatformServices_7 = value;
	}

	inline static int32_t get_offset_of_doNotFallbackToWit_8() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ___doNotFallbackToWit_8)); }
	inline bool get_doNotFallbackToWit_8() const { return ___doNotFallbackToWit_8; }
	inline bool* get_address_of_doNotFallbackToWit_8() { return &___doNotFallbackToWit_8; }
	inline void set_doNotFallbackToWit_8(bool value)
	{
		___doNotFallbackToWit_8 = value;
	}

	inline static int32_t get_offset_of_enableConsoleLogging_9() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ___enableConsoleLogging_9)); }
	inline bool get_enableConsoleLogging_9() const { return ___enableConsoleLogging_9; }
	inline bool* get_address_of_enableConsoleLogging_9() { return &___enableConsoleLogging_9; }
	inline void set_enableConsoleLogging_9(bool value)
	{
		___enableConsoleLogging_9 = value;
	}

	inline static int32_t get_offset_of__dictationServiceImpl_10() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ____dictationServiceImpl_10)); }
	inline RuntimeObject* get__dictationServiceImpl_10() const { return ____dictationServiceImpl_10; }
	inline RuntimeObject** get_address_of__dictationServiceImpl_10() { return &____dictationServiceImpl_10; }
	inline void set__dictationServiceImpl_10(RuntimeObject* value)
	{
		____dictationServiceImpl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictationServiceImpl_10), (void*)value);
	}

	inline static int32_t get_offset_of__voiceSDKLogger_11() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ____voiceSDKLogger_11)); }
	inline RuntimeObject* get__voiceSDKLogger_11() const { return ____voiceSDKLogger_11; }
	inline RuntimeObject** get_address_of__voiceSDKLogger_11() { return &____voiceSDKLogger_11; }
	inline void set__voiceSDKLogger_11(RuntimeObject* value)
	{
		____voiceSDKLogger_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceSDKLogger_11), (void*)value);
	}

	inline static int32_t get_offset_of__isActive_12() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ____isActive_12)); }
	inline bool get__isActive_12() const { return ____isActive_12; }
	inline bool* get_address_of__isActive_12() { return &____isActive_12; }
	inline void set__isActive_12(bool value)
	{
		____isActive_12 = value;
	}

	inline static int32_t get_offset_of__activeSession_13() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ____activeSession_13)); }
	inline DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * get__activeSession_13() const { return ____activeSession_13; }
	inline DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE ** get_address_of__activeSession_13() { return &____activeSession_13; }
	inline void set__activeSession_13(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * value)
	{
		____activeSession_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeSession_13), (void*)value);
	}

	inline static int32_t get_offset_of__activeRequestOptions_14() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ____activeRequestOptions_14)); }
	inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * get__activeRequestOptions_14() const { return ____activeRequestOptions_14; }
	inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F ** get_address_of__activeRequestOptions_14() { return &____activeRequestOptions_14; }
	inline void set__activeRequestOptions_14(WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * value)
	{
		____activeRequestOptions_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeRequestOptions_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnInitialized_15() { return static_cast<int32_t>(offsetof(AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16, ___OnInitialized_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnInitialized_15() const { return ___OnInitialized_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnInitialized_15() { return &___OnInitialized_15; }
	inline void set_OnInitialized_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnInitialized_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInitialized_15), (void*)value);
	}
};


// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C  : public NLPRequest_4_t377F27E69973B37024F6AB9052717B77D282E884
{
public:

public:
};


// Meta.WitAi.Dictation.WitDictation
struct WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79  : public DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265
{
public:
	// Meta.WitAi.Configuration.WitRuntimeConfiguration Meta.WitAi.Dictation.WitDictation::witRuntimeConfiguration
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * ___witRuntimeConfiguration_6;
	// Meta.WitAi.WitService Meta.WitAi.Dictation.WitDictation::witService
	WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * ___witService_7;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.Dictation.WitDictation::_voiceEvents
	VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * ____voiceEvents_8;

public:
	inline static int32_t get_offset_of_witRuntimeConfiguration_6() { return static_cast<int32_t>(offsetof(WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79, ___witRuntimeConfiguration_6)); }
	inline WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * get_witRuntimeConfiguration_6() const { return ___witRuntimeConfiguration_6; }
	inline WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 ** get_address_of_witRuntimeConfiguration_6() { return &___witRuntimeConfiguration_6; }
	inline void set_witRuntimeConfiguration_6(WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * value)
	{
		___witRuntimeConfiguration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witRuntimeConfiguration_6), (void*)value);
	}

	inline static int32_t get_offset_of_witService_7() { return static_cast<int32_t>(offsetof(WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79, ___witService_7)); }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * get_witService_7() const { return ___witService_7; }
	inline WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C ** get_address_of_witService_7() { return &___witService_7; }
	inline void set_witService_7(WitService_t2D55CDD1A10B4A272694A0A16BBD9316B760077C * value)
	{
		___witService_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witService_7), (void*)value);
	}

	inline static int32_t get_offset_of__voiceEvents_8() { return static_cast<int32_t>(offsetof(WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79, ____voiceEvents_8)); }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * get__voiceEvents_8() const { return ____voiceEvents_8; }
	inline VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D ** get_address_of__voiceEvents_8() { return &____voiceEvents_8; }
	inline void set__voiceEvents_8(VoiceEvents_t57A479B9A7CC3399F86468C2FBAC85434629CC8D * value)
	{
		____voiceEvents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceEvents_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mBF66265092F853A13F5698ED2B62F0ADA48E4F0A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Int64,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D_gshared (UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mDD521536D4079AE31DCD2CB3A2E6E4EC34C1B888_gshared (UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC * __this, UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m3995B3BF171DC56714BCEBB1398B206E418186D0_gshared (UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC * __this, UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// !1 Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * VoiceRequest_4_get_Options_m2259A3BB89084FC10657A5587D832BBF2330FCBF_gshared_inline (VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD * __this, const RuntimeMethod* method);
// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceRequest_4_get_State_mB032349DB5A94B0BCEE8474BD4EB5AEB09B67D58_gshared_inline (VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD * __this, const RuntimeMethod* method);
// !3 Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_Results()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * VoiceRequest_4_get_Results_mD9E141DFDA2FD2EC52083100D4BC153E5D905762_gshared_inline (VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD * __this, const RuntimeMethod* method);
// Meta.WitAi.Json.WitResponseNode Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>::get_ResponseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * NLPAudioRequest_4_get_ResponseData_mBFFC3B59C78D9E1EB4C49442BAB5E504683B5813_gshared (NLPAudioRequest_4_t0758DA750D186DC583F7A65C5BE8F823156080F8 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m2914957418A0AC6FD1F738FDBED7CB07CC20E800_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, RuntimeObject * ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1__ctor_m418B190152EEC4C99CC576124B47A198C189D6D7_gshared (BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B * __this, String_t* ___className0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::Connect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1_Connect_m6E43D44F24FD605BC2885D2C5231C8493A927A62_gshared (BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<System.Object>::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAndroidConnectionImpl_1_Disconnect_m6167A0FAA2BCF5D7C0CB60A5BF9776CE2FDF46DD_gshared (BaseAndroidConnectionImpl_1_tA385AC35967B49A71BAB023CE6363A7D25A2F36B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);

// Meta.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.Dictation.AppDictationExperience::get_RuntimeConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String Oculus.Voice.VoiceSDKConstants::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceSDKConstants_get_SdkVersion_m92CA96F3A9FF5593B65E251629AA2118DF2E7E68 (const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_HasPlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_HasPlatformIntegrations_mE0A6F3711A843B074FF2FF29C6BD32165B681F6F (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517 (RuntimeObject * ___log0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.AppDictationExperience::InitDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_InitDictation_mA21FBBADFB78C8B19A6291BA50CEBEB228E243C3 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.String Oculus.Voice.Dictation.AppDictationExperience::get_PACKAGE_VERSION()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppDictationExperience_get_PACKAGE_VERSION_mB3CB4D297B526EF0C76AAB31A3E47B15AA851D74 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m5E32FCA60BD2DC0202360DDBD512F6658501B316 (RuntimeObject * ___log0, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_UsePlatformIntegrations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppDictationExperience_get_UsePlatformIntegrations_m69582728E773426BE12D8FCBF12C017D77321D84_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSDKPlatformLoggerImpl__ctor_mEB486F936B4D90B9EC4100298924117283E9B887 (VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::.ctor(Meta.WitAi.Dictation.IDictationService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl__ctor_mA8E12BD8CA5369CB527C47FE8772D48E8C1B4A71 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, RuntimeObject* ___dictationService0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_PlatformSupportsDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationImpl_get_PlatformSupportsDictation_m05B0835DB8D3A09495BD92BF7D383339697164B0 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method);
// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.Dictation.DictationService::get_TelemetryEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * DictationService_get_TelemetryEvents_m6E462BD2C0B931954E5BDBC7A7C204AE494689D6_inline (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// Meta.WitAi.Configuration.WitDictationRuntimeConfiguration Oculus.Voice.Dictation.AppDictationExperience::get_RuntimeDictationConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * AppDictationExperience_get_RuntimeDictationConfiguration_mF211059D8763889EFD400DA04ED7D43D32506647_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::SetDictationRuntimeConfiguration(Meta.WitAi.Configuration.WitDictationRuntimeConfiguration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformDictationImpl_SetDictationRuntimeConfiguration_m233F7DADCDCFF3DE00E05EA9485F767FBDF64F4D_inline (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ___configuration0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnPlatformServiceNotAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnPlatformServiceNotAvailable_m79AC8E0296D71033FD94F5047E3D2D9EEB88BA73 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.AppDictationExperience::RevertToWitDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_RevertToWitDictation_mDD0AE20C95BB6C10B1E19C9BA8A5B8C5669D18A0 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetLoggerAppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetLoggerAppId_m4D2DDE1670E3B1B861DC7A49D1DF3EB588D0C6E2 (WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_DoNotFallbackToWit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppDictationExperience_get_DoNotFallbackToWit_mF5CAD3FC8C39D373FA3A0FF6F8F600AAA47F1BCF_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::get_OnError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * SpeechEvents_get_OnError_m04B08925E5E5336EA6B0BA5560A40D6D100023C3_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1 (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 * __this, String_t* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0D2FB1E8F4286DCAC18EC973743AAC36A2AC3A4 *, String_t*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_mBF66265092F853A13F5698ED2B62F0ADA48E4F0A_gshared)(__this, ___arg00, ___arg11, method);
}
// !!0 UnityEngine.Component::GetComponent<Meta.WitAi.Dictation.WitDictation>()
inline WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * Component_GetComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mF4596F17F6B46A6B89326BC16C0CDF0B0BBB022E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Meta.WitAi.Dictation.WitDictation>()
inline WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * GameObject_AddComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_m40E1846376AC94FB7E1822D20F79CEC1657581CD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.WitDictation::set_RuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitDictation_set_RuntimeConfiguration_mC8A920F2CDEDCAF2E51D8FA9634F3DFD070D897E_inline (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DictationService_set_TelemetryEvents_m789E53BB9079641B4C2D9687A069D3699272274F_inline (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___value0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnEnable_m82D4D22C1A335882E75944EFFF8962F07E0CD703 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.VoiceSDK.Utilities.MicPermissionsManager::HasMicPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicPermissionsManager_HasMicPermission_mF8FB7BE68D9E3A202BDDB8E3DA7BF3B0C0F80528 (const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.VoiceSDK.Utilities.MicPermissionsManager::RequestMicPermission(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPermissionsManager_RequestMicPermission_m07F0156E111ED660056278E26B533784B92B6812 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___permissionGrantedCallback0, const RuntimeMethod* method);
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * SpeechEvents_get_OnRequestInitialized_mE11AB864D1E50BAADBB03BF449D73261E2E46E97_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E (UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m56424D895106AF7BEA7233ED1ECA5CEDDDA915FA (UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 * __this, UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 *, UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStartListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * SpeechEvents_get_OnStartListening_m5E68D0FA2F64DC6FE02FC17CBF256D9B6A47C904_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * SpeechEvents_get_OnStoppedListening_mAB9D29E39C416846F4A101052E7F360350A2E275_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * SpeechEvents_get_OnComplete_mF17B131FEF512346081B793B737E0DDC4E6E2B0D_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnDictationSessionStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * DictationEvents_get_OnDictationSessionStarted_m866DA85C06E821B6315BD9FFF8F56BEDBF001ADE_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Dictation.Data.DictationSession>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4 (UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mB6CC2736D390EADB6604F237F26567D9A8AAA58F (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 * __this, UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 *, UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * SpeechEvents_get_OnPartialTranscription_mCBCE638876903718E1100BD82336D480C8FEC8FD_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * SpeechEvents_get_OnFullTranscription_mAFF8516189ED2D6ACABBEA4FDBD99F8DEF93054A_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Int64,System.Double>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D (UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::AddListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_AddListener_mDD521536D4079AE31DCD2CB3A2E6E4EC34C1B888 (UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC * __this, UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC *, UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 *, const RuntimeMethod*))UnityEvent_2_AddListener_mDD521536D4079AE31DCD2CB3A2E6E4EC34C1B888_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_mF798B66B371499AA6FF40D8F4354CBFE7DE1C1A7 (UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 * __this, UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC2189120C724958515D6D8B476E59F27C2B160B4 *, UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m84C8300462E1DB920BAC221EADABAE50FA049F00 (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 * __this, UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 *, UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::RemoveListener(UnityEngine.Events.UnityAction`2<!0,!1>)
inline void UnityEvent_2_RemoveListener_m3995B3BF171DC56714BCEBB1398B206E418186D0 (UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC * __this, UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tA0AB0769B46CA7CDFC3BF3FB527251A57E027CBC *, UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 *, const RuntimeMethod*))UnityEvent_2_RemoveListener_m3995B3BF171DC56714BCEBB1398B206E418186D0_gshared)(__this, ___call0, method);
}
// System.Void Meta.WitAi.Dictation.DictationService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_OnDisable_mBD73CB4950AB0BF3994138B11CFFA3EBE2869514 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Activate_m076772499022A423D93D5E51CAE31AEFA58A3EED (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnDictationServiceNotAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnDictationServiceNotAvailable_m485B3DE5DDD81DB92D99766CBB2CFCCDFCB8920F (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.Data.DictationSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationSession__ctor_m432FF4594E38E9969D4E45436407A53D5DC90F37 (DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Dictation.Data.DictationSession>::Invoke(!0)
inline void UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8 (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 * __this, DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA26BD6C7023C8F37AA39387301A478573B2F4BC2 *, DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::CleanupSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_CleanupSession_mA4BD64671C2796E201079C95324FB2070C765951 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method);
// !1 Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_Options()
inline WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_inline (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 * __this, const RuntimeMethod* method)
{
	return ((  WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * (*) (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 *, const RuntimeMethod*))VoiceRequest_4_get_Options_m2259A3BB89084FC10657A5587D832BBF2330FCBF_gshared_inline)(__this, method);
}
// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::get_RequestId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_RequestId_m3042EA0895AAC67DB1FF5E88924212A40AB4113C_inline (VoiceServiceRequestOptions_t99932F38DED5F8D2B0E40BEBEBFE477F7C0C9825 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService_Activate_m3E80868C8F2533FC509823968FFBBA74957BC853 (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4D920091736623333AE0E32439DBD5CF5AC128FE (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_State()
inline int32_t VoiceRequest_4_get_State_m9206702503076367DC45F6B6D06E175CCA5B796A_inline (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 *, const RuntimeMethod*))VoiceRequest_4_get_State_mB032349DB5A94B0BCEE8474BD4EB5AEB09B67D58_gshared_inline)(__this, method);
}
// !3 Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_Results()
inline VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_inline (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 * __this, const RuntimeMethod* method)
{
	return ((  VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * (*) (VoiceRequest_4_t1C8846D32A3848248B395407BC30AB468CA21335 *, const RuntimeMethod*))VoiceRequest_4_get_Results_mD9E141DFDA2FD2EC52083100D4BC153E5D905762_gshared_inline)(__this, method);
}
// System.String Meta.WitAi.Requests.VoiceServiceRequestResults::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestResults_get_Message_mFEF1DF5B9B55896B807488164E246F0AE14D8277_inline (VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m5DB07B27578F007F59677D1AEA80E810709BC4B1 (RuntimeObject * ___log0, const RuntimeMethod* method);
// Meta.WitAi.Json.WitResponseNode Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_ResponseData()
inline WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * NLPAudioRequest_4_get_ResponseData_mC55C11041510077580FB8F5B4210159AADC03030 (NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305 * __this, const RuntimeMethod* method)
{
	return ((  WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * (*) (NLPAudioRequest_4_tBD70509D3EB53B3AEA2E1A8634846A08025F4305 *, const RuntimeMethod*))NLPAudioRequest_4_get_ResponseData_mBFFC3B59C78D9E1EB4C49442BAB5E504683B5813_gshared)(__this, method);
}
// System.Boolean Meta.WitAi.Json.WitResponseNode::op_Inequality(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseNode_op_Inequality_m8CEA98E6391EFC6B392FAE7D97082CBDB50BE28B (WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// Meta.WitAi.Dictation.Events.DictationSessionEvent Meta.WitAi.Dictation.Events.DictationEvents::get_OnDictationSessionStopped()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * DictationEvents_get_OnDictationSessionStopped_mEC37C295E51E75FBD4135E8DED8A3845A73A00CD_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.Dictation.DictationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationService__ctor_mABED0C167D00728B58F67E85B4C51C595DD4C43D (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Configuration.DictationConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationConfiguration__ctor_mC439BC70822509BA0D736C7860786074C93569AD (DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Set<System.Boolean>(System.String,!!0)
inline void AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, bool ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, bool, const RuntimeMethod*))AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,!!0)
inline void AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, String_t* ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m2914957418A0AC6FD1F738FDBED7CB07CC20E800_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.Int32>(System.String,!!0)
inline void AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, int32_t ___val1, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, int32_t, const RuntimeMethod*))AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_gshared)(__this, ___fieldName0, ___val1, method);
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// Meta.WitAi.Dictation.Events.DictationEvents Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::get_DictationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSession__ctor_m7BE6CBBFF34DC64B9DF6E03BC145BCC3CF5D4917 (PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * __this, const RuntimeMethod* method);
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::get_OnMicAudioLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * SpeechEvents_get_OnMicAudioLevelChanged_mB8640A4F50DA056E9C69970F4B36231A3D2C2457 (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(!0)
inline void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, float, const RuntimeMethod*))UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(!0)
inline void UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>::.ctor(System.String)
inline void BaseAndroidConnectionImpl_1__ctor_mAC72972B3E316EBEDBBB4C96E6E6C45BD8D4C71E (BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 * __this, String_t* ___className0, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *, String_t*, const RuntimeMethod*))BaseAndroidConnectionImpl_1__ctor_m418B190152EEC4C99CC576124B47A198C189D6D7_gshared)(__this, ___className0, method);
}
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationSDKBinding_get_IsSupported_m3F3B117D09C348F600DEF881F58ACF348FB85F8E (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationSDKBinding_get_Active_mAA65C94F54A819042564DB4CC27520721BD756A1 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationSDKBinding_get_IsRequestActive_m0D6EC59884A2F4B3141803740F4887C4E39E68ED (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>::Connect(System.String)
inline void BaseAndroidConnectionImpl_1_Connect_m27CE54891B3C4DC45109D661C2A7E91494F9BCD0 (BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *, String_t*, const RuntimeMethod*))BaseAndroidConnectionImpl_1_Connect_m6E43D44F24FD605BC2885D2C5231C8493A927A62_gshared)(__this, ___version0, method);
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::.ctor(Meta.WitAi.Dictation.IDictationService,Oculus.Voice.Dictation.Bindings.Android.IServiceEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding__ctor_mE0C10A2832AF92DD0E5EEC7B667E2A80793133F0 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, RuntimeObject* ___dictationService0, RuntimeObject* ___serviceEvents1, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::SetListener(Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSDKBinding_SetListener_mE7A713A1CE5940C856C00994564F986A44DB4D70 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * ___listenerBinding0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>::Disconnect()
inline void BaseAndroidConnectionImpl_1_Disconnect_m1A3BFC80A3FF006F70E4DC90248831B5A7434FD5 (BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *, const RuntimeMethod*))BaseAndroidConnectionImpl_1_Disconnect_m6167A0FAA2BCF5D7C0CB60A5BF9776CE2FDF46DD_gshared)(__this, method);
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding::.ctor(Meta.WitAi.Configuration.WitDictationRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationConfigurationBinding__ctor_m086AC9FD4F0ACC487C080913D837760A0AE94A09 (DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * __this, WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ___runtimeConfiguration0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::StartDictation(Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSDKBinding_StartDictation_m66119D05E22161091C4662DFF15880E468BFBE12 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * ___configuration0, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_Activate_mBBF98A488FC26E2072B867AC64BA0989F2EA45C1 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method);
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::StopDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSDKBinding_StopDictation_mBC2A5FD4C582D829777C5F38C066B2A2D00D70E9 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseServiceBinding__ctor_mE48FF343A8BD176981F554E32D16216587EB1872 (BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___sdkInstance0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * DictationConfigurationBinding_ToJavaObject_m6075DF79CE6D955C4194D256AFC36F048481B541 (DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Meta.WitAi.Configuration.WitRuntimeConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRuntimeConfiguration__ctor_m3F41F3DCC11EE6A120BF9DC29C46E111001DF2D2 (WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * __this, const RuntimeMethod* method);
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
// Meta.WitAi.Configuration.WitRuntimeConfiguration Oculus.Voice.Dictation.AppDictationExperience::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// public WitRuntimeConfiguration RuntimeConfiguration => runtimeConfiguration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = __this->get_runtimeConfiguration_6();
		return L_0;
	}
}
// Meta.WitAi.Configuration.WitDictationRuntimeConfiguration Oculus.Voice.Dictation.AppDictationExperience::get_RuntimeDictationConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * AppDictationExperience_get_RuntimeDictationConfiguration_mF211059D8763889EFD400DA04ED7D43D32506647 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// get => runtimeConfiguration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = __this->get_runtimeConfiguration_6();
		return L_0;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::set_RuntimeDictationConfiguration(Meta.WitAi.Configuration.WitDictationRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_set_RuntimeDictationConfiguration_mFC7664EDB8FCEA8A85CA8BDE3DA1C2D4755D1616 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ___value0, const RuntimeMethod* method)
{
	{
		// set => runtimeConfiguration = value;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = ___value0;
		__this->set_runtimeConfiguration_6(L_0);
		return;
	}
}
// Meta.WitAi.Data.Configuration.WitConfiguration Oculus.Voice.Dictation.AppDictationExperience::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * AppDictationExperience_get_Configuration_m64C2D77545901D4862C51C4A7A27BA00A232C910 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B2_0 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B1_0 = NULL;
	{
		// public WitConfiguration Configuration => RuntimeConfiguration?.witConfiguration;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0;
		L_0 = AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline(__this, /*hidden argument*/NULL);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 *)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_2 = G_B2_0->get_witConfiguration_0();
		return L_2;
	}
}
// Meta.WitAi.Dictation.Data.DictationSession Oculus.Voice.Dictation.AppDictationExperience::get_ActiveSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * AppDictationExperience_get_ActiveSession_mF473A8A131D498AFC32034E0F6412DD266F8A962 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// public DictationSession ActiveSession => _activeSession;
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_0 = __this->get__activeSession_13();
		return L_0;
	}
}
// Meta.WitAi.Configuration.WitRequestOptions Oculus.Voice.Dictation.AppDictationExperience::get_ActiveRequestOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * AppDictationExperience_get_ActiveRequestOptions_mFE5CE21A549542A4BAFFDC256AB17898C716E092 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// public WitRequestOptions ActiveRequestOptions => _activeRequestOptions;
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_0 = __this->get__activeRequestOptions_14();
		return L_0;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::add_OnInitialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_add_OnInitialized_m16968932EF12E3046A6943A3DB8CAE3D4A892AAA (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnInitialized_15();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnInitialized_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::remove_OnInitialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_remove_OnInitialized_m4C905D5B608AA21630F9D85400E8AA1AFF60FAB3 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnInitialized_15();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnInitialized_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Oculus.Voice.Dictation.AppDictationExperience::get_PACKAGE_VERSION()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppDictationExperience_get_PACKAGE_VERSION_mB3CB4D297B526EF0C76AAB31A3E47B15AA851D74 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKConstants_t738646E449F293D6B25BF801B13A010809ADA578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string PACKAGE_VERSION => VoiceSDKConstants.SdkVersion;
		IL2CPP_RUNTIME_CLASS_INIT(VoiceSDKConstants_t738646E449F293D6B25BF801B13A010809ADA578_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = VoiceSDKConstants_get_SdkVersion_m92CA96F3A9FF5593B65E251629AA2118DF2E7E68(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_HasPlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_HasPlatformIntegrations_mE0A6F3711A843B074FF2FF29C6BD32165B681F6F (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool HasPlatformIntegrations => usePlatformServices && _dictationServiceImpl is PlatformDictationImpl;
		bool L_0 = __this->get_usePlatformServices_7();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__dictationServiceImpl_10();
		return (bool)((!(((RuntimeObject*)(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 *)((PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 *)IsInstClass((RuntimeObject*)L_1, PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_UsePlatformIntegrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_UsePlatformIntegrations_m69582728E773426BE12D8FCBF12C017D77321D84 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// get => usePlatformServices;
		bool L_0 = __this->get_usePlatformServices_7();
		return L_0;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::set_UsePlatformIntegrations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_set_UsePlatformIntegrations_m84324F3672DFC83EF0E69FC66E549BFF2E798CB2 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A6A359B020506529C26653998F41906D297BD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62B962D58D79AB658276228C081F11858A78D27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10964CC93D7E488FED7249F5076B722443D1789);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B5_0 = NULL;
	{
		// if (usePlatformServices != value || HasPlatformIntegrations != value)
		bool L_0 = __this->get_usePlatformServices_7();
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		bool L_2;
		L_2 = AppDictationExperience_get_HasPlatformIntegrations_mE0A6F3711A843B074FF2FF29C6BD32165B681F6F(__this, /*hidden argument*/NULL);
		bool L_3 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0042;
		}
	}

IL_0012:
	{
		// usePlatformServices = value;
		bool L_4 = ___value0;
		__this->set_usePlatformServices_7(L_4);
		// VLog.D($"{(usePlatformServices ? "Enabling" : "Disabling")} platform integration.");
		bool L_5 = __this->get_usePlatformServices_7();
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		G_B5_0 = _stringLiteral45A6A359B020506529C26653998F41906D297BD2;
		goto IL_002d;
	}

IL_0028:
	{
		G_B5_0 = _stringLiteralA10964CC93D7E488FED7249F5076B722443D1789;
	}

IL_002d:
	{
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_0, _stringLiteral62B962D58D79AB658276228C081F11858A78D27B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(L_6, /*hidden argument*/NULL);
		// InitDictation();
		AppDictationExperience_InitDictation_mA21FBBADFB78C8B19A6291BA50CEBEB228E243C3(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_DoNotFallbackToWit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_DoNotFallbackToWit_mF5CAD3FC8C39D373FA3A0FF6F8F600AAA47F1BCF (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// get => doNotFallbackToWit;
		bool L_0 = __this->get_doNotFallbackToWit_8();
		return L_0;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::set_DoNotFallbackToWit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_set_DoNotFallbackToWit_m4A82F1F76F1C7FDBD1155B7662C09ACB658EE4B5 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => doNotFallbackToWit = value;
		bool L_0 = ___value0;
		__this->set_doNotFallbackToWit_8(L_0);
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::InitDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_InitDictation_mA21FBBADFB78C8B19A6291BA50CEBEB228E243C3 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnPlatformServiceNotAvailable_m79AC8E0296D71033FD94F5047E3D2D9EEB88BA73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BCDDF342A73CF6C15DBCBD80233EF8B1AD281CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56E839DE5BBB0D765B7A3992FA9FE1A49C1CECF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA829E470D52A5E1BCDE6A65AF89257CE29A466AF);
		s_Il2CppMethodInitialized = true;
	}
	VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * V_0 = NULL;
	Exception_t * V_1 = NULL;
	PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	String_t* G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B20_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B19_0 = NULL;
	{
		// if (string.IsNullOrEmpty(PACKAGE_VERSION))
		String_t* L_0;
		L_0 = AppDictationExperience_get_PACKAGE_VERSION_mB3CB4D297B526EF0C76AAB31A3E47B15AA851D74(/*hidden argument*/NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// VLog.E("No SDK Version Set");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_E_m5E32FCA60BD2DC0202360DDBD512F6658501B316(_stringLiteral0BCDDF342A73CF6C15DBCBD80233EF8B1AD281CD, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// if (!UsePlatformIntegrations)
		bool L_2;
		L_2 = AppDictationExperience_get_UsePlatformIntegrations_m69582728E773426BE12D8FCBF12C017D77321D84_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0072;
		}
	}
	{
		// if (_dictationServiceImpl is PlatformDictationImpl)
		RuntimeObject* L_3 = __this->get__dictationServiceImpl_10();
		if (!((PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 *)IsInstClass((RuntimeObject*)L_3, PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var)))
		{
			goto IL_003b;
		}
	}
	{
		// ((PlatformDictationImpl) _dictationServiceImpl).Disconnect();
		RuntimeObject* L_4 = __this->get__dictationServiceImpl_10();
		NullCheck(((PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 *)CastclassClass((RuntimeObject*)L_4, PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>::Disconnect() */, ((PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 *)CastclassClass((RuntimeObject*)L_4, PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var)));
	}

IL_003b:
	{
		// if (_voiceSDKLogger is VoiceSDKPlatformLoggerImpl)
		RuntimeObject* L_5 = __this->get__voiceSDKLogger_11();
		if (!((VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E *)IsInstClass((RuntimeObject*)L_5, VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var)))
		{
			goto IL_0072;
		}
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		// ((VoiceSDKPlatformLoggerImpl)_voiceSDKLogger).Disconnect();
		RuntimeObject* L_6 = __this->get__voiceSDKLogger_11();
		NullCheck(((VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E *)CastclassClass((RuntimeObject*)L_6, VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>::Disconnect() */, ((VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E *)CastclassClass((RuntimeObject*)L_6, VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var)));
		// }
		goto IL_0072;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// VLog.E($"Disconnection error: {e.Message}");
		Exception_t * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral455532645A36B471DC93D48F55B5E5617AE61927)), L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var)));
		VLog_E_m5E32FCA60BD2DC0202360DDBD512F6658501B316(L_9, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0072;
	} // end catch (depth: 1)

IL_0072:
	{
		// var loggerImpl = new VoiceSDKPlatformLoggerImpl();
		VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * L_10 = (VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E *)il2cpp_codegen_object_new(VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var);
		VoiceSDKPlatformLoggerImpl__ctor_mEB486F936B4D90B9EC4100298924117283E9B887(L_10, /*hidden argument*/NULL);
		V_0 = L_10;
		// loggerImpl.Connect(PACKAGE_VERSION);
		VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * L_11 = V_0;
		String_t* L_12;
		L_12 = AppDictationExperience_get_PACKAGE_VERSION_mB3CB4D297B526EF0C76AAB31A3E47B15AA851D74(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>::Connect(System.String) */, L_11, L_12);
		// _voiceSDKLogger = loggerImpl;
		VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * L_13 = V_0;
		__this->set__voiceSDKLogger_11(L_13);
		// if (UsePlatformIntegrations)
		bool L_14;
		L_14 = AppDictationExperience_get_UsePlatformIntegrations_m69582728E773426BE12D8FCBF12C017D77321D84_inline(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0130;
		}
	}
	{
		// VLog.D("Checking platform dictation capabilities...");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(_stringLiteralA829E470D52A5E1BCDE6A65AF89257CE29A466AF, /*hidden argument*/NULL);
		// var platformDictationImpl = new PlatformDictationImpl(this);
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_15 = (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 *)il2cpp_codegen_object_new(PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var);
		PlatformDictationImpl__ctor_mA8E12BD8CA5369CB527C47FE8772D48E8C1B4A71(L_15, __this, /*hidden argument*/NULL);
		V_2 = L_15;
		// platformDictationImpl.OnServiceNotAvailableEvent += OnPlatformServiceNotAvailable;
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_16 = V_2;
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_17 = L_16;
		NullCheck(L_17);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = L_17->get_OnServiceNotAvailableEvent_8();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_19, __this, (intptr_t)((intptr_t)AppDictationExperience_OnPlatformServiceNotAvailable_m79AC8E0296D71033FD94F5047E3D2D9EEB88BA73_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_20;
		L_20 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_OnServiceNotAvailableEvent_8(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_20, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// platformDictationImpl.Connect(PACKAGE_VERSION);
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_21 = V_2;
		String_t* L_22;
		L_22 = AppDictationExperience_get_PACKAGE_VERSION_mB3CB4D297B526EF0C76AAB31A3E47B15AA851D74(/*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>::Connect(System.String) */, L_21, L_22);
		// if (platformDictationImpl.PlatformSupportsDictation)
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_23 = V_2;
		NullCheck(L_23);
		bool L_24;
		L_24 = PlatformDictationImpl_get_PlatformSupportsDictation_m05B0835DB8D3A09495BD92BF7D383339697164B0(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0128;
		}
	}
	{
		// _dictationServiceImpl = platformDictationImpl;
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_25 = V_2;
		__this->set__dictationServiceImpl_10(L_25);
		// _dictationServiceImpl.DictationEvents = DictationEvents;
		RuntimeObject* L_26 = __this->get__dictationServiceImpl_10();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_27;
		L_27 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_26);
		InterfaceActionInvoker1< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(6 /* System.Void Meta.WitAi.Dictation.IDictationService::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents) */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_26, L_27);
		// _dictationServiceImpl.TelemetryEvents = TelemetryEvents;
		RuntimeObject* L_28 = __this->get__dictationServiceImpl_10();
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_29;
		L_29 = DictationService_get_TelemetryEvents_m6E462BD2C0B931954E5BDBC7A7C204AE494689D6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * >::Invoke(8 /* System.Void Meta.WitAi.Dictation.IDictationService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents) */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_28, L_29);
		// platformDictationImpl.SetDictationRuntimeConfiguration(RuntimeDictationConfiguration);
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_30 = V_2;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_31;
		L_31 = AppDictationExperience_get_RuntimeDictationConfiguration_mF211059D8763889EFD400DA04ED7D43D32506647_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		PlatformDictationImpl_SetDictationRuntimeConfiguration_m233F7DADCDCFF3DE00E05EA9485F767FBDF64F4D_inline(L_30, L_31, /*hidden argument*/NULL);
		// VLog.D("Dictation platform init complete");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(_stringLiteral56E839DE5BBB0D765B7A3992FA9FE1A49C1CECF8, /*hidden argument*/NULL);
		// _voiceSDKLogger.IsUsingPlatformIntegration = true;
		RuntimeObject* L_32 = __this->get__voiceSDKLogger_11();
		NullCheck(L_32);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_IsUsingPlatformIntegration(System.Boolean) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_32, (bool)1);
		// }
		goto IL_0136;
	}

IL_0128:
	{
		// OnPlatformServiceNotAvailable();
		AppDictationExperience_OnPlatformServiceNotAvailable_m79AC8E0296D71033FD94F5047E3D2D9EEB88BA73(__this, /*hidden argument*/NULL);
		// }
		goto IL_0136;
	}

IL_0130:
	{
		// RevertToWitDictation();
		AppDictationExperience_RevertToWitDictation_mDD0AE20C95BB6C10B1E19C9BA8A5B8C5669D18A0(__this, /*hidden argument*/NULL);
	}

IL_0136:
	{
		// _voiceSDKLogger.WitApplication = RuntimeDictationConfiguration?.witConfiguration?.GetLoggerAppId();
		RuntimeObject* L_33 = __this->get__voiceSDKLogger_11();
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_34;
		L_34 = AppDictationExperience_get_RuntimeDictationConfiguration_mF211059D8763889EFD400DA04ED7D43D32506647_inline(__this, /*hidden argument*/NULL);
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_35 = L_34;
		G_B14_0 = L_35;
		G_B14_1 = L_33;
		if (L_35)
		{
			G_B15_0 = L_35;
			G_B15_1 = L_33;
			goto IL_0149;
		}
	}
	{
		G_B18_0 = ((String_t*)(NULL));
		G_B18_1 = G_B14_1;
		goto IL_015a;
	}

IL_0149:
	{
		NullCheck(G_B15_0);
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_36 = ((WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 *)G_B15_0)->get_witConfiguration_0();
		WitConfiguration_t842807FFA01F79835F63194836A840DF9B9EF564 * L_37 = L_36;
		G_B16_0 = L_37;
		G_B16_1 = G_B15_1;
		if (L_37)
		{
			G_B17_0 = L_37;
			G_B17_1 = G_B15_1;
			goto IL_0155;
		}
	}
	{
		G_B18_0 = ((String_t*)(NULL));
		G_B18_1 = G_B16_1;
		goto IL_015a;
	}

IL_0155:
	{
		NullCheck(G_B17_0);
		String_t* L_38;
		L_38 = WitConfiguration_GetLoggerAppId_m4D2DDE1670E3B1B861DC7A49D1DF3EB588D0C6E2(G_B17_0, /*hidden argument*/NULL);
		G_B18_0 = L_38;
		G_B18_1 = G_B17_1;
	}

IL_015a:
	{
		NullCheck(G_B18_1);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_WitApplication(System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, G_B18_1, G_B18_0);
		// _voiceSDKLogger.ShouldLogToConsole = enableConsoleLogging;
		RuntimeObject* L_39 = __this->get__voiceSDKLogger_11();
		bool L_40 = __this->get_enableConsoleLogging_9();
		NullCheck(L_39);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_ShouldLogToConsole(System.Boolean) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_39, L_40);
		// OnInitialized?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_41 = __this->get_OnInitialized_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_42 = L_41;
		G_B19_0 = L_42;
		if (L_42)
		{
			G_B20_0 = L_42;
			goto IL_017b;
		}
	}
	{
		return;
	}

IL_017b:
	{
		NullCheck(G_B20_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B20_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnPlatformServiceNotAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnPlatformServiceNotAvailable_m79AC8E0296D71033FD94F5047E3D2D9EEB88BA73 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07D7733C1C72FF989D87AE755658AECBC4AB8AD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral506946ACAC05C7C39AB9F251A93BEC217C32AAEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral813EAED53B08F73CCB784F375C322C4FA878F945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C23808B9E62CA71510CCBAC213B2985E5590F6);
		s_Il2CppMethodInitialized = true;
	}
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B3_0 = NULL;
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B2_0 = NULL;
	{
		// if (DoNotFallbackToWit)
		bool L_0;
		L_0 = AppDictationExperience_get_DoNotFallbackToWit_mF5CAD3FC8C39D373FA3A0FF6F8F600AAA47F1BCF_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// VLog.D("Platform dictation service unavailable. Falling back to WitDictation is disabled");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(_stringLiteral506946ACAC05C7C39AB9F251A93BEC217C32AAEA, /*hidden argument*/NULL);
		// DictationEvents.OnError?.Invoke("Platform dictation unavailable", "Platform dictation service is not available");
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_1;
		L_1 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_1);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_2;
		L_2 = SpeechEvents_get_OnError_m04B08925E5E5336EA6B0BA5560A40D6D100023C3_inline(L_1, /*hidden argument*/NULL);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		NullCheck(G_B3_0);
		UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1(G_B3_0, _stringLiteral07D7733C1C72FF989D87AE755658AECBC4AB8AD8, _stringLiteral813EAED53B08F73CCB784F375C322C4FA878F945, /*hidden argument*/UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		// return;
		return;
	}

IL_0032:
	{
		// VLog.D("Platform dictation service unavailable. Falling back to WitDictation");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(_stringLiteral95C23808B9E62CA71510CCBAC213B2985E5590F6, /*hidden argument*/NULL);
		// RevertToWitDictation();
		AppDictationExperience_RevertToWitDictation_mDD0AE20C95BB6C10B1E19C9BA8A5B8C5669D18A0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnDictationServiceNotAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnDictationServiceNotAvailable_m485B3DE5DDD81DB92D99766CBB2CFCCDFCB8920F (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E134D9B6EC0561606B43CE3A95ABA0632C02E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A9BD1F8FCA7193DEF66CA35B6C08EEDED34E362);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral771D27D2324CCFE11F1DD47EF6850E32297CD434);
		s_Il2CppMethodInitialized = true;
	}
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B2_0 = NULL;
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B1_0 = NULL;
	{
		// VLog.D("Dictation service unavailable");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(_stringLiteral25E134D9B6EC0561606B43CE3A95ABA0632C02E0, /*hidden argument*/NULL);
		// DictationEvents.OnError?.Invoke("Dictation unavailable", "Dictation service is not available");
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_0);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_1;
		L_1 = SpeechEvents_get_OnError_m04B08925E5E5336EA6B0BA5560A40D6D100023C3_inline(L_0, /*hidden argument*/NULL);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1(G_B2_0, _stringLiteral771D27D2324CCFE11F1DD47EF6850E32297CD434, _stringLiteral3A9BD1F8FCA7193DEF66CA35B6C08EEDED34E362, /*hidden argument*/UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::RevertToWitDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_RevertToWitDictation_mDD0AE20C95BB6C10B1E19C9BA8A5B8C5669D18A0 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mF4596F17F6B46A6B89326BC16C0CDF0B0BBB022E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_m40E1846376AC94FB7E1822D20F79CEC1657581CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57295FB5294EDE32B96C3B48EEDBAED0915E8B53);
		s_Il2CppMethodInitialized = true;
	}
	WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * V_0 = NULL;
	{
		// WitDictation witDictation = GetComponent<WitDictation>();
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_0;
		L_0 = Component_GetComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mF4596F17F6B46A6B89326BC16C0CDF0B0BBB022E(__this, /*hidden argument*/Component_GetComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_mF4596F17F6B46A6B89326BC16C0CDF0B0BBB022E_RuntimeMethod_var);
		V_0 = L_0;
		// if (null == witDictation)
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// witDictation = gameObject.AddComponent<WitDictation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_4;
		L_4 = GameObject_AddComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_m40E1846376AC94FB7E1822D20F79CEC1657581CD(L_3, /*hidden argument*/GameObject_AddComponent_TisWitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79_m40E1846376AC94FB7E1822D20F79CEC1657581CD_RuntimeMethod_var);
		V_0 = L_4;
		// witDictation.hideFlags = HideFlags.HideInInspector;
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_5 = V_0;
		NullCheck(L_5);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_5, 2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// witDictation.RuntimeConfiguration = RuntimeDictationConfiguration;
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_6 = V_0;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_7;
		L_7 = AppDictationExperience_get_RuntimeDictationConfiguration_mF211059D8763889EFD400DA04ED7D43D32506647_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		WitDictation_set_RuntimeConfiguration_mC8A920F2CDEDCAF2E51D8FA9634F3DFD070D897E_inline(L_6, L_7, /*hidden argument*/NULL);
		// witDictation.DictationEvents = DictationEvents;
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_8 = V_0;
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_9;
		L_9 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_8);
		VirtActionInvoker1< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(26 /* System.Void Meta.WitAi.Dictation.DictationService::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents) */, L_8, L_9);
		// witDictation.TelemetryEvents = TelemetryEvents;
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_10 = V_0;
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_11;
		L_11 = DictationService_get_TelemetryEvents_m6E462BD2C0B931954E5BDBC7A7C204AE494689D6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		DictationService_set_TelemetryEvents_m789E53BB9079641B4C2D9687A069D3699272274F_inline(L_10, L_11, /*hidden argument*/NULL);
		// _dictationServiceImpl = witDictation;
		WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * L_12 = V_0;
		__this->set__dictationServiceImpl_10(L_12);
		// VLog.D("WitDictation init complete");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(_stringLiteral57295FB5294EDE32B96C3B48EEDBAED0915E8B53, /*hidden argument*/NULL);
		// _voiceSDKLogger.IsUsingPlatformIntegration = false;
		RuntimeObject* L_13 = __this->get__voiceSDKLogger_11();
		NullCheck(L_13);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::set_IsUsingPlatformIntegration(System.Boolean) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_13, (bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnEnable_m874CCF1265ECDB4457CF9DBF5032E5BD57B3B05B (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnAudioDurationTrackerFinished_mA5B560AEF449D448C55385D12C8C2B351BF34A2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnComplete_mAED0A35820A5234081E2D0622A722C976370F64F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnDictationSessionStarted_m92BC06AB6BEBE93E12CC05E5671602421DE79BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnFullTranscription_m3CAAFED17EB5ABACF642D128728A828D892BD083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnPartialTranscription_mA63F15B2FA2A253188664BCD037CB49ACF38F2E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnRequestInit_m73B96075369133D296E6C27CF70E2D5576FACC5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnStarted_mC12266EE60C391CC5CF65CE5D2F8E1C89B6B1F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnStopped_mA46807BB912E469942C5717CE6ED86FE4CD07C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_U3COnEnableU3Eb__37_0_mA9FDE971BEF04801E1A38920230720712EC7ECDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m56424D895106AF7BEA7233ED1ECA5CEDDDA915FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB6CC2736D390EADB6604F237F26567D9A8AAA58F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_mDD521536D4079AE31DCD2CB3A2E6E4EC34C1B888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		DictationService_OnEnable_m82D4D22C1A335882E75944EFFF8962F07E0CD703(__this, /*hidden argument*/NULL);
		// if (MicPermissionsManager.HasMicPermission())
		bool L_0;
		L_0 = MicPermissionsManager_HasMicPermission_mF8FB7BE68D9E3A202BDDB8E3DA7BF3B0C0F80528(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// InitDictation();
		AppDictationExperience_InitDictation_mA21FBBADFB78C8B19A6291BA50CEBEB228E243C3(__this, /*hidden argument*/NULL);
		// }
		goto IL_0026;
	}

IL_0015:
	{
		// MicPermissionsManager.RequestMicPermission((e) => InitDictation());
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_1, __this, (intptr_t)((intptr_t)AppDictationExperience_U3COnEnableU3Eb__37_0_mA9FDE971BEF04801E1A38920230720712EC7ECDB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		MicPermissionsManager_RequestMicPermission_m07F0156E111ED660056278E26B533784B92B6812(L_1, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// DictationEvents.OnRequestInitialized.AddListener(OnRequestInit);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_2;
		L_2 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_2);
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_3;
		L_3 = SpeechEvents_get_OnRequestInitialized_mE11AB864D1E50BAADBB03BF449D73261E2E46E97_inline(L_2, /*hidden argument*/NULL);
		UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F * L_4 = (UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F *)il2cpp_codegen_object_new(UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E(L_4, __this, (intptr_t)((intptr_t)AppDictationExperience_OnRequestInit_m73B96075369133D296E6C27CF70E2D5576FACC5F_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E_RuntimeMethod_var);
		NullCheck(L_3);
		UnityEvent_1_AddListener_m56424D895106AF7BEA7233ED1ECA5CEDDDA915FA(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_m56424D895106AF7BEA7233ED1ECA5CEDDDA915FA_RuntimeMethod_var);
		// DictationEvents.OnStartListening.AddListener(OnStarted);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_5;
		L_5 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_5);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_6;
		L_6 = SpeechEvents_get_OnStartListening_m5E68D0FA2F64DC6FE02FC17CBF256D9B6A47C904_inline(L_5, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_7, __this, (intptr_t)((intptr_t)AppDictationExperience_OnStarted_mC12266EE60C391CC5CF65CE5D2F8E1C89B6B1F5C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_6, L_7, /*hidden argument*/NULL);
		// DictationEvents.OnStoppedListening.AddListener(OnStopped);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_8;
		L_8 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_8);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_9;
		L_9 = SpeechEvents_get_OnStoppedListening_mAB9D29E39C416846F4A101052E7F360350A2E275_inline(L_8, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_10, __this, (intptr_t)((intptr_t)AppDictationExperience_OnStopped_mA46807BB912E469942C5717CE6ED86FE4CD07C94_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_9, L_10, /*hidden argument*/NULL);
		// DictationEvents.OnComplete.AddListener(OnComplete);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_11;
		L_11 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_11);
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_12;
		L_12 = SpeechEvents_get_OnComplete_mF17B131FEF512346081B793B737E0DDC4E6E2B0D_inline(L_11, /*hidden argument*/NULL);
		UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F * L_13 = (UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F *)il2cpp_codegen_object_new(UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E(L_13, __this, (intptr_t)((intptr_t)AppDictationExperience_OnComplete_mAED0A35820A5234081E2D0622A722C976370F64F_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E_RuntimeMethod_var);
		NullCheck(L_12);
		UnityEvent_1_AddListener_m56424D895106AF7BEA7233ED1ECA5CEDDDA915FA(L_12, L_13, /*hidden argument*/UnityEvent_1_AddListener_m56424D895106AF7BEA7233ED1ECA5CEDDDA915FA_RuntimeMethod_var);
		// DictationEvents.OnDictationSessionStarted.AddListener(OnDictationSessionStarted);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_14;
		L_14 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_14);
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_15;
		L_15 = DictationEvents_get_OnDictationSessionStarted_m866DA85C06E821B6315BD9FFF8F56BEDBF001ADE_inline(L_14, /*hidden argument*/NULL);
		UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 * L_16 = (UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 *)il2cpp_codegen_object_new(UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4(L_16, __this, (intptr_t)((intptr_t)AppDictationExperience_OnDictationSessionStarted_m92BC06AB6BEBE93E12CC05E5671602421DE79BF8_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4_RuntimeMethod_var);
		NullCheck(L_15);
		UnityEvent_1_AddListener_mB6CC2736D390EADB6604F237F26567D9A8AAA58F(L_15, L_16, /*hidden argument*/UnityEvent_1_AddListener_mB6CC2736D390EADB6604F237F26567D9A8AAA58F_RuntimeMethod_var);
		// DictationEvents.OnPartialTranscription.AddListener(OnPartialTranscription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_17;
		L_17 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_17);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_18;
		L_18 = SpeechEvents_get_OnPartialTranscription_mCBCE638876903718E1100BD82336D480C8FEC8FD_inline(L_17, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_19 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_19, __this, (intptr_t)((intptr_t)AppDictationExperience_OnPartialTranscription_mA63F15B2FA2A253188664BCD037CB49ACF38F2E9_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_18);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_18, L_19, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// DictationEvents.OnFullTranscription.AddListener(OnFullTranscription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_20;
		L_20 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_20);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_21;
		L_21 = SpeechEvents_get_OnFullTranscription_mAFF8516189ED2D6ACABBEA4FDBD99F8DEF93054A_inline(L_20, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_22 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_22, __this, (intptr_t)((intptr_t)AppDictationExperience_OnFullTranscription_m3CAAFED17EB5ABACF642D128728A828D892BD083_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_21);
		UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398(L_21, L_22, /*hidden argument*/UnityEvent_1_AddListener_m35A8B5EA067599AC8BEA652A1DA4085B8E366398_RuntimeMethod_var);
		// TelemetryEvents.OnAudioTrackerFinished.AddListener(OnAudioDurationTrackerFinished);
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_23;
		L_23 = DictationService_get_TelemetryEvents_m6E462BD2C0B931954E5BDBC7A7C204AE494689D6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * L_24 = L_23->get_OnAudioTrackerFinished_0();
		UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * L_25 = (UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 *)il2cpp_codegen_object_new(UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D(L_25, __this, (intptr_t)((intptr_t)AppDictationExperience_OnAudioDurationTrackerFinished_mA5B560AEF449D448C55385D12C8C2B351BF34A2F_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D_RuntimeMethod_var);
		NullCheck(L_24);
		UnityEvent_2_AddListener_mDD521536D4079AE31DCD2CB3A2E6E4EC34C1B888(L_24, L_25, /*hidden argument*/UnityEvent_2_AddListener_mDD521536D4079AE31DCD2CB3A2E6E4EC34C1B888_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnDisable_m4CF196D898CFDAD5426A4F88777B493D69752A41 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnAudioDurationTrackerFinished_mA5B560AEF449D448C55385D12C8C2B351BF34A2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnComplete_mAED0A35820A5234081E2D0622A722C976370F64F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnDictationSessionStarted_m92BC06AB6BEBE93E12CC05E5671602421DE79BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnFullTranscription_m3CAAFED17EB5ABACF642D128728A828D892BD083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnPartialTranscription_mA63F15B2FA2A253188664BCD037CB49ACF38F2E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnRequestInit_m73B96075369133D296E6C27CF70E2D5576FACC5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnStarted_mC12266EE60C391CC5CF65CE5D2F8E1C89B6B1F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppDictationExperience_OnStopped_mA46807BB912E469942C5717CE6ED86FE4CD07C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m84C8300462E1DB920BAC221EADABAE50FA049F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mF798B66B371499AA6FF40D8F4354CBFE7DE1C1A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_m3995B3BF171DC56714BCEBB1398B206E418186D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * V_0 = NULL;
	VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * V_1 = NULL;
	{
		// if (_dictationServiceImpl is PlatformDictationImpl platformDictationImpl)
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		V_0 = ((PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 *)IsInstClass((RuntimeObject*)L_0, PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2_il2cpp_TypeInfo_var));
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// platformDictationImpl.Disconnect();
		PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding>::Disconnect() */, L_2);
	}

IL_0015:
	{
		// if (_voiceSDKLogger is VoiceSDKPlatformLoggerImpl loggerImpl)
		RuntimeObject* L_3 = __this->get__voiceSDKLogger_11();
		V_1 = ((VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E *)IsInstClass((RuntimeObject*)L_3, VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E_il2cpp_TypeInfo_var));
		VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// loggerImpl.Disconnect();
		VoiceSDKPlatformLoggerImpl_t11699187F9EB09A21030171A876CB5049895F93E * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(5 /* System.Void Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>::Disconnect() */, L_5);
	}

IL_002a:
	{
		// _dictationServiceImpl = null;
		__this->set__dictationServiceImpl_10((RuntimeObject*)NULL);
		// _voiceSDKLogger = null;
		__this->set__voiceSDKLogger_11((RuntimeObject*)NULL);
		// DictationEvents.OnRequestInitialized.RemoveListener(OnRequestInit);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_6;
		L_6 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_6);
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_7;
		L_7 = SpeechEvents_get_OnRequestInitialized_mE11AB864D1E50BAADBB03BF449D73261E2E46E97_inline(L_6, /*hidden argument*/NULL);
		UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F * L_8 = (UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F *)il2cpp_codegen_object_new(UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E(L_8, __this, (intptr_t)((intptr_t)AppDictationExperience_OnRequestInit_m73B96075369133D296E6C27CF70E2D5576FACC5F_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E_RuntimeMethod_var);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_mF798B66B371499AA6FF40D8F4354CBFE7DE1C1A7(L_7, L_8, /*hidden argument*/UnityEvent_1_RemoveListener_mF798B66B371499AA6FF40D8F4354CBFE7DE1C1A7_RuntimeMethod_var);
		// DictationEvents.OnStartListening.RemoveListener(OnStarted);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_9;
		L_9 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_9);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10;
		L_10 = SpeechEvents_get_OnStartListening_m5E68D0FA2F64DC6FE02FC17CBF256D9B6A47C904_inline(L_9, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)AppDictationExperience_OnStarted_mC12266EE60C391CC5CF65CE5D2F8E1C89B6B1F5C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_10, L_11, /*hidden argument*/NULL);
		// DictationEvents.OnStoppedListening.RemoveListener(OnStopped);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_12;
		L_12 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_12);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_13;
		L_13 = SpeechEvents_get_OnStoppedListening_mAB9D29E39C416846F4A101052E7F360350A2E275_inline(L_12, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_14 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_14, __this, (intptr_t)((intptr_t)AppDictationExperience_OnStopped_mA46807BB912E469942C5717CE6ED86FE4CD07C94_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_13, L_14, /*hidden argument*/NULL);
		// DictationEvents.OnComplete.RemoveListener(OnComplete);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_15;
		L_15 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_15);
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_16;
		L_16 = SpeechEvents_get_OnComplete_mF17B131FEF512346081B793B737E0DDC4E6E2B0D_inline(L_15, /*hidden argument*/NULL);
		UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F * L_17 = (UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F *)il2cpp_codegen_object_new(UnityAction_1_tCC4FAC51B12834D3F5D80687A6940058083DCB5F_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E(L_17, __this, (intptr_t)((intptr_t)AppDictationExperience_OnComplete_mAED0A35820A5234081E2D0622A722C976370F64F_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7AA1ECFC209449267D53534FBC44862637CAC25E_RuntimeMethod_var);
		NullCheck(L_16);
		UnityEvent_1_RemoveListener_mF798B66B371499AA6FF40D8F4354CBFE7DE1C1A7(L_16, L_17, /*hidden argument*/UnityEvent_1_RemoveListener_mF798B66B371499AA6FF40D8F4354CBFE7DE1C1A7_RuntimeMethod_var);
		// DictationEvents.OnDictationSessionStarted.RemoveListener(OnDictationSessionStarted);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_18;
		L_18 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_18);
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_19;
		L_19 = DictationEvents_get_OnDictationSessionStarted_m866DA85C06E821B6315BD9FFF8F56BEDBF001ADE_inline(L_18, /*hidden argument*/NULL);
		UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 * L_20 = (UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0 *)il2cpp_codegen_object_new(UnityAction_1_t15445246C5662A4D3B03C151209469824DEEABA0_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4(L_20, __this, (intptr_t)((intptr_t)AppDictationExperience_OnDictationSessionStarted_m92BC06AB6BEBE93E12CC05E5671602421DE79BF8_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mC4D36244A5A27F693BB3C5FE3C67D74A76F494E4_RuntimeMethod_var);
		NullCheck(L_19);
		UnityEvent_1_RemoveListener_m84C8300462E1DB920BAC221EADABAE50FA049F00(L_19, L_20, /*hidden argument*/UnityEvent_1_RemoveListener_m84C8300462E1DB920BAC221EADABAE50FA049F00_RuntimeMethod_var);
		// DictationEvents.OnPartialTranscription.RemoveListener(OnPartialTranscription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_21;
		L_21 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_21);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_22;
		L_22 = SpeechEvents_get_OnPartialTranscription_mCBCE638876903718E1100BD82336D480C8FEC8FD_inline(L_21, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_23 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_23, __this, (intptr_t)((intptr_t)AppDictationExperience_OnPartialTranscription_mA63F15B2FA2A253188664BCD037CB49ACF38F2E9_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_22);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_22, L_23, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// DictationEvents.OnFullTranscription.RemoveListener(OnFullTranscription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_24;
		L_24 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_24);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_25;
		L_25 = SpeechEvents_get_OnFullTranscription_mAFF8516189ED2D6ACABBEA4FDBD99F8DEF93054A_inline(L_24, /*hidden argument*/NULL);
		UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * L_26 = (UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 *)il2cpp_codegen_object_new(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F(L_26, __this, (intptr_t)((intptr_t)AppDictationExperience_OnFullTranscription_m3CAAFED17EB5ABACF642D128728A828D892BD083_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB6FF824ECCAE3C08CD8B015E235BBDC15BCF43F_RuntimeMethod_var);
		NullCheck(L_25);
		UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC(L_25, L_26, /*hidden argument*/UnityEvent_1_RemoveListener_m997398435E34B3F6C218236492D6ED145458F0BC_RuntimeMethod_var);
		// TelemetryEvents.OnAudioTrackerFinished.RemoveListener(OnAudioDurationTrackerFinished);
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_27;
		L_27 = DictationService_get_TelemetryEvents_m6E462BD2C0B931954E5BDBC7A7C204AE494689D6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		AudioDurationTrackerFinishedEvent_tEA16FBEE880D039110F36E12C3F5794E788A1778 * L_28 = L_27->get_OnAudioTrackerFinished_0();
		UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 * L_29 = (UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004 *)il2cpp_codegen_object_new(UnityAction_2_tE050786D21ADF3B871F98FEE1D097026AF3E0004_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D(L_29, __this, (intptr_t)((intptr_t)AppDictationExperience_OnAudioDurationTrackerFinished_mA5B560AEF449D448C55385D12C8C2B351BF34A2F_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mEAD803DF03EA65A10008FA40CC58335889C48C8D_RuntimeMethod_var);
		NullCheck(L_28);
		UnityEvent_2_RemoveListener_m3995B3BF171DC56714BCEBB1398B206E418186D0(L_28, L_29, /*hidden argument*/UnityEvent_2_RemoveListener_m3995B3BF171DC56714BCEBB1398B206E418186D0_RuntimeMethod_var);
		// base.OnDisable();
		DictationService_OnDisable_mBD73CB4950AB0BF3994138B11CFFA3EBE2869514(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_Active_mF872FEFF9B5153607E58A9EDDFF51B0362D7DFE1 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Active => _dictationServiceImpl != null && _dictationServiceImpl.Active;
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__dictationServiceImpl_10();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Meta.WitAi.Dictation.IDictationService::get_Active() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_IsRequestActive_m2FFDB2C89024FCCFC05B4CDE8960363D5B30D32E (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsRequestActive => _dictationServiceImpl != null && _dictationServiceImpl.IsRequestActive;
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__dictationServiceImpl_10();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Meta.WitAi.Dictation.IDictationService::get_IsRequestActive() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Dictation.AppDictationExperience::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDictationExperience_get_TranscriptionProvider_m83A935BE4ED6D58C4F7BFA50FA381013EC861C42 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _dictationServiceImpl.TranscriptionProvider;
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.Dictation.IDictationService::get_TranscriptionProvider() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_set_TranscriptionProvider_m53E77F774F80E624D0604285C623B9053C7836DE (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _dictationServiceImpl.TranscriptionProvider = value;
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Meta.WitAi.Dictation.IDictationService::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider) */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_MicActive_m47193B2AEA4C6084454D57113EC4062152FC5F5E (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool MicActive => null != _dictationServiceImpl && _dictationServiceImpl.MicActive;
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__dictationServiceImpl_10();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Meta.WitAi.Dictation.IDictationService::get_MicActive() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Dictation.AppDictationExperience::get_ShouldSendMicData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDictationExperience_get_ShouldSendMicData_m17A16FD16747EF15FE5E55C883097194DBB7ED09 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// protected override bool ShouldSendMicData => RuntimeConfiguration.sendAudioToWit ||
		//                                              null == TranscriptionProvider;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0;
		L_0 = AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = L_0->get_sendAudioToWit_9();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* Meta.WitAi.Interfaces.ITranscriptionProvider Meta.WitAi.Dictation.DictationService::get_TranscriptionProvider() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_Toggle_mA24D8C60E67D59BF76134246FEF8B7D392615552 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// if(Active) Deactivate();
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean Meta.WitAi.Dictation.DictationService::get_Active() */, __this);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if(Active) Deactivate();
		VirtActionInvoker0::Invoke(30 /* System.Void Meta.WitAi.Dictation.DictationService::Deactivate() */, __this);
		return;
	}

IL_000f:
	{
		// else Activate();
		DictationService_Activate_m076772499022A423D93D5E51CAE31AEFA58A3EED(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Dictation.AppDictationExperience::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * AppDictationExperience_Activate_m2774486C25F70471FD1BB8A717C4D277969B7A78 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dictationServiceImpl == null)
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// OnDictationServiceNotAvailable();
		AppDictationExperience_OnDictationServiceNotAvailable_m485B3DE5DDD81DB92D99766CBB2CFCCDFCB8920F(__this, /*hidden argument*/NULL);
		// return null;
		return (VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *)NULL;
	}

IL_0010:
	{
		// if (!_isActive)
		bool L_1 = __this->get__isActive_12();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// _activeSession = new DictationSession();
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_2 = (DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE *)il2cpp_codegen_object_new(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE_il2cpp_TypeInfo_var);
		DictationSession__ctor_m432FF4594E38E9969D4E45436407A53D5DC90F37(L_2, /*hidden argument*/NULL);
		__this->set__activeSession_13(L_2);
		// DictationEvents.OnDictationSessionStarted.Invoke(_activeSession);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_3;
		L_3 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_3);
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_4;
		L_4 = DictationEvents_get_OnDictationSessionStarted_m866DA85C06E821B6315BD9FFF8F56BEDBF001ADE_inline(L_3, /*hidden argument*/NULL);
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_5 = __this->get__activeSession_13();
		NullCheck(L_4);
		UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8(L_4, L_5, /*hidden argument*/UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8_RuntimeMethod_var);
	}

IL_0039:
	{
		// _isActive = true;
		__this->set__isActive_12((bool)1);
		// return _dictationServiceImpl.Activate(requestOptions, requestEvents);
		RuntimeObject* L_6 = __this->get__dictationServiceImpl_10();
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_7 = ___requestOptions0;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_8 = ___requestEvents1;
		NullCheck(L_6);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_9;
		L_9 = InterfaceFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(9 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.IDictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		return L_9;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Dictation.AppDictationExperience::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * AppDictationExperience_ActivateImmediately_m1D2DFD2B96585D223DF187FBF63D9720DEC0E338 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dictationServiceImpl == null)
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// OnDictationServiceNotAvailable();
		AppDictationExperience_OnDictationServiceNotAvailable_m485B3DE5DDD81DB92D99766CBB2CFCCDFCB8920F(__this, /*hidden argument*/NULL);
		// return null;
		return (VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *)NULL;
	}

IL_0010:
	{
		// if (!_isActive)
		bool L_1 = __this->get__isActive_12();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// _activeSession = new DictationSession();
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_2 = (DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE *)il2cpp_codegen_object_new(DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE_il2cpp_TypeInfo_var);
		DictationSession__ctor_m432FF4594E38E9969D4E45436407A53D5DC90F37(L_2, /*hidden argument*/NULL);
		__this->set__activeSession_13(L_2);
		// DictationEvents.OnDictationSessionStarted.Invoke(_activeSession);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_3;
		L_3 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_3);
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_4;
		L_4 = DictationEvents_get_OnDictationSessionStarted_m866DA85C06E821B6315BD9FFF8F56BEDBF001ADE_inline(L_3, /*hidden argument*/NULL);
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_5 = __this->get__activeSession_13();
		NullCheck(L_4);
		UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8(L_4, L_5, /*hidden argument*/UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8_RuntimeMethod_var);
	}

IL_0039:
	{
		// _isActive = true;
		__this->set__isActive_12((bool)1);
		// return _dictationServiceImpl.ActivateImmediately(requestOptions, requestEvents);
		RuntimeObject* L_6 = __this->get__dictationServiceImpl_10();
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_7 = ___requestOptions0;
		VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * L_8 = ___requestEvents1;
		NullCheck(L_6);
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_9;
		L_9 = InterfaceFuncInvoker2< VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * >::Invoke(10 /* Meta.WitAi.Requests.VoiceServiceRequest Meta.WitAi.Dictation.IDictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents) */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_Deactivate_m95274EF71D05DCF2A445B95DEAF41D3620D04B6A (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dictationServiceImpl == null)
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// OnDictationServiceNotAvailable();
		AppDictationExperience_OnDictationServiceNotAvailable_m485B3DE5DDD81DB92D99766CBB2CFCCDFCB8920F(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// _isActive = false;
		__this->set__isActive_12((bool)0);
		// _dictationServiceImpl.Deactivate();
		RuntimeObject* L_1 = __this->get__dictationServiceImpl_10();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Meta.WitAi.Dictation.IDictationService::Deactivate() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_Cancel_m4A4004638259887EFF3A14F7FF52C7B754D73E96 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dictationServiceImpl == null)
		RuntimeObject* L_0 = __this->get__dictationServiceImpl_10();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// OnDictationServiceNotAvailable();
		AppDictationExperience_OnDictationServiceNotAvailable_m485B3DE5DDD81DB92D99766CBB2CFCCDFCB8920F(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// _dictationServiceImpl.Cancel();
		RuntimeObject* L_1 = __this->get__dictationServiceImpl_10();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Meta.WitAi.Dictation.IDictationService::Cancel() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_1);
		// CleanupSession();
		AppDictationExperience_CleanupSession_mA4BD64671C2796E201079C95324FB2070C765951(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnRequestInit(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnRequestInit_m73B96075369133D296E6C27CF70E2D5576FACC5F (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B322A3FA1E8AF97C5D21A2D349C0D614C4FE854);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612B514077F211362B9850601E9C65C05DE45FCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066);
		s_Il2CppMethodInitialized = true;
	}
	AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * G_B2_0 = NULL;
	AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * G_B1_0 = NULL;
	WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * G_B3_0 = NULL;
	AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	RuntimeObject* G_B14_2 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	RuntimeObject* G_B16_2 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	RuntimeObject* G_B15_2 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	RuntimeObject* G_B17_2 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	RuntimeObject* G_B19_2 = NULL;
	WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	RuntimeObject* G_B18_2 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	RuntimeObject* G_B20_2 = NULL;
	{
		// _activeRequestOptions = request?.Options;
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_0 = ___request0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_1 = ___request0;
		NullCheck(L_1);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_2;
		L_2 = VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_inline(L_1, /*hidden argument*/VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__activeRequestOptions_14(G_B3_0);
		// _voiceSDKLogger.LogInteractionStart(request?.Options?.RequestId, "dictation");
		RuntimeObject* L_3 = __this->get__voiceSDKLogger_11();
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_4 = ___request0;
		G_B4_0 = L_3;
		if (L_4)
		{
			G_B5_0 = L_3;
			goto IL_001e;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B4_0;
		goto IL_0030;
	}

IL_001e:
	{
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_5 = ___request0;
		NullCheck(L_5);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_6;
		L_6 = VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_inline(L_5, /*hidden argument*/VoiceRequest_4_get_Options_m7B225C51AD3D5F10A38419DBCFC239A52A9DA2CD_RuntimeMethod_var);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_7 = L_6;
		G_B6_0 = L_7;
		G_B6_1 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = L_7;
			G_B7_1 = G_B5_0;
			goto IL_002b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B7_0);
		String_t* L_8;
		L_8 = VoiceServiceRequestOptions_get_RequestId_m3042EA0895AAC67DB1FF5E88924212A40AB4113C_inline(G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_1;
	}

IL_0030:
	{
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(6 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionStart(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, _stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F);
		// _voiceSDKLogger.LogAnnotation("clientSDKVersion", PACKAGE_VERSION);
		RuntimeObject* L_9 = __this->get__voiceSDKLogger_11();
		String_t* L_10;
		L_10 = AppDictationExperience_get_PACKAGE_VERSION_mB3CB4D297B526EF0C76AAB31A3E47B15AA851D74(/*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_9, _stringLiteral3B322A3FA1E8AF97C5D21A2D349C0D614C4FE854, L_10);
		// _voiceSDKLogger.LogAnnotation("minWakeThreshold",
		//     RuntimeConfiguration?.soundWakeThreshold.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_11 = __this->get__voiceSDKLogger_11();
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_12;
		L_12 = AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline(__this, /*hidden argument*/NULL);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_13 = L_12;
		G_B9_0 = L_13;
		G_B9_1 = _stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C;
		G_B9_2 = L_11;
		if (L_13)
		{
			G_B10_0 = L_13;
			G_B10_1 = _stringLiteral00E41D42C2ADF1C57D8B97F8A6CCDED95285A64C;
			G_B10_2 = L_11;
			goto IL_0067;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		goto IL_0076;
	}

IL_0067:
	{
		NullCheck(G_B10_0);
		float* L_14 = G_B10_0->get_address_of_soundWakeThreshold_5();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_15;
		L_15 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_16;
		L_16 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)L_14, L_15, /*hidden argument*/NULL);
		G_B11_0 = L_16;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
	}

IL_0076:
	{
		NullCheck(G_B11_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, G_B11_2, G_B11_1, G_B11_0);
		// _voiceSDKLogger.LogAnnotation("minKeepAliveTimeSec",
		//     RuntimeConfiguration?.minKeepAliveTimeInSeconds.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_17 = __this->get__voiceSDKLogger_11();
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_18;
		L_18 = AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline(__this, /*hidden argument*/NULL);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_19 = L_18;
		G_B12_0 = L_19;
		G_B12_1 = _stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC;
		G_B12_2 = L_17;
		if (L_19)
		{
			G_B13_0 = L_19;
			G_B13_1 = _stringLiteral059D2D8503B18BBF1A91395054BF3B7D6AE0CFCC;
			G_B13_2 = L_17;
			goto IL_0093;
		}
	}
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B12_1;
		G_B14_2 = G_B12_2;
		goto IL_00a2;
	}

IL_0093:
	{
		NullCheck(G_B13_0);
		float* L_20 = G_B13_0->get_address_of_minKeepAliveTimeInSeconds_2();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_21;
		L_21 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_22;
		L_22 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)L_20, L_21, /*hidden argument*/NULL);
		G_B14_0 = L_22;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_00a2:
	{
		NullCheck(G_B14_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, G_B14_2, G_B14_1, G_B14_0);
		// _voiceSDKLogger.LogAnnotation("minTranscriptionKeepAliveTimeSec",
		//     RuntimeConfiguration?.minTranscriptionKeepAliveTimeInSeconds.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_23 = __this->get__voiceSDKLogger_11();
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_24;
		L_24 = AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline(__this, /*hidden argument*/NULL);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_25 = L_24;
		G_B15_0 = L_25;
		G_B15_1 = _stringLiteral612B514077F211362B9850601E9C65C05DE45FCC;
		G_B15_2 = L_23;
		if (L_25)
		{
			G_B16_0 = L_25;
			G_B16_1 = _stringLiteral612B514077F211362B9850601E9C65C05DE45FCC;
			G_B16_2 = L_23;
			goto IL_00bf;
		}
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		goto IL_00ce;
	}

IL_00bf:
	{
		NullCheck(G_B16_0);
		float* L_26 = G_B16_0->get_address_of_minTranscriptionKeepAliveTimeInSeconds_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_27;
		L_27 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_28;
		L_28 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)L_26, L_27, /*hidden argument*/NULL);
		G_B17_0 = L_28;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
	}

IL_00ce:
	{
		NullCheck(G_B17_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, G_B17_2, G_B17_1, G_B17_0);
		// _voiceSDKLogger.LogAnnotation("maxRecordingTime",
		//     RuntimeConfiguration?.maxRecordingTime.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_29 = __this->get__voiceSDKLogger_11();
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_30;
		L_30 = AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline(__this, /*hidden argument*/NULL);
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_31 = L_30;
		G_B18_0 = L_31;
		G_B18_1 = _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
		G_B18_2 = L_29;
		if (L_31)
		{
			G_B19_0 = L_31;
			G_B19_1 = _stringLiteralDD4104677145B876F292A0DE0E3D05E4D6B15066;
			G_B19_2 = L_29;
			goto IL_00eb;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		goto IL_00fa;
	}

IL_00eb:
	{
		NullCheck(G_B19_0);
		float* L_32 = G_B19_0->get_address_of_maxRecordingTime_4();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_33;
		L_33 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_34;
		L_34 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)L_32, L_33, /*hidden argument*/NULL);
		G_B20_0 = L_34;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_00fa:
	{
		NullCheck(G_B20_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, G_B20_2, G_B20_1, G_B20_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnStarted_mC12266EE60C391CC5CF65CE5D2F8E1C89B6B1F5C (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral009B2393908F71D06D49150F8D76B306E76A6F71);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _voiceSDKLogger.LogInteractionPoint("startedListening");
		RuntimeObject* L_0 = __this->get__voiceSDKLogger_11();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_0, _stringLiteral009B2393908F71D06D49150F8D76B306E76A6F71);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnStopped_mA46807BB912E469942C5717CE6ED86FE4CD07C94 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1791A4023492EC42A6A612D3F7AEB832B83E613);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _voiceSDKLogger.LogInteractionPoint("stoppedListening");
		RuntimeObject* L_0 = __this->get__voiceSDKLogger_11();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_0, _stringLiteralF1791A4023492EC42A6A612D3F7AEB832B83E613);
		// if (RuntimeDictationConfiguration.dictationConfiguration.multiPhrase && _isActive)
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_1;
		L_1 = AppDictationExperience_get_RuntimeDictationConfiguration_mF211059D8763889EFD400DA04ED7D43D32506647_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * L_2 = L_1->get_dictationConfiguration_13();
		NullCheck(L_2);
		bool L_3 = L_2->get_multiPhrase_0();
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = __this->get__isActive_12();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// Activate(_activeRequestOptions);
		WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * L_5 = __this->get__activeRequestOptions_14();
		DictationService_Activate_m3E80868C8F2533FC509823968FFBBA74957BC853(__this, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnDictationSessionStarted(Meta.WitAi.Dictation.Data.DictationSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnDictationSessionStarted_m92BC06AB6BEBE93E12CC05E5671602421DE79BF8 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * ___session0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDEFFB09672EC75ADC86F10D211C50074A938368);
		s_Il2CppMethodInitialized = true;
	}
	PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * V_0 = NULL;
	{
		// if (session is PlatformDictationSession platformDictationSession)
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_0 = ___session0;
		V_0 = ((PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD *)IsInstClass((RuntimeObject*)L_0, PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD_il2cpp_TypeInfo_var));
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// _activeSession = session;
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_2 = ___session0;
		__this->set__activeSession_13(L_2);
		// _voiceSDKLogger.LogAnnotation("platformInteractionId", platformDictationSession.platformSessionId);
		RuntimeObject* L_3 = __this->get__voiceSDKLogger_11();
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_platformSessionId_6();
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_3, _stringLiteralBDEFFB09672EC75ADC86F10D211C50074A938368, L_5);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnAudioDurationTrackerFinished(System.Int64,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnAudioDurationTrackerFinished_mA5B560AEF449D448C55385D12C8C2B351BF34A2F (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, int64_t ___timestamp0, double ___audioDuration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71562A6EF05B696E3C241CD3AC6CBE92C9CC34E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1975E9A78A2FD35E6CC7B379E04990FAB148155);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _voiceSDKLogger.LogAnnotation("adt_duration", audioDuration.ToString(CultureInfo.InvariantCulture));
		RuntimeObject* L_0 = __this->get__voiceSDKLogger_11();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4D920091736623333AE0E32439DBD5CF5AC128FE((double*)(&___audioDuration1), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_0, _stringLiteralC1975E9A78A2FD35E6CC7B379E04990FAB148155, L_2);
		// _voiceSDKLogger.LogAnnotation("adt_finished", timestamp.ToString());
		RuntimeObject* L_3 = __this->get__voiceSDKLogger_11();
		String_t* L_4;
		L_4 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&___timestamp0), /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_3, _stringLiteral71562A6EF05B696E3C241CD3AC6CBE92C9CC34E4, L_4);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnPartialTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnPartialTranscription_mA63F15B2FA2A253188664BCD037CB49ACF38F2E9 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _voiceSDKLogger.LogFirstTranscriptionTime();
		RuntimeObject* L_0 = __this->get__voiceSDKLogger_11();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogFirstTranscriptionTime() */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnFullTranscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnFullTranscription_m3CAAFED17EB5ABACF642D128728A828D892BD083 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F7A632CB9093444F04C91A3DED8164C4B86967);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _voiceSDKLogger.LogInteractionPoint("fullTranscriptionTime");
		RuntimeObject* L_0 = __this->get__voiceSDKLogger_11();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionPoint(System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_0, _stringLiteral04F7A632CB9093444F04C91A3DED8164C4B86967);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::OnComplete(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_OnComplete_mAED0A35820A5234081E2D0622A722C976370F64F (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPAudioRequest_4_get_ResponseData_mC55C11041510077580FB8F5B4210159AADC03030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_State_m9206702503076367DC45F6B6D06E175CCA5B796A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0239766E07A0A981D78ECD8F92C9A1B41F1570E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AC2E81C05D485A999126FEC6E060F94A0743EEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D492B750C3702830906C5EB6DD1B4BC8F3535A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAE99594C9291FC466C7FDEADF4CE02C97917A51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B6_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B5_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B9_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B8_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B7_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B12_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B11_0 = NULL;
	String_t* G_B15_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B14_0 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * G_B13_0 = NULL;
	DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * G_B20_0 = NULL;
	DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * G_B19_0 = NULL;
	{
		// if (request.State == VoiceRequestState.Failed)
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_0 = ___request0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VoiceRequest_4_get_State_m9206702503076367DC45F6B6D06E175CCA5B796A_inline(L_0, /*hidden argument*/VoiceRequest_4_get_State_m9206702503076367DC45F6B6D06E175CCA5B796A_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_003e;
		}
	}
	{
		// VLog.E($"Dictation Request Failed\nError: {request.Results.Message}");
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_2 = ___request0;
		NullCheck(L_2);
		VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * L_3;
		L_3 = VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_inline(L_2, /*hidden argument*/VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VoiceServiceRequestResults_get_Message_mFEF1DF5B9B55896B807488164E246F0AE14D8277_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9D492B750C3702830906C5EB6DD1B4BC8F3535A7, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_E_m5E32FCA60BD2DC0202360DDBD512F6658501B316(L_5, /*hidden argument*/NULL);
		// _voiceSDKLogger.LogInteractionEndFailure(request.Results.Message);
		RuntimeObject* L_6 = __this->get__voiceSDKLogger_11();
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_7 = ___request0;
		NullCheck(L_7);
		VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * L_8;
		L_8 = VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_inline(L_7, /*hidden argument*/VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VoiceServiceRequestResults_get_Message_mFEF1DF5B9B55896B807488164E246F0AE14D8277_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndFailure(System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_6, L_9);
		// }
		goto IL_0115;
	}

IL_003e:
	{
		// else if (request.State == VoiceRequestState.Canceled)
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_10 = ___request0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VoiceRequest_4_get_State_m9206702503076367DC45F6B6D06E175CCA5B796A_inline(L_10, /*hidden argument*/VoiceRequest_4_get_State_m9206702503076367DC45F6B6D06E175CCA5B796A_RuntimeMethod_var);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0076;
		}
	}
	{
		// VLog.W($"Dictation Request Canceled\nMessage: {request.Results.Message}");
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_12 = ___request0;
		NullCheck(L_12);
		VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * L_13;
		L_13 = VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_inline(L_12, /*hidden argument*/VoiceRequest_4_get_Results_mA91312783585A6F837ED0BF5750D21EFB9972226_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VoiceServiceRequestResults_get_Message_mFEF1DF5B9B55896B807488164E246F0AE14D8277_inline(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0239766E07A0A981D78ECD8F92C9A1B41F1570E0, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_W_m5DB07B27578F007F59677D1AEA80E810709BC4B1(L_15, /*hidden argument*/NULL);
		// _voiceSDKLogger.LogInteractionEndFailure("aborted");
		RuntimeObject* L_16 = __this->get__voiceSDKLogger_11();
		NullCheck(L_16);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndFailure(System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_16, _stringLiteral0FFEE78AE9B9B70D02D981D757BDC5718500A44C);
		// }
		goto IL_0115;
	}

IL_0076:
	{
		// VLog.D($"Dictation Request Success");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mDC25B107A10F7C76B84445852E39E8F1DECD6517(_stringLiteral4AC2E81C05D485A999126FEC6E060F94A0743EEA, /*hidden argument*/NULL);
		// var tokens = request.ResponseData?["speech"]?["tokens"];
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_17 = ___request0;
		NullCheck(L_17);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_18;
		L_18 = NLPAudioRequest_4_get_ResponseData_mC55C11041510077580FB8F5B4210159AADC03030(L_17, /*hidden argument*/NLPAudioRequest_4_get_ResponseData_mC55C11041510077580FB8F5B4210159AADC03030_RuntimeMethod_var);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_19 = L_18;
		G_B5_0 = L_19;
		if (L_19)
		{
			G_B6_0 = L_19;
			goto IL_008d;
		}
	}
	{
		G_B9_0 = ((WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *)(NULL));
		goto IL_00a8;
	}

IL_008d:
	{
		NullCheck(G_B6_0);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_20;
		L_20 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, G_B6_0, _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_21 = L_20;
		G_B7_0 = L_21;
		if (L_21)
		{
			G_B8_0 = L_21;
			goto IL_009e;
		}
	}
	{
		G_B9_0 = ((WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *)(NULL));
		goto IL_00a8;
	}

IL_009e:
	{
		NullCheck(G_B8_0);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_22;
		L_22 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, G_B8_0, _stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3);
		G_B9_0 = L_22;
	}

IL_00a8:
	{
		V_0 = G_B9_0;
		// if (tokens != null)
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_23 = V_0;
		bool L_24;
		L_24 = WitResponseNode_op_Inequality_m8CEA98E6391EFC6B392FAE7D97082CBDB50BE28B(L_23, NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_010a;
		}
	}
	{
		// int speechTokensLength = tokens.Count;
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Meta.WitAi.Json.WitResponseNode::get_Count() */, L_25);
		V_1 = L_26;
		// string speechLength = request.ResponseData["speech"]["tokens"][speechTokensLength - 1]?["end"]?.Value;
		VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * L_27 = ___request0;
		NullCheck(L_27);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_28;
		L_28 = NLPAudioRequest_4_get_ResponseData_mC55C11041510077580FB8F5B4210159AADC03030(L_27, /*hidden argument*/NLPAudioRequest_4_get_ResponseData_mC55C11041510077580FB8F5B4210159AADC03030_RuntimeMethod_var);
		NullCheck(L_28);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_29;
		L_29 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_28, _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		NullCheck(L_29);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_30;
		L_30 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_29, _stringLiteral9D0AFAB723466D5AEB28205DB63F17CC6A8430C3);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_32;
		L_32 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_30, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)));
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_33 = L_32;
		G_B11_0 = L_33;
		if (L_33)
		{
			G_B12_0 = L_33;
			goto IL_00e2;
		}
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		goto IL_00f8;
	}

IL_00e2:
	{
		NullCheck(G_B12_0);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_34;
		L_34 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, G_B12_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_35 = L_34;
		G_B13_0 = L_35;
		if (L_35)
		{
			G_B14_0 = L_35;
			goto IL_00f3;
		}
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		goto IL_00f8;
	}

IL_00f3:
	{
		NullCheck(G_B14_0);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, G_B14_0);
		G_B15_0 = L_36;
	}

IL_00f8:
	{
		V_2 = G_B15_0;
		// _voiceSDKLogger.LogAnnotation("audioLength", speechLength);
		RuntimeObject* L_37 = __this->get__voiceSDKLogger_11();
		String_t* L_38 = V_2;
		NullCheck(L_37);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogAnnotation(System.String,System.String) */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_37, _stringLiteralBAE99594C9291FC466C7FDEADF4CE02C97917A51, L_38);
	}

IL_010a:
	{
		// _voiceSDKLogger.LogInteractionEndSuccess();
		RuntimeObject* L_39 = __this->get__voiceSDKLogger_11();
		NullCheck(L_39);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger::LogInteractionEndSuccess() */, IVoiceSDKLogger_tEE0CEAC794D68B783BF0495F451885BB4A3B045B_il2cpp_TypeInfo_var, L_39);
	}

IL_0115:
	{
		// if (!_isActive)
		bool L_40 = __this->get__isActive_12();
		if (L_40)
		{
			goto IL_013f;
		}
	}
	{
		// DictationEvents.OnDictationSessionStopped?.Invoke(_activeSession);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_41;
		L_41 = VirtFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(25 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.DictationService::get_DictationEvents() */, __this);
		NullCheck(L_41);
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_42;
		L_42 = DictationEvents_get_OnDictationSessionStopped_mEC37C295E51E75FBD4135E8DED8A3845A73A00CD_inline(L_41, /*hidden argument*/NULL);
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_43 = L_42;
		G_B19_0 = L_43;
		if (L_43)
		{
			G_B20_0 = L_43;
			goto IL_012e;
		}
	}
	{
		goto IL_0139;
	}

IL_012e:
	{
		DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE * L_44 = __this->get__activeSession_13();
		NullCheck(G_B20_0);
		UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8(G_B20_0, L_44, /*hidden argument*/UnityEvent_1_Invoke_m82534D476A4A77B6C077D8BAE55686106DE226E8_RuntimeMethod_var);
	}

IL_0139:
	{
		// CleanupSession();
		AppDictationExperience_CleanupSession_mA4BD64671C2796E201079C95324FB2070C765951(__this, /*hidden argument*/NULL);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::CleanupSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_CleanupSession_mA4BD64671C2796E201079C95324FB2070C765951 (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// _activeSession = null;
		__this->set__activeSession_13((DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE *)NULL);
		// _activeRequestOptions = null;
		__this->set__activeRequestOptions_14((WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F *)NULL);
		// _isActive = false;
		__this->set__isActive_12((bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience__ctor_mA66C605EF4E256875B633E1646252A09F2A01EAB (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		DictationService__ctor_mABED0C167D00728B58F67E85B4C51C595DD4C43D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Voice.Dictation.AppDictationExperience::<OnEnable>b__37_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDictationExperience_U3COnEnableU3Eb__37_0_mA9FDE971BEF04801E1A38920230720712EC7ECDB (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, String_t* ___e0, const RuntimeMethod* method)
{
	{
		// MicPermissionsManager.RequestMicPermission((e) => InitDictation());
		AppDictationExperience_InitDictation_mA21FBBADFB78C8B19A6291BA50CEBEB228E243C3(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Voice.Dictation.Configuration.DictationConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationConfiguration__ctor_mC439BC70822509BA0D736C7860786074C93569AD (DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CB08D607F2569F52044A36B9669C50187393E96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string scenario = "default";
		__this->set_scenario_1(_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		// public string inputType = "text_default";
		__this->set_inputType_2(_stringLiteral4CB08D607F2569F52044A36B9669C50187393E96);
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
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding::.ctor(Meta.WitAi.Configuration.WitDictationRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationConfigurationBinding__ctor_m086AC9FD4F0ACC487C080913D837760A0AE94A09 (DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * __this, WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ___runtimeConfiguration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E6C9E8489820A84E6320A90C8A1A193B1F130E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS = 300;
		__this->set_MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2(((int32_t)300));
		// public DictationConfigurationBinding(WitDictationRuntimeConfiguration runtimeConfiguration)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (null == runtimeConfiguration)
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = ___runtimeConfiguration0;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// VLog.W("No dictation config has been defined. Using the default configuration.");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_W_m5DB07B27578F007F59677D1AEA80E810709BC4B1(_stringLiteral98E6C9E8489820A84E6320A90C8A1A193B1F130E, /*hidden argument*/NULL);
		// _dictationConfiguration = new DictationConfiguration();
		DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * L_1 = (DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 *)il2cpp_codegen_object_new(DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559_il2cpp_TypeInfo_var);
		DictationConfiguration__ctor_mC439BC70822509BA0D736C7860786074C93569AD(L_1, /*hidden argument*/NULL);
		__this->set__dictationConfiguration_1(L_1);
		// }
		return;
	}

IL_002a:
	{
		// _dictationConfiguration = runtimeConfiguration.dictationConfiguration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_2 = ___runtimeConfiguration0;
		NullCheck(L_2);
		DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * L_3 = L_2->get_dictationConfiguration_13();
		__this->set__dictationConfiguration_1(L_3);
		// _runtimeConfiguration = runtimeConfiguration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_4 = ___runtimeConfiguration0;
		__this->set__runtimeConfiguration_0(L_4);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding::ToJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * DictationConfigurationBinding_ToJavaObject_m6075DF79CE6D955C4194D256AFC36F048481B541 (DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral056880AD9C3883D4939FC264961037B1008555B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB4846BE018F5AA87F040A004BF3942896F0C39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0C8B9FB207C48F25C931C8F380C930D0D536222);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D162E78AA80AA0E3661450758F2F0597EC256D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBBACC81B77C56ABE61594350F7EAB185A58A0FB);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// AndroidJavaObject jo = new AndroidJavaObject("com.oculus.assistant.api.voicesdk.dictation.PlatformDictationConfiguration");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_1, _stringLiteralB0C8B9FB207C48F25C931C8F380C930D0D536222, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// jo.Set("multiPhrase", _dictationConfiguration.multiPhrase);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * L_3 = __this->get__dictationConfiguration_1();
		NullCheck(L_3);
		bool L_4 = L_3->get_multiPhrase_0();
		NullCheck(L_2);
		AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB(L_2, _stringLiteralF0D162E78AA80AA0E3661450758F2F0597EC256D, L_4, /*hidden argument*/AndroidJavaObject_Set_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC0A9F47C492107DC29D9AD3960BF83E84BD776FB_RuntimeMethod_var);
		// jo.Set("scenario", _dictationConfiguration.scenario);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = V_0;
		DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * L_6 = __this->get__dictationConfiguration_1();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_scenario_1();
		NullCheck(L_5);
		AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347(L_5, _stringLiteral056880AD9C3883D4939FC264961037B1008555B1, L_7, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347_RuntimeMethod_var);
		// jo.Set("inputType", _dictationConfiguration.inputType);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = V_0;
		DictationConfiguration_tA57DA9B2B681EA55ABB4E0028F275F2D00BE3559 * L_9 = __this->get__dictationConfiguration_1();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_inputType_2();
		NullCheck(L_8);
		AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347(L_8, _stringLiteralFBBACC81B77C56ABE61594350F7EAB185A58A0FB, L_10, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m2DA3663726A288B80B948F1405495E0AF9A8F347_RuntimeMethod_var);
		// if (_runtimeConfiguration != null)
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_11 = __this->get__runtimeConfiguration_0();
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// int maxRecordingTime = (int) _runtimeConfiguration.maxRecordingTime;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_12 = __this->get__runtimeConfiguration_0();
		NullCheck(L_12);
		float L_13 = ((WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 *)L_12)->get_maxRecordingTime_4();
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_13);
		// if (maxRecordingTime < 0)
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		// maxRecordingTime = MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS;
		int32_t L_15 = __this->get_MAX_PLATFORM_SUPPORTED_RECORDING_TIME_SECONDS_2();
		V_1 = L_15;
	}

IL_0072:
	{
		// jo.Set("interactionTimeoutSeconds", maxRecordingTime);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C(L_16, _stringLiteral9EB4846BE018F5AA87F040A004BF3942896F0C39, L_17, /*hidden argument*/AndroidJavaObject_Set_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2AF1FB1EDDF724F87A163497D120E653037EB54C_RuntimeMethod_var);
	}

IL_007e:
	{
		// return jo;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = V_0;
		return L_18;
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
// Meta.WitAi.Dictation.Events.DictationEvents Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::get_DictationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private DictationEvents DictationEvents => _dictationService.DictationEvents;
		RuntimeObject* L_0 = __this->get__dictationService_4();
		NullCheck(L_0);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_1;
		L_1 = InterfaceFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(5 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.IDictationService::get_DictationEvents() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::.ctor(Meta.WitAi.Dictation.IDictationService,Oculus.Voice.Dictation.Bindings.Android.IServiceEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding__ctor_mE0C10A2832AF92DD0E5EEC7B667E2A80793133F0 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, RuntimeObject* ___dictationService0, RuntimeObject* ___serviceEvents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D9C721B449B77D63B038C7A2F8E4F79C9EA02F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.oculus.assistant.api.voicesdk.dictation.PlatformDictationListener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteralA9D9C721B449B77D63B038C7A2F8E4F79C9EA02F, /*hidden argument*/NULL);
		// _dictationService = dictationService;
		RuntimeObject* L_0 = ___dictationService0;
		__this->set__dictationService_4(L_0);
		// _serviceEvents = serviceEvents;
		RuntimeObject* L_1 = ___serviceEvents1;
		__this->set__serviceEvents_5(L_1);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::onStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding_onStart_mDFFD8B2A7F8DA35C2A8CC77BED4CAEFA1040274F (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, String_t* ___sessionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// DictationEvents.OnStartListening?.Invoke();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1;
		L_1 = SpeechEvents_get_OnStartListening_m5E68D0FA2F64DC6FE02FC17CBF256D9B6A47C904_inline(L_0, /*hidden argument*/NULL);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// DictationSession session = new PlatformDictationSession()
		// {
		//     dictationService = _dictationService,
		//     platformSessionId = sessionId
		// };
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_3 = (PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD *)il2cpp_codegen_object_new(PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD_il2cpp_TypeInfo_var);
		PlatformDictationSession__ctor_m7BE6CBBFF34DC64B9DF6E03BC145BCC3CF5D4917(L_3, /*hidden argument*/NULL);
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_4 = L_3;
		RuntimeObject* L_5 = __this->get__dictationService_4();
		NullCheck(L_4);
		((DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE *)L_4)->set_dictationService_3(L_5);
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_6 = L_4;
		String_t* L_7 = ___sessionId0;
		NullCheck(L_6);
		L_6->set_platformSessionId_6(L_7);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::onMicAudioLevel(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding_onMicAudioLevel_m7A3006107FC73C03238D816479BF5A3058F89F38 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, String_t* ___sessionId0, int32_t ___micLevel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * G_B2_0 = NULL;
	WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * G_B1_0 = NULL;
	{
		// DictationEvents.OnMicAudioLevelChanged?.Invoke(micLevel / 100.0f);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_1;
		L_1 = SpeechEvents_get_OnMicAudioLevelChanged_mB8640A4F50DA056E9C69970F4B36231A3D2C2457(L_0, /*hidden argument*/NULL);
		WitMicLevelChangedEvent_t8AE67202FA7B53B8C71D1B96E2AD014A30F2D64B * L_2 = L_1;
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
		int32_t L_3 = ___micLevel1;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E(G_B2_0, ((float)((float)((float)((float)L_3))/(float)(100.0f))), /*hidden argument*/UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::onPartialTranscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding_onPartialTranscription_m4C6F92B2851B8CDA9269E4A603B4D12ADF26B645 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, String_t* ___sessionId0, String_t* ___transcription1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B2_0 = NULL;
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B1_0 = NULL;
	{
		// DictationEvents.OnPartialTranscription?.Invoke(transcription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1;
		L_1 = SpeechEvents_get_OnPartialTranscription_mCBCE638876903718E1100BD82336D480C8FEC8FD_inline(L_0, /*hidden argument*/NULL);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = L_1;
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
		String_t* L_3 = ___transcription1;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::onFinalTranscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding_onFinalTranscription_mC4F30479D61F5E57AF844B5425478CB8ADB5B5DA (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, String_t* ___sessionId0, String_t* ___transcription1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B2_0 = NULL;
	WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * G_B1_0 = NULL;
	{
		// DictationEvents.OnFullTranscription?.Invoke(transcription);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_1;
		L_1 = SpeechEvents_get_OnFullTranscription_mAFF8516189ED2D6ACABBEA4FDBD99F8DEF93054A_inline(L_0, /*hidden argument*/NULL);
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_2 = L_1;
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
		String_t* L_3 = ___transcription1;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(G_B2_0, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::onError(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding_onError_mA4602039E55579CBC8E6776C6F8D575FE749296D (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, String_t* ___sessionId0, String_t* ___errorType1, String_t* ___errorMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B2_0 = NULL;
	WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * G_B1_0 = NULL;
	{
		// DictationEvents.OnError?.Invoke(errorType, errorMessage);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_1;
		L_1 = SpeechEvents_get_OnError_m04B08925E5E5336EA6B0BA5560A40D6D100023C3_inline(L_0, /*hidden argument*/NULL);
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_2 = L_1;
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
		String_t* L_3 = ___errorType1;
		String_t* L_4 = ___errorMessage2;
		NullCheck(G_B2_0);
		UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1(G_B2_0, L_3, L_4, /*hidden argument*/UnityEvent_2_Invoke_m5E08B438F5EC94224B4DC570221B05F8CD17ADE1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::onStopped(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding_onStopped_mAEEE15ECB1590148AC0A5E7C08D502B57D1ABE77 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, String_t* ___sessionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// DictationEvents.OnStoppedListening?.Invoke();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_0;
		L_0 = DictationListenerBinding_get_DictationEvents_mF3308D06479A7CA714C10DC0991012A7D0E6A6F4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1;
		L_1 = SpeechEvents_get_OnStoppedListening_mAB9D29E39C416846F4A101052E7F360350A2E275_inline(L_0, /*hidden argument*/NULL);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// DictationSession session = new PlatformDictationSession()
		// {
		//     dictationService = _dictationService,
		//     platformSessionId = sessionId
		// };
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_3 = (PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD *)il2cpp_codegen_object_new(PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD_il2cpp_TypeInfo_var);
		PlatformDictationSession__ctor_m7BE6CBBFF34DC64B9DF6E03BC145BCC3CF5D4917(L_3, /*hidden argument*/NULL);
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_4 = L_3;
		RuntimeObject* L_5 = __this->get__dictationService_4();
		NullCheck(L_4);
		((DictationSession_t8FE8D8CC6CF6B31E7B19C9314DBA8448347D68BE *)L_4)->set_dictationService_3(L_5);
		PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * L_6 = L_4;
		String_t* L_7 = ___sessionId0;
		NullCheck(L_6);
		L_6->set_platformSessionId_6(L_7);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding::onServiceNotAvailable(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationListenerBinding_onServiceNotAvailable_m2535CEF04067114D2D4AFF21455C4837453A4FE2 (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceEvents_t7BA62A4437FF5F3F74ED3029B96EF0B04A396635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral813EAED53B08F73CCB784F375C322C4FA878F945);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VLog.W("Platform dictation service is not available");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_W_m5DB07B27578F007F59677D1AEA80E810709BC4B1(_stringLiteral813EAED53B08F73CCB784F375C322C4FA878F945, /*hidden argument*/NULL);
		// _serviceEvents.OnServiceNotAvailable(error, message);
		RuntimeObject* L_0 = __this->get__serviceEvents_5();
		String_t* L_1 = ___error0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void Oculus.Voice.Dictation.Bindings.Android.IServiceEvents::OnServiceNotAvailable(System.String,System.String) */, IServiceEvents_t7BA62A4437FF5F3F74ED3029B96EF0B04A396635_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::.ctor(Meta.WitAi.Dictation.IDictationService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl__ctor_mA8E12BD8CA5369CB527C47FE8772D48E8C1B4A71 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, RuntimeObject* ___dictationService0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1__ctor_mAC72972B3E316EBEDBBB4C96E6E6C45BD8D4C71E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816B8FF6B9854A49D2F73CF1BA6D31E9C28CA6CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _serviceAvailable = true;
		__this->set__serviceAvailable_4((bool)1);
		// : base("com.oculus.assistant.api.unity.dictation.UnityDictationServiceFragment")
		BaseAndroidConnectionImpl_1__ctor_mAC72972B3E316EBEDBBB4C96E6E6C45BD8D4C71E(__this, _stringLiteral816B8FF6B9854A49D2F73CF1BA6D31E9C28CA6CF, /*hidden argument*/BaseAndroidConnectionImpl_1__ctor_mAC72972B3E316EBEDBBB4C96E6E6C45BD8D4C71E_RuntimeMethod_var);
		// _baseService = dictationService;
		RuntimeObject* L_0 = ___dictationService0;
		__this->set__baseService_3(L_0);
		// }
		return;
	}
}
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_PlatformSupportsDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationImpl_get_PlatformSupportsDictation_m05B0835DB8D3A09495BD92BF7D383339697164B0 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	{
		// public bool PlatformSupportsDictation => service.IsSupported && _serviceAvailable;
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_0 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = PlatformDictationSDKBinding_get_IsSupported_m3F3B117D09C348F600DEF881F58ACF348FB85F8E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->get__serviceAvailable_4();
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationImpl_get_Active_m605D245244B6F7F65559E137DF1350AD701AE8D7 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	{
		// public bool Active => service.Active;
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_0 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = PlatformDictationSDKBinding_get_Active_mAA65C94F54A819042564DB4CC27520721BD756A1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationImpl_get_IsRequestActive_mCA084E6418344B4063A75C53CE56227D6F77CCF5 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRequestActive => service.IsRequestActive;
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_0 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = PlatformDictationSDKBinding_get_IsRequestActive_m0D6EC59884A2F4B3141803740F4887C4E39E68ED(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_MicActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationImpl_get_MicActive_m0E085A526876B5C329C64D4F48D694154B98D38A (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	{
		// public bool MicActive => service.Active;
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_0 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = PlatformDictationSDKBinding_get_Active_mAA65C94F54A819042564DB4CC27520721BD756A1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionProvider Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_TranscriptionProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlatformDictationImpl_get_TranscriptionProvider_m324C40F70721E1B84994595B30CC6EB3FCAB60F0 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = __this->get_U3CTranscriptionProviderU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_set_TranscriptionProvider_mDA7B8C5301BA9BE0764CE5021E7A4E263E0562D4 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public ITranscriptionProvider TranscriptionProvider { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTranscriptionProviderU3Ek__BackingField_7(L_0);
		return;
	}
}
// Meta.WitAi.Dictation.Events.DictationEvents Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_DictationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * PlatformDictationImpl_get_DictationEvents_m9A5D21F0AB0ACF05FCA475B660DA64582BA12509 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _baseService.DictationEvents;
		RuntimeObject* L_0 = __this->get__baseService_3();
		NullCheck(L_0);
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_1;
		L_1 = InterfaceFuncInvoker0< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(5 /* Meta.WitAi.Dictation.Events.DictationEvents Meta.WitAi.Dictation.IDictationService::get_DictationEvents() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_set_DictationEvents_m7FAAA11F981F00FF145D8D3A08E4F6E9C5EA17E6 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _baseService.DictationEvents = value;
		RuntimeObject* L_0 = __this->get__baseService_3();
		DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * >::Invoke(6 /* System.Void Meta.WitAi.Dictation.IDictationService::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents) */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Meta.WitAi.Events.TelemetryEvents Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::get_TelemetryEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * PlatformDictationImpl_get_TelemetryEvents_m84A4442F4CFC8AD24681EE36314C12B8196B2056 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => _baseService.TelemetryEvents;
		RuntimeObject* L_0 = __this->get__baseService_3();
		NullCheck(L_0);
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_1;
		L_1 = InterfaceFuncInvoker0< TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * >::Invoke(7 /* Meta.WitAi.Events.TelemetryEvents Meta.WitAi.Dictation.IDictationService::get_TelemetryEvents() */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_set_TelemetryEvents_m6D710F253157BF0178DCB84131ECA9D9EA7FC066 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _baseService.TelemetryEvents = value;
		RuntimeObject* L_0 = __this->get__baseService_3();
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * >::Invoke(8 /* System.Void Meta.WitAi.Dictation.IDictationService::set_TelemetryEvents(Meta.WitAi.Events.TelemetryEvents) */, IDictationService_t69B7CE14A9E17D8B8FDCB67370AD0BAE67DBDB56_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::Connect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_Connect_m29730A81BE375C02736957863877DFB57042B668 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1_Connect_m27CE54891B3C4DC45109D661C2A7E91494F9BCD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Connect(version);
		String_t* L_0 = ___version0;
		BaseAndroidConnectionImpl_1_Connect_m27CE54891B3C4DC45109D661C2A7E91494F9BCD0(__this, L_0, /*hidden argument*/BaseAndroidConnectionImpl_1_Connect_m27CE54891B3C4DC45109D661C2A7E91494F9BCD0_RuntimeMethod_var);
		// _listenerBinding = new DictationListenerBinding(this, this);
		DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * L_1 = (DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 *)il2cpp_codegen_object_new(DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16_il2cpp_TypeInfo_var);
		DictationListenerBinding__ctor_mE0C10A2832AF92DD0E5EEC7B667E2A80793133F0(L_1, __this, __this, /*hidden argument*/NULL);
		__this->set__listenerBinding_6(L_1);
		// service.SetListener(_listenerBinding);
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_2 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * L_3 = __this->get__listenerBinding_6();
		NullCheck(L_2);
		PlatformDictationSDKBinding_SetListener_mE7A713A1CE5940C856C00994564F986A44DB4D70(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_Disconnect_mDA5C80D29A5EF2291D9B5AD7216A363D04C305D9 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAndroidConnectionImpl_1_Disconnect_m1A3BFC80A3FF006F70E4DC90248831B5A7434FD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Disconnect();
		BaseAndroidConnectionImpl_1_Disconnect_m1A3BFC80A3FF006F70E4DC90248831B5A7434FD5(__this, /*hidden argument*/BaseAndroidConnectionImpl_1_Disconnect_m1A3BFC80A3FF006F70E4DC90248831B5A7434FD5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::SetDictationRuntimeConfiguration(Meta.WitAi.Configuration.WitDictationRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_SetDictationRuntimeConfiguration_m233F7DADCDCFF3DE00E05EA9485F767FBDF64F4D (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ___configuration0, const RuntimeMethod* method)
{
	{
		// _dictationRuntimeConfiguration = configuration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = ___configuration0;
		__this->set__dictationRuntimeConfiguration_5(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_Activate_mBBF98A488FC26E2072B867AC64BA0989F2EA45C1 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// service.StartDictation(new DictationConfigurationBinding(_dictationRuntimeConfiguration));
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_0 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_1 = __this->get__dictationRuntimeConfiguration_5();
		DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * L_2 = (DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 *)il2cpp_codegen_object_new(DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2_il2cpp_TypeInfo_var);
		DictationConfigurationBinding__ctor_m086AC9FD4F0ACC487C080913D837760A0AE94A09(L_2, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlatformDictationSDKBinding_StartDictation_m66119D05E22161091C4662DFF15880E468BFBE12(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::Activate(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * PlatformDictationImpl_Activate_m3FCFCD38B9FC32B1D7D3A111848CFA0E2C2AF907 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method)
{
	{
		// Activate();
		PlatformDictationImpl_Activate_mBBF98A488FC26E2072B867AC64BA0989F2EA45C1(__this, /*hidden argument*/NULL);
		// return null;
		return (VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *)NULL;
	}
}
// Meta.WitAi.Requests.VoiceServiceRequest Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C * PlatformDictationImpl_ActivateImmediately_mD3CAA6C3AFB90C1B177D74501DFC01C71F0CDDC8 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, WitRequestOptions_t3ADE8039F427F98BA2DC535606F660ECDC195B5F * ___requestOptions0, VoiceServiceRequestEvents_t4C8963D0F248DE639E7F304FAB956A0BFD80548E * ___requestEvents1, const RuntimeMethod* method)
{
	{
		// Activate();
		PlatformDictationImpl_Activate_mBBF98A488FC26E2072B867AC64BA0989F2EA45C1(__this, /*hidden argument*/NULL);
		// return null;
		return (VoiceServiceRequest_t9F339BF8B4B8206335992551FB3DF2C53D7F509C *)NULL;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_Deactivate_mDD8582C3373FECD88131701AAD4AC230BA2F4FDA (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	{
		// service.StopDictation();
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_0 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		NullCheck(L_0);
		PlatformDictationSDKBinding_StopDictation_mBC2A5FD4C582D829777C5F38C066B2A2D00D70E9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_Cancel_mC4B2AB6AAF75F5EEE4627C7F062FE6353B9C8606 (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, const RuntimeMethod* method)
{
	{
		// service.StopDictation();
		PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * L_0 = ((BaseAndroidConnectionImpl_1_t278879B230C24479236AD45AA13BFCFD24C856F3 *)__this)->get_service_1();
		NullCheck(L_0);
		PlatformDictationSDKBinding_StopDictation_mBC2A5FD4C582D829777C5F38C066B2A2D00D70E9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationImpl::OnServiceNotAvailable(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationImpl_OnServiceNotAvailable_mEC2B0A73497ABDD64E13AE0DE3DD2B53F0AF4AAA (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, String_t* ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// _serviceAvailable = false;
		__this->set__serviceAvailable_4((bool)0);
		// OnServiceNotAvailableEvent?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnServiceNotAvailableEvent_8();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
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
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationSDKBinding_get_Active_mAA65C94F54A819042564DB4CC27520721BD756A1 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Active => binding.Call<bool>("isActive");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral5A9AEFD32E63F4C4FEAE65BF93199A9A35785D51, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationSDKBinding_get_IsRequestActive_m0D6EC59884A2F4B3141803740F4887C4E39E68ED (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsRequestActive => binding.Call<bool>("isRequestActive");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral0AD681F3CCA95D9E6DBE642350F27A4677186DCE, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformDictationSDKBinding_get_IsSupported_m3F3B117D09C348F600DEF881F58ACF348FB85F8E (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsSupported => binding.Call<bool>("isSupported");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral6E376700E58DD3581CFBE1F901798D5C61E52BA0, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSDKBinding__ctor_m13AAB7C78C8F4A98AD3F23B6FC08B77CAF46A376 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___sdkInstance0, const RuntimeMethod* method)
{
	{
		// public PlatformDictationSDKBinding(AndroidJavaObject sdkInstance) : base(sdkInstance) {}
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___sdkInstance0;
		BaseServiceBinding__ctor_mE48FF343A8BD176981F554E32D16216587EB1872(__this, L_0, /*hidden argument*/NULL);
		// public PlatformDictationSDKBinding(AndroidJavaObject sdkInstance) : base(sdkInstance) {}
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::StartDictation(Oculus.Voice.Dictation.Bindings.Android.DictationConfigurationBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSDKBinding_StartDictation_m66119D05E22161091C4662DFF15880E468BFBE12 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * ___configuration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BF53B60F1510677F41C3CDF15E42D9212C54C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("startDictation", configuration.ToJavaObject());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		DictationConfigurationBinding_tAD61EA5A2F7096B292F1A4C8C6DA78E00F041DB2 * L_3 = ___configuration0;
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = DictationConfigurationBinding_ToJavaObject_m6075DF79CE6D955C4194D256AFC36F048481B541(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralC2BF53B60F1510677F41C3CDF15E42D9212C54C8, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::StopDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSDKBinding_StopDictation_mBC2A5FD4C582D829777C5F38C066B2A2D00D70E9 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3069320ED085708F787A0D80D9D8A2C7536C068F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("stopDictation");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral3069320ED085708F787A0D80D9D8A2C7536C068F, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSDKBinding::SetListener(Oculus.Voice.Dictation.Bindings.Android.DictationListenerBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSDKBinding_SetListener_mE7A713A1CE5940C856C00994564F986A44DB4D70 (PlatformDictationSDKBinding_t5ABDD55CE5A93D7531254C6ED307D1BF6417C942 * __this, DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * ___listenerBinding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// binding.Call("setListener", listenerBinding);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((BaseServiceBinding_t1FE44DBAD2D09717F7DD9D3781F49DA25163BAD6 *)__this)->get_binding_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		DictationListenerBinding_t22F5D7EB4CE9EC89A92EF6940F23D0B3685A0C16 * L_3 = ___listenerBinding0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral3261C3E11E9AB172DA0BD2010EF79C41DE23C91C, L_2, /*hidden argument*/NULL);
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
// System.Void Oculus.Voice.Dictation.Bindings.Android.PlatformDictationSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDictationSession__ctor_m7BE6CBBFF34DC64B9DF6E03BC145BCC3CF5D4917 (PlatformDictationSession_t1936EB5AEF41F084FFE69D0DA64A3A3E54C6EEBD * __this, const RuntimeMethod* method)
{
	{
		DictationSession__ctor_m432FF4594E38E9969D4E45436407A53D5DC90F37(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector2 Meta.WitAi.Configuration.WitDictationRuntimeConfiguration::get_RecordingTimeRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WitDictationRuntimeConfiguration_get_RecordingTimeRange_m89177F83234D80163560DF8AE99E0E022C8FDD06 (WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * __this, const RuntimeMethod* method)
{
	{
		// protected override Vector2 RecordingTimeRange => new Vector2(-1, 300);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (-1.0f), (300.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Meta.WitAi.Configuration.WitDictationRuntimeConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDictationRuntimeConfiguration__ctor_mA8C2FE4EFC4D90560601B3FA5CCAAA3996D74BF1 (WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * __this, const RuntimeMethod* method)
{
	{
		WitRuntimeConfiguration__ctor_m3F41F3DCC11EE6A120BF9DC29C46E111001DF2D2(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * AppDictationExperience_get_RuntimeConfiguration_m2249C2CFABE118B00A573EF306A0678FD572A5DB_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// public WitRuntimeConfiguration RuntimeConfiguration => runtimeConfiguration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = __this->get_runtimeConfiguration_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppDictationExperience_get_UsePlatformIntegrations_m69582728E773426BE12D8FCBF12C017D77321D84_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// get => usePlatformServices;
		bool L_0 = __this->get_usePlatformServices_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * DictationService_get_TelemetryEvents_m6E462BD2C0B931954E5BDBC7A7C204AE494689D6_inline (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, const RuntimeMethod* method)
{
	{
		// public TelemetryEvents TelemetryEvents { get => telemetryEvents; set => telemetryEvents = value; }
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_0 = __this->get_telemetryEvents_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * AppDictationExperience_get_RuntimeDictationConfiguration_mF211059D8763889EFD400DA04ED7D43D32506647_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// get => runtimeConfiguration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = __this->get_runtimeConfiguration_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformDictationImpl_SetDictationRuntimeConfiguration_m233F7DADCDCFF3DE00E05EA9485F767FBDF64F4D_inline (PlatformDictationImpl_t2CE669B34D287E4DF82919766F4297211C666BE2 * __this, WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * ___configuration0, const RuntimeMethod* method)
{
	{
		// _dictationRuntimeConfiguration = configuration;
		WitDictationRuntimeConfiguration_tD5AF8DF89452BBEB39A95FED1DF66D8729CF3EA8 * L_0 = ___configuration0;
		__this->set__dictationRuntimeConfiguration_5(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppDictationExperience_get_DoNotFallbackToWit_mF5CAD3FC8C39D373FA3A0FF6F8F600AAA47F1BCF_inline (AppDictationExperience_tE4EDAA230C8001C57B25722A61AE051139B9FC16 * __this, const RuntimeMethod* method)
{
	{
		// get => doNotFallbackToWit;
		bool L_0 = __this->get_doNotFallbackToWit_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * SpeechEvents_get_OnError_m04B08925E5E5336EA6B0BA5560A40D6D100023C3_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public WitErrorEvent OnError => _onError;
		WitErrorEvent_tF401D23431D151EDCDE39DAB576AA43AE30D9F8B * L_0 = __this->get__onError_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitDictation_set_RuntimeConfiguration_mC8A920F2CDEDCAF2E51D8FA9634F3DFD070D897E_inline (WitDictation_t33225250C6DB5E490918719B90A9B1EA9216EA79 * __this, WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * ___value0, const RuntimeMethod* method)
{
	{
		// set => witRuntimeConfiguration = value;
		WitRuntimeConfiguration_t00CF042B48A5BE84E5018893377AB56F0CDA0975 * L_0 = ___value0;
		__this->set_witRuntimeConfiguration_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DictationService_set_TelemetryEvents_m789E53BB9079641B4C2D9687A069D3699272274F_inline (DictationService_tF22038418B5555A8EBBAC96452F3EF9A2CD91265 * __this, TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * ___value0, const RuntimeMethod* method)
{
	{
		// public TelemetryEvents TelemetryEvents { get => telemetryEvents; set => telemetryEvents = value; }
		TelemetryEvents_tC498417FDE8A0C8977EC07CE3C05A46BF5A15B56 * L_0 = ___value0;
		__this->set_telemetryEvents_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * SpeechEvents_get_OnRequestInitialized_mE11AB864D1E50BAADBB03BF449D73261E2E46E97_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public VoiceServiceRequestEvent OnRequestInitialized => _onRequestInitialized;
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_0 = __this->get__onRequestInitialized_4();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * SpeechEvents_get_OnStoppedListening_mAB9D29E39C416846F4A101052E7F360350A2E275_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public UnityEvent OnStoppedListening => _onStoppedListening;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get__onStoppedListening_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * SpeechEvents_get_OnComplete_mF17B131FEF512346081B793B737E0DDC4E6E2B0D_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public VoiceServiceRequestEvent OnComplete => _onComplete;
		VoiceServiceRequestEvent_t8AB3DA62BE7F8472E8AF86B5250DEC1D6BD84709 * L_0 = __this->get__onComplete_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * DictationEvents_get_OnDictationSessionStarted_m866DA85C06E821B6315BD9FFF8F56BEDBF001ADE_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public DictationSessionEvent OnDictationSessionStarted => _onDictationSessionStarted;
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_0 = __this->get__onDictationSessionStarted_32();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * SpeechEvents_get_OnPartialTranscription_mCBCE638876903718E1100BD82336D480C8FEC8FD_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => _onPartialTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get__onPartialTranscription_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * SpeechEvents_get_OnFullTranscription_mAFF8516189ED2D6ACABBEA4FDBD99F8DEF93054A_inline (SpeechEvents_t407FDD26EE17B3E3FE8C7A9C938664633B189B6D * __this, const RuntimeMethod* method)
{
	{
		// public WitTranscriptionEvent OnFullTranscription => _onFullTranscription;
		WitTranscriptionEvent_t3B82B28268DF251C203B856A09FFB047567F28C8 * L_0 = __this->get__onFullTranscription_29();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestResults_get_Message_mFEF1DF5B9B55896B807488164E246F0AE14D8277_inline (VoiceServiceRequestResults_tBD6E0A6CB9B984F932048DD695AF472B8E0EC7FA * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * DictationEvents_get_OnDictationSessionStopped_mEC37C295E51E75FBD4135E8DED8A3845A73A00CD_inline (DictationEvents_tE64D5D4777950F0947547291731722C5FA64C5AC * __this, const RuntimeMethod* method)
{
	{
		// public DictationSessionEvent OnDictationSessionStopped => _onDictationSessionStopped;
		DictationSessionEvent_t4F24AB7439592B9AFFB86A8CDA2E8A549A183DE6 * L_0 = __this->get__onDictationSessionStopped_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceRequest_4_get_State_mB032349DB5A94B0BCEE8474BD4EB5AEB09B67D58_gshared_inline (VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD * __this, const RuntimeMethod* method)
{
	{
		// public VoiceRequestState State { get; private set; } = (VoiceRequestState) (-1);
		int32_t L_0 = (int32_t)__this->get_U3CStateU3Ek__BackingField_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * VoiceRequest_4_get_Results_mD9E141DFDA2FD2EC52083100D4BC153E5D905762_gshared_inline (VoiceRequest_4_t171D0CDCC7CEEFE30AE7432240E6CF1A3FD0EFFD * __this, const RuntimeMethod* method)
{
	{
		// public TResults Results { get; protected set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CResultsU3Ek__BackingField_5();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
