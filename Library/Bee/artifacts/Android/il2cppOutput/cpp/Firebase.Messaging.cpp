#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_t510F19042ADE557A30D058AD4D77D256F4351CE6;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE;
// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Firebase.Messaging.AndroidNotificationParams
struct AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Firebase.CharVector
struct CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F;
// Firebase.Messaging.FirebaseMessaging
struct FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3;
// Firebase.Messaging.FirebaseMessagingPINVOKE
struct FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F;
// Firebase.Messaging.FirebaseNotification
struct FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A;
// Firebase.FutureString
struct FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA;
// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5;
// Firebase.Messaging.MessagingOptions
struct MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Firebase.StringList
struct StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451;
// Firebase.StringStringMap
struct StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73;
// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException
struct SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t03C6DC28CE105B32D539FDCC4167C743C77E3DAB;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0
struct U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C;
// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1
struct U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48;
// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC;
// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidNotificationParams__ctor_m14F9AA0AEAB945312E12E35AA16BE19E43A113CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidNotificationParams_get_ChannelId_mC1C24D8979C03D54B70F71FFD247C1015FD22647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43E608FD169757AAC03235BFC7E1F884D96D55B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage__ctor_m742FE4419880C19B9763BD1D0AEC5E6BB048DCA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_CollapseKey_m339C3DF6AE3DC040AF94426569EC2195C6BB82EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_Data_m4633EBF49233BC6304EBA4E9701C6954DBF6BCDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_ErrorDescription_m887FE59C8D3D2335AAC0BBCE98C912DFE92BB23C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_Error_m628F181C4444596F5698E1AFCB6E67C00EE7B2EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_From_m6A8B7F66B7C0E65663FF0054C694CF5C957AC8E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_LinkInternal_m54D8F42AB16E2B92AEB11DA05006E9692F86F506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_MessageId_mA06224C6A9C60DA2E73C30DF894B9A66EA27FFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_MessageType_mE74F760E1067384AFF099776E1EB2E608298B779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_NotificationOpened_m20366C61D5F048F1C7C65471A7961E3F21AC9C52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_Priority_m154A74DED37BB580CD0B40B52417B5ADF9650841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_RawDataInternal_m9BAAF0C9D87B488D82B68B1CB8E6A9712074B03D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_SentTimeInternal_m5D5B6504F32A67B4F93D606B9575DAC7DC9AA15D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_TimeToLiveInternal_m7B286723B3C6742919DD44E32BBF2E5A083239B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_To_m0D1BD6DDA27E4B38F1F8CA9E36226E0199D4499D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_original_priority_m6AD8FA72315DEA5848FE158C019ADE192C1C7E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_set_Data_mAF86D91E3BAE98093F6B824F0DE0987F117775FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_set_MessageId_m73059B5444A66AFBA4F3D9841786DADE503C5DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_set_To_m760C1FD5853796C542F1252B1DA42DA830521018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_DeliveryMetricsExportToBigQueryEnabledInternal_mF1AD3A2AEA2E327F22862EE8A270E6136196A11E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_GetTokenInternalAsync_mCB702AE3D2C04219844464C952E986771323DB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_IsTokenRegistrationOnInitEnabledInternal_m00B72038C042B665FC5FDE24C5813DB951A097A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_MessageCopyNotification_mBDE449E1BE3BC2BDB06CD88250C714C6DDA6465A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_NotificationCopyAndroidNotificationParams_m7DD4C4D386B8C61E1DE718DC02B6A4E7DE6CD339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SendPendingEvents_m9AEBB8B89CA851876F0E41A21C8F517836378886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetDeliveryMetricsExportToBigQueryInternal_m80ECFE5606DE53BD7A0C6836D710603C8407A131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacksEnabled_mCC6695D568D9818EA1F0D26712FB2A0EE87E73A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacks_m2F889DF8DECE9469967BEF550C78D5EDDCFAB454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetTokenRegistrationOnInitEnabledInternal_m756EDCA5B31F361ECB5089127F7B1D9975BFAED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification__ctor_mAC708CF5A2697DB927E89CFBD4E79A2B2173CD48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_Badge_mFAF2E4B800BCE96112724BEB780143D6E228670E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_BodyLocalizationArgs_m3497C125427EEE8528663A71AF83071EC867F2DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_BodyLocalizationKey_mD3A07666F5C03B3DCCCD8ACB12B5CD7C1937E01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_Body_mEFB4117BAE3B281BB0C92DE332459AE63DB32343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_ClickAction_m4E42D4CF9017681EC8A66D54A397C7ED07F57EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_Color_m8E72F7B6988F032E60427AFABEC2CA3D4EEEB1B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_Icon_m8D00AC4BA1191ED24F52B3F85D7B56DF4E9E6D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_Sound_mCC04130300784A12DC864617A6FBC8C144CAF24F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_Tag_m519E0B46290C433EA85BFFC0435848CA0DC6EE8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_TitleLocalizationArgs_mF276A7644F8D6DE696B39204A82CB705485ADCEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_TitleLocalizationKey_m7B87BAD6A317D86656AC82E6242519E31092A1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseNotification_get_Title_mE13C0B56A0B81DECA17D6BC996E1376240A5F96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_MessageReceivedDelegateMethod_m95C378CA304819447149A2A4A9AEC137F47956DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_TokenReceivedDelegateMethod_mB4ACFCE59C870A1CDAFDD056655102F56CD17C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessagingOptions__ctor_m4BF8BBF58B12D19C6D8969066A2F0F9B44FA4B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessagingOptions_get_SuppressNotificationPermissionPrompt_m20AE260F5BD27068C369328EDBD4131C46DF2907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessagingOptions_set_SuppressNotificationPermissionPrompt_mF0705AB5502AE5D3211C451580B3CAFA91CCFBAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m060171326D3019978B8787843E25864D51C7FAA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mA9DCC213D165EE7CCA5227529BA5542A4D2D8751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m890F72E31BC6A96FF2A1F7906C188AA1D26C89AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mEB8E8B44C42D54AD9E0160B9EE2F7862637B3E0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m275F6E5A16018DCBAA2681A7FD3FE45FD9389751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m05C0DE6E237D8E63649531A8AAA6B8906E6EC630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mAE6AEF4401C6393115479364B05173FE5A4D4E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mE5189F13B9831CFEEACC0F704AA1EE4C28D6977A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_mBCAEC39E36BE3422612773135A1347C38B9EE204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mE112B67C45E3FE746CC170726DCAE25F581F6321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m29AC22ED749B13344003A120E77C26E7C736A4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m85D046E64786517BF671D14464F013E6E10F74FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m925DE663512069FE450704037A528E83270A91BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m801705A321121C304A58AD98B229F83BD2D974CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mD8088413B24D769437B4E09A4AB7826A55A5A9A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7C255661816635D8A9BB487082288EDF4DC1B1F7 
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.Messaging.FirebaseMessaging
struct FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3  : public RuntimeObject
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE
struct FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7  : public RuntimeObject
{
	// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::messageReceivedDelegate
	MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___messageReceivedDelegate_0;
	// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::tokenReceivedDelegate
	TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___tokenReceivedDelegate_1;
	// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging/Listener::app
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app_2;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C  : public RuntimeObject
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException
struct SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909  : public RuntimeObject
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9  : public RuntimeObject
{
};

// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1
struct U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48  : public RuntimeObject
{
	// System.String Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::token
	String_t* ___token_0;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::<Message>k__BackingField
	FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___U3CMessageU3Ek__BackingField_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Firebase.Messaging.TokenReceivedEventArgs::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.DateTimeKind
struct DateTimeKind_t3AD6DA06BEF8955A740777163FFB481C19089BBC 
{
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Firebase.Messaging.Error
struct Error_t4D9ED785488F4A2211593A4A903291F8B3D24D8C 
{
	// System.Int32 Firebase.Messaging.Error::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0
struct U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C  : public RuntimeObject
{
	// System.IntPtr Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::message
	intptr_t ___message_0;
};

// Firebase.Messaging.AndroidNotificationParams
struct AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.AndroidNotificationParams::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.AndroidNotificationParams::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.CharVector
struct CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.CharVector::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.CharVector::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2* ___appPlatform_15;
};

// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseMessage::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.FirebaseMessage::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Messaging.FirebaseNotification
struct FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseNotification::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.FirebaseNotification::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Messaging.MessagingOptions
struct MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.MessagingOptions::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.MessagingOptions::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Firebase.StringList
struct StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.StringList::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.StringList::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.StringStringMap
struct StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.StringStringMap::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.StringStringMap::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0  : public MulticastDelegate_t
{
};

// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Firebase.FutureString
struct FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureString::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.FutureString::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureString/SWIG_CompletionDelegate Firebase.FutureString::SWIG_CompletionCB
	SWIG_CompletionDelegate_t03C6DC28CE105B32D539FDCC4167C743C77E3DAB* ___SWIG_CompletionCB_7;
};

// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___SWIG_CompletionCB_7;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// <Module>

// <Module>

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Firebase.Messaging.FirebaseMessaging
struct FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields
{
	// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::MessageReceivedInternal
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___MessageReceivedInternal_0;
	// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::TokenReceivedInternal
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___TokenReceivedInternal_1;
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging::listener
	Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* ___listener_2;
};

// Firebase.Messaging.FirebaseMessaging

// Firebase.Messaging.FirebaseMessagingPINVOKE
struct FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields
{
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* ___swigExceptionHelper_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigStringHelper
	SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* ___swigStringHelper_1;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields
{
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::listener
	Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* ___listener_3;
};

// Firebase.Messaging.FirebaseMessaging/Listener

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields
{
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___applicationDelegate_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___arithmeticDelegate_1;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___divideByZeroDelegate_2;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___indexOutOfRangeDelegate_3;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidCastDelegate_4;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidOperationDelegate_5;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___ioDelegate_6;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___nullReferenceDelegate_7;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___outOfMemoryDelegate_8;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___overflowDelegate_9;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___systemDelegate_10;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentDelegate_11;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentNullDelegate_12;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException
struct SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields
{
	// System.Int32 Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException
struct SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields
{
	// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields
{
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* ___stringDelegate_0;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper

// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1

// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Firebase.Messaging.MessageReceivedEventArgs

// Firebase.Messaging.MessageReceivedEventArgs

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// Firebase.Messaging.TokenReceivedEventArgs

// Firebase.Messaging.TokenReceivedEventArgs

// System.Void

// System.Void

// System.DateTimeKind

// System.DateTimeKind

// System.Delegate

// System.Delegate

// Firebase.Messaging.Error

// Firebase.Messaging.Error

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0

// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0

// Firebase.Messaging.AndroidNotificationParams

// Firebase.Messaging.AndroidNotificationParams

// System.ApplicationException

// System.ApplicationException

// Firebase.CharVector

// Firebase.CharVector

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_14;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* ___U3CU3Ef__amU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__am$cache1
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__am$cache2
	Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache3
	Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache4
	Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* ___U3CU3Ef__amU24cache4_20;
};

// Firebase.FirebaseApp

// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_StaticFields
{
	// System.DateTime Firebase.Messaging.FirebaseMessage::UnixEpochUtc
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpochUtc_2;
};

// Firebase.Messaging.FirebaseMessage

// Firebase.Messaging.FirebaseNotification

// Firebase.Messaging.FirebaseNotification

// Firebase.Messaging.MessagingOptions

// Firebase.Messaging.MessagingOptions

// Firebase.StringList

// Firebase.StringList

// Firebase.StringStringMap

// Firebase.StringStringMap

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
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
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>

// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>

// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>

// System.Func`1<System.Int32>

// System.Func`1<System.Int32>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.AsyncCallback

// System.AsyncCallback

// Firebase.FutureString
struct FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action> Firebase.FutureString::Callbacks
	Dictionary_2_t510F19042ADE557A30D058AD4D77D256F4351CE6* ___Callbacks_3;
	// System.Int32 Firebase.FutureString::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureString::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.FutureString

// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.FutureVoid

// System.IO.IOException

// System.IO.IOException

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// System.OutOfMemoryException

// System.OutOfMemoryException

// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate

// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate

// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate

// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.DivideByZeroException

// System.DivideByZeroException

// System.OverflowException

// System.OverflowException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43E608FD169757AAC03235BFC7E1F884D96D55B1_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___0_func, int32_t ___1_errorValue, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;

// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* Listener_Create_m66A522F9620BBB2E3BD693E9DE08D843B27D89F3 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m3D943DABEC593DC4A33D3321B9C6CCBE30F68ED7 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_mCC6695D568D9818EA1F0D26712FB2A0EE87E73A3 (bool ___0_message_callback_enabled, bool ___1_token_callback_enabled, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_m9AEBB8B89CA851876F0E41A21C8F517836378886 (const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging/Listener::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* Listener_get_App_m74B7B56CA815EA9173AD5470B80CE6FE51A489AA (const RuntimeMethod* method) ;
// System.Boolean Firebase.Messaging.FirebaseMessaging::IsTokenRegistrationOnInitEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessaging_IsTokenRegistrationOnInitEnabledInternal_m00B72038C042B665FC5FDE24C5813DB951A097A7 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SetTokenRegistrationOnInitEnabledInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetTokenRegistrationOnInitEnabledInternal_m756EDCA5B31F361ECB5089127F7B1D9975BFAED8 (bool ___0_enable, const RuntimeMethod* method) ;
// System.Boolean Firebase.Messaging.FirebaseMessaging::DeliveryMetricsExportToBigQueryEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessaging_DeliveryMetricsExportToBigQueryEnabledInternal_mF1AD3A2AEA2E327F22862EE8A270E6136196A11E (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SetDeliveryMetricsExportToBigQueryInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetDeliveryMetricsExportToBigQueryInternal_m80ECFE5606DE53BD7A0C6836D710603C8407A131 (bool ___0_enable, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Firebase.Messaging.FirebaseMessaging::GetTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* FirebaseMessaging_GetTokenInternalAsync_mCB702AE3D2C04219844464C952E986771323DB67 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::DeleteTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_DeleteTokenInternalAsync_m31A43C4617CC07448FB4A543B2F9979ABE04FEE4 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_mAC5DE7ED74C283AC7AE2EC37D227B00D22A61FFC (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_m8A5BD5BDC87A8746952190E5F3BC682F8152BEB3 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_m10D722935157A07D23EFB5EB3A7146CC0B050A15 (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m10E4057024EE240222342CCB7B0561E8B86A6118 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m0A58E53FE8B89547AB5B4A73164400784E619DEA (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::SubscribeAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_SubscribeAsync_m648779F7705CF77214D393454CE0E00175C1858F (String_t* ___0_topic, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::UnsubscribeAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_UnsubscribeAsync_mA91F8F827D8AC38546796C20E4EDB2A9A42EC5C4 (String_t* ___0_topic, const RuntimeMethod* method) ;
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::IsTokenRegistrationOnInitEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_IsTokenRegistrationOnInitEnabledInternal_m229BEA20B7B6678AACD4856107C37BF26FC2E56B (const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetTokenRegistrationOnInitEnabledInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetTokenRegistrationOnInitEnabledInternal_mE6744A31D42AB6CBAB850C8344BE196975FDF00E (bool ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_RequestPermission_m237A8F3236EF76BA8CE80B72ACAFE2838A75A957 (const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* ___0_fu, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::Subscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_Subscribe_m4DB87EBEAEF92E530628CCE7783CE30F5948662A (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::Unsubscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_Unsubscribe_m495FFB8DB434D036D8177D6522FDE700C6515223 (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::DeliveryMetricsExportToBigQueryEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_DeliveryMetricsExportToBigQueryEnabledInternal_m215ED893AC6F3F03AE39B6FE6898CDF090DBE108 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetDeliveryMetricsExportToBigQueryInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetDeliveryMetricsExportToBigQueryInternal_mE26E739BAB29FF7E7F801F718F0BA15EE9F3CD20 (bool ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::GetTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_GetTokenInternalAsync_mC4AC0DB08B64E2107866CFCB5890F6A381981C92 (const RuntimeMethod* method) ;
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_m9CB2C65B5F5E9E649EA262481D40CD4F758A218C (FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* FutureString_GetTask_m91682A6F5BAE6293E24AE084F088BDC360A98FB0 (FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA* ___0_fu, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::DeleteTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_DeleteTokenInternalAsync_m7E9BD957C0D07B2154991F4F90BF4BEBA9B9DC82 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacks_mF1DDB441F19EC45D4388A39FD09B77D5A76D44D2 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___0_jarg1, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_m8AA0CF4CD39336092A4701D553229A8A86B3F004 (bool ___0_jarg1, bool ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SendPendingEvents_mAD2515BF6CA3B8BBA483D3ECDFFE3E9FFA5211A5 (const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::MessageCopyNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_MessageCopyNotification_m98242B60DA017BEFEB2B57BE3DC5BC41E9BEC561 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::NotificationCopyAndroidNotificationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_NotificationCopyAndroidNotificationParams_m449476925BD90CD8A2F1B215A948A6C8BE79BAE2 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_m95C378CA304819447149A2A4A9AEC137F47956DE (intptr_t ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_mB4ACFCE59C870A1CDAFDD056655102F56CD17C85 (String_t* ___0_token, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_m7C746AD1F9449816B6CFE442E53CB22D66785344 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m7213BFF7CDB058058B92B871EFE65B9C5C906EF3 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m2F889DF8DECE9469967BEF550C78D5EDDCFAB454 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___0_messageCallback, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___1_tokenCallback, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m87D2A4FC1D1CFAF89AB68D83165777A9F92E63C0 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m762A83BDCF700C20F4D5EB358FEBA76246EED9FC (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1 (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared)(__this, ___0_object, ___1_method, method);
}
// T Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<T>,T)
inline int32_t ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43E608FD169757AAC03235BFC7E1F884D96D55B1 (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___0_func, int32_t ___1_errorValue, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, int32_t, const RuntimeMethod*))ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43E608FD169757AAC03235BFC7E1F884D96D55B1_gshared)(___0_func, ___1_errorValue, method);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mF49B2EA70CE3B50B376905BF0379B60147A466C5 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_mC5C9E0BADB0E232C7A30880B214C00E725862884 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mF420D689ACEE65740BA0E1A253DF2D33CBAFC061 (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___0_msg, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE74D513905186175FB8E2AD6A88D306119DEF974_inline (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* __this, RuntimeObject* ___0_sender, MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*, RuntimeObject*, MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_m834B72CF7DB04F86A4929BBDEFA7E969BFC09D21 (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___0_token, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m5B2B0750695D46F73D20A0615F8626851F4A80E4_inline (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* __this, RuntimeObject* ___0_sender, TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*, RuntimeObject*, TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m74E1F593CDD0E2FA4B49CBD999705045945E5EB9 (SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m374221329F17BCC4EED8997888A382721EFCF171 (SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m060171326D3019978B8787843E25864D51C7FAA1 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m275F6E5A16018DCBAA2681A7FD3FE45FD9389751 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m05C0DE6E237D8E63649531A8AAA6B8906E6EC630 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mE5189F13B9831CFEEACC0F704AA1EE4C28D6977A (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mBCAEC39E36BE3422612773135A1347C38B9EE204 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mE112B67C45E3FE746CC170726DCAE25F581F6321 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mAE6AEF4401C6393115479364B05173FE5A4D4E20 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m29AC22ED749B13344003A120E77C26E7C736A4E4 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m85D046E64786517BF671D14464F013E6E10F74FF (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m925DE663512069FE450704037A528E83270A91BE (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m801705A321121C304A58AD98B229F83BD2D974CE (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mA9DCC213D165EE7CCA5227529BA5542A4D2D8751 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m890F72E31BC6A96FF2A1F7906C188AA1D26C89AD (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mEB8E8B44C42D54AD9E0160B9EE2F7862637B3E0F (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_mE9FD8897A9E0114F13D220A164222ACC8572D236 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___0_applicationDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___1_arithmeticDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___2_divideByZeroDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___3_indexOutOfRangeDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___4_invalidCastDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___5_invalidOperationDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___6_ioDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___7_nullReferenceDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___8_outOfMemoryDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___9_overflowDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_m58DD8D2EF2B044A516367EC4A2E78EBB68641F13 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___0_argumentDelegate, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mD8088413B24D769437B4E09A4AB7826A55A5A9A7 (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m959EEC67F999197EA2457A7CD4684BD8588DE11E (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m7E9D6DDEBAAB3D995163D4FE671EC98B7071F8FA (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* ___0_stringDelegate, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_FirebaseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_FirebaseMessage_mECD55C5864C872A7F5CC08D66043B13A8915ADDC (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mDF6750A30E95068A13849BA85014E518D949D461 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseMessage_m6E96B7ED6F6A0B340134144BFA6FF591FD843FDB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 Firebase.Messaging.FirebaseMessage::get_TimeToLiveInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseMessage_get_TimeToLiveInternal_m7B286723B3C6742919DD44E32BBF2E5A083239B9 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___0_value, const RuntimeMethod* method) ;
// System.Int64 Firebase.Messaging.FirebaseMessage::get_SentTimeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FirebaseMessage_get_SentTimeInternal_m5D5B6504F32A67B4F93D606B9575DAC7DC9AA15D (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessaging::MessageCopyNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessaging_MessageCopyNotification_mBDE449E1BE3BC2BDB06CD88250C714C6DDA6465A (intptr_t ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseNotification::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseNotification__ctor_mCF6D66F4CD463FA93FCC5FA2C3CA435654534A9C (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessage::get_LinkInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_LinkInternal_m54D8F42AB16E2B92AEB11DA05006E9692F86F506 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) ;
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* FirebaseApp_UrlStringToUri_mD212E37D37B2F0DE5EE30CDAAB0E95E5E87B4F79 (String_t* ___0_urlString, const RuntimeMethod* method) ;
// Firebase.CharVector Firebase.Messaging.FirebaseMessage::get_RawDataInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* FirebaseMessage_get_RawDataInternal_m9BAAF0C9D87B488D82B68B1CB8E6A9712074B03D (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) ;
// System.Int32 Firebase.CharVector::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharVector_get_Count_mAB2A8CDBA2A0E72367165A550CC78259C2DAAB3E (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* __this, const RuntimeMethod* method) ;
// System.Void Firebase.CharVector::CopyTo(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharVector_CopyTo_m69B2856E774E1A18A77667577080E276A5B3E404 (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_From_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_From_get_m5AEE384F6239C758EF3196B8F70B993CFE0513A6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_To_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_FirebaseMessage_To_set_m2BF33B675534EB88FC4EA6876922D82ACD456884 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_To_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_To_get_m85EED0AFDF1BAAFC89D191FB9AB4F7A1BF30CBE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_CollapseKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_CollapseKey_get_m2911462D893EB8BF5C4AECD1EB92CB0726334346 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_m5295C0F5394545250F06A5F0A53C9ABB48D67794 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Add_mA5E43086723E81409FB93BD34211779B2B95B466 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_item, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.StringStringMap::getCPtr(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F StringStringMap_getCPtr_m9E30BAD269827991D469F743D10098904502616D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___0_obj, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Data_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_FirebaseMessage_Data_set_mBC41D1822630F4A2F56E4603BCF8783529636411 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Data_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseMessage_Data_get_m4ACA036AE0D59F5BFEC187FFD6A79D0157028D7E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_m493F3867E24E87A4D890A56366DAE5D3E2172E35 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_RawDataInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseMessage_RawDataInternal_get_m79A050B510DA49202E6D8B45D1FC6741488234DA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.CharVector::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharVector__ctor_mEA7C221A367DCAF1A482672A6D9392B7A0B7C75E (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_MessageId_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_FirebaseMessage_MessageId_set_mC858D3361244FFD8BB5BA9813CE086626FD012F8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_MessageId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_MessageId_get_m8A91EED8C6493AF99DE495240F4E26D18C180ACF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_MessageType_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_MessageType_get_m783E254011520D8809FFE1AB3A5821158BC9A88F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Priority_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_Priority_get_mC133DA4D5FD08040D6F868DF46DFCCBEB27EC7BF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Int32 Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_TimeToLiveInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseMessagingPINVOKE_FirebaseMessage_TimeToLiveInternal_get_m9929FA0AD178B0E84260A59D14E307E9A1402493 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Error_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_Error_get_m17D2FE9C32CDAF67C09AA379C1AD495342276797 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_ErrorDescription_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_ErrorDescription_get_m2DE0CFDECB8640F66C5E3D3430D755D9163BB761 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_NotificationOpened_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_FirebaseMessage_NotificationOpened_get_mAD956F57B433F63327F5B624E1FBFDF2977CC005 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_LinkInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_LinkInternal_get_m8264B3903B899E6BFEF3816D923D00DC5DF88D44 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_original_priority_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_original_priority_get_m958F88AABD26BFE2B64DE52065DAF17CA886BD92 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Int64 Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_SentTimeInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FirebaseMessagingPINVOKE_FirebaseMessage_SentTimeInternal_get_mE88F2734F78764152137FD810C08776F229E0244 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, int32_t ___7_kind, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_FirebaseNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_FirebaseNotification_m8FCE37C2E5F68CF6579CC705B13FC29FDC55B788 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseNotification::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseNotification_Dispose_m1630692AF5E7EE75695A7F14106FD10743753EB3 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseNotification(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseNotification_mF22FF56EE091E89BC9552FB1973ACA133164ABF2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessaging::NotificationCopyAndroidNotificationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessaging_NotificationCopyAndroidNotificationParams_m7DD4C4D386B8C61E1DE718DC02B6A4E7DE6CD339 (intptr_t ___0_notification, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.AndroidNotificationParams::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationParams__ctor_m06AD4DA7A6AC447716D6A9EE4550DF106525F959 (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Title_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Title_get_m79C024471BA851F554224435CA90A05B7F7EC437 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Body_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Body_get_mA085D3A805C3AFA96693BBE2FEF5E04F776DC735 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Icon_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Icon_get_m5D3005E5668CE48C1E4D2E95D84A38A70320FC45 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Sound_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Sound_get_mD67E4581D401A3218868F95C51CE8D9DCB2302BE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Badge_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Badge_get_m73E0B4DE7E95E04C3338A85F34DDF103812473A0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Tag_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Tag_get_mC43AF80798202FB7D3B9B8C877A5563E25BEE0A8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Color_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Color_get_mA62578F5DF42D5999DAEC55E1E46F8909C546DB0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_ClickAction_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_ClickAction_get_m5DCB41BCBD33804ADF1B2CCC4A74313650695165 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_BodyLocalizationKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_BodyLocalizationKey_get_mD0E12483924A8228F556B8548F7900308E1073CA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_BodyLocalizationArgs_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseNotification_BodyLocalizationArgs_get_m128D205AE4100A744598994A70638FB935722545 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.StringList::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringList__ctor_mE8BF198CF78FE1F0CE2270373652B8C5F991E521 (StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_TitleLocalizationKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_TitleLocalizationKey_get_mCAC46BCFA67C2B0B3E197B590EAB823F904851CC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_TitleLocalizationArgs_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseNotification_TitleLocalizationArgs_get_m2E59E2D6B32B9C9E9DFA7AFF6988972C685C91BE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_AndroidNotificationParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_AndroidNotificationParams_m6AF890BC6F9461A69A85121F491C53BF484996A7 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_AndroidNotificationParams(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_AndroidNotificationParams_mDB617E24E0DD728EBA986BED3393415C296C1B21 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::AndroidNotificationParams_ChannelId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_AndroidNotificationParams_ChannelId_get_mED7D6B65F23DE9A57FF98A764DE32FB5D748BFEF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_MessagingOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_MessagingOptions_m62A6D9E43B5680C9C10438BB4CE0D501F7757832 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.MessagingOptions::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingOptions__ctor_m37015A43AAD16713DBED60EFAF1166BA1CBC4E66 (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.MessagingOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingOptions_Dispose_m94380CF06AFC0085DE234447B1D7E1D09D2CC8D3 (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_MessagingOptions(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_MessagingOptions_m81B773FA04F99C2FCECE0A7C620C43257B9C94FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::MessagingOptions_SuppressNotificationPermissionPrompt_set(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_MessagingOptions_SuppressNotificationPermissionPrompt_set_mE87ACFF2EC98A7950978DD1F1CB96C862B3000BA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, bool ___1_jarg2, const RuntimeMethod* method) ;
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::MessagingOptions_SuppressNotificationPermissionPrompt_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_MessagingOptions_SuppressNotificationPermissionPrompt_get_mD4FAB02A28C710E9968D74714523D2F6C9BBE9D6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A_inline (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318_inline (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_new_MessagingOptions();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_MessagingOptions_SuppressNotificationPermissionPrompt_set(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Messaging_CSharp_MessagingOptions_SuppressNotificationPermissionPrompt_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_delete_MessagingOptions(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_AndroidNotificationParams_ChannelId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_new_AndroidNotificationParams();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_delete_AndroidNotificationParams(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_new_FirebaseNotification();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_delete_FirebaseNotification(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_Title_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_Body_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_Icon_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_Sound_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_Badge_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_Tag_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_Color_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_ClickAction_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_BodyLocalizationKey_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_BodyLocalizationArgs_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_TitleLocalizationKey_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseNotification_TitleLocalizationArgs_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_new_FirebaseMessage();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_delete_FirebaseMessage(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_From_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_To_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_To_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_CollapseKey_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_Data_set(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_Data_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_RawDataInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_MessageId_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_MessageId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_MessageType_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_Priority_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_TimeToLiveInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_Error_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_ErrorDescription_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_NotificationOpened_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_LinkInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_original_priority_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_SentTimeInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Messaging_CSharp_IsTokenRegistrationOnInitEnabledInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetTokenRegistrationOnInitEnabledInternal(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_RequestPermission();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_Subscribe(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_Unsubscribe(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Messaging_CSharp_DeliveryMetricsExportToBigQueryEnabledInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetDeliveryMetricsExportToBigQueryInternal(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_GetTokenInternalAsync();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_DeleteTokenInternalAsync();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetListenerCallbacksEnabled(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SendPendingEvents();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_MessageCopyNotification(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Messaging_CSharp_NotificationCopyAndroidNotificationParams(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseMessaging(Il2CppMethodPointer);
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
// System.Void Firebase.Messaging.FirebaseMessaging::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging__cctor_m45EE226B1C1F1F9135F774C848E2BF7338D0C1D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_0;
		L_0 = Listener_Create_m66A522F9620BBB2E3BD693E9DE08D843B27D89F3(NULL);
		((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___listener_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___listener_2), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging__ctor_m5574C7C33D3F1A83E74A6F2711D6FD370C1F5B4E (FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_mAC5DE7ED74C283AC7AE2EC37D227B00D22A61FFC (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_0 = NULL;
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_2 = V_1;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_5 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0), ((EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)Castclass((RuntimeObject*)L_4, EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_7 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_7) == ((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_m10D722935157A07D23EFB5EB3A7146CC0B050A15 (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_0 = NULL;
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_2 = V_1;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_5 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0), ((EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)Castclass((RuntimeObject*)L_4, EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_7 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_7) == ((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m10E4057024EE240222342CCB7B0561E8B86A6118 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_0 = NULL;
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_2 = V_1;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_5 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1), ((EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_7 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_7) == ((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m0A58E53FE8B89547AB5B4A73164400784E619DEA (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_0 = NULL;
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_2 = V_1;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_5 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1), ((EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_7 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_7) == ((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_m8A5BD5BDC87A8746952190E5F3BC682F8152BEB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_4 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
				V_1 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_5 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
				V_2 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_1;
				if (L_6)
				{
					goto IL_0035_1;
				}
			}
			{
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_0040_1;
				}
			}

IL_0035_1:
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_8;
				L_8 = Listener_Create_m66A522F9620BBB2E3BD693E9DE08D843B27D89F3(NULL);
				goto IL_0045_1;
			}

IL_0040_1:
			{
				Listener_Destroy_m3D943DABEC593DC4A33D3321B9C6CCBE30F68ED7(NULL);
			}

IL_0045_1:
			{
				bool L_9 = V_1;
				bool L_10 = V_2;
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				FirebaseMessaging_SetListenerCallbacksEnabled_mCC6695D568D9818EA1F0D26712FB2A0EE87E73A3(L_9, L_10, NULL);
				bool L_11 = V_1;
				if (L_11)
				{
					goto IL_0058_1;
				}
			}
			{
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_005d_1;
				}
			}

IL_0058_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				FirebaseMessaging_SendPendingEvents_m9AEBB8B89CA851876F0E41A21C8F517836378886(NULL);
			}

IL_005d_1:
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseMessaging_get_App_mDCAE72EB21733A53ADE3764AA141D413031B566C (const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = Listener_get_App_m74B7B56CA815EA9173AD5470B80CE6FE51A489AA(NULL);
		return L_0;
	}
}
// System.Boolean Firebase.Messaging.FirebaseMessaging::get_TokenRegistrationOnInitEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessaging_get_TokenRegistrationOnInitEnabled_m4C19ACC05AE94D7F9CD860DF541C6208B1E4E9EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseMessaging_IsTokenRegistrationOnInitEnabledInternal_m00B72038C042B665FC5FDE24C5813DB951A097A7(NULL);
		return L_0;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::set_TokenRegistrationOnInitEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_set_TokenRegistrationOnInitEnabled_m1831D76AC2FFAD2CC33C5A499FA7DBD422C250C3 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		FirebaseMessaging_SetTokenRegistrationOnInitEnabledInternal_m756EDCA5B31F361ECB5089127F7B1D9975BFAED8(L_0, NULL);
		return;
	}
}
// System.Boolean Firebase.Messaging.FirebaseMessaging::get_DeliveryMetricsExportedToBigQueryEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessaging_get_DeliveryMetricsExportedToBigQueryEnabled_m06018461B2F70F64433782B1DFBE4E1E6B533C80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseMessaging_DeliveryMetricsExportToBigQueryEnabledInternal_mF1AD3A2AEA2E327F22862EE8A270E6136196A11E(NULL);
		return L_0;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::set_DeliveryMetricsExportedToBigQueryEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_set_DeliveryMetricsExportedToBigQueryEnabled_mFA8D305949258F8796368CD315B21D72FD31DB83 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		FirebaseMessaging_SetDeliveryMetricsExportToBigQueryInternal_m80ECFE5606DE53BD7A0C6836D710603C8407A131(L_0, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Messaging.FirebaseMessaging::GetTokenAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* FirebaseMessaging_GetTokenAsync_m21AABFA9552959DD10479545CAE7E7C8FF7643AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_0;
		L_0 = FirebaseMessaging_GetTokenInternalAsync_mCB702AE3D2C04219844464C952E986771323DB67(NULL);
		return L_0;
	}
}
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::DeleteTokenAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_DeleteTokenAsync_m8C3C653740DBB5E59BC0B044DBE607E1F772C8E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = FirebaseMessaging_DeleteTokenInternalAsync_m31A43C4617CC07448FB4A543B2F9979ABE04FEE4(NULL);
		return L_0;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceived_m7593D2A9A31F8D9D6C63C5721DD27D6029AD51DD (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_4 = ___0_value;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_add_MessageReceivedInternal_mAC5DE7ED74C283AC7AE2EC37D227B00D22A61FFC(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_m8A5BD5BDC87A8746952190E5F3BC682F8152BEB3(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceived_mC78F77D418BC853D058C936B5FD9F4653DBC6D0C (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_4 = ___0_value;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_remove_MessageReceivedInternal_m10D722935157A07D23EFB5EB3A7146CC0B050A15(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_m8A5BD5BDC87A8746952190E5F3BC682F8152BEB3(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceived_m104BD22FC0B8EB65EAD116DD143E307DC074B58D (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_4 = ___0_value;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_add_TokenReceivedInternal_m10E4057024EE240222342CCB7B0561E8B86A6118(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_m8A5BD5BDC87A8746952190E5F3BC682F8152BEB3(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceived_m57733EDA0C697B1C9C675C7222933E9DFD72D1DC (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_4 = ___0_value;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_remove_TokenReceivedInternal_m0A58E53FE8B89547AB5B4A73164400784E619DEA(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_m8A5BD5BDC87A8746952190E5F3BC682F8152BEB3(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::Subscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_Subscribe_m620D8DBDBB68CF5BF33EBE7EBF2EDDB99BB3ECEA (String_t* ___0_topic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_topic;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = FirebaseMessaging_SubscribeAsync_m648779F7705CF77214D393454CE0E00175C1858F(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::Unsubscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_Unsubscribe_m59CE7BC9AD3AA306D3807E4551403391FCD4F450 (String_t* ___0_topic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_topic;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = FirebaseMessaging_UnsubscribeAsync_mA91F8F827D8AC38546796C20E4EDB2A9A42EC5C4(L_0, NULL);
		return;
	}
}
// System.Boolean Firebase.Messaging.FirebaseMessaging::IsTokenRegistrationOnInitEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessaging_IsTokenRegistrationOnInitEnabledInternal_m00B72038C042B665FC5FDE24C5813DB951A097A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseMessagingPINVOKE_IsTokenRegistrationOnInitEnabledInternal_m229BEA20B7B6678AACD4856107C37BF26FC2E56B(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_IsTokenRegistrationOnInitEnabledInternal_m00B72038C042B665FC5FDE24C5813DB951A097A7_RuntimeMethod_var)));
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetTokenRegistrationOnInitEnabledInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetTokenRegistrationOnInitEnabledInternal_m756EDCA5B31F361ECB5089127F7B1D9975BFAED8 (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_enable;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetTokenRegistrationOnInitEnabledInternal_mE6744A31D42AB6CBAB850C8344BE196975FDF00E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetTokenRegistrationOnInitEnabledInternal_m756EDCA5B31F361ECB5089127F7B1D9975BFAED8_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::RequestPermissionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_RequestPermissionAsync_mD58F048A50CD1B735BE6033456922A42671670DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FirebaseMessagingPINVOKE_RequestPermission_m237A8F3236EF76BA8CE80B72ACAFE2838A75A957(NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_1 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_1, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_1, NULL);
		V_0 = L_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_0;
		return L_3;
	}
}
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::SubscribeAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_SubscribeAsync_m648779F7705CF77214D393454CE0E00175C1858F (String_t* ___0_topic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		String_t* L_0 = ___0_topic;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_Subscribe_m4DB87EBEAEF92E530628CCE7783CE30F5948662A(L_0, NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_2 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_2, L_1, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_2, NULL);
		V_0 = L_3;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_0;
		return L_4;
	}
}
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::UnsubscribeAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_UnsubscribeAsync_mA91F8F827D8AC38546796C20E4EDB2A9A42EC5C4 (String_t* ___0_topic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		String_t* L_0 = ___0_topic;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_Unsubscribe_m495FFB8DB434D036D8177D6522FDE700C6515223(L_0, NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_2 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_2, L_1, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_2, NULL);
		V_0 = L_3;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Messaging.FirebaseMessaging::DeliveryMetricsExportToBigQueryEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessaging_DeliveryMetricsExportToBigQueryEnabledInternal_mF1AD3A2AEA2E327F22862EE8A270E6136196A11E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseMessagingPINVOKE_DeliveryMetricsExportToBigQueryEnabledInternal_m215ED893AC6F3F03AE39B6FE6898CDF090DBE108(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_DeliveryMetricsExportToBigQueryEnabledInternal_mF1AD3A2AEA2E327F22862EE8A270E6136196A11E_RuntimeMethod_var)));
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetDeliveryMetricsExportToBigQueryInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetDeliveryMetricsExportToBigQueryInternal_m80ECFE5606DE53BD7A0C6836D710603C8407A131 (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_enable;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetDeliveryMetricsExportToBigQueryInternal_mE26E739BAB29FF7E7F801F718F0BA15EE9F3CD20(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetDeliveryMetricsExportToBigQueryInternal_m80ECFE5606DE53BD7A0C6836D710603C8407A131_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Messaging.FirebaseMessaging::GetTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* FirebaseMessaging_GetTokenInternalAsync_mCB702AE3D2C04219844464C952E986771323DB67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FirebaseMessagingPINVOKE_GetTokenInternalAsync_mC4AC0DB08B64E2107866CFCB5890F6A381981C92(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_GetTokenInternalAsync_mCB702AE3D2C04219844464C952E986771323DB67_RuntimeMethod_var)));
	}

IL_0016:
	{
		intptr_t L_3 = V_0;
		FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA* L_4 = (FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA*)il2cpp_codegen_object_new(FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FutureString__ctor_m9CB2C65B5F5E9E649EA262481D40CD4F758A218C(L_4, L_3, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureString_t43059BC71CEE7628A518F3FCB741BCCE4E5674DA_il2cpp_TypeInfo_var);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_5;
		L_5 = FutureString_GetTask_m91682A6F5BAE6293E24AE084F088BDC360A98FB0(L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Firebase.Messaging.FirebaseMessaging::DeleteTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseMessaging_DeleteTokenInternalAsync_m31A43C4617CC07448FB4A543B2F9979ABE04FEE4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FirebaseMessagingPINVOKE_DeleteTokenInternalAsync_m7E9BD957C0D07B2154991F4F90BF4BEBA9B9DC82(NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_1 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_1, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_1, NULL);
		V_0 = L_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m2F889DF8DECE9469967BEF550C78D5EDDCFAB454 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___0_messageCallback, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___1_tokenCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* L_0 = ___0_messageCallback;
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* L_1 = ___1_tokenCallback;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetListenerCallbacks_mF1DDB441F19EC45D4388A39FD09B77D5A76D44D2(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacks_m2F889DF8DECE9469967BEF550C78D5EDDCFAB454_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_mCC6695D568D9818EA1F0D26712FB2A0EE87E73A3 (bool ___0_message_callback_enabled, bool ___1_token_callback_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_message_callback_enabled;
		bool L_1 = ___1_token_callback_enabled;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_m8AA0CF4CD39336092A4701D553229A8A86B3F004(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacksEnabled_mCC6695D568D9818EA1F0D26712FB2A0EE87E73A3_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_m9AEBB8B89CA851876F0E41A21C8F517836378886 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SendPendingEvents_mAD2515BF6CA3B8BBA483D3ECDFFE3E9FFA5211A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SendPendingEvents_m9AEBB8B89CA851876F0E41A21C8F517836378886_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.IntPtr Firebase.Messaging.FirebaseMessaging::MessageCopyNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessaging_MessageCopyNotification_mBDE449E1BE3BC2BDB06CD88250C714C6DDA6465A (intptr_t ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_MessageCopyNotification_m98242B60DA017BEFEB2B57BE3DC5BC41E9BEC561(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_MessageCopyNotification_mBDE449E1BE3BC2BDB06CD88250C714C6DDA6465A_RuntimeMethod_var)));
	}

IL_0017:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr Firebase.Messaging.FirebaseMessaging::NotificationCopyAndroidNotificationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessaging_NotificationCopyAndroidNotificationParams_m7DD4C4D386B8C61E1DE718DC02B6A4E7DE6CD339 (intptr_t ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_notification;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_NotificationCopyAndroidNotificationParams_m449476925BD90CD8A2F1B215A948A6C8BE79BAE2(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_NotificationCopyAndroidNotificationParams_m7DD4C4D386B8C61E1DE718DC02B6A4E7DE6CD339_RuntimeMethod_var)));
	}

IL_0017:
	{
		intptr_t L_4 = V_0;
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Listener_MessageReceivedDelegateMethod_m95C378CA304819447149A2A4A9AEC137F47956DE(intptr_t ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = Listener_MessageReceivedDelegateMethod_m95C378CA304819447149A2A4A9AEC137F47956DE(___0_message, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Listener_TokenReceivedDelegateMethod_mB4ACFCE59C870A1CDAFDD056655102F56CD17C85(char* ___0_token)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_token' to managed representation
	String_t* ____0_token_unmarshaled = NULL;
	____0_token_unmarshaled = il2cpp_codegen_marshal_string_result(___0_token);

	// Managed method invocation
	Listener_TokenReceivedDelegateMethod_mB4ACFCE59C870A1CDAFDD056655102F56CD17C85(____0_token_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m87D2A4FC1D1CFAF89AB68D83165777A9F92E63C0 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_MessageReceivedDelegateMethod_m95C378CA304819447149A2A4A9AEC137F47956DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_TokenReceivedDelegateMethod_mB4ACFCE59C870A1CDAFDD056655102F56CD17C85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* L_0 = (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC*)il2cpp_codegen_object_new(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MessageReceivedDelegate__ctor_m7C746AD1F9449816B6CFE442E53CB22D66785344(L_0, NULL, (intptr_t)((void*)Listener_MessageReceivedDelegateMethod_m95C378CA304819447149A2A4A9AEC137F47956DE_RuntimeMethod_var), NULL);
		__this->___messageReceivedDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageReceivedDelegate_0), (void*)L_0);
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* L_1 = (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0*)il2cpp_codegen_object_new(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TokenReceivedDelegate__ctor_m7213BFF7CDB058058B92B871EFE65B9C5C906EF3(L_1, NULL, (intptr_t)((void*)Listener_TokenReceivedDelegateMethod_mB4ACFCE59C870A1CDAFDD056655102F56CD17C85_RuntimeMethod_var), NULL);
		__this->___tokenReceivedDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenReceivedDelegate_1), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		__this->___app_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___app_2), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* L_3 = __this->___messageReceivedDelegate_0;
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* L_4 = __this->___tokenReceivedDelegate_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		FirebaseMessaging_SetListenerCallbacks_m2F889DF8DECE9469967BEF550C78D5EDDCFAB454(L_3, L_4, NULL);
		return;
	}
}
// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* Listener_Create_m66A522F9620BBB2E3BD693E9DE08D843B27D89F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_4 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				if (!L_4)
				{
					goto IL_0026_1;
				}
			}
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_5 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				V_1 = L_5;
				goto IL_0042;
			}

IL_0026_1:
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_6 = (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)il2cpp_codegen_object_new(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Listener__ctor_m87D2A4FC1D1CFAF89AB68D83165777A9F92E63C0(L_6, NULL);
				((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3), (void*)L_6);
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_7 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				V_1 = L_7;
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m3D943DABEC593DC4A33D3321B9C6CCBE30F68ED7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_4 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				if (L_4)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0036;
			}

IL_0020_1:
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_5 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				NullCheck(L_5);
				Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19(L_5, NULL);
				goto IL_0036;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging/Listener::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* Listener_get_App_m74B7B56CA815EA9173AD5470B80CE6FE51A489AA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_1 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B4_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_4 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				if (!L_4)
				{
					goto IL_002a_1;
				}
			}
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_5 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				NullCheck(L_5);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_6 = L_5->___app_2;
				G_B4_0 = L_6;
				goto IL_002b_1;
			}

IL_002a_1:
			{
				G_B4_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)(NULL));
			}

IL_002b_1:
			{
				V_1 = G_B4_0;
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Finalize_m1B8FDFA1B1FFD19A9F42B1C93B211A3274BD4851 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_4 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				if ((!(((RuntimeObject*)(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)L_4) == ((RuntimeObject*)(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)__this))))
				{
					goto IL_0030_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				FirebaseMessaging_SetListenerCallbacks_m2F889DF8DECE9469967BEF550C78D5EDDCFAB454((MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC*)NULL, (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0*)NULL, NULL);
				((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3 = (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3), (void*)(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)NULL);
				__this->___app_2 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___app_2), (void*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL);
			}

IL_0030_1:
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_m95C378CA304819447149A2A4A9AEC137F47956DE (intptr_t ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43E608FD169757AAC03235BFC7E1F884D96D55B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* V_0 = NULL;
	{
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* L_0 = (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C*)il2cpp_codegen_object_new(U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m762A83BDCF700C20F4D5EB358FEBA76246EED9FC(L_0, NULL);
		V_0 = L_0;
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* L_1 = V_0;
		intptr_t L_2 = ___0_message;
		NullCheck(L_1);
		L_1->___message_0 = L_2;
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* L_3 = V_0;
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_4 = (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*)il2cpp_codegen_object_new(Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1(L_4, L_3, (intptr_t)((void*)U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43E608FD169757AAC03235BFC7E1F884D96D55B1(L_4, 0, ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43E608FD169757AAC03235BFC7E1F884D96D55B1_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_mB4ACFCE59C870A1CDAFDD056655102F56CD17C85 (String_t* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* V_0 = NULL;
	{
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* L_0 = (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48*)il2cpp_codegen_object_new(U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mF49B2EA70CE3B50B376905BF0379B60147A466C5(L_0, NULL);
		V_0 = L_0;
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* L_1 = V_0;
		String_t* L_2 = ___0_token;
		NullCheck(L_1);
		L_1->___token_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___token_0), (void*)L_2);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_4, NULL);
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
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_Multicast(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* currentDelegate = reinterpret_cast<MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_OpenInst(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_OpenStatic(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_OpenStaticInvoker(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_ClosedStaticInvoker(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_message);

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_m7C746AD1F9449816B6CFE442E53CB22D66785344 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_Multicast;
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_mF2940D30F9D8F8D3A04FDA7D206A98B84E8DEAB7 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_message);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_EndInvoke_mDA1B54977055957DBEDBF8D66BCE7A6AA8B3F2C0 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_Multicast(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* currentDelegate = reinterpret_cast<TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenInst(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	NullCheck(___0_token);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_token, method);
}
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenStatic(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_token, method);
}
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenStaticInvoker(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_token);
}
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_ClosedStaticInvoker(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_token);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_token' to native representation
	char* ____0_token_marshaled = NULL;
	____0_token_marshaled = il2cpp_codegen_marshal_string(___0_token);

	// Native function invocation
	il2cppPInvokeFunc(____0_token_marshaled);

	// Marshaling cleanup of parameter '___0_token' native representation
	il2cpp_codegen_marshal_free(____0_token_marshaled);
	____0_token_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m7213BFF7CDB058058B92B871EFE65B9C5C906EF3 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_Multicast;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenReceivedDelegate_BeginInvoke_mF5B9047FA346E63998546B7445F892E8CD57407C (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___0_token, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_token;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_EndInvoke_mEB332FB98E09FA220BBAFABA7BBAB1046A45533A (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m762A83BDCF700C20F4D5EB358FEBA76246EED9FC (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
		V_0 = L_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_2 = V_0;
		intptr_t L_3 = __this->___message_0;
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_4 = (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F*)il2cpp_codegen_object_new(FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FirebaseMessage__ctor_mC5C9E0BADB0E232C7A30880B214C00E725862884(L_4, L_3, (bool)1, NULL);
		MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* L_5 = (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5*)il2cpp_codegen_object_new(MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MessageReceivedEventArgs__ctor_mF420D689ACEE65740BA0E1A253DF2D33CBAFC061(L_5, L_4, NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mE74D513905186175FB8E2AD6A88D306119DEF974_inline(L_2, NULL, L_5, NULL);
		return 1;
	}

IL_0026:
	{
		return 0;
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
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mF49B2EA70CE3B50B376905BF0379B60147A466C5 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
		V_0 = L_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_2 = V_0;
		String_t* L_3 = __this->___token_0;
		TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* L_4 = (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C*)il2cpp_codegen_object_new(TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TokenReceivedEventArgs__ctor_m834B72CF7DB04F86A4929BBDEFA7E969BFC09D21(L_4, L_3, NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m5B2B0750695D46F73D20A0615F8626851F4A80E4_inline(L_2, NULL, L_4, NULL);
	}

IL_001e:
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE__cctor_mE8C924D788B5A3205542A4CE24631B01FDCA77F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* L_0 = (SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C*)il2cpp_codegen_object_new(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m74E1F593CDD0E2FA4B49CBD999705045945E5EB9(L_0, NULL);
		((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* L_1 = (SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9*)il2cpp_codegen_object_new(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_m374221329F17BCC4EED8997888A382721EFCF171(L_1, NULL);
		((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE__ctor_m28D5E69F9FAD91D684DF701DFD2E89D665B4404D (FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_MessagingOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_MessagingOptions_m62A6D9E43B5680C9C10438BB4CE0D501F7757832 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_new_MessagingOptions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_new_MessagingOptions)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::MessagingOptions_SuppressNotificationPermissionPrompt_set(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_MessagingOptions_SuppressNotificationPermissionPrompt_set_mE87ACFF2EC98A7950978DD1F1CB96C862B3000BA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, bool ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_MessagingOptions_SuppressNotificationPermissionPrompt_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_MessagingOptions_SuppressNotificationPermissionPrompt_set)(____0_jarg1_marshaled, static_cast<int32_t>(___1_jarg2));
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, static_cast<int32_t>(___1_jarg2));
	#endif

}
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::MessagingOptions_SuppressNotificationPermissionPrompt_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_MessagingOptions_SuppressNotificationPermissionPrompt_get_mD4FAB02A28C710E9968D74714523D2F6C9BBE9D6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_MessagingOptions_SuppressNotificationPermissionPrompt_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_MessagingOptions_SuppressNotificationPermissionPrompt_get)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_MessagingOptions(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_MessagingOptions_m81B773FA04F99C2FCECE0A7C620C43257B9C94FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_delete_MessagingOptions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_delete_MessagingOptions)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::AndroidNotificationParams_ChannelId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_AndroidNotificationParams_ChannelId_get_mED7D6B65F23DE9A57FF98A764DE32FB5D748BFEF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_AndroidNotificationParams_ChannelId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_AndroidNotificationParams_ChannelId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_AndroidNotificationParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_AndroidNotificationParams_m6AF890BC6F9461A69A85121F491C53BF484996A7 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_new_AndroidNotificationParams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_new_AndroidNotificationParams)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_AndroidNotificationParams(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_AndroidNotificationParams_mDB617E24E0DD728EBA986BED3393415C296C1B21 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_delete_AndroidNotificationParams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_delete_AndroidNotificationParams)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_FirebaseNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_FirebaseNotification_m8FCE37C2E5F68CF6579CC705B13FC29FDC55B788 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_new_FirebaseNotification", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_new_FirebaseNotification)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseNotification(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseNotification_mF22FF56EE091E89BC9552FB1973ACA133164ABF2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_delete_FirebaseNotification", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_delete_FirebaseNotification)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Title_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Title_get_m79C024471BA851F554224435CA90A05B7F7EC437 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_Title_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_Title_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Body_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Body_get_mA085D3A805C3AFA96693BBE2FEF5E04F776DC735 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_Body_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_Body_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Icon_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Icon_get_m5D3005E5668CE48C1E4D2E95D84A38A70320FC45 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_Icon_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_Icon_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Sound_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Sound_get_mD67E4581D401A3218868F95C51CE8D9DCB2302BE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_Sound_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_Sound_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Badge_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Badge_get_m73E0B4DE7E95E04C3338A85F34DDF103812473A0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_Badge_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_Badge_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Tag_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Tag_get_mC43AF80798202FB7D3B9B8C877A5563E25BEE0A8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_Tag_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_Tag_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_Color_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_Color_get_mA62578F5DF42D5999DAEC55E1E46F8909C546DB0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_Color_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_Color_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_ClickAction_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_ClickAction_get_m5DCB41BCBD33804ADF1B2CCC4A74313650695165 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_ClickAction_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_ClickAction_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_BodyLocalizationKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_BodyLocalizationKey_get_mD0E12483924A8228F556B8548F7900308E1073CA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_BodyLocalizationKey_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_BodyLocalizationKey_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_BodyLocalizationArgs_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseNotification_BodyLocalizationArgs_get_m128D205AE4100A744598994A70638FB935722545 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_BodyLocalizationArgs_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_BodyLocalizationArgs_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_TitleLocalizationKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseNotification_TitleLocalizationKey_get_mCAC46BCFA67C2B0B3E197B590EAB823F904851CC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_TitleLocalizationKey_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_TitleLocalizationKey_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseNotification_TitleLocalizationArgs_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseNotification_TitleLocalizationArgs_get_m2E59E2D6B32B9C9E9DFA7AFF6988972C685C91BE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseNotification_TitleLocalizationArgs_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseNotification_TitleLocalizationArgs_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::new_FirebaseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_new_FirebaseMessage_mECD55C5864C872A7F5CC08D66043B13A8915ADDC (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_new_FirebaseMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_new_FirebaseMessage)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseMessage_m6E96B7ED6F6A0B340134144BFA6FF591FD843FDB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_delete_FirebaseMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_delete_FirebaseMessage)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_From_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_From_get_m5AEE384F6239C758EF3196B8F70B993CFE0513A6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_From_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_From_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_To_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_FirebaseMessage_To_set_m2BF33B675534EB88FC4EA6876922D82ACD456884 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_To_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_To_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_To_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_To_get_m85EED0AFDF1BAAFC89D191FB9AB4F7A1BF30CBE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_To_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_To_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_CollapseKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_CollapseKey_get_m2911462D893EB8BF5C4AECD1EB92CB0726334346 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_CollapseKey_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_CollapseKey_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Data_set(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_FirebaseMessage_Data_set_mBC41D1822630F4A2F56E4603BCF8783529636411 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_Data_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_Data_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Data_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseMessage_Data_get_m4ACA036AE0D59F5BFEC187FFD6A79D0157028D7E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_Data_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_Data_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_RawDataInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_FirebaseMessage_RawDataInternal_get_m79A050B510DA49202E6D8B45D1FC6741488234DA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_RawDataInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_RawDataInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_MessageId_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_FirebaseMessage_MessageId_set_mC858D3361244FFD8BB5BA9813CE086626FD012F8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_MessageId_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_MessageId_set)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_MessageId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_MessageId_get_m8A91EED8C6493AF99DE495240F4E26D18C180ACF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_MessageId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_MessageId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_MessageType_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_MessageType_get_m783E254011520D8809FFE1AB3A5821158BC9A88F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_MessageType_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_MessageType_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Priority_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_Priority_get_mC133DA4D5FD08040D6F868DF46DFCCBEB27EC7BF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_Priority_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_Priority_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Int32 Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_TimeToLiveInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseMessagingPINVOKE_FirebaseMessage_TimeToLiveInternal_get_m9929FA0AD178B0E84260A59D14E307E9A1402493 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_TimeToLiveInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_TimeToLiveInternal_get)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_Error_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_Error_get_m17D2FE9C32CDAF67C09AA379C1AD495342276797 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_Error_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_Error_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_ErrorDescription_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_ErrorDescription_get_m2DE0CFDECB8640F66C5E3D3430D755D9163BB761 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_ErrorDescription_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_ErrorDescription_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_NotificationOpened_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_FirebaseMessage_NotificationOpened_get_mAD956F57B433F63327F5B624E1FBFDF2977CC005 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_NotificationOpened_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_NotificationOpened_get)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_LinkInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_LinkInternal_get_m8264B3903B899E6BFEF3816D923D00DC5DF88D44 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_LinkInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_LinkInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_original_priority_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_original_priority_get_m958F88AABD26BFE2B64DE52065DAF17CA886BD92 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_original_priority_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_original_priority_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Int64 Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_SentTimeInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FirebaseMessagingPINVOKE_FirebaseMessage_SentTimeInternal_get_mE88F2734F78764152137FD810C08776F229E0244 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_FirebaseMessage_SentTimeInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_SentTimeInternal_get)(____0_jarg1_marshaled);
	#else
	int64_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::IsTokenRegistrationOnInitEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_IsTokenRegistrationOnInitEnabledInternal_m229BEA20B7B6678AACD4856107C37BF26FC2E56B (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_IsTokenRegistrationOnInitEnabledInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_IsTokenRegistrationOnInitEnabledInternal)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetTokenRegistrationOnInitEnabledInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetTokenRegistrationOnInitEnabledInternal_mE6744A31D42AB6CBAB850C8344BE196975FDF00E (bool ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_SetTokenRegistrationOnInitEnabledInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetTokenRegistrationOnInitEnabledInternal)(static_cast<int32_t>(___0_jarg1));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_jarg1));
	#endif

}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_RequestPermission_m237A8F3236EF76BA8CE80B72ACAFE2838A75A957 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_RequestPermission", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_RequestPermission)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::Subscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_Subscribe_m4DB87EBEAEF92E530628CCE7783CE30F5948662A (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_Subscribe", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_Subscribe)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::Unsubscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_Unsubscribe_m495FFB8DB434D036D8177D6522FDE700C6515223 (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_Unsubscribe", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_Unsubscribe)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return returnValue;
}
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE::DeliveryMetricsExportToBigQueryEnabledInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessagingPINVOKE_DeliveryMetricsExportToBigQueryEnabledInternal_m215ED893AC6F3F03AE39B6FE6898CDF090DBE108 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_DeliveryMetricsExportToBigQueryEnabledInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_DeliveryMetricsExportToBigQueryEnabledInternal)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetDeliveryMetricsExportToBigQueryInternal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetDeliveryMetricsExportToBigQueryInternal_mE26E739BAB29FF7E7F801F718F0BA15EE9F3CD20 (bool ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_SetDeliveryMetricsExportToBigQueryInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetDeliveryMetricsExportToBigQueryInternal)(static_cast<int32_t>(___0_jarg1));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_jarg1));
	#endif

}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::GetTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_GetTokenInternalAsync_mC4AC0DB08B64E2107866CFCB5890F6A381981C92 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_GetTokenInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_GetTokenInternalAsync)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::DeleteTokenInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_DeleteTokenInternalAsync_m7E9BD957C0D07B2154991F4F90BF4BEBA9B9DC82 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_DeleteTokenInternalAsync", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_DeleteTokenInternalAsync)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacks_mF1DDB441F19EC45D4388A39FD09B77D5A76D44D2 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___0_jarg1, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_SetListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	Il2CppMethodPointer ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_jarg1));

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetListenerCallbacks)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_m8AA0CF4CD39336092A4701D553229A8A86B3F004 (bool ___0_jarg1, bool ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4 + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_SetListenerCallbacksEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetListenerCallbacksEnabled)(static_cast<int32_t>(___0_jarg1), static_cast<int32_t>(___1_jarg2));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_jarg1), static_cast<int32_t>(___1_jarg2));
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SendPendingEvents_mAD2515BF6CA3B8BBA483D3ECDFFE3E9FFA5211A5 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_SendPendingEvents", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SendPendingEvents)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::MessageCopyNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_MessageCopyNotification_m98242B60DA017BEFEB2B57BE3DC5BC41E9BEC561 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_MessageCopyNotification", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_MessageCopyNotification)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Messaging.FirebaseMessagingPINVOKE::NotificationCopyAndroidNotificationParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseMessagingPINVOKE_NotificationCopyAndroidNotificationParams_m449476925BD90CD8A2F1B215A948A6C8BE79BAE2 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "Firebase_Messaging_CSharp_NotificationCopyAndroidNotificationParams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_NotificationCopyAndroidNotificationParams)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m060171326D3019978B8787843E25864D51C7FAA1(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m060171326D3019978B8787843E25864D51C7FAA1(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m275F6E5A16018DCBAA2681A7FD3FE45FD9389751(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m275F6E5A16018DCBAA2681A7FD3FE45FD9389751(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m05C0DE6E237D8E63649531A8AAA6B8906E6EC630(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m05C0DE6E237D8E63649531A8AAA6B8906E6EC630(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mE5189F13B9831CFEEACC0F704AA1EE4C28D6977A(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mE5189F13B9831CFEEACC0F704AA1EE4C28D6977A(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mBCAEC39E36BE3422612773135A1347C38B9EE204(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_mBCAEC39E36BE3422612773135A1347C38B9EE204(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mE112B67C45E3FE746CC170726DCAE25F581F6321(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mE112B67C45E3FE746CC170726DCAE25F581F6321(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mAE6AEF4401C6393115479364B05173FE5A4D4E20(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mAE6AEF4401C6393115479364B05173FE5A4D4E20(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m29AC22ED749B13344003A120E77C26E7C736A4E4(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m29AC22ED749B13344003A120E77C26E7C736A4E4(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m85D046E64786517BF671D14464F013E6E10F74FF(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m85D046E64786517BF671D14464F013E6E10F74FF(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m925DE663512069FE450704037A528E83270A91BE(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m925DE663512069FE450704037A528E83270A91BE(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m801705A321121C304A58AD98B229F83BD2D974CE(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m801705A321121C304A58AD98B229F83BD2D974CE(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mA9DCC213D165EE7CCA5227529BA5542A4D2D8751(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mA9DCC213D165EE7CCA5227529BA5542A4D2D8751(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m890F72E31BC6A96FF2A1F7906C188AA1D26C89AD(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m890F72E31BC6A96FF2A1F7906C188AA1D26C89AD(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mEB8E8B44C42D54AD9E0160B9EE2F7862637B3E0F(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mEB8E8B44C42D54AD9E0160B9EE2F7862637B3E0F(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m5133CA4E9E9E6D4988839DBC266EFF6A88DE8441 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m060171326D3019978B8787843E25864D51C7FAA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_mA9DCC213D165EE7CCA5227529BA5542A4D2D8751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m890F72E31BC6A96FF2A1F7906C188AA1D26C89AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mEB8E8B44C42D54AD9E0160B9EE2F7862637B3E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m275F6E5A16018DCBAA2681A7FD3FE45FD9389751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m05C0DE6E237D8E63649531A8AAA6B8906E6EC630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mAE6AEF4401C6393115479364B05173FE5A4D4E20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mE5189F13B9831CFEEACC0F704AA1EE4C28D6977A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_mBCAEC39E36BE3422612773135A1347C38B9EE204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_mE112B67C45E3FE746CC170726DCAE25F581F6321_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m29AC22ED749B13344003A120E77C26E7C736A4E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m85D046E64786517BF671D14464F013E6E10F74FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m925DE663512069FE450704037A528E83270A91BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m801705A321121C304A58AD98B229F83BD2D974CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_0 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m060171326D3019978B8787843E25864D51C7FAA1_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_1 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m275F6E5A16018DCBAA2681A7FD3FE45FD9389751_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_2 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m05C0DE6E237D8E63649531A8AAA6B8906E6EC630_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_3 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mE5189F13B9831CFEEACC0F704AA1EE4C28D6977A_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_4 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_mBCAEC39E36BE3422612773135A1347C38B9EE204_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_5 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_mE112B67C45E3FE746CC170726DCAE25F581F6321_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_6 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mAE6AEF4401C6393115479364B05173FE5A4D4E20_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_7 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m29AC22ED749B13344003A120E77C26E7C736A4E4_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_8 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_m85D046E64786517BF671D14464F013E6E10F74FF_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_9 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m925DE663512069FE450704037A528E83270A91BE_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_10 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m801705A321121C304A58AD98B229F83BD2D974CE_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_11 = (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_mA9DCC213D165EE7CCA5227529BA5542A4D2D8751_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_12 = (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m890F72E31BC6A96FF2A1F7906C188AA1D26C89AD_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_13 = (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mEB8E8B44C42D54AD9E0160B9EE2F7862637B3E0F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_14 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_15 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_16 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_17 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_18 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_19 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_20 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_21 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_22 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_23 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_24 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_mE9FD8897A9E0114F13D220A164222ACC8572D236(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_25 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_26 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_27 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_m58DD8D2EF2B044A516367EC4A2E78EBB68641F13(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m74E1F593CDD0E2FA4B49CBD999705045945E5EB9 (SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_mE9FD8897A9E0114F13D220A164222ACC8572D236 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___0_applicationDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___1_arithmeticDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___2_divideByZeroDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___3_indexOutOfRangeDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___4_invalidCastDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___5_invalidOperationDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___6_ioDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___7_nullReferenceDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___8_outOfMemoryDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___9_overflowDelegate, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "SWIGRegisterExceptionCallbacks_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_applicationDelegate' to native representation
	Il2CppMethodPointer ____0_applicationDelegate_marshaled = NULL;
	____0_applicationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_applicationDelegate));

	// Marshaling of parameter '___1_arithmeticDelegate' to native representation
	Il2CppMethodPointer ____1_arithmeticDelegate_marshaled = NULL;
	____1_arithmeticDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_arithmeticDelegate));

	// Marshaling of parameter '___2_divideByZeroDelegate' to native representation
	Il2CppMethodPointer ____2_divideByZeroDelegate_marshaled = NULL;
	____2_divideByZeroDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_divideByZeroDelegate));

	// Marshaling of parameter '___3_indexOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____3_indexOutOfRangeDelegate_marshaled = NULL;
	____3_indexOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___3_indexOutOfRangeDelegate));

	// Marshaling of parameter '___4_invalidCastDelegate' to native representation
	Il2CppMethodPointer ____4_invalidCastDelegate_marshaled = NULL;
	____4_invalidCastDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___4_invalidCastDelegate));

	// Marshaling of parameter '___5_invalidOperationDelegate' to native representation
	Il2CppMethodPointer ____5_invalidOperationDelegate_marshaled = NULL;
	____5_invalidOperationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___5_invalidOperationDelegate));

	// Marshaling of parameter '___6_ioDelegate' to native representation
	Il2CppMethodPointer ____6_ioDelegate_marshaled = NULL;
	____6_ioDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___6_ioDelegate));

	// Marshaling of parameter '___7_nullReferenceDelegate' to native representation
	Il2CppMethodPointer ____7_nullReferenceDelegate_marshaled = NULL;
	____7_nullReferenceDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___7_nullReferenceDelegate));

	// Marshaling of parameter '___8_outOfMemoryDelegate' to native representation
	Il2CppMethodPointer ____8_outOfMemoryDelegate_marshaled = NULL;
	____8_outOfMemoryDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___8_outOfMemoryDelegate));

	// Marshaling of parameter '___9_overflowDelegate' to native representation
	Il2CppMethodPointer ____9_overflowDelegate_marshaled = NULL;
	____9_overflowDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___9_overflowDelegate));

	// Marshaling of parameter '___10_systemExceptionDelegate' to native representation
	Il2CppMethodPointer ____10_systemExceptionDelegate_marshaled = NULL;
	____10_systemExceptionDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___10_systemExceptionDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseMessaging)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_m58DD8D2EF2B044A516367EC4A2E78EBB68641F13 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___0_argumentDelegate, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_argumentDelegate' to native representation
	Il2CppMethodPointer ____0_argumentDelegate_marshaled = NULL;
	____0_argumentDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_argumentDelegate));

	// Marshaling of parameter '___1_argumentNullDelegate' to native representation
	Il2CppMethodPointer ____1_argumentNullDelegate_marshaled = NULL;
	____1_argumentNullDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_argumentNullDelegate));

	// Marshaling of parameter '___2_argumentOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____2_argumentOutOfRangeDelegate_marshaled = NULL;
	____2_argumentOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_argumentOutOfRangeDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m060171326D3019978B8787843E25864D51C7FAA1 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m275F6E5A16018DCBAA2681A7FD3FE45FD9389751 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m05C0DE6E237D8E63649531A8AAA6B8906E6EC630 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mE5189F13B9831CFEEACC0F704AA1EE4C28D6977A (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mBCAEC39E36BE3422612773135A1347C38B9EE204 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mE112B67C45E3FE746CC170726DCAE25F581F6321 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mAE6AEF4401C6393115479364B05173FE5A4D4E20 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m29AC22ED749B13344003A120E77C26E7C736A4E4 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m85D046E64786517BF671D14464F013E6E10F74FF (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m925DE663512069FE450704037A528E83270A91BE (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m801705A321121C304A58AD98B229F83BD2D974CE (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mA9DCC213D165EE7CCA5227529BA5542A4D2D8751 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m890F72E31BC6A96FF2A1F7906C188AA1D26C89AD (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___0_message;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, NULL);
		___0_message = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___1_paramName;
		String_t* L_7 = ___0_message;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_8, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_8, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mEB8E8B44C42D54AD9E0160B9EE2F7862637B3E0F (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___0_message;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, NULL);
		___0_message = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___1_paramName;
		String_t* L_7 = ___0_message;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C(L_8, NULL);
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
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_Multicast(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* currentDelegate = reinterpret_cast<ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenInst(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenStatic(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenStaticInvoker(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_ClosedStaticInvoker(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_Multicast;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m38EC8BB036B505657F759A26E3F4BE28E09FCA79 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mBBE70D90534AC1185A5518ED58587E2704DD41B5 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_Multicast(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenInst(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenStatic(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenStaticInvoker(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_ClosedStaticInvoker(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Marshaling of parameter '___1_paramName' to native representation
	char* ____1_paramName_marshaled = NULL;
	____1_paramName_marshaled = il2cpp_codegen_marshal_string(___1_paramName);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled, ____1_paramName_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_paramName' native representation
	il2cpp_codegen_marshal_free(____1_paramName_marshaled);
	____1_paramName_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_Multicast;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m2D93C34636D1DFCB0EFCAC6EB2BF8139CBF7AE01 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___0_message, String_t* ___1_paramName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_message;
	__d_args[1] = ___1_paramName;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_mF2E23F3FF01CC5A367280A2FDE39E9EA74601270 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__ctor_mEB4B15C81BFBBD3849B5E5499FBFB7FFF142E438 (SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mB4EA8ACBC5721535378620BA12F382B9A7F5A661 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var)));
		Exception_t* L_1 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_4 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_5 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_mAEBE63CCE77CE276D93CCD547FCABBDDA44CD41C_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t* L_6 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				RuntimeObject* L_10 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
			int32_t L_11 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			goto IL_0059;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mB7742B33A82F51C884CE900D5D7363092288C16D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_1 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_2;
		((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				RuntimeObject* L_6 = V_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
			int32_t L_7 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
			goto IL_004c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Exception_t* L_8 = V_0;
		return L_8;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m981735CCDAD2214DDE217B250B501E50000624DC (const RuntimeMethod* method) 
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mD8088413B24D769437B4E09A4AB7826A55A5A9A7(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mD8088413B24D769437B4E09A4AB7826A55A5A9A7(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m2DBDB30961019C15858D5F5F9D24AA4AE522FCEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mD8088413B24D769437B4E09A4AB7826A55A5A9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* L_0 = (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6*)il2cpp_codegen_object_new(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m959EEC67F999197EA2457A7CD4684BD8588DE11E(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_mD8088413B24D769437B4E09A4AB7826A55A5A9A7_RuntimeMethod_var), NULL);
		((SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* L_1 = ((SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m7E9D6DDEBAAB3D995163D4FE671EC98B7071F8FA(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m374221329F17BCC4EED8997888A382721EFCF171 (SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m7E9D6DDEBAAB3D995163D4FE671EC98B7071F8FA (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_6_2"), "SWIGRegisterStringCallback_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_6_2_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseMessaging)(____0_stringDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_stringDelegate_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mD8088413B24D769437B4E09A4AB7826A55A5A9A7 (String_t* ___0_cString, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_cString;
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
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_Multicast(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* currentDelegate = reinterpret_cast<SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenInst(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenStatic(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenStaticInvoker(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_ClosedStaticInvoker(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m959EEC67F999197EA2457A7CD4684BD8588DE11E (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_Multicast;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mFAB1DDA1D94AE9288BD29FF06D6A6F3E7B849D64 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m1471936A64F8A71B38B4C4AC78DD8A438DCE1BC8 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (String_t*)__result;
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
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_mC5C9E0BADB0E232C7A30880B214C00E725862884 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_m742FE4419880C19B9763BD1D0AEC5E6BB048DCA0 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FirebaseMessagingPINVOKE_new_FirebaseMessage_mECD55C5864C872A7F5CC08D66043B13A8915ADDC(NULL);
		FirebaseMessage__ctor_mC5C9E0BADB0E232C7A30880B214C00E725862884(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage__ctor_m742FE4419880C19B9763BD1D0AEC5E6BB048DCA0_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseMessage::getCPtr(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseMessage_getCPtr_mD81D6482F2E4D77D3C8B09A850FF2BB30084D9DF (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), NULL, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_3 = ___0_obj;
		NullCheck(L_3);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4 = L_3->___swigCPtr_0;
		G_B3_0 = L_4;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Finalize_m4252175F6CDBBE170F715C29E46FDCFCF3939209 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			FirebaseMessage_Dispose_mDF6750A30E95068A13849BA85014E518D949D461(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mDF6750A30E95068A13849BA85014E518D949D461 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F*)(&__this->___swigCPtr_0);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_6;
				L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0054_1;
				}
			}
			{
				bool L_7 = __this->___swigCMemOwn_1;
				if (!L_7)
				{
					goto IL_0043_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
				FirebaseMessagingPINVOKE_delete_FirebaseMessage_m6E96B7ED6F6A0B340134144BFA6FF591FD843FDB(L_8, NULL);
			}

IL_0043_1:
			{
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
				memset((&L_10), 0, sizeof(L_10));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_10), NULL, L_9, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_0054_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// System.TimeSpan Firebase.Messaging.FirebaseMessage::get_TimeToLive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A FirebaseMessage_get_TimeToLive_m6BD4BB702BDECAE1765DA2D2AA9930BF2B411FF3 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = FirebaseMessage_get_TimeToLiveInternal_m7B286723B3C6742919DD44E32BBF2E5A083239B9(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F(((double)L_0), NULL);
		return L_1;
	}
}
// System.DateTime Firebase.Messaging.FirebaseMessage::get_SentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FirebaseMessage_get_SentTime_mF70776E0B6011F8A94F0C60AD1E692925EE67631 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = FirebaseMessage_get_SentTimeInternal_m5D5B6504F32A67B4F93D606B9575DAC7DC9AA15D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&((FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var))->___UnixEpochUtc_2), ((double)L_0), NULL);
		return L_1;
	}
}
// Firebase.Messaging.FirebaseNotification Firebase.Messaging.FirebaseMessage::get_Notification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* FirebaseMessage_get_Notification_mC9378F111739D7593BC3E8F085D9500B218A4A2F (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F*)(&__this->___swigCPtr_0);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FirebaseMessaging_MessageCopyNotification_mBDE449E1BE3BC2BDB06CD88250C714C6DDA6465A(L_1, NULL);
		V_0 = L_2;
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_6 = V_0;
		FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* L_7 = (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A*)il2cpp_codegen_object_new(FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FirebaseNotification__ctor_mCF6D66F4CD463FA93FCC5FA2C3CA435654534A9C(L_7, L_6, (bool)1, NULL);
		return L_7;
	}

IL_0029:
	{
		return (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A*)NULL;
	}
}
// System.Uri Firebase.Messaging.FirebaseMessage::get_Link()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* FirebaseMessage_get_Link_m499FEB761A3F6A88E64F2D69F9A03F0E28D42E5A (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = FirebaseMessage_get_LinkInternal_m54D8F42AB16E2B92AEB11DA05006E9692F86F506(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = FirebaseApp_UrlStringToUri_mD212E37D37B2F0DE5EE30CDAAB0E95E5E87B4F79(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Firebase.Messaging.FirebaseMessage::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FirebaseMessage_get_RawData_mB4FC7C03D209D02B28D4357E19F3E776B4A4450B (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_0;
		L_0 = FirebaseMessage_get_RawDataInternal_m9BAAF0C9D87B488D82B68B1CB8E6A9712074B03D(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CharVector_get_Count_mAB2A8CDBA2A0E72367165A550CC78259C2DAAB3E(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_3;
		L_3 = FirebaseMessage_get_RawDataInternal_m9BAAF0C9D87B488D82B68B1CB8E6A9712074B03D(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		CharVector_CopyTo_m69B2856E774E1A18A77667577080E276A5B3E404(L_3, L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_From()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_From_m6A8B7F66B7C0E65663FF0054C694CF5C957AC8E4 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_From_get_m5AEE384F6239C758EF3196B8F70B993CFE0513A6(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_From_m6A8B7F66B7C0E65663FF0054C694CF5C957AC8E4_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::set_To(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_set_To_m760C1FD5853796C542F1252B1DA42DA830521018 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_FirebaseMessage_To_set_m2BF33B675534EB88FC4EA6876922D82ACD456884(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_set_To_m760C1FD5853796C542F1252B1DA42DA830521018_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_To()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_To_m0D1BD6DDA27E4B38F1F8CA9E36226E0199D4499D (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_To_get_m85EED0AFDF1BAAFC89D191FB9AB4F7A1BF30CBE3(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_To_m0D1BD6DDA27E4B38F1F8CA9E36226E0199D4499D_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_CollapseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_CollapseKey_m339C3DF6AE3DC040AF94426569EC2195C6BB82EA (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_CollapseKey_get_m2911462D893EB8BF5C4AECD1EB92CB0726334346(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_CollapseKey_m339C3DF6AE3DC040AF94426569EC2195C6BB82EA_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_set_Data_mAF86D91E3BAE98093F6B824F0DE0987F117775FE (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* V_0 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_0 = (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB*)il2cpp_codegen_object_new(StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringStringMap__ctor_m5295C0F5394545250F06A5F0A53C9ABB48D67794(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0012_1:
			{
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_7 = V_0;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_8 = V_1;
				NullCheck(L_7);
				StringStringMap_Add_mA5E43086723E81409FB93BD34211779B2B95B466(L_7, L_8, NULL);
			}

IL_0020_1:
			{
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_12 = V_0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
		L_13 = StringStringMap_getCPtr_m9E30BAD269827991D469F743D10098904502616D(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_FirebaseMessage_Data_set_mBC41D1822630F4A2F56E4603BCF8783529636411(L_11, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_15;
		L_15 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_set_Data_mAF86D91E3BAE98093F6B824F0DE0987F117775FE_RuntimeMethod_var)));
	}

IL_005e:
	{
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Firebase.Messaging.FirebaseMessage::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseMessage_get_Data_m4633EBF49233BC6304EBA4E9701C6954DBF6BCDA (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* V_1 = NULL;
	StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_Data_get_m4ACA036AE0D59F5BFEC187FFD6A79D0157028D7E(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB*)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_5 = V_0;
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_6 = (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB*)il2cpp_codegen_object_new(StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringStringMap__ctor_m493F3867E24E87A4D890A56366DAE5D3E2172E35(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_Data_m4633EBF49233BC6304EBA4E9701C6954DBF6BCDA_RuntimeMethod_var)));
	}

IL_003a:
	{
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_9 = V_1;
		return L_9;
	}
}
// Firebase.CharVector Firebase.Messaging.FirebaseMessage::get_RawDataInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* FirebaseMessage_get_RawDataInternal_m9BAAF0C9D87B488D82B68B1CB8E6A9712074B03D (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* V_1 = NULL;
	CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_RawDataInternal_get_m79A050B510DA49202E6D8B45D1FC6741488234DA(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74*)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_5 = V_0;
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_6 = (CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74*)il2cpp_codegen_object_new(CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CharVector__ctor_mEA7C221A367DCAF1A482672A6D9392B7A0B7C75E(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_RawDataInternal_m9BAAF0C9D87B488D82B68B1CB8E6A9712074B03D_RuntimeMethod_var)));
	}

IL_003a:
	{
		CharVector_t2241E8448ED3F4FAF6DAA696F0F5BE5D67807A74* L_9 = V_1;
		return L_9;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::set_MessageId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_set_MessageId_m73059B5444A66AFBA4F3D9841786DADE503C5DB0 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_FirebaseMessage_MessageId_set_mC858D3361244FFD8BB5BA9813CE086626FD012F8(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_set_MessageId_m73059B5444A66AFBA4F3D9841786DADE503C5DB0_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_MessageId_mA06224C6A9C60DA2E73C30DF894B9A66EA27FFEC (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_MessageId_get_m8A91EED8C6493AF99DE495240F4E26D18C180ACF(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_MessageId_mA06224C6A9C60DA2E73C30DF894B9A66EA27FFEC_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_MessageType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_MessageType_mE74F760E1067384AFF099776E1EB2E608298B779 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_MessageType_get_m783E254011520D8809FFE1AB3A5821158BC9A88F(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_MessageType_mE74F760E1067384AFF099776E1EB2E608298B779_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_Priority_m154A74DED37BB580CD0B40B52417B5ADF9650841 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_Priority_get_mC133DA4D5FD08040D6F868DF46DFCCBEB27EC7BF(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_Priority_m154A74DED37BB580CD0B40B52417B5ADF9650841_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessage::get_TimeToLiveInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseMessage_get_TimeToLiveInternal_m7B286723B3C6742919DD44E32BBF2E5A083239B9 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_TimeToLiveInternal_get_m9929FA0AD178B0E84260A59D14E307E9A1402493(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_TimeToLiveInternal_m7B286723B3C6742919DD44E32BBF2E5A083239B9_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_Error_m628F181C4444596F5698E1AFCB6E67C00EE7B2EE (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_Error_get_m17D2FE9C32CDAF67C09AA379C1AD495342276797(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_Error_m628F181C4444596F5698E1AFCB6E67C00EE7B2EE_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_ErrorDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_ErrorDescription_m887FE59C8D3D2335AAC0BBCE98C912DFE92BB23C (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_ErrorDescription_get_m2DE0CFDECB8640F66C5E3D3430D755D9163BB761(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_ErrorDescription_m887FE59C8D3D2335AAC0BBCE98C912DFE92BB23C_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Messaging.FirebaseMessage::get_NotificationOpened()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseMessage_get_NotificationOpened_m20366C61D5F048F1C7C65471A7961E3F21AC9C52 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_NotificationOpened_get_mAD956F57B433F63327F5B624E1FBFDF2977CC005(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_NotificationOpened_m20366C61D5F048F1C7C65471A7961E3F21AC9C52_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_LinkInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_LinkInternal_m54D8F42AB16E2B92AEB11DA05006E9692F86F506 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_LinkInternal_get_m8264B3903B899E6BFEF3816D923D00DC5DF88D44(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_LinkInternal_m54D8F42AB16E2B92AEB11DA05006E9692F86F506_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseMessage::get_original_priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_original_priority_m6AD8FA72315DEA5848FE158C019ADE192C1C7E7D (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_original_priority_get_m958F88AABD26BFE2B64DE52065DAF17CA886BD92(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_original_priority_m6AD8FA72315DEA5848FE158C019ADE192C1C7E7D_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Int64 Firebase.Messaging.FirebaseMessage::get_SentTimeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FirebaseMessage_get_SentTimeInternal_m5D5B6504F32A67B4F93D606B9575DAC7DC9AA15D (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_SentTimeInternal_get_mE88F2734F78764152137FD810C08776F229E0244(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_SentTimeInternal_m5D5B6504F32A67B4F93D606B9575DAC7DC9AA15D_RuntimeMethod_var)));
	}

IL_001c:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__cctor_m12B7C5830CB9A1250885E96B79B21628E9BAB953 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var))->___UnixEpochUtc_2 = L_0;
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
// System.Void Firebase.Messaging.FirebaseNotification::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseNotification__ctor_mCF6D66F4CD463FA93FCC5FA2C3CA435654534A9C (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseNotification__ctor_mAC708CF5A2697DB927E89CFBD4E79A2B2173CD48 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FirebaseMessagingPINVOKE_new_FirebaseNotification_m8FCE37C2E5F68CF6579CC705B13FC29FDC55B788(NULL);
		FirebaseNotification__ctor_mCF6D66F4CD463FA93FCC5FA2C3CA435654534A9C(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification__ctor_mAC708CF5A2697DB927E89CFBD4E79A2B2173CD48_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseNotification::getCPtr(Firebase.Messaging.FirebaseNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseNotification_getCPtr_m46ABA54408E960FC1E679952A27A3856895A0331 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), NULL, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* L_3 = ___0_obj;
		NullCheck(L_3);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4 = L_3->___swigCPtr_0;
		G_B3_0 = L_4;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Messaging.FirebaseNotification::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseNotification_Finalize_m2D0EF9490DB0BEDA888A2123584F957EF10B75E7 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			FirebaseNotification_Dispose_m1630692AF5E7EE75695A7F14106FD10743753EB3(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseNotification::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseNotification_Dispose_m1630692AF5E7EE75695A7F14106FD10743753EB3 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F*)(&__this->___swigCPtr_0);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_6;
				L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0054_1;
				}
			}
			{
				bool L_7 = __this->___swigCMemOwn_1;
				if (!L_7)
				{
					goto IL_0043_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
				FirebaseMessagingPINVOKE_delete_FirebaseNotification_mF22FF56EE091E89BC9552FB1973ACA133164ABF2(L_8, NULL);
			}

IL_0043_1:
			{
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
				memset((&L_10), 0, sizeof(L_10));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_10), NULL, L_9, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_0054_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// Firebase.Messaging.AndroidNotificationParams Firebase.Messaging.FirebaseNotification::get_Android()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* FirebaseNotification_get_Android_mB972D002792C85C0ABF73EA076F729D5EECD0279 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F*)(&__this->___swigCPtr_0);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FirebaseMessaging_NotificationCopyAndroidNotificationParams_m7DD4C4D386B8C61E1DE718DC02B6A4E7DE6CD339(L_1, NULL);
		V_0 = L_2;
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_6 = V_0;
		AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* L_7 = (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A*)il2cpp_codegen_object_new(AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AndroidNotificationParams__ctor_m06AD4DA7A6AC447716D6A9EE4550DF106525F959(L_7, L_6, (bool)1, NULL);
		return L_7;
	}

IL_0029:
	{
		return (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A*)NULL;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_Title_mE13C0B56A0B81DECA17D6BC996E1376240A5F96D (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_Title_get_m79C024471BA851F554224435CA90A05B7F7EC437(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_Title_mE13C0B56A0B81DECA17D6BC996E1376240A5F96D_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_Body_mEFB4117BAE3B281BB0C92DE332459AE63DB32343 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_Body_get_mA085D3A805C3AFA96693BBE2FEF5E04F776DC735(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_Body_mEFB4117BAE3B281BB0C92DE332459AE63DB32343_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_Icon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_Icon_m8D00AC4BA1191ED24F52B3F85D7B56DF4E9E6D7B (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_Icon_get_m5D3005E5668CE48C1E4D2E95D84A38A70320FC45(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_Icon_m8D00AC4BA1191ED24F52B3F85D7B56DF4E9E6D7B_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_Sound_mCC04130300784A12DC864617A6FBC8C144CAF24F (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_Sound_get_mD67E4581D401A3218868F95C51CE8D9DCB2302BE(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_Sound_mCC04130300784A12DC864617A6FBC8C144CAF24F_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_Badge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_Badge_mFAF2E4B800BCE96112724BEB780143D6E228670E (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_Badge_get_m73E0B4DE7E95E04C3338A85F34DDF103812473A0(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_Badge_mFAF2E4B800BCE96112724BEB780143D6E228670E_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_Tag_m519E0B46290C433EA85BFFC0435848CA0DC6EE8F (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_Tag_get_mC43AF80798202FB7D3B9B8C877A5563E25BEE0A8(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_Tag_m519E0B46290C433EA85BFFC0435848CA0DC6EE8F_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_Color_m8E72F7B6988F032E60427AFABEC2CA3D4EEEB1B8 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_Color_get_mA62578F5DF42D5999DAEC55E1E46F8909C546DB0(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_Color_m8E72F7B6988F032E60427AFABEC2CA3D4EEEB1B8_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_ClickAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_ClickAction_m4E42D4CF9017681EC8A66D54A397C7ED07F57EF0 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_ClickAction_get_m5DCB41BCBD33804ADF1B2CCC4A74313650695165(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_ClickAction_m4E42D4CF9017681EC8A66D54A397C7ED07F57EF0_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_BodyLocalizationKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_BodyLocalizationKey_mD3A07666F5C03B3DCCCD8ACB12B5CD7C1937E01F (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_BodyLocalizationKey_get_mD0E12483924A8228F556B8548F7900308E1073CA(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_BodyLocalizationKey_mD3A07666F5C03B3DCCCD8ACB12B5CD7C1937E01F_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Firebase.Messaging.FirebaseNotification::get_BodyLocalizationArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseNotification_get_BodyLocalizationArgs_m3497C125427EEE8528663A71AF83071EC867F2DE (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* V_1 = NULL;
	StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_BodyLocalizationArgs_get_m128D205AE4100A744598994A70638FB935722545(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451*)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_5 = V_0;
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_6 = (StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451*)il2cpp_codegen_object_new(StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringList__ctor_mE8BF198CF78FE1F0CE2270373652B8C5F991E521(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_BodyLocalizationArgs_m3497C125427EEE8528663A71AF83071EC867F2DE_RuntimeMethod_var)));
	}

IL_003a:
	{
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_9 = V_1;
		return L_9;
	}
}
// System.String Firebase.Messaging.FirebaseNotification::get_TitleLocalizationKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseNotification_get_TitleLocalizationKey_m7B87BAD6A317D86656AC82E6242519E31092A1A9 (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_TitleLocalizationKey_get_mCAC46BCFA67C2B0B3E197B590EAB823F904851CC(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_TitleLocalizationKey_m7B87BAD6A317D86656AC82E6242519E31092A1A9_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Firebase.Messaging.FirebaseNotification::get_TitleLocalizationArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseNotification_get_TitleLocalizationArgs_mF276A7644F8D6DE696B39204A82CB705485ADCEA (FirebaseNotification_t17D8D8BE158C522C9DBA575BB7295EBE3413EB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* V_1 = NULL;
	StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseNotification_TitleLocalizationArgs_get_m2E59E2D6B32B9C9E9DFA7AFF6988972C685C91BE(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451*)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_5 = V_0;
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_6 = (StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451*)il2cpp_codegen_object_new(StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringList__ctor_mE8BF198CF78FE1F0CE2270373652B8C5F991E521(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseNotification_get_TitleLocalizationArgs_mF276A7644F8D6DE696B39204A82CB705485ADCEA_RuntimeMethod_var)));
	}

IL_003a:
	{
		StringList_t5D337A78A1D7F1DC7E30794C167F62CA037D8451* L_9 = V_1;
		return L_9;
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
// System.Void Firebase.Messaging.AndroidNotificationParams::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationParams__ctor_m06AD4DA7A6AC447716D6A9EE4550DF106525F959 (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Messaging.AndroidNotificationParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationParams__ctor_m14F9AA0AEAB945312E12E35AA16BE19E43A113CB (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FirebaseMessagingPINVOKE_new_AndroidNotificationParams_m6AF890BC6F9461A69A85121F491C53BF484996A7(NULL);
		AndroidNotificationParams__ctor_m06AD4DA7A6AC447716D6A9EE4550DF106525F959(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationParams__ctor_m14F9AA0AEAB945312E12E35AA16BE19E43A113CB_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Messaging.AndroidNotificationParams::getCPtr(Firebase.Messaging.AndroidNotificationParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F AndroidNotificationParams_getCPtr_m6B90A31C9281D038F642BD4767B0522C31210875 (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), NULL, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* L_3 = ___0_obj;
		NullCheck(L_3);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4 = L_3->___swigCPtr_0;
		G_B3_0 = L_4;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Messaging.AndroidNotificationParams::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationParams_Finalize_m352EEFD6DCF828E48365139585BE77A21CE572B1 (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Messaging.AndroidNotificationParams::Dispose() */, __this);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.AndroidNotificationParams::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationParams_Dispose_mCFA8A35D39A7E457B11297DC489E9503E05A28FB (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F*)(&__this->___swigCPtr_0);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_6;
				L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0054_1;
				}
			}
			{
				bool L_7 = __this->___swigCMemOwn_1;
				if (!L_7)
				{
					goto IL_0043_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
				FirebaseMessagingPINVOKE_delete_AndroidNotificationParams_mDB617E24E0DD728EBA986BED3393415C296C1B21(L_8, NULL);
			}

IL_0043_1:
			{
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
				memset((&L_10), 0, sizeof(L_10));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_10), NULL, L_9, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_0054_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// System.String Firebase.Messaging.AndroidNotificationParams::get_ChannelId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationParams_get_ChannelId_mC1C24D8979C03D54B70F71FFD247C1015FD22647 (AndroidNotificationParams_t5D31ABDF15208A4697A746B167C7C87A20CD5B1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_AndroidNotificationParams_ChannelId_get_mED7D6B65F23DE9A57FF98A764DE32FB5D748BFEF(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationParams_get_ChannelId_mC1C24D8979C03D54B70F71FFD247C1015FD22647_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
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
// System.Void Firebase.Messaging.MessagingOptions::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingOptions__ctor_m37015A43AAD16713DBED60EFAF1166BA1CBC4E66 (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Messaging.MessagingOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingOptions__ctor_m4BF8BBF58B12D19C6D8969066A2F0F9B44FA4B6A (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = FirebaseMessagingPINVOKE_new_MessagingOptions_m62A6D9E43B5680C9C10438BB4CE0D501F7757832(NULL);
		MessagingOptions__ctor_m37015A43AAD16713DBED60EFAF1166BA1CBC4E66(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessagingOptions__ctor_m4BF8BBF58B12D19C6D8969066A2F0F9B44FA4B6A_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Messaging.MessagingOptions::getCPtr(Firebase.Messaging.MessagingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F MessagingOptions_getCPtr_m39F5A4D91600F431C7CCE1DED8C10C293E8BA80C (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), NULL, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* L_3 = ___0_obj;
		NullCheck(L_3);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4 = L_3->___swigCPtr_0;
		G_B3_0 = L_4;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Messaging.MessagingOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingOptions_Finalize_mB89F803740F023F47867C11E6CEC35C8BDC81650 (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MessagingOptions_Dispose_m94380CF06AFC0085DE234447B1D7E1D09D2CC8D3(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.MessagingOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingOptions_Dispose_m94380CF06AFC0085DE234447B1D7E1D09D2CC8D3 (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F*)(&__this->___swigCPtr_0);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_6;
				L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0054_1;
				}
			}
			{
				bool L_7 = __this->___swigCMemOwn_1;
				if (!L_7)
				{
					goto IL_0043_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
				FirebaseMessagingPINVOKE_delete_MessagingOptions_m81B773FA04F99C2FCECE0A7C620C43257B9C94FA(L_8, NULL);
			}

IL_0043_1:
			{
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
				memset((&L_10), 0, sizeof(L_10));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_10), NULL, L_9, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_0054_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// System.Void Firebase.Messaging.MessagingOptions::set_SuppressNotificationPermissionPrompt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingOptions_set_SuppressNotificationPermissionPrompt_mF0705AB5502AE5D3211C451580B3CAFA91CCFBAC (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		bool L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_MessagingOptions_SuppressNotificationPermissionPrompt_set_mE87ACFF2EC98A7950978DD1F1CB96C862B3000BA(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessagingOptions_set_SuppressNotificationPermissionPrompt_mF0705AB5502AE5D3211C451580B3CAFA91CCFBAC_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Firebase.Messaging.MessagingOptions::get_SuppressNotificationPermissionPrompt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessagingOptions_get_SuppressNotificationPermissionPrompt_m20AE260F5BD27068C369328EDBD4131C46DF2907 (MessagingOptions_t8815B50D7DA2B2B7E1A353CD49EAE4E81997E65B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = FirebaseMessagingPINVOKE_MessagingOptions_SuppressNotificationPermissionPrompt_get_mD4FAB02A28C710E9968D74714523D2F6C9BBE9D6(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessagingOptions_get_SuppressNotificationPermissionPrompt_m20AE260F5BD27068C369328EDBD4131C46DF2907_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = V_0;
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
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mF420D689ACEE65740BA0E1A253DF2D33CBAFC061 (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = ___0_msg;
		MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A_inline(__this, L_0, NULL);
		return;
	}
}
// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* MessageReceivedEventArgs_get_Message_mB05C315AA155A3A35925369C5093FFB8B91C2BF6 (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, const RuntimeMethod* method) 
{
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___0_value, const RuntimeMethod* method) 
{
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
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
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_m834B72CF7DB04F86A4929BBDEFA7E969BFC09D21 (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___0_token;
		TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Firebase.Messaging.TokenReceivedEventArgs::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenReceivedEventArgs_get_Token_m238B04731212F820259074BD576723DCED8B719A (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318 (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A_inline (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___0_value, const RuntimeMethod* method) 
{
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318_inline (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
