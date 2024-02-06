#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52;
// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381;
IL2CPP_EXTERN_C String_t* _stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7;
IL2CPP_EXTERN_C String_t* _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D;
IL2CPP_EXTERN_C String_t* _stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148;
IL2CPP_EXTERN_C String_t* _stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949;
IL2CPP_EXTERN_C String_t* _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F;
IL2CPP_EXTERN_C String_t* _stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4;
IL2CPP_EXTERN_C String_t* _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteral98C4991DBD0370C554791D1BED854533606B6973;
IL2CPP_EXTERN_C String_t* _stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5;
IL2CPP_EXTERN_C String_t* _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC;
IL2CPP_EXTERN_C String_t* _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF014A065BC76D0FEB5B12ABB99A95712F7EFC69A 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeGallery
struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B  : public RuntimeObject
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

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8  : public RuntimeObject
{
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<>4__this
	NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* ___U3CU3E4__this_0;
	// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::path
	String_t* ___path_1;
};

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B  : public RuntimeObject
{
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<>4__this
	NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* ___U3CU3E4__this_0;
	// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::result
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___result_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// NativeGallery/VideoProperties
struct VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 
{
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// NativeGallery/ImageOrientation
struct ImageOrientation_tEB52104BE8AD57C8212554EC735E91328124514F 
{
	// System.Int32 NativeGallery/ImageOrientation::value__
	int32_t ___value___2;
};

// NativeGallery/MediaType
struct MediaType_tEA43E8EBC9030326EAA464CF6057557A92B568D2 
{
	// System.Int32 NativeGallery/MediaType::value__
	int32_t ___value___2;
};

// NativeGallery/Permission
struct Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831 
{
	// System.Int32 NativeGallery/Permission::value__
	int32_t ___value___2;
};

// Interop/Sys/FileStatusFlags
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	// System.Int32 Interop/Sys/FileStatusFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callback
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback_4;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackMultiple
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callbackMultiple_5;
	// NativeGalleryNamespace.NGCallbackHelper NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackHelper
	NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* ___callbackHelper_6;
};

// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Object NativeGalleryNamespace.NGPermissionCallbackAndroid::threadLock
	RuntimeObject* ___threadLock_4;
	// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 
{
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;
};
// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6  : public MulticastDelegate_t
{
};

// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B  : public MulticastDelegate_t
{
};

// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D  : public MulticastDelegate_t
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action NativeGalleryNamespace.NGCallbackHelper::mainThreadAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mainThreadAction_4;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// NativeGallery
struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields
{
	// UnityEngine.AndroidJavaClass NativeGallery::m_ajc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeGallery::m_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_context_1;
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_2;
	// System.String NativeGallery::m_selectedMediaPath
	String_t* ___m_selectedMediaPath_3;
};

// NativeGallery

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

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

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.Void

// System.Void

// NativeGallery/VideoProperties

// NativeGallery/VideoProperties

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.StringSplitOptions

// System.StringSplitOptions

// UnityEngine.TextureFormat

// UnityEngine.TextureFormat

// NativeGallery/ImageOrientation

// NativeGallery/ImageOrientation

// NativeGallery/MediaType

// NativeGallery/MediaType

// NativeGallery/Permission

// NativeGallery/Permission

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid

// NativeGalleryNamespace.NGPermissionCallbackAndroid

// NativeGalleryNamespace.NGPermissionCallbackAndroid

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.UnityException

// UnityEngine.UnityException

// NativeGallery/ImageProperties

// NativeGallery/ImageProperties

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// NativeGallery/MediaPickCallback

// NativeGallery/MediaPickCallback

// NativeGallery/MediaPickMultipleCallback

// NativeGallery/MediaPickMultipleCallback

// NativeGallery/MediaSaveCallback

// NativeGallery/MediaSaveCallback

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// NativeGalleryNamespace.NGCallbackHelper

// NativeGalleryNamespace.NGCallbackHelper
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m00B158EB122D1CAC9BB41B8A298981AD16F7B56F (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, RuntimeObject* ___0_threadLock, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Monitor::Wait(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m322138959FFE3F4F3212658ACB0C30C981880D28 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mC51543076B5983614D052B63C67AE676C9183499 (bool ___0_readPermissionOnly, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60 (String_t* ___0_filename, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E (String_t* ___0_path, String_t* ___1_album, int32_t ___2_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A (String_t* ___0_sourceFileName, String_t* ___1_destFileName, bool ___2_overwrite, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD (const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___1_callbackMultiple, const RuntimeMethod* method) ;
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F (const RuntimeMethod* method) ;
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997 (const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_quality, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_temp, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, bool ___3_recalculateMipMaps, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, bool ___4_linear, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, bool ___2_markNonReadable, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___0_s, float* ___1_result, const RuntimeMethod* method) ;
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGCallbackHelper>()
inline NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC570477CEA424C12BDAE3117665FE99C9D0EA387 (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_function, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7E74F3E4FBDB854C815800DE26A4F447CBBE6E91 (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mB3DA436490521248AE6B7A1DA4B11C2C209A5295 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m3A0489AD51509EDBD6536C89282460F879A3801A (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Pulse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Pulse_mA8279943D6C2913ADFAF661E35C4951BDFACE43D (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
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
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeGallery" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0), (void*)L_1);
	}

IL_0016:
	{
		// return m_ajc;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if( m_context == null )
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1), (void*)L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// return m_context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1;
		return L_6;
	}
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2;
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedMediaPath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedMediaPath = Path.Combine( Application.temporaryCachePath, "pickedMedia" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
	}

IL_0026:
	{
		// return m_selectedMediaPath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3;
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_mF2E5474DEBC30301614F3DCF901DB744EB3E724A (bool ___0_readPermissionOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = (Permission) AJC.CallStatic<int>( "CheckPermission", Context, readPermissionOnly );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___0_readPermissionOnly;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		int32_t L_8;
		L_8 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_0, _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2, L_4, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		V_0 = L_8;
		// if( result == Permission.Denied && (Permission) PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) == Permission.ShouldAsk )
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_003a;
		}
	}
	{
		// result = Permission.ShouldAsk;
		V_0 = 2;
	}

IL_003a:
	{
		// return result;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mC51543076B5983614D052B63C67AE676C9183499 (bool ___0_readPermissionOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// object threadLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		V_0 = L_0;
		// lock( threadLock )
		RuntimeObject* L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_00aa;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_00aa:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				// NGPermissionCallbackAndroid nativeCallback = new NGPermissionCallbackAndroid( threadLock );
				RuntimeObject* L_5 = V_0;
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_6 = (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB*)il2cpp_codegen_object_new(NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				NGPermissionCallbackAndroid__ctor_m00B158EB122D1CAC9BB41B8A298981AD16F7B56F(L_6, L_5, NULL);
				V_3 = L_6;
				// AJC.CallStatic( "RequestPermission", Context, nativeCallback, readPermissionOnly, PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) );
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7;
				L_7 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
				L_10 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_10);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_12 = V_3;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
				bool L_14 = ___0_readPermissionOnly;
				bool L_15 = L_14;
				RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_16);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
				int32_t L_18;
				L_18 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, NULL);
				int32_t L_19 = L_18;
				RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_20);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
				NullCheck(L_7);
				AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_7, _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6, L_17, NULL);
				// if( nativeCallback.Result == -1 )
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_21 = V_3;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_21, NULL);
				if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
				{
					goto IL_0066_1;
				}
			}
			{
				// System.Threading.Monitor.Wait( threadLock );
				RuntimeObject* L_23 = V_0;
				bool L_24;
				L_24 = Monitor_Wait_m322138959FFE3F4F3212658ACB0C30C981880D28(L_23, NULL);
			}

IL_0066_1:
			{
				// if( (Permission) nativeCallback.Result != Permission.ShouldAsk && PlayerPrefs.GetInt( "NativeGalleryPermission", -1 ) != nativeCallback.Result )
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_25 = V_3;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_25, NULL);
				if ((((int32_t)L_26) == ((int32_t)2)))
				{
					goto IL_0097_1;
				}
			}
			{
				int32_t L_27;
				L_27 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, (-1), NULL);
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_28 = V_3;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_28, NULL);
				if ((((int32_t)L_27) == ((int32_t)L_29)))
				{
					goto IL_0097_1;
				}
			}
			{
				// PlayerPrefs.SetInt( "NativeGalleryPermission", nativeCallback.Result );
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_30 = V_3;
				NullCheck(L_30);
				int32_t L_31;
				L_31 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_30, NULL);
				PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, L_31, NULL);
				// PlayerPrefs.Save();
				PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
			}

