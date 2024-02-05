#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// FastScriptReload.Examples.FunctionLibrary/Function[]
struct FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// FastScriptReload.Examples.FunctionLibrary
struct FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// FastScriptReload.Examples.Graph
struct Graph_tF68C10AF5FAAB9A41E312870376E1C18010428C1;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// FastScriptReload.Examples.FunctionLibrary/Function
struct Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3941B8E63EDC247A016047727FD890C203E74F;
IL2CPP_EXTERN_C String_t* _stringLiteral8D3F0BC5F5D25A8BDDBC251A4F1B0B179DB852CD;
IL2CPP_EXTERN_C String_t* _stringLiteralBBEF1380159A92A44EB6D3F67A2C5F1E9E02925E;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDEF3E272B1373B3701C1B83BCE2600160C0F8B;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionLibrary_MultiWave_m4E1B1DBD55D9AA5509E323B43BFC61476DF27AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionLibrary_Ripple_m3487B740FEA3C4249A1A6CEE97B1C5D432288981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionLibrary_Sphere_m8CA9F3E66F44BB69DEC34A9EC50657C84BAAF332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionLibrary_Torus_mF58589B50F7A30EEE5A058B0EC367295C298E127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionLibrary_Wave_m9EA4C92570AD2DC425FCC9315A02B9988578091D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// AssemblyCSharp.GlobalVariables
struct GlobalVariables_t537C3813DFDC2AA3E065F9DFA75276CB5515BD1D  : public RuntimeObject
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_tD483FB40E263381A07C87A97BBF2A1BD6BE3D1F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tD483FB40E263381A07C87A97BBF2A1BD6BE3D1F9__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE__padding[48];
	};
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

// FastScriptReload.Examples.FunctionLibrary/FunctionName
struct FunctionName_t43CB97451E4AA1D4405C84C453E9B83E1C4F850E 
{
	// System.Int32 FastScriptReload.Examples.FunctionLibrary/FunctionName::value__
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FastScriptReload.Examples.FunctionLibrary/Function
struct Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// FastScriptReload.Examples.FunctionLibrary
struct FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FastScriptReload.Examples.Graph
struct Graph_tF68C10AF5FAAB9A41E312870376E1C18010428C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FastScriptReload.Examples.Graph::pointPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pointPrefab_4;
	// System.Int32 FastScriptReload.Examples.Graph::resolution
	int32_t ___resolution_5;
	// FastScriptReload.Examples.FunctionLibrary/FunctionName FastScriptReload.Examples.Graph::function
	int32_t ___function_6;
	// UnityEngine.Transform[] FastScriptReload.Examples.Graph::points
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___points_7;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0CA47679A8B48490B35902039B874DC32C465A4B547059C0D941091B7B72CB21
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___0CA47679A8B48490B35902039B874DC32C465A4B547059C0D941091B7B72CB21_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::3BB048C6BCFB13ADB4230B15FDE86F7FCFA341C302CC263DFC9250D7877BABFB
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___3BB048C6BCFB13ADB4230B15FDE86F7FCFA341C302CC263DFC9250D7877BABFB_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::46EAAE3A2AE07D5A40D66BD45A055AB233EE7E5375D0AFC7F924D01D77BBD347
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___46EAAE3A2AE07D5A40D66BD45A055AB233EE7E5375D0AFC7F924D01D77BBD347_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7E8D5B72D290BA59F0EDBE3D6F961EEA1A534C250A6EF2CAC5B85C0C2111735F
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___7E8D5B72D290BA59F0EDBE3D6F961EEA1A534C250A6EF2CAC5B85C0C2111735F_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::BE9D7CF7F77A2662403FD82744F4998F6BA0054BF6B7CFA4357B875AF96FB2E1
	__StaticArrayInitTypeSizeU3D44_tD483FB40E263381A07C87A97BBF2A1BD6BE3D1F9 ___BE9D7CF7F77A2662403FD82744F4998F6BA0054BF6B7CFA4357B875AF96FB2E1_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::DF1562A74374EDC1D8388361A3BDB4F2AD2C26E6201BCD68F91CCA69B3FEEC97
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___DF1562A74374EDC1D8388361A3BDB4F2AD2C26E6201BCD68F91CCA69B3FEEC97_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::F8085F5CFD92F711E3495A314C6ACD5614C487EE7516DEE08BEA887A331EADEC
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___F8085F5CFD92F711E3495A314C6ACD5614C487EE7516DEE08BEA887A331EADEC_6;
};

// <PrivateImplementationDetails>

// AssemblyCSharp.GlobalVariables

// AssemblyCSharp.GlobalVariables

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// System.Delegate

// System.Delegate

// FastScriptReload.Examples.FunctionLibrary/FunctionName

// FastScriptReload.Examples.FunctionLibrary/FunctionName

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Transform

// UnityEngine.Transform

// FastScriptReload.Examples.FunctionLibrary/Function

// FastScriptReload.Examples.FunctionLibrary/Function

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// FastScriptReload.Examples.FunctionLibrary
struct FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_StaticFields
{
	// FastScriptReload.Examples.FunctionLibrary/Function[] FastScriptReload.Examples.FunctionLibrary::functions
	FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* ___functions_4;
};

// FastScriptReload.Examples.FunctionLibrary

// FastScriptReload.Examples.Graph

// FastScriptReload.Examples.Graph
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// FastScriptReload.Examples.FunctionLibrary/Function[]
struct FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B  : public RuntimeArray
{
	ALIGN_FIELD (8) Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* m_Items[1];

	inline Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* value)
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void FastScriptReload.Examples.FunctionLibrary/Function::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Function__ctor_mFDA17EE76779F1FBC3452AF6C1701FF2B75971EC (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_original, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// FastScriptReload.Examples.FunctionLibrary/Function FastScriptReload.Examples.FunctionLibrary::GetFunction(FastScriptReload.Examples.FunctionLibrary/FunctionName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* FunctionLibrary_GetFunction_m25354E5571B0ABE3A524590876A2E43C91C0B7E7 (int32_t ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary/Function::Invoke(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_inline (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// FastScriptReload.Examples.FunctionLibrary/Function FastScriptReload.Examples.FunctionLibrary::GetFunction(FastScriptReload.Examples.FunctionLibrary/FunctionName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* FunctionLibrary_GetFunction_m25354E5571B0ABE3A524590876A2E43C91C0B7E7 (int32_t ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* V_0 = NULL;
	{
		// return functions[(int)name];
		il2cpp_codegen_runtime_class_init_inline(FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var);
		FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* L_0 = ((FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_StaticFields*)il2cpp_codegen_static_fields_for(FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var))->___functions_4;
		int32_t L_1 = ___0_name;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary::Wave(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FunctionLibrary_Wave_m9EA4C92570AD2DC425FCC9315A02B9988578091D (float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// p.x = u;
		float L_0 = ___0_u;
		(&V_0)->___x_2 = L_0;
		// p.y = Sin(PI * (u + v + t));
		float L_1 = ___0_u;
		float L_2 = ___1_v;
		float L_3 = ___2_t;
		float L_4;
		L_4 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_1, L_2)), L_3)))));
		(&V_0)->___y_3 = L_4;
		// p.z = v;
		float L_5 = ___1_v;
		(&V_0)->___z_4 = L_5;
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		V_1 = L_6;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary::MultiWave(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FunctionLibrary_MultiWave_m4E1B1DBD55D9AA5509E323B43BFC61476DF27AE6 (float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// p.x = u;
		float L_0 = ___0_u;
		(&V_0)->___x_2 = L_0;
		// p.y = Sin(PI * (u + 0.5f * t));
		float L_1 = ___0_u;
		float L_2 = ___2_t;
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply((0.5f), L_2)))))));
		(&V_0)->___y_3 = L_3;
		// p.y += 0.5f * Sin(2f * PI * (v + t));
		float* L_4 = (float*)(&(&V_0)->___y_3);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = ___1_v;
		float L_8 = ___2_t;
		float L_9;
		L_9 = sinf(((float)il2cpp_codegen_multiply((6.28318548f), ((float)il2cpp_codegen_add(L_7, L_8)))));
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply((0.5f), L_9))));
		// p.y += Sin(PI * (u + v + 0.25f * t));
		float* L_10 = (float*)(&(&V_0)->___y_3);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = ___0_u;
		float L_14 = ___1_v;
		float L_15 = ___2_t;
		float L_16;
		L_16 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_13, L_14)), ((float)il2cpp_codegen_multiply((0.25f), L_15)))))));
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, L_16));
		// p.y *= 1f / 2.5f;
		float* L_17 = (float*)(&(&V_0)->___y_3);
		float* L_18 = L_17;
		float L_19 = *((float*)L_18);
		*((float*)L_18) = (float)((float)il2cpp_codegen_multiply(L_19, (0.400000006f)));
		// p.z = v;
		float L_20 = ___1_v;
		(&V_0)->___z_4 = L_20;
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		V_1 = L_21;
		goto IL_0080;
	}