IL_0097_1:
			{
				// return (Permission) nativeCallback.Result;
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_32 = V_3;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_32, NULL);
				V_4 = L_33;
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		// }
		int32_t L_34 = V_4;
		return L_34;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_mB480A4B0E4AA86054713BA82021DBE8EF846CB2B (const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_mC3C5C5092A5C8F1E25548FC6B5F0684753541A98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AJC.CallStatic( "OpenSettings", Context );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6, L_2, NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m2AF3D2C35694767051735B811A2DE73E48141A9C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m00EE9B0042E36A283C925D51F1211B9F649DB746 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_image;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg" ) || filename.EndsWith( ".jpg" ) )
		String_t* L_3 = ___2_filename;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_3, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___2_filename;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_5, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}

IL_002e:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_7, (bool)1, NULL);
		String_t* L_9 = ___1_album;
		String_t* L_10 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_11 = ___3_callback;
		int32_t L_12;
		L_12 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_8, L_9, L_10, 1, L_11, NULL);
		return L_12;
	}

IL_003f:
	{
		// else if( filename.EndsWith( ".png" ) )
		String_t* L_13 = ___2_filename;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_13, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_15, (bool)0, NULL);
		String_t* L_17 = ___1_album;
		String_t* L_18 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_19 = ___3_callback;
		int32_t L_20;
		L_20 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_16, L_17, L_18, 1, L_19, NULL);
		return L_20;
	}

IL_005d:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_21, (bool)0, NULL);
		String_t* L_23 = ___1_album;
		String_t* L_24 = ___2_filename;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_26 = ___3_callback;
		int32_t L_27;
		L_27 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_22, L_23, L_25, 1, L_26, NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m6E8834DA9847B65AB58366743E32F828B24BEE05 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m170EBCAA3C3128904E6E6C5F0397BD6E040352F6 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_m98B698674CCE8A1B9FB847E69A0AB20229C29416 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_m992C5F625CA1D657F05B415BE227A99E5C6B2A9F (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMedia" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m285088023ECD53F60EB6C0848FC2C74C6B93FAB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMediaTypes" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m046CBE10C42FBF23C2C265CDA6BBE14534A1BE19 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_mCB867EFB787DDF037FA7CE37116297E4D6BE6C93 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_m52427EDF876CCD6CA3023D3701418FE889BDC361 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_m1D09D42F1CC363166CCD8B30DC51F2DADBFCED0F (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaTypes, String_t* ___2_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		int32_t L_1 = ___1_mediaTypes;
		String_t* L_2 = ___2_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_m0173A98B4E42DF72287C48216792CCBBA5D322BB (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m47FC2D6059067CE6538C69255B58EA4C20CC6D41 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_mCC57680119F1432F730E068E2AE173E01CE4AD6E (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediasFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediasFromGallery_m5958D8BFBC304CA77FCEC85AE32F028B7862481C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaTypes, String_t* ___2_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		int32_t L_1 = ___1_mediaTypes;
		String_t* L_2 = ___2_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_m2B9362DA4D77A54A20CE8CBCAA066451592390CF (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_000a:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_2, NULL);
		V_0 = L_3;
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_001b:
	{
		// if( extension[0] == '.' )
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0039;
		}
	}
	{
		// if( extension.Length == 1 )
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0031:
	{
		// extension = extension.Substring( 1 );
		String_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_10, 1, NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		// string mime = AJC.CallStatic<string>( "GetMimeTypeFromExtension", extension.ToLowerInvariant() );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12;
		L_12 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_12);
		String_t* L_17;
		L_17 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_12, _stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949, L_14, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_1 = L_17;
		// if( string.IsNullOrEmpty( mime ) )
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (!L_19)
		{
			goto IL_0062;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0062:
	{
		// else if( mime.StartsWith( "image/" ) )
		String_t* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_20, _stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6, NULL);
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		// return MediaType.Image;
		return (int32_t)(1);
	}

IL_0071:
	{
		// else if( mime.StartsWith( "video/" ) )
		String_t* L_22 = V_1;
		NullCheck(L_22);
		bool L_23;
		L_23 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_22, _stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5, NULL);
		if (!L_23)
		{
			goto IL_0080;
		}
	}
	{
		// return MediaType.Video;
		return (int32_t)(2);
	}

IL_0080:
	{
		// else if( mime.StartsWith( "audio/" ) )
		String_t* L_24 = V_1;
		NullCheck(L_24);
		bool L_25;
		L_25 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_24, _stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4, NULL);
		if (!L_25)
		{
			goto IL_008f;
		}
	}
	{
		// return MediaType.Audio;
		return (int32_t)(4);
	}

IL_008f:
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( false );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mC51543076B5983614D052B63C67AE676C9183499((bool)0, NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B13_0 = L_1;
			goto IL_0075;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_mediaBytes;
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_mediaBytes;
		NullCheck(L_3);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_3)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001c;
		}
	}

IL_0011:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_5 = ___1_album;
		G_B5_0 = G_B4_0;
		if (!L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = ___1_album;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}

IL_0027:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_0032:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_9 = ___2_filename;
		G_B8_0 = G_B7_0;
		if (!L_9)
		{
			G_B9_0 = G_B7_0;
			goto IL_003d;
		}
	}
	{
		String_t* L_10 = ___2_filename;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		G_B9_0 = G_B8_0;
		if (L_11)
		{
			G_B10_0 = G_B8_0;
			goto IL_0048;
		}
	}

IL_003d:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_0048:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_13 = ___2_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_13, NULL);
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		G_B11_0 = G_B10_0;
		if (!L_15)
		{
			G_B12_0 = G_B10_0;
			goto IL_005f;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B12_0 = G_B11_0;
	}

IL_005f:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_16 = ___2_filename;
		String_t* L_17;
		L_17 = NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60(L_16, NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_18 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_mediaBytes;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_18, L_19, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_20 = ___1_album;
		int32_t L_21 = ___3_mediaType;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_22 = ___4_callback;
		NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E(L_18, L_20, L_21, L_22, NULL);
		G_B13_0 = G_B12_0;
	}