IL_0080:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		return L_22;
	}
}
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary::Ripple(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FunctionLibrary_Ripple_m3487B740FEA3C4249A1A6CEE97B1C5D432288981 (float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var d = Sqrt(u * u + v * v);
		float L_0 = ___0_u;
		float L_1 = ___0_u;
		float L_2 = ___1_v;
		float L_3 = ___1_v;
		float L_4;
		L_4 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))));
		V_0 = L_4;
		// p.x = u;
		float L_5 = ___0_u;
		(&V_1)->___x_2 = L_5;
		// p.y = Sin(PI * (4f * d - t));
		float L_6 = V_0;
		float L_7 = ___2_t;
		float L_8;
		L_8 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((4.0f), L_6)), L_7)))));
		(&V_1)->___y_3 = L_8;
		// p.y /= 1f + 10f * d;
		float* L_9 = (float*)(&(&V_1)->___y_3);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		float L_12 = V_0;
		*((float*)L_10) = (float)((float)(L_11/((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply((10.0f), L_12))))));
		// p.z = v;
		float L_13 = ___1_v;
		(&V_1)->___z_4 = L_13;
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		V_2 = L_14;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		return L_15;
	}
}
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary::Sphere(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FunctionLibrary_Sphere_m8CA9F3E66F44BB69DEC34A9EC50657C84BAAF332 (float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var r = 0.9f + 0.1f * Sin(PI * (6f * u + 4f * v + t));
		float L_0 = ___0_u;
		float L_1 = ___1_v;
		float L_2 = ___2_t;
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((6.0f), L_0)), ((float)il2cpp_codegen_multiply((4.0f), L_1)))), L_2)))));
		V_0 = ((float)il2cpp_codegen_add((0.899999976f), ((float)il2cpp_codegen_multiply((0.100000001f), L_3))));
		// var s = r * Cos(0.5f * PI * v);
		float L_4 = V_0;
		float L_5 = ___1_v;
		float L_6;
		L_6 = cosf(((float)il2cpp_codegen_multiply((1.57079637f), L_5)));
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_6));
		// p.x = s * Sin(PI * u);
		float L_7 = V_1;
		float L_8 = ___0_u;
		float L_9;
		L_9 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), L_8)));
		(&V_2)->___x_2 = ((float)il2cpp_codegen_multiply(L_7, L_9));
		// p.y = r * Sin(0.5f * PI * v);
		float L_10 = V_0;
		float L_11 = ___1_v;
		float L_12;
		L_12 = sinf(((float)il2cpp_codegen_multiply((1.57079637f), L_11)));
		(&V_2)->___y_3 = ((float)il2cpp_codegen_multiply(L_10, L_12));
		// p.z = s * Cos(PI * u) * 10;
		float L_13 = V_1;
		float L_14 = ___0_u;
		float L_15;
		L_15 = cosf(((float)il2cpp_codegen_multiply((3.14159274f), L_14)));
		(&V_2)->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_15)), (10.0f)));
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		V_3 = L_16;
		goto IL_0082;
	}