IL_0075:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( false );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mC51543076B5983614D052B63C67AE676C9183499((bool)0, NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B14_0 = L_1;
			goto IL_009c;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_2 = ___0_existingMediaPath;
		bool L_3;
		L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0026;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_4 = ___0_existingMediaPath;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_4, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_6 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_0026:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_7 = ___1_album;
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = ___1_album;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_003c;
		}
	}

IL_0031:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_003c:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_11 = ___2_filename;
		G_B7_0 = G_B6_0;
		if (!L_11)
		{
			G_B8_0 = G_B6_0;
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___2_filename;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		G_B8_0 = G_B7_0;
		if (L_13)
		{
			G_B9_0 = G_B7_0;
			goto IL_0052;
		}
	}

IL_0047:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_0052:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_15 = ___2_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_15, NULL);
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		G_B10_0 = G_B9_0;
		if (!L_17)
		{
			G_B13_0 = G_B9_0;
			goto IL_0083;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_18 = ___0_existingMediaPath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_18, NULL);
		V_1 = L_19;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
		G_B11_0 = G_B10_0;
		if (!L_21)
		{
			G_B12_0 = G_B10_0;
			goto IL_007a;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B13_0 = G_B11_0;
		goto IL_0083;
	}

IL_007a:
	{
		// filename += originalExtension;
		String_t* L_22 = ___2_filename;
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, L_23, NULL);
		___2_filename = L_24;
		G_B13_0 = G_B12_0;
	}

IL_0083:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_25 = ___2_filename;
		String_t* L_26;
		L_26 = NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60(L_25, NULL);
		V_0 = L_26;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_27 = ___0_existingMediaPath;
		String_t* L_28 = V_0;
		File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A(L_27, L_28, (bool)1, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_29 = V_0;
		String_t* L_30 = ___1_album;
		int32_t L_31 = ___3_mediaType;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_32 = ___4_callback;
		NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E(L_29, L_30, L_31, L_32, NULL);
		G_B14_0 = G_B13_0;
	}

IL_009c:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E (String_t* ___0_path, String_t* ___1_album, int32_t ___2_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C4991DBD0370C554791D1BED854533606B6973);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string savePath = AJC.CallStatic<string>( "SaveMedia", Context, (int) mediaType, path, album );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___2_mediaType;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		String_t* L_9 = ___0_path;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___1_album;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		NullCheck(L_0);
		String_t* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral98C4991DBD0370C554791D1BED854533606B6973, L_10, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_12;
		// File.Delete( path );
		String_t* L_13 = ___0_path;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_13, NULL);
		// if( callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_14 = ___3_callback;
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		// callback( !string.IsNullOrEmpty( savePath ), savePath );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_15 = ___3_callback;
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		String_t* L_18 = V_0;
		NullCheck(L_15);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_15, (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0), L_18, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60 (String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF, NULL);
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = L_1;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_2, NULL);
		// return Path.Combine( saveDir, filename );
		String_t* L_4 = ___0_filename;
		String_t* L_5;
		L_5 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_2, L_4, NULL);
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( true );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mC51543076B5983614D052B63C67AE676C9183499((bool)1, NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( callback, null ), (int) mediaType, false, SelectedMediaPath, mime, title );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3;
		L_3 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_8 = ___0_callback;
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_9 = (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52*)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61(L_9, L_8, (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		int32_t L_11 = ___1_mediaType;
		int32_t L_12 = ((int32_t)L_11);
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		bool L_15 = ((bool)0);
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		String_t* L_18;
		L_18 = NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F(NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		String_t* L_20 = ___2_mime;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		String_t* L_22 = ___3_title;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_22);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_21, NULL);
	}

IL_005b:
	{
		// return result;
		int32_t L_23 = V_0;
		return L_23;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( true );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mC51543076B5983614D052B63C67AE676C9183499((bool)1, NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		if (L_2)
		{
			goto IL_006e;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		bool L_3;
		L_3 = NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997(NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( null, callback ), (int) mediaType, true, SelectedMediaPath, mime, title );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4;
		L_4 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_9 = ___0_callback;
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_10 = (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52*)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61(L_10, (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL, L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		int32_t L_12 = ___1_mediaType;
		int32_t L_13 = ((int32_t)L_12);
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		bool L_16 = ((bool)1);
		RuntimeObject* L_17 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		String_t* L_19;
		L_19 = NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F(NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_18;
		String_t* L_21 = ___2_mime;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_20;
		String_t* L_23 = ___3_title;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_23);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_4, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_22, NULL);
		goto IL_006e;
	}

IL_0064:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_24 = ___0_callback;
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_25 = ___0_callback;
		NullCheck(L_25);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_25, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
	}

IL_006e:
	{
		// return result;
		int32_t L_26 = V_0;
		return L_26;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___1_isJpeg;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
			L_2 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_1, NULL);
			G_B3_0 = L_2;
			goto IL_0013_1;
		}

IL_000b_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_3, ((int32_t)100), NULL);
			G_B3_0 = L_4;
		}

IL_0013_1:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(UnityEngine.UnityException)
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_5 = ((UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)IL2CPP_GET_ACTIVE_EXCEPTION(UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*));;
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___0_texture;
		bool L_7 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7(L_6, L_7, NULL);
		V_0 = L_8;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002c;
	}// end catch (depth: 1)

CATCH_0021:
	{// begin catch(System.ArgumentException)
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___0_texture;
		bool L_11 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7(L_10, L_11, NULL);
		V_0 = L_12;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		return L_13;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9, NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_1, L_3, NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0089:
			{// begin finally (depth: 1)
				// RenderTexture.active = activeRT;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_2;
				RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_6, NULL);
				// RenderTexture.ReleaseTemporary( rt );
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
				RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_7, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// Graphics.Blit( texture, rt );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
				Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_8, L_9, NULL);
				// RenderTexture.active = rt;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_1;
				RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_10, NULL);
				// sourceTexReadable = new Texture2D( texture.width, texture.height, texture.format, false );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___0_texture;
				NullCheck(L_13);
				int32_t L_14;
				L_14 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___0_texture;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_15, NULL);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_17, L_12, L_14, L_16, (bool)0, NULL);
				V_0 = L_17;
				// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = V_0;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = ___0_texture;
				NullCheck(L_19);
				int32_t L_20;
				L_20 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___0_texture;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
				memset((&L_23), 0, sizeof(L_23));
				Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_23), (0.0f), (0.0f), ((float)L_20), ((float)L_22), /*hidden argument*/NULL);
				NullCheck(L_18);
				Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_18, L_23, 0, 0, (bool)0, NULL);
				// sourceTexReadable.Apply( false, false );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
				NullCheck(L_24);
				Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_24, (bool)0, (bool)0, NULL);
				// }
				goto IL_0096;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_007a_1;
				}
				throw e;
			}

CATCH_007a_1:
			{// begin catch(System.Exception)
				Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_25, NULL);
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = V_0;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_26, NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00bd;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b6:
			{// begin finally (depth: 1)
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_27, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
					bool L_28 = ___1_isJpeg;
					if (L_28)
					{
						goto IL_00a2_2;
					}
				}
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
					L_30 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_29, NULL);
					G_B8_0 = L_30;
					goto IL_00aa_2;
				}

IL_00a2_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
					L_32 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_31, ((int32_t)100), NULL);
					G_B8_0 = L_32;
				}

IL_00aa_2:
				{
					V_3 = G_B8_0;
					goto IL_00bd;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ad_1;
				}
				throw e;
			}

CATCH_00ad_1:
			{// begin catch(System.Exception)
				Exception_t* L_33 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_33, NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00bd;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_3;
		return L_34;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___0_imagePath;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___0_imagePath;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_7 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___1_maxSize;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_9;
	}

IL_0037:
	{
		// string loadPath = AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, TemporaryImagePath, maxSize );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10;
		L_10 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		String_t* L_15 = ___0_imagePath;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		String_t* L_17;
		L_17 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		int32_t L_19 = ___1_maxSize;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_21);
		NullCheck(L_10);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_10, _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D, L_18, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_22;
		// String extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_23 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_24, NULL);
		V_1 = L_25;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_29)
		{
			goto IL_0093;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_0094;
	}

IL_0093:
	{
		G_B10_0 = 3;
	}

IL_0094:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_30 = V_2;
		bool L_31 = ___3_generateMipmaps;
		bool L_32 = ___4_linearColorSpace;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_33, 2, 2, L_30, L_31, L_32, NULL);
		V_3 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cd:
			{// begin finally (depth: 1)
				{
					// if( loadPath != imagePath )
					String_t* L_34 = V_0;
					String_t* L_35 = ___0_imagePath;
					bool L_36;
					L_36 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_34, L_35, NULL);
					if (!L_36)
					{
						goto IL_00e1;
					}
				}
				try
				{// begin try (depth: 2)
					// File.Delete( loadPath );
					String_t* L_37 = V_0;
					File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_37, NULL);
					// }
					goto IL_00e1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00de;
					}
					throw e;
				}

CATCH_00de:
				{// begin catch(System.Object)
					RuntimeObject* L_38 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
					// catch { }
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_00e1;
				}// end catch (depth: 2)

IL_00e1:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = V_3;
					String_t* L_40 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
					L_41 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_40, NULL);
					bool L_42 = ___2_markTextureNonReadable;
					bool L_43;
					L_43 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_39, L_41, L_42, NULL);
					if (L_43)
					{
						goto IL_00bb_2;
					}
				}
				{
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_44, NULL);
					// return null;
					V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					goto IL_00e4;
				}