IL_0082:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		return L_17;
	}
}
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary::Torus(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FunctionLibrary_Torus_mF58589B50F7A30EEE5A058B0EC367295C298E127 (float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var r1 = 0.7f + 0.1f * Sin(PI * (6f * u + 0.5f * t));
		float L_0 = ___0_u;
		float L_1 = ___2_t;
		float L_2;
		L_2 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((6.0f), L_0)), ((float)il2cpp_codegen_multiply((0.5f), L_1)))))));
		V_0 = ((float)il2cpp_codegen_add((0.699999988f), ((float)il2cpp_codegen_multiply((0.100000001f), L_2))));
		// var r2 = 0.15f + 0.05f * Sin(PI * (8f * u + 4f * v + 2f * t));
		float L_3 = ___0_u;
		float L_4 = ___1_v;
		float L_5 = ___2_t;
		float L_6;
		L_6 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((8.0f), L_3)), ((float)il2cpp_codegen_multiply((4.0f), L_4)))), ((float)il2cpp_codegen_multiply((2.0f), L_5)))))));
		V_1 = ((float)il2cpp_codegen_add((0.150000006f), ((float)il2cpp_codegen_multiply((0.0500000007f), L_6))));
		// var s = r1 + r2 * Cos(PI * v);
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9 = ___1_v;
		float L_10;
		L_10 = cosf(((float)il2cpp_codegen_multiply((3.14159274f), L_9)));
		V_2 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_8, L_10))));
		// p.x = s * Sin(PI * u);
		float L_11 = V_2;
		float L_12 = ___0_u;
		float L_13;
		L_13 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), L_12)));
		(&V_3)->___x_2 = ((float)il2cpp_codegen_multiply(L_11, L_13));
		// p.y = r2 * Sin(PI * v);
		float L_14 = V_1;
		float L_15 = ___1_v;
		float L_16;
		L_16 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), L_15)));
		(&V_3)->___y_3 = ((float)il2cpp_codegen_multiply(L_14, L_16));
		// p.z = s * Cos(PI * u);
		float L_17 = V_2;
		float L_18 = ___0_u;
		float L_19;
		L_19 = cosf(((float)il2cpp_codegen_multiply((3.14159274f), L_18)));
		(&V_3)->___z_4 = ((float)il2cpp_codegen_multiply(L_17, L_19));
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		V_4 = L_20;
		goto IL_00ac;
	}