IL_00bb_2:
				{
					// }
					goto IL_00e2;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00bd_1;
				}
				throw e;
			}

CATCH_00bd_1:
			{// begin catch(System.Exception)
				Exception_t* L_45 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_45, NULL);
				// Object.DestroyImmediate( result );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = V_3;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_46, NULL);
				// return null;
				V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_00e4;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		// return result;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = V_3;
		return L_47;
	}

IL_00e4:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_4;
		return L_48;
	}
}
// UnityEngine.Texture2D NativeGallery::GetVideoThumbnail(System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_GetVideoThumbnail_m8C8C270121D84A8704F100E7F4FE9444066E1B24 (String_t* ___0_videoPath, int32_t ___1_maxSize, double ___2_captureTimeInSeconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___1_maxSize;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, TemporaryImagePath + ".png", false, maxSize, captureTimeInSeconds );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2;
		L_2 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___0_videoPath;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9;
		L_9 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		bool L_12 = ((bool)0);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		int32_t L_15 = ___1_maxSize;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		double L_19 = ___2_captureTimeInSeconds;
		double L_20 = L_19;
		RuntimeObject* L_21 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_21);
		NullCheck(L_2);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_2, _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F, L_18, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_22;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_23, NULL);
		if (L_24)
		{
			goto IL_006d;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize );
		String_t* L_25 = V_0;
		int32_t L_26 = ___1_maxSize;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27;
		L_27 = NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE(L_25, L_26, (bool)1, (bool)1, (bool)0, NULL);
		return L_27;
	}

IL_006d:
	{
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376 (String_t* ___0_imagePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___0_imagePath;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetImageProperties", Context, imagePath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___0_imagePath;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_5, _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941, L_9, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_0130;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)62), 0, NULL);
		V_5 = L_15;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_5;
		if (!L_16)
		{
			goto IL_0130;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_5;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) < ((int32_t)4)))
		{
			goto IL_0130;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_21, (&V_1), NULL);
		if (L_22)
		{
			goto IL_007f;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_007f:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_26, (&V_2), NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0093:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		V_3 = L_31;
		// if( mimeType.Length == 0 )
		String_t* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		if (L_33)
		{
			goto IL_011a;
		}
	}
	{
		// String extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_34 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_34, NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_35, NULL);
		V_7 = L_36;
		// if( extension == ".png" )
		String_t* L_37 = V_7;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		if (!L_38)
		{
			goto IL_00c8;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_011a;
	}

IL_00c8:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_39 = V_7;
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_40)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_41 = V_7;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (!L_42)
		{
			goto IL_00ec;
		}
	}

IL_00e4:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_011a;
	}

IL_00ec:
	{
		// else if( extension == ".gif" )
		String_t* L_43 = V_7;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_011a;
	}

IL_0102:
	{
		// else if( extension == ".bmp" )
		String_t* L_45 = V_7;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		if (!L_46)
		{
			goto IL_0118;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_011a;
	}

IL_0118:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_011a:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_5;
		NullCheck(L_47);
		int32_t L_48 = 3;
		String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		String_t* L_50;
		L_50 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_49, NULL);
		bool L_51;
		L_51 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_50, (&V_6), NULL);
		if (!L_51)
		{
			goto IL_0130;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_52 = V_6;
		V_4 = L_52;
	}

IL_0130:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_53 = V_1;
		int32_t L_54 = V_2;
		String_t* L_55 = V_3;
		int32_t L_56 = V_4;
		ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 L_57;
		memset((&L_57), 0, sizeof(L_57));
		ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3((&L_57), L_53, L_54, L_55, L_56, /*hidden argument*/NULL);
		return L_57;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95 (String_t* ___0_videoPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___0_videoPath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___0_videoPath;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetVideoProperties", Context, videoPath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___0_videoPath;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_5, _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83, L_9, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)0);
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_00bd;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)62), 0, NULL);
		V_5 = L_15;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_5;
		if (!L_16)
		{
			goto IL_00bd;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_5;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) < ((int32_t)4)))
		{
			goto IL_00bd;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_21, (&V_1), NULL);
		if (L_22)
		{
			goto IL_007b;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_007b:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_26, (&V_2), NULL);
		if (L_27)
		{
			goto IL_008f;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_008f:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		bool L_32;
		L_32 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_31, (&V_3), NULL);
		if (L_32)
		{
			goto IL_00a4;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)0);
	}