IL_00ac:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_4;
		return L_21;
	}
}
// System.Void FastScriptReload.Examples.FunctionLibrary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionLibrary__ctor_mE9E17CFE74BDE9512C300C2D765C71394E4AAACB (FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void FastScriptReload.Examples.FunctionLibrary::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionLibrary__cctor_m8545EC2AF770FB0F877A1BCC86CD10279BEC2A56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_MultiWave_m4E1B1DBD55D9AA5509E323B43BFC61476DF27AE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_Ripple_m3487B740FEA3C4249A1A6CEE97B1C5D432288981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_Sphere_m8CA9F3E66F44BB69DEC34A9EC50657C84BAAF332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_Torus_mF58589B50F7A30EEE5A058B0EC367295C298E127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_Wave_m9EA4C92570AD2DC425FCC9315A02B9988578091D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Function[] functions = { Wave, MultiWave, Ripple, Sphere, Torus };
		FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* L_0 = (FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B*)(FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B*)SZArrayNew(FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B_il2cpp_TypeInfo_var, (uint32_t)5);
		FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* L_1 = L_0;
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_2 = (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)il2cpp_codegen_object_new(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Function__ctor_mFDA17EE76779F1FBC3452AF6C1701FF2B75971EC(L_2, NULL, (intptr_t)((void*)FunctionLibrary_Wave_m9EA4C92570AD2DC425FCC9315A02B9988578091D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)L_2);
		FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* L_3 = L_1;
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_4 = (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)il2cpp_codegen_object_new(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Function__ctor_mFDA17EE76779F1FBC3452AF6C1701FF2B75971EC(L_4, NULL, (intptr_t)((void*)FunctionLibrary_MultiWave_m4E1B1DBD55D9AA5509E323B43BFC61476DF27AE6_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)L_4);
		FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* L_5 = L_3;
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_6 = (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)il2cpp_codegen_object_new(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Function__ctor_mFDA17EE76779F1FBC3452AF6C1701FF2B75971EC(L_6, NULL, (intptr_t)((void*)FunctionLibrary_Ripple_m3487B740FEA3C4249A1A6CEE97B1C5D432288981_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)L_6);
		FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* L_7 = L_5;
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_8 = (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)il2cpp_codegen_object_new(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Function__ctor_mFDA17EE76779F1FBC3452AF6C1701FF2B75971EC(L_8, NULL, (intptr_t)((void*)FunctionLibrary_Sphere_m8CA9F3E66F44BB69DEC34A9EC50657C84BAAF332_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)L_8);
		FunctionU5BU5D_t8A7D8BD9D04AAD3A573FC0D481E804E40F04F15B* L_9 = L_7;
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_10 = (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)il2cpp_codegen_object_new(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Function__ctor_mFDA17EE76779F1FBC3452AF6C1701FF2B75971EC(L_10, NULL, (intptr_t)((void*)FunctionLibrary_Torus_mF58589B50F7A30EEE5A058B0EC367295C298E127_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*)L_10);
		((FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_StaticFields*)il2cpp_codegen_static_fields_for(FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var))->___functions_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_StaticFields*)il2cpp_codegen_static_fields_for(FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var))->___functions_4), (void*)L_9);
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
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_Multicast(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* currentDelegate = reinterpret_cast<Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523*>(delegatesToInvoke[i]);
		typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_u, ___1_v, ___2_t, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_OpenInst(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_u, ___1_v, ___2_t, method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_OpenStatic(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_u, ___1_v, ___2_t, method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_OpenStaticInvoker(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, float, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_u, ___1_v, ___2_t);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_ClosedStaticInvoker(Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject*, float, float, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_u, ___1_v, ___2_t);
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelegatePInvokeWrapper_Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523 (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 returnValue = il2cppPInvokeFunc(___0_u, ___1_v, ___2_t);

	return returnValue;
}
// System.Void FastScriptReload.Examples.FunctionLibrary/Function::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Function__ctor_mFDA17EE76779F1FBC3452AF6C1701FF2B75971EC (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_Multicast;
}
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary/Function::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83 (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_u, ___1_v, ___2_t, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FastScriptReload.Examples.FunctionLibrary/Function::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Function_BeginInvoke_m411F1FAAF24885F4D01C8F04A8558A3FC5586250 (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___0_u);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_v);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_t);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// UnityEngine.Vector3 FastScriptReload.Examples.FunctionLibrary/Function::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_EndInvoke_mD9D78B9DA8AD1A379FD7066B3B6B2EC06C76EDB7 (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox ((RuntimeObject*)__result);
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
// System.Void FastScriptReload.Examples.Graph::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_Awake_mE7FBDB7E13965F798ADE7DE49C6A7CCAE11EA3B3 (Graph_tF68C10AF5FAAB9A41E312870376E1C18010428C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D3F0BC5F5D25A8BDDBC251A4F1B0B179DB852CD);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	bool V_6 = false;
	{
		// var pointsHolderGo = new GameObject("PointsHolder");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral8D3F0BC5F5D25A8BDDBC251A4F1B0B179DB852CD, NULL);
		V_0 = L_0;
		// float step = 2f / resolution;
		int32_t L_1 = __this->___resolution_5;
		V_1 = ((float)((2.0f)/((float)L_1)));
		// var scale = Vector3.one * step;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_3 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		V_2 = L_4;
		// points = new Transform[resolution * resolution];
		int32_t L_5 = __this->___resolution_5;
		int32_t L_6 = __this->___resolution_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_5, L_6)));
		__this->___points_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_7), (void*)L_7);
		// for (int i = 0; i < points.Length; i++) {
		V_3 = 0;
		goto IL_007a;
	}

IL_0042:
	{
		// Transform point = points[i] = Instantiate(pointPrefab);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_8 = __this->___points_7;
		int32_t L_9 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___pointPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB(L_10, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		V_5 = L_12;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_5;
		V_4 = L_13;
		// point.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_15, NULL);
		// point.SetParent(pointsHolderGo.transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_16);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_16, L_18, (bool)0, NULL);
		// for (int i = 0; i < points.Length; i++) {
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007a:
	{
		// for (int i = 0; i < points.Length; i++) {
		int32_t L_20 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = __this->___points_7;
		NullCheck(L_21);
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0042;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FastScriptReload.Examples.Graph::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_Update_m84049E55C78E81095C9D6F9D2B144C5EDFA7E80D (Graph_tF68C10AF5FAAB9A41E312870376E1C18010428C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	{
		// var f = FunctionLibrary.GetFunction(function);
		int32_t L_0 = __this->___function_6;
		il2cpp_codegen_runtime_class_init_inline(FunctionLibrary_t9D8821D4C3E38F9A6DECBF5CC85B7E772D941B83_il2cpp_TypeInfo_var);
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_1;
		L_1 = FunctionLibrary_GetFunction_m25354E5571B0ABE3A524590876A2E43C91C0B7E7(L_0, NULL);
		V_0 = L_1;
		// var time = Time.time;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_1 = L_2;
		// var step = 2f / resolution;
		int32_t L_3 = __this->___resolution_5;
		V_2 = ((float)((2.0f)/((float)L_3)));
		// var v = 0.5f * step - 1f;
		float L_4 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((0.5f), L_4)), (1.0f)));
		// for (int i = 0, x = 0, z = 0; i < points.Length; i++, x++)
		V_4 = 0;
		// for (int i = 0, x = 0, z = 0; i < points.Length; i++, x++)
		V_5 = 0;
		// for (int i = 0, x = 0, z = 0; i < points.Length; i++, x++)
		V_6 = 0;
		goto IL_00a1;
	}

IL_003a:
	{
		// if (x == resolution)
		int32_t L_5 = V_5;
		int32_t L_6 = __this->___resolution_5;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// x = 0;
		V_5 = 0;
		// z += 1;
		int32_t L_8 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// v = (z + 0.5f) * step - 1f;
		int32_t L_9 = V_6;
		float L_10 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)L_9), (0.5f))), L_10)), (1.0f)));
	}

IL_0068:
	{
		// var u = (x + 0.5f) * step - 1f;
		int32_t L_11 = V_5;
		float L_12 = V_2;
		V_7 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)L_11), (0.5f))), L_12)), (1.0f)));
		// points[i].localPosition = f(u, v, time);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = __this->___points_7;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* L_17 = V_0;
		float L_18 = V_7;
		float L_19 = V_3;
		float L_20 = V_1;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_inline(L_17, L_18, L_19, L_20, NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_21, NULL);
		// for (int i = 0, x = 0, z = 0; i < points.Length; i++, x++)
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// for (int i = 0, x = 0, z = 0; i < points.Length; i++, x++)
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a1:
	{
		// for (int i = 0, x = 0, z = 0; i < points.Length; i++, x++)
		int32_t L_24 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = __this->___points_7;
		NullCheck(L_25);
		V_9 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_9;
		if (L_26)
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FastScriptReload.Examples.Graph::OnScriptHotReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_OnScriptHotReload_mA62A52CE67E44038AB4144CE2A27EBBD52EE4F33 (Graph_tF68C10AF5FAAB9A41E312870376E1C18010428C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBEF1380159A92A44EB6D3F67A2C5F1E9E02925E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFDEF3E272B1373B3701C1B83BCE2600160C0F8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Script 'Graph.cs' was changed and hot reloaded, you have access to instance via 'this', eg: {nameof(resolution)} value is: {resolution}");
		int32_t L_0 = __this->___resolution_5;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralEFDEF3E272B1373B3701C1B83BCE2600160C0F8B, _stringLiteralBBEF1380159A92A44EB6D3F67A2C5F1E9E02925E, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void FastScriptReload.Examples.Graph::OnScriptHotReloadNoInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_OnScriptHotReloadNoInstance_mC97420DEB6BABA10FD4D09773A756E3FBDB9F6B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3941B8E63EDC247A016047727FD890C203E74F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Script 'Graph.cs' was changed - this method is executed even without any instance in the scene. There's no access to 'this'. " +
		//           "Useful if you just added a type / need to perform some one-off init");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1B3941B8E63EDC247A016047727FD890C203E74F, NULL);
		// }
		return;
	}
}
// System.Void FastScriptReload.Examples.Graph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph__ctor_mFD40C9B259759ED58300D45B61A3A585D7913369 (Graph_tF68C10AF5FAAB9A41E312870376E1C18010428C1* __this, const RuntimeMethod* method) 
{
	{
		// int resolution = 10;
		__this->___resolution_5 = ((int32_t)10);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Function_Invoke_mD445D2078A3D10074F9F84F86FFF78796A5E8F83_inline (Function_t90BADE25D9E9EA5A062314A03322AFFCEAC69523* __this, float ___0_u, float ___1_v, float ___2_t, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_u, ___1_v, ___2_t, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