IL_00a4:
	{
		// if( !float.TryParse( properties[3].Trim(), out rotation ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_5;
		NullCheck(L_33);
		int32_t L_34 = 3;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_35, NULL);
		bool L_37;
		L_37 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_36, (&V_4), NULL);
		if (L_37)
		{
			goto IL_00bd;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00bd:
	{
		// if( rotation == -90f )
		float L_38 = V_4;
		if ((!(((float)L_38) == ((float)(-90.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00cd:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_39 = V_1;
		int32_t L_40 = V_2;
		int64_t L_41 = V_3;
		float L_42 = V_4;
		VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 L_43;
		memset((&L_43), 0, sizeof(L_43));
		VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD((&L_43), L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
		return L_43;
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.mimeType = mimeType;
		String_t* L_2 = ___2_mimeType;
		__this->___mimeType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimeType_2), (void*)L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___3_orientation;
		__this->___orientation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method)
{
	ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59*>(__this + _offset);
	ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3(_thisAdjusted, ___0_width, ___1_height, ___2_mimeType, ___3_orientation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.duration = duration;
		int64_t L_2 = ___2_duration;
		__this->___duration_2 = L_2;
		// this.rotation = rotation;
		float L_3 = ___3_rotation;
		__this->___rotation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method)
{
	VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5*>(__this + _offset);
	VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD(_thisAdjusted, ___0_width, ___1_height, ___2_duration, ___3_rotation, method);
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
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* currentDelegate = reinterpret_cast<MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenInst(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_path, method);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStatic(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_path, method);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< bool, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_success, ___1_path);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, bool, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_success, ___1_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_path' to native representation
	char* ____1_path_marshaled = NULL;
	____1_path_marshaled = il2cpp_codegen_marshal_string(___1_path);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_success), ____1_path_marshaled);

	// Marshaling cleanup of parameter '___1_path' native representation
	il2cpp_codegen_marshal_free(____1_path_marshaled);
	____1_path_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mC807D0DC716FCEACAB7FC85AD2916F702D92E5EF (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast;
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m43DF1543431C55DFD9BCFF30017FA4F4FC2BEB72 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_success);
	__d_args[1] = ___1_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_mE988BF2B3A6EBA13C068BF8BAAFF8B9C2E4298BE (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* currentDelegate = reinterpret_cast<MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenInst(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	NullCheck(___0_path);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStatic(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_path);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	il2cppPInvokeFunc(____0_path_marshaled);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast;
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m722D25075399F4136F7A72DEB486B16E6979F072 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_m789929E1A570D84F6AE2F20FB722F42CC027E97D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* currentDelegate = reinterpret_cast<MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenInst(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	NullCheck(___0_paths);
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStatic(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_paths);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_paths);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_paths' to native representation
	char** ____0_paths_marshaled = NULL;
	if (___0_paths != NULL)
	{
		il2cpp_array_size_t ____0_paths_Length = (___0_paths)->max_length;
		____0_paths_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_paths_Length + 1);
		(____0_paths_marshaled)[____0_paths_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_Length); i++)
		{
			(____0_paths_marshaled)[i] = il2cpp_codegen_marshal_string((___0_paths)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_paths_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_paths_marshaled);

	// Marshaling cleanup of parameter '___0_paths' native representation
	if (____0_paths_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_paths_marshaled_CleanupLoopCount = (___0_paths != NULL) ? (___0_paths)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_paths_marshaled)[i]);
			(____0_paths_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_paths_marshaled);
		____0_paths_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m51B26CBD435D26A6CC44DFA51D2C58D74D6F1CE9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast;
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m6321A0529E97A8616F70F36CC82830AD8B1A38C9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_paths;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m52B699AF968CA46D70F40ED0B433D9FE577753EF (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void NativeGalleryNamespace.NGCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Awake_mE4B8A9C18896CAF1E7CF776CDD3510BC5E8E71E3 (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Update_m14FAA6654D7EF046826BA233F9B206D89AB28BBC (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, const RuntimeMethod* method) 
{
	{
		// if( mainThreadAction != null )
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___mainThreadAction_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// System.Action temp = mainThreadAction;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___mainThreadAction_4;
		// mainThreadAction = null;
		__this->___mainThreadAction_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		// temp();
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8 (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_function, const RuntimeMethod* method) 
{
	{
		// mainThreadAction = function;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_function;
		__this->___mainThreadAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper__ctor_mB5DCC404262A38A0DDF25EDBC00C0858834327AE (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___1_callbackMultiple, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGMediaReceiveCallbackAndroid( NativeGallery.MediaPickCallback callback, NativeGallery.MediaPickMultipleCallback callbackMultiple ) : base( "com.yasirkula.unity.NativeGalleryMediaReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381, NULL);
		// this.callback = callback;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// this.callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_1 = ___1_callbackMultiple;
		__this->___callbackMultiple_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackMultiple_5), (void*)L_1);
		// callbackHelper = new GameObject( "NGCallbackHelper" ).AddComponent<NGCallbackHelper>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26, NULL);
		NullCheck(L_2);
		NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_3;
		L_3 = GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F(L_2, GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F_RuntimeMethod_var);
		__this->___callbackHelper_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackHelper_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMediaReceived_m927E33E6BA4435928E353290FE197407D0D935DE (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_0 = (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mC570477CEA424C12BDAE3117665FE99C9D0EA387(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_2 = V_0;
		String_t* L_3 = ___0_path;
		NullCheck(L_2);
		L_2->___path_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___path_1), (void*)L_3);
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_4 = __this->___callbackHelper_6;
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m3D0BBCFE8A0047BFD2D8EDC32365ECCF5C917E09 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_paths, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_0 = (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m7E74F3E4FBDB854C815800DE26A4F447CBBE6E91(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// string[] result = null;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_2 = V_0;
		NullCheck(L_2);
		L_2->___result_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___result_1), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_3 = ___0_paths;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0096;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_5 = ___0_paths;
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_5, ((int32_t)62), 0, NULL);
		V_1 = L_6;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_003e;
	}

IL_002c:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_003a;
		}
	}
	{
		// validPathCount++;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003a:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003e:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_14 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_16 = V_2;
		if (L_16)
		{
			goto IL_0050;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_17;
		goto IL_008f;
	}

IL_0050:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_18 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_008f;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_20 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_4 = L_21;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0085;
	}

IL_0066:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		bool L_26;
		L_26 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_25, NULL);
		if (L_26)
		{
			goto IL_007f;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_4;
		int32_t L_28 = V_6;
		int32_t L_29 = L_28;
		V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_33);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (String_t*)L_33);
	}

IL_007f:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0085:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_35 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_4;
		V_1 = L_37;
	}

IL_008f:
	{
		// result = pathsSplit;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_38 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_1;
		NullCheck(L_38);
		L_38->___result_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___result_1), (void*)L_39);
	}

IL_0096:
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_40 = __this->___callbackHelper_6;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_41 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_42 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_42, L_41, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline(L_40, L_42, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mB3DA436490521248AE6B7A1DA4B11C2C209A5295 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// path = null;
		___0_path = (String_t*)NULL;
	}

IL_000b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				// Object.Destroy( callbackHelper );
				NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_2 = __this->___callbackHelper_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if( callback != null )
				MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_3 = __this->___callback_4;
				if (!L_3)
				{
					goto IL_0020_1;
				}
			}
			{
				// callback( path );
				MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_4 = __this->___callback_4;
				String_t* L_5 = ___0_path;
				NullCheck(L_4);
				MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_4, L_5, NULL);
			}

IL_0020_1:
			{
				// }
				goto IL_002e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m3A0489AD51509EDBD6536C89282460F879A3801A (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( paths != null && paths.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_paths;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_paths;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// paths = null;
		___0_paths = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_000a:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				// Object.Destroy( callbackHelper );
				NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_2 = __this->___callbackHelper_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if( callbackMultiple != null )
				MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_3 = __this->___callbackMultiple_5;
				if (!L_3)
				{
					goto IL_001f_1;
				}
			}
			{
				// callbackMultiple( paths );
				MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_4 = __this->___callbackMultiple_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___0_paths;
				NullCheck(L_4);
				MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_4, L_5, NULL);
			}

IL_001f_1:
			{
				// }
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC570477CEA424C12BDAE3117665FE99C9D0EA387 (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<OnMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* __this, const RuntimeMethod* method) 
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_0 = __this->___U3CU3E4__this_0;
		String_t* L_1 = __this->___path_1;
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mB3DA436490521248AE6B7A1DA4B11C2C209A5295(L_0, L_1, NULL);
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7E74F3E4FBDB854C815800DE26A4F447CBBE6E91 (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<OnMultipleMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* __this, const RuntimeMethod* method) 
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_0 = __this->___U3CU3E4__this_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___result_1;
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m3A0489AD51509EDBD6536C89282460F879A3801A(L_0, L_1, NULL);
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
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m00B158EB122D1CAC9BB41B8A298981AD16F7B56F (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, RuntimeObject* ___0_threadLock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGPermissionCallbackAndroid( object threadLock ) : base( "com.yasirkula.unity.NativeGalleryPermissionReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2, NULL);
		// Result = -1;
		NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline(__this, (-1), NULL);
		// this.threadLock = threadLock;
		RuntimeObject* L_0 = ___0_threadLock;
		__this->___threadLock_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threadLock_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::OnPermissionResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_OnPermissionResult_mD0CDC84DE59FF176ECF2171C036A483E7FD771F2 (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// Result = result;
		int32_t L_0 = ___0_result;
		NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline(__this, L_0, NULL);
		// lock( threadLock )
		RuntimeObject* L_1 = __this->___threadLock_4;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// Monitor.Pulse( threadLock );
			RuntimeObject* L_5 = __this->___threadLock_4;
			Monitor_Pulse_mA8279943D6C2913ADFAF661E35C4951BDFACE43D(L_5, NULL);
			// }
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_function, const RuntimeMethod* method) 
{
	{
		// mainThreadAction = function;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_function;
		__this->___mainThreadAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
