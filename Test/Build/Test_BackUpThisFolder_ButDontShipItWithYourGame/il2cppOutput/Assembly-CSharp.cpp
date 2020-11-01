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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// GameController
struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// PlayerData
struct PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043;
// Readme
struct Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46;
// Readme/Section
struct Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985;
// Readme/Section[]
struct SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t5A38FCC3E9F64286F2A624D6571AF9EA7844398E;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t4C99617DAC31689CEC0EDB09B067A65E80E1C3EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4;
// System.Security.Cryptography.Aes
struct Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t4E10C259BBC525A8E0ABEAE9EF01C8589F51FEE5;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t43C29A7F3A8C2DDAC9F3BF9BF739B03E4D5DE9A9;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E;
// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42;
// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5;
// System.Security.Cryptography.SHA256
struct SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Tuple`2<System.Byte[],System.Byte[]>
struct Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7;

IL2CPP_EXTERN_C RuntimeClass* Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral096B95A8229C07AA3F8CE93B8E7B161371142735;
IL2CPP_EXTERN_C String_t* _stringLiteral19681EFFCB7DFC0F16D9429F4D8E2630A5EF0187;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral24DD213B22F42A771CF237CB9F0A82354097D49E;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral2B84F621C0FD4BA8BD514C5C43AB9A897C8C014E;
IL2CPP_EXTERN_C String_t* _stringLiteral6ABC7411F94E66D973C3DF5720BFDD3A80DCC98E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB90A0AB6DC7E31686681F013D6CAB3844650AE;
IL2CPP_EXTERN_C String_t* _stringLiteral99EA7BF70F6E69AD71659995677B43F8A8312025;
IL2CPP_EXTERN_C String_t* _stringLiteralA44FC62E965F6E70D8A2010A087B9C76AFC8D144;
IL2CPP_EXTERN_C String_t* _stringLiteralC0AE8F6EA84111498894729659051CE9713AAB42;
IL2CPP_EXTERN_C String_t* _stringLiteralF6BBCE1D10617C6DB3669DDBE1E7C27D376A8833;
IL2CPP_EXTERN_C const RuntimeMethod* Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m66DC8281779947BC603B4EFD6DED9050BCE367E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m472C80E66506855DD46B27663917E3784DC8773C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m65AC8D715D0F2B6A69675735DD5ED57DA440A809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m8FF03B10B0C681F2D02F1424FFFCE38EFA66B530_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encryption_Decrypt_m499F1ADE42AB13015C07B757A0809DA8DFF185D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encryption_Encrypt_m20A5652319C23EE9924D84274C4B3297D500AB99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encryption_Encrypt_m3344CA673021AD9D62CB9A49D2172E677614C303_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encryption_GenerateKeyIV_m3AC0BC0A0835FD0B9F4DC168A6F2E9D07126ED2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encryption__cctor_m804D8E18E2FE4A31B196CD4BCBABB7AF94A045AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_AddScore_m4665FA35AC15797339A1766AF36F6D459B3E406C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_SubtractScore_mD1968949D9CA48E90AC8C9DF07D7D0F15FAF409D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_TestOnly_mC3431CAD08D3F2A8165D995BA6C98C52280D2557_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_Update_mBCFBA31999BD51BFC0E3CACA495249FF8FB4E225_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SaveLoadSystem_LoadPlayer_m696EEE14B6C0F57233B38FA19AA4C81D053F5376_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SaveLoadSystem_SavePlayer_mB03DAC3D8D780C260FD617BFCE34B58CA5AD8A5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;

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


// Encryption
struct  Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60  : public RuntimeObject
{
public:

public:
};

struct Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields
{
public:
	// System.Security.Cryptography.Aes Encryption::aes
	Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * ___aes_0;
	// System.Security.Cryptography.SHA256 Encryption::sha
	SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * ___sha_1;

public:
	inline static int32_t get_offset_of_aes_0() { return static_cast<int32_t>(offsetof(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields, ___aes_0)); }
	inline Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * get_aes_0() const { return ___aes_0; }
	inline Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 ** get_address_of_aes_0() { return &___aes_0; }
	inline void set_aes_0(Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * value)
	{
		___aes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aes_0), (void*)value);
	}

	inline static int32_t get_offset_of_sha_1() { return static_cast<int32_t>(offsetof(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields, ___sha_1)); }
	inline SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * get_sha_1() const { return ___sha_1; }
	inline SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD ** get_address_of_sha_1() { return &___sha_1; }
	inline void set_sha_1(SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * value)
	{
		___sha_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sha_1), (void*)value);
	}
};


// PlayerData
struct  PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043  : public RuntimeObject
{
public:
	// System.Int32 PlayerData::score
	int32_t ___score_0;
	// System.String PlayerData::playerName
	String_t* ___playerName_1;

public:
	inline static int32_t get_offset_of_score_0() { return static_cast<int32_t>(offsetof(PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043, ___score_0)); }
	inline int32_t get_score_0() const { return ___score_0; }
	inline int32_t* get_address_of_score_0() { return &___score_0; }
	inline void set_score_0(int32_t value)
	{
		___score_0 = value;
	}

	inline static int32_t get_offset_of_playerName_1() { return static_cast<int32_t>(offsetof(PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043, ___playerName_1)); }
	inline String_t* get_playerName_1() const { return ___playerName_1; }
	inline String_t** get_address_of_playerName_1() { return &___playerName_1; }
	inline void set_playerName_1(String_t* value)
	{
		___playerName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerName_1), (void*)value);
	}
};


// Readme_Section
struct  Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985  : public RuntimeObject
{
public:
	// System.String Readme_Section::heading
	String_t* ___heading_0;
	// System.String Readme_Section::text
	String_t* ___text_1;
	// System.String Readme_Section::linkText
	String_t* ___linkText_2;
	// System.String Readme_Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// SaveLoadSystem
struct  SaveLoadSystem_t4B6035D4008C88B95B288E718E6BEB2A885C28F7  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t0D69F51DA669F265FD23E7B5E5CCA3F26EDCB58A  : public RuntimeObject
{
public:

public:
};


// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___HashValue_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Tuple`2<System.Byte[],System.Byte[]>
struct  Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8, ___m_Item1_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_Item1_0() const { return ___m_Item1_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8, ___m_Item2_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_Item2_1() const { return ___m_Item2_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct  Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
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

// UnityTemplateProjects.SimpleCameraController_CameraState
struct  CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Security.Cryptography.MD5
struct  MD5_tCED753745572EC20FE5D31D15F132736B5343EE6  : public HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA
{
public:

public:
};


// System.Security.Cryptography.Rfc2898DeriveBytes
struct  Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5  : public DeriveBytes_t0D69F51DA669F265FD23E7B5E5CCA3F26EDCB58A
{
public:
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_0;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::m_salt
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_salt_1;
	// System.Security.Cryptography.HMACSHA1 System.Security.Cryptography.Rfc2898DeriveBytes::m_hmacsha1
	HMACSHA1_t4E10C259BBC525A8E0ABEAE9EF01C8589F51FEE5 * ___m_hmacsha1_2;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::m_password
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_password_3;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::m_iterations
	uint32_t ___m_iterations_4;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::m_block
	uint32_t ___m_block_5;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::m_startIndex
	int32_t ___m_startIndex_6;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::m_endIndex
	int32_t ___m_endIndex_7;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_buffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_0() const { return ___m_buffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_salt_1() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_salt_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_salt_1() const { return ___m_salt_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_salt_1() { return &___m_salt_1; }
	inline void set_m_salt_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_salt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_salt_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_hmacsha1_2() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_hmacsha1_2)); }
	inline HMACSHA1_t4E10C259BBC525A8E0ABEAE9EF01C8589F51FEE5 * get_m_hmacsha1_2() const { return ___m_hmacsha1_2; }
	inline HMACSHA1_t4E10C259BBC525A8E0ABEAE9EF01C8589F51FEE5 ** get_address_of_m_hmacsha1_2() { return &___m_hmacsha1_2; }
	inline void set_m_hmacsha1_2(HMACSHA1_t4E10C259BBC525A8E0ABEAE9EF01C8589F51FEE5 * value)
	{
		___m_hmacsha1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hmacsha1_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_password_3() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_password_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_password_3() const { return ___m_password_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_password_3() { return &___m_password_3; }
	inline void set_m_password_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_password_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_password_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_iterations_4() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_iterations_4)); }
	inline uint32_t get_m_iterations_4() const { return ___m_iterations_4; }
	inline uint32_t* get_address_of_m_iterations_4() { return &___m_iterations_4; }
	inline void set_m_iterations_4(uint32_t value)
	{
		___m_iterations_4 = value;
	}

	inline static int32_t get_offset_of_m_block_5() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_block_5)); }
	inline uint32_t get_m_block_5() const { return ___m_block_5; }
	inline uint32_t* get_address_of_m_block_5() { return &___m_block_5; }
	inline void set_m_block_5(uint32_t value)
	{
		___m_block_5 = value;
	}

	inline static int32_t get_offset_of_m_startIndex_6() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_startIndex_6)); }
	inline int32_t get_m_startIndex_6() const { return ___m_startIndex_6; }
	inline int32_t* get_address_of_m_startIndex_6() { return &___m_startIndex_6; }
	inline void set_m_startIndex_6(int32_t value)
	{
		___m_startIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_endIndex_7() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5, ___m_endIndex_7)); }
	inline int32_t get_m_endIndex_7() const { return ___m_endIndex_7; }
	inline int32_t* get_address_of_m_endIndex_7() { return &___m_endIndex_7; }
	inline void set_m_endIndex_7(int32_t value)
	{
		___m_endIndex_7 = value;
	}
};


// System.Security.Cryptography.SHA256
struct  SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD  : public HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA
{
public:

public:
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
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


// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_13)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_tFEF4ABC0D7DE012B1C0976F196E45600568D67AF 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tFEF4ABC0D7DE012B1C0976F196E45600568D67AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t8FC0F5849147B01F3EB6E3B876E06B3022E0C59A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t8FC0F5849147B01F3EB6E3B876E06B3022E0C59A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.CipherMode
struct  CipherMode_t1DC3069D617AC3D17A2608F5BB36C0F115D229DF 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t1DC3069D617AC3D17A2608F5BB36C0F115D229DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_tDA87D3C6D96B2FCC35184B3B4A00923266ADB2D5 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CryptoStreamMode_tDA87D3C6D96B2FCC35184B3B4A00923266ADB2D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42  : public MD5_tCED753745572EC20FE5D31D15F132736B5343EE6
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42, ____H_4)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____H_4), (void*)value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42, ___buff_5)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ProcessingBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___K_9), (void*)value);
	}
};


// System.Security.Cryptography.PaddingMode
struct  PaddingMode_tA6F228B2795D29C9554F2D6824DB9FF67519A0E0 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_tA6F228B2795D29C9554F2D6824DB9FF67519A0E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct  CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_Transform
	RuntimeObject* ____Transform_5;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_InputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____InputBuffer_6;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBufferIndex
	int32_t ____InputBufferIndex_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBlockSize
	int32_t ____InputBlockSize_8;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_OutputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____OutputBuffer_9;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBufferIndex
	int32_t ____OutputBufferIndex_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBlockSize
	int32_t ____OutputBlockSize_11;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;

public:
	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____stream_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__stream_4() const { return ____stream_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_4), (void*)value);
	}

	inline static int32_t get_offset_of__Transform_5() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____Transform_5)); }
	inline RuntimeObject* get__Transform_5() const { return ____Transform_5; }
	inline RuntimeObject** get_address_of__Transform_5() { return &____Transform_5; }
	inline void set__Transform_5(RuntimeObject* value)
	{
		____Transform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Transform_5), (void*)value);
	}

	inline static int32_t get_offset_of__InputBuffer_6() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____InputBuffer_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__InputBuffer_6() const { return ____InputBuffer_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__InputBuffer_6() { return &____InputBuffer_6; }
	inline void set__InputBuffer_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____InputBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____InputBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__InputBufferIndex_7() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____InputBufferIndex_7)); }
	inline int32_t get__InputBufferIndex_7() const { return ____InputBufferIndex_7; }
	inline int32_t* get_address_of__InputBufferIndex_7() { return &____InputBufferIndex_7; }
	inline void set__InputBufferIndex_7(int32_t value)
	{
		____InputBufferIndex_7 = value;
	}

	inline static int32_t get_offset_of__InputBlockSize_8() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____InputBlockSize_8)); }
	inline int32_t get__InputBlockSize_8() const { return ____InputBlockSize_8; }
	inline int32_t* get_address_of__InputBlockSize_8() { return &____InputBlockSize_8; }
	inline void set__InputBlockSize_8(int32_t value)
	{
		____InputBlockSize_8 = value;
	}

	inline static int32_t get_offset_of__OutputBuffer_9() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____OutputBuffer_9)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__OutputBuffer_9() const { return ____OutputBuffer_9; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__OutputBuffer_9() { return &____OutputBuffer_9; }
	inline void set__OutputBuffer_9(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____OutputBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OutputBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__OutputBufferIndex_10() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____OutputBufferIndex_10)); }
	inline int32_t get__OutputBufferIndex_10() const { return ____OutputBufferIndex_10; }
	inline int32_t* get_address_of__OutputBufferIndex_10() { return &____OutputBufferIndex_10; }
	inline void set__OutputBufferIndex_10(int32_t value)
	{
		____OutputBufferIndex_10 = value;
	}

	inline static int32_t get_offset_of__OutputBlockSize_11() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____OutputBlockSize_11)); }
	inline int32_t get__OutputBlockSize_11() const { return ____OutputBlockSize_11; }
	inline int32_t* get_address_of__OutputBlockSize_11() { return &____OutputBlockSize_11; }
	inline void set__OutputBlockSize_11(int32_t value)
	{
		____OutputBlockSize_11 = value;
	}

	inline static int32_t get_offset_of__transformMode_12() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____transformMode_12)); }
	inline int32_t get__transformMode_12() const { return ____transformMode_12; }
	inline int32_t* get_address_of__transformMode_12() { return &____transformMode_12; }
	inline void set__transformMode_12(int32_t value)
	{
		____transformMode_12 = value;
	}

	inline static int32_t get_offset_of__canRead_13() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____canRead_13)); }
	inline bool get__canRead_13() const { return ____canRead_13; }
	inline bool* get_address_of__canRead_13() { return &____canRead_13; }
	inline void set__canRead_13(bool value)
	{
		____canRead_13 = value;
	}

	inline static int32_t get_offset_of__canWrite_14() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____canWrite_14)); }
	inline bool get__canWrite_14() const { return ____canWrite_14; }
	inline bool* get_address_of__canWrite_14() { return &____canWrite_14; }
	inline void set__canWrite_14(bool value)
	{
		____canWrite_14 = value;
	}

	inline static int32_t get_offset_of__finalBlockTransformed_15() { return static_cast<int32_t>(offsetof(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC, ____finalBlockTransformed_15)); }
	inline bool get__finalBlockTransformed_15() const { return ____finalBlockTransformed_15; }
	inline bool* get_address_of__finalBlockTransformed_15() { return &____finalBlockTransformed_15; }
	inline void set__finalBlockTransformed_15(bool value)
	{
		____finalBlockTransformed_15 = value;
	}
};


// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___IVValue_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___KeyValue_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Readme
struct  Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme_Section[] Readme::sections
	SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___icon_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_icon_4() const { return ___icon_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___sections_6)); }
	inline SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_context_1)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_binder_2)); }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// System.Security.Cryptography.Aes
struct  Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653  : public SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789
{
public:

public:
};

struct Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// GameController
struct  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 GameController::_score
	int32_t ____score_4;
	// System.String GameController::_playerName
	String_t* ____playerName_5;
	// UnityEngine.UI.Text GameController::scoreTxt
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreTxt_6;
	// UnityEngine.UI.Text GameController::playerTxt
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___playerTxt_7;

public:
	inline static int32_t get_offset_of__score_4() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ____score_4)); }
	inline int32_t get__score_4() const { return ____score_4; }
	inline int32_t* get_address_of__score_4() { return &____score_4; }
	inline void set__score_4(int32_t value)
	{
		____score_4 = value;
	}

	inline static int32_t get_offset_of__playerName_5() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ____playerName_5)); }
	inline String_t* get__playerName_5() const { return ____playerName_5; }
	inline String_t** get_address_of__playerName_5() { return &____playerName_5; }
	inline void set__playerName_5(String_t* value)
	{
		____playerName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerName_5), (void*)value);
	}

	inline static int32_t get_offset_of_scoreTxt_6() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___scoreTxt_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreTxt_6() const { return ___scoreTxt_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreTxt_6() { return &___scoreTxt_6; }
	inline void set_scoreTxt_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreTxt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreTxt_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerTxt_7() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___playerTxt_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_playerTxt_7() const { return ___playerTxt_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_playerTxt_7() { return &___playerTxt_7; }
	inline void set_playerTxt_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___playerTxt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTxt_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityTemplateProjects.SimpleCameraController
struct  SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;

public:
	inline static int32_t get_offset_of_m_TargetCameraState_4() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_TargetCameraState_4)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_TargetCameraState_4() const { return ___m_TargetCameraState_4; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_TargetCameraState_4() { return &___m_TargetCameraState_4; }
	inline void set_m_TargetCameraState_4(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_TargetCameraState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetCameraState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InterpolatingCameraState_5() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_InterpolatingCameraState_5)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_InterpolatingCameraState_5() const { return ___m_InterpolatingCameraState_5; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_InterpolatingCameraState_5() { return &___m_InterpolatingCameraState_5; }
	inline void set_m_InterpolatingCameraState_5(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_InterpolatingCameraState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterpolatingCameraState_5), (void*)value);
	}

	inline static int32_t get_offset_of_boost_6() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___boost_6)); }
	inline float get_boost_6() const { return ___boost_6; }
	inline float* get_address_of_boost_6() { return &___boost_6; }
	inline void set_boost_6(float value)
	{
		___boost_6 = value;
	}

	inline static int32_t get_offset_of_positionLerpTime_7() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___positionLerpTime_7)); }
	inline float get_positionLerpTime_7() const { return ___positionLerpTime_7; }
	inline float* get_address_of_positionLerpTime_7() { return &___positionLerpTime_7; }
	inline void set_positionLerpTime_7(float value)
	{
		___positionLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivityCurve_8() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___mouseSensitivityCurve_8)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_mouseSensitivityCurve_8() const { return ___mouseSensitivityCurve_8; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_mouseSensitivityCurve_8() { return &___mouseSensitivityCurve_8; }
	inline void set_mouseSensitivityCurve_8(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___mouseSensitivityCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseSensitivityCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationLerpTime_9() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___rotationLerpTime_9)); }
	inline float get_rotationLerpTime_9() const { return ___rotationLerpTime_9; }
	inline float* get_address_of_rotationLerpTime_9() { return &___rotationLerpTime_9; }
	inline void set_rotationLerpTime_9(float value)
	{
		___rotationLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_invertY_10() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___invertY_10)); }
	inline bool get_invertY_10() const { return ___invertY_10; }
	inline bool* get_address_of_invertY_10() { return &___invertY_10; }
	inline void set_invertY_10(bool value)
	{
		___invertY_10 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m8E642EC94EDC2DF04693C2996ACCD555ED327BA2_gshared (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m6510C633C5CE5469F032825306A482F311F89A20_gshared_inline (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method);
// !1 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_mF200874169D9957B0B84C426263AF8D9AC06F165_gshared_inline (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m66DC8281779947BC603B4EFD6DED9050BCE367E4_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);

// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5CryptoServiceProvider__ctor_m44F02FCA0F830601738D9672ACA342719C8CD823 (MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* HashAlgorithm_ComputeHash_m18501D3068AEBEB5FA83EA72BE780E371DB0C122 (HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc2898DeriveBytes__ctor_mF6B08F49AEF6ADA16DA6B221E96967984CC0399B (Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 * __this, String_t* ___password0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___salt1, const RuntimeMethod* method);
// System.Void System.Tuple`2<System.Byte[],System.Byte[]>::.ctor(!0,!1)
inline void Tuple_2__ctor_m472C80E66506855DD46B27663917E3784DC8773C (Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___item10, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))Tuple_2__ctor_m8E642EC94EDC2DF04693C2996ACCD555ED327BA2_gshared)(__this, ___item10, ___item21, method);
}
// System.Tuple`2<System.Byte[],System.Byte[]> Encryption::GenerateKeyIV(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * Encryption_GenerateKeyIV_m3AC0BC0A0835FD0B9F4DC168A6F2E9D07126ED2B (String_t* ___secret0, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Byte[],System.Byte[]>::get_Item1()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Tuple_2_get_Item1_m65AC8D715D0F2B6A69675735DD5ED57DA440A809_inline (Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 *, const RuntimeMethod*))Tuple_2_get_Item1_m6510C633C5CE5469F032825306A482F311F89A20_gshared_inline)(__this, method);
}
// !1 System.Tuple`2<System.Byte[],System.Byte[]>::get_Item2()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Tuple_2_get_Item2_m8FF03B10B0C681F2D02F1424FFFCE38EFA66B530_inline (Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 *, const RuntimeMethod*))Tuple_2_get_Item2_mF200874169D9957B0B84C426263AF8D9AC06F165_gshared_inline)(__this, method);
}
// System.Byte[] Encryption::Encrypt(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Encryption_Encrypt_m3344CA673021AD9D62CB9A49D2172E677614C303 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___iv2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_m2BDDB23BFAAB929B9141061367EDAC0524990A5D (CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method);
// System.Byte[] Encryption::Decrypt(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___iv2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_mCB6569082D97C68D16261175EE091E8539828E67 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___destination0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_SequenceEqual_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m66DC8281779947BC603B4EFD6DED9050BCE367E4 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m66DC8281779947BC603B4EFD6DED9050BCE367E4_gshared)(___first0, ___second1, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Security.Cryptography.Aes System.Security.Cryptography.Aes::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * Aes_Create_m389807DAE1E861547F06B1BA5C18EA8A525E4F3E (const RuntimeMethod* method);
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * SHA256_Create_mBB1886B9CB89D706FB87832AB8EC74F3BD835C3F (const RuntimeMethod* method);
// System.Void GameController::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_QuitGame_mE3FEB4F2D9C91A13727DB9EBCC8EB60786C699B1 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// System.Void SaveLoadSystem::SavePlayer(GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadSystem_SavePlayer_mB03DAC3D8D780C260FD617BFCE34B58CA5AD8A5D (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___gameController0, const RuntimeMethod* method);
// System.Void GameController::Display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// PlayerData SaveLoadSystem::LoadPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * SaveLoadSystem_LoadPlayer_m696EEE14B6C0F57233B38FA19AA4C81D053F5376 (const RuntimeMethod* method);
// System.Void GameController::set_Score(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameController_set_Score_mAA3993313A24DFA1A1E8BC8B231753EEF8BCC456_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GameController::set_PlayerName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameController_set_PlayerName_m72E6E4F39E1875D73CDFFAE786A9C1EA42D90D50_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GameController::TestOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TestOnly_mC3431CAD08D3F2A8165D995BA6C98C52280D2557 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Int32 GameController::get_Score()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t GameController_get_Score_m262D1170CB58211819997E501094D3E1B9BC1DC7_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String GameController::get_PlayerName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* GameController_get_PlayerName_mAC7CD1720B4DD1BEA49029894504340E16679633_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_mEA8ADD359BFAC7D9E9B6183FDC1C5C80E0F29806 (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m967EF49BBCD52204BB79BA6E9DA533833B07B800 (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void PlayerData::.ctor(GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mC734B6618D7914315D401F496F66143F57E5F970 (PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * __this, GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___gameController0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mBA2FB6DB94D34F42E14DF7D788056FCF0CF41D52 (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___serializationStream0, RuntimeObject * ___graph1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* ___path0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BinaryFormatter_Deserialize_m20A831B13DF5C3F031F2141730291630A16A32AD (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___serializationStream0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* ___keys0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
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
// System.Tuple`2<System.Byte[],System.Byte[]> Encryption::GenerateKeyIV(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * Encryption_GenerateKeyIV_m3AC0BC0A0835FD0B9F4DC168A6F2E9D07126ED2B (String_t* ___secret0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encryption_GenerateKeyIV_m3AC0BC0A0835FD0B9F4DC168A6F2E9D07126ED2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42 * V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 * V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var md5 = new MD5CryptoServiceProvider())
		MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42 * L_0 = (MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42 *)il2cpp_codegen_object_new(MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42_il2cpp_TypeInfo_var);
		MD5CryptoServiceProvider__ctor_m44F02FCA0F830601738D9672ACA342719C8CD823(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// var salt = md5.ComputeHash(Encoding.UTF8.GetBytes(secret));
			MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42 * L_1 = V_0;
			Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
			String_t* L_3 = ___secret0;
			NullCheck(L_2);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
			NullCheck(L_1);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = HashAlgorithm_ComputeHash_m18501D3068AEBEB5FA83EA72BE780E371DB0C122(L_1, L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			// using (var gen = new Rfc2898DeriveBytes(secret, salt))
			String_t* L_6 = ___secret0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
			Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 * L_8 = (Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 *)il2cpp_codegen_object_new(Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5_il2cpp_TypeInfo_var);
			Rfc2898DeriveBytes__ctor_mF6B08F49AEF6ADA16DA6B221E96967984CC0399B(L_8, L_6, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
		}

IL_0020:
		try
		{ // begin try (depth: 2)
			// var key = gen.GetBytes(aes.KeySize / 8);
			Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var);
			Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * L_10 = ((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->get_aes_0();
			NullCheck(L_10);
			int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize() */, L_10);
			NullCheck(L_9);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.DeriveBytes::GetBytes(System.Int32) */, L_9, ((int32_t)((int32_t)L_11/(int32_t)8)));
			// var iv = gen.GetBytes(aes.BlockSize / 8);
			Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 * L_13 = V_2;
			Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * L_14 = ((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->get_aes_0();
			NullCheck(L_14);
			int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_14);
			NullCheck(L_13);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.DeriveBytes::GetBytes(System.Int32) */, L_13, ((int32_t)((int32_t)L_15/(int32_t)8)));
			V_3 = L_16;
			// return new System.Tuple<byte[], byte[]>(key, iv);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_3;
			Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * L_18 = (Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 *)il2cpp_codegen_object_new(Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8_il2cpp_TypeInfo_var);
			Tuple_2__ctor_m472C80E66506855DD46B27663917E3784DC8773C(L_18, L_12, L_17, /*hidden argument*/Tuple_2__ctor_m472C80E66506855DD46B27663917E3784DC8773C_RuntimeMethod_var);
			V_4 = L_18;
			IL2CPP_LEAVE(0x63, FINALLY_004f);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004f;
		}

FINALLY_004f:
		{ // begin finally (depth: 2)
			{
				Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 * L_19 = V_2;
				if (!L_19)
				{
					goto IL_0058;
				}
			}

IL_0052:
			{
				Rfc2898DeriveBytes_tE74308A18335B51BDC1E1E92B8BE0E9B3F84B1A5 * L_20 = V_2;
				NullCheck(L_20);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_20);
			}

IL_0058:
			{
				IL2CPP_END_FINALLY(79)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(79)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x63, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42 * L_21 = V_0;
			if (!L_21)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			MD5CryptoServiceProvider_t99447E76D4ED1F3F4DF0F976CB4A8E0FD7148D42 * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_22);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// }
		Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * L_23 = V_4;
		return L_23;
	}
}
// System.Byte[] Encryption::Encrypt(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Encryption_Encrypt_m20A5652319C23EE9924D84274C4B3297D500AB99 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, String_t* ___secret1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encryption_Encrypt_m20A5652319C23EE9924D84274C4B3297D500AB99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// var v = GenerateKeyIV(secret);
		String_t* L_0 = ___secret1;
		IL2CPP_RUNTIME_CLASS_INIT(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var);
		Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * L_1 = Encryption_GenerateKeyIV_m3AC0BC0A0835FD0B9F4DC168A6F2E9D07126ED2B(L_0, /*hidden argument*/NULL);
		// var key = v.Item1;
		Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * L_2 = L_1;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = Tuple_2_get_Item1_m65AC8D715D0F2B6A69675735DD5ED57DA440A809_inline(L_2, /*hidden argument*/Tuple_2_get_Item1_m65AC8D715D0F2B6A69675735DD5ED57DA440A809_RuntimeMethod_var);
		V_0 = L_3;
		// var iv = v.Item2;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = Tuple_2_get_Item2_m8FF03B10B0C681F2D02F1424FFFCE38EFA66B530_inline(L_2, /*hidden argument*/Tuple_2_get_Item2_m8FF03B10B0C681F2D02F1424FFFCE38EFA66B530_RuntimeMethod_var);
		V_1 = L_4;
		// return Encrypt(src, key, iv);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___src0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = Encryption_Encrypt_m3344CA673021AD9D62CB9A49D2172E677614C303(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Byte[] Encryption::Encrypt(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Encryption_Encrypt_m3344CA673021AD9D62CB9A49D2172E677614C303 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___iv2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encryption_Encrypt_m3344CA673021AD9D62CB9A49D2172E677614C303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var output = new MemoryStream())
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// var encryptor = aes.CreateEncryptor(key, iv);
			IL2CPP_RUNTIME_CLASS_INIT(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var);
			Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * L_1 = ((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->get_aes_0();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___key1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___iv2;
			NullCheck(L_1);
			RuntimeObject* L_4 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(20 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_1, L_2, L_3);
			V_1 = L_4;
			// using (var cs = new CryptoStream(output, encryptor, CryptoStreamMode.Write))
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_5 = V_0;
			RuntimeObject* L_6 = V_1;
			CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_7 = (CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC *)il2cpp_codegen_object_new(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC_il2cpp_TypeInfo_var);
			CryptoStream__ctor_m2BDDB23BFAAB929B9141061367EDAC0524990A5D(L_7, L_5, L_6, 1, /*hidden argument*/NULL);
			V_2 = L_7;
		}

IL_001c:
		try
		{ // begin try (depth: 2)
			// cs.Write(src, 0, src.Length);
			CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_8 = V_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___src0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___src0;
			NullCheck(L_10);
			NullCheck(L_8);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))));
			// var hash = sha.ComputeHash(src);
			IL2CPP_RUNTIME_CLASS_INIT(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var);
			SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * L_11 = ((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->get_sha_1();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___src0;
			NullCheck(L_11);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = HashAlgorithm_ComputeHash_m18501D3068AEBEB5FA83EA72BE780E371DB0C122(L_11, L_12, /*hidden argument*/NULL);
			V_3 = L_13;
			// cs.Write(hash, 0, hash.Length);
			CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_14 = V_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_3;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = V_3;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))));
			// }
			IL2CPP_LEAVE(0x4A, FINALLY_0040);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0040;
		}

FINALLY_0040:
		{ // begin finally (depth: 2)
			{
				CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_17 = V_2;
				if (!L_17)
				{
					goto IL_0049;
				}
			}

IL_0043:
			{
				CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_18 = V_2;
				NullCheck(L_18);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
			}

IL_0049:
			{
				IL2CPP_END_FINALLY(64)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(64)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x4A, IL_004a)
		}

IL_004a:
		{
			// return output.ToArray();
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_19 = V_0;
			NullCheck(L_19);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_19);
			V_4 = L_20;
			IL2CPP_LEAVE(0x5E, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_21 = V_0;
			if (!L_21)
			{
				goto IL_005d;
			}
		}

IL_0057:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_22);
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = V_4;
		return L_23;
	}
}
// System.Byte[] Encryption::Decrypt(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Encryption_Decrypt_m499F1ADE42AB13015C07B757A0809DA8DFF185D4 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, String_t* ___secret1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encryption_Decrypt_m499F1ADE42AB13015C07B757A0809DA8DFF185D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// var v = GenerateKeyIV(secret);
		String_t* L_0 = ___secret1;
		IL2CPP_RUNTIME_CLASS_INIT(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var);
		Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * L_1 = Encryption_GenerateKeyIV_m3AC0BC0A0835FD0B9F4DC168A6F2E9D07126ED2B(L_0, /*hidden argument*/NULL);
		// var key = v.Item1;
		Tuple_2_t37FC15304B66B343B410869CF5045DC59DFFEFD8 * L_2 = L_1;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = Tuple_2_get_Item1_m65AC8D715D0F2B6A69675735DD5ED57DA440A809_inline(L_2, /*hidden argument*/Tuple_2_get_Item1_m65AC8D715D0F2B6A69675735DD5ED57DA440A809_RuntimeMethod_var);
		V_0 = L_3;
		// var iv = v.Item2;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = Tuple_2_get_Item2_m8FF03B10B0C681F2D02F1424FFFCE38EFA66B530_inline(L_2, /*hidden argument*/Tuple_2_get_Item2_m8FF03B10B0C681F2D02F1424FFFCE38EFA66B530_RuntimeMethod_var);
		V_1 = L_4;
		// return Decrypt(src, key, iv);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___src0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Byte[] Encryption::Decrypt(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___iv2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var output = new MemoryStream())
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// using (var input = new MemoryStream(src))
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___src0;
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_2 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_2, L_1, /*hidden argument*/NULL);
			V_1 = L_2;
		}

IL_000d:
		try
		{ // begin try (depth: 2)
			{
				// var decryptor = aes.CreateDecryptor(key, iv);
				IL2CPP_RUNTIME_CLASS_INIT(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var);
				Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * L_3 = ((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->get_aes_0();
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___key1;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___iv2;
				NullCheck(L_3);
				RuntimeObject* L_6 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(21 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_3, L_4, L_5);
				V_2 = L_6;
				// using (var cs = new CryptoStream(input, decryptor, CryptoStreamMode.Read))
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_7 = V_1;
				RuntimeObject* L_8 = V_2;
				CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_9 = (CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC *)il2cpp_codegen_object_new(CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC_il2cpp_TypeInfo_var);
				CryptoStream__ctor_m2BDDB23BFAAB929B9141061367EDAC0524990A5D(L_9, L_7, L_8, 0, /*hidden argument*/NULL);
				V_6 = L_9;
			}

IL_0024:
			try
			{ // begin try (depth: 3)
				// cs.CopyTo(output);
				CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_10 = V_6;
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_11 = V_0;
				NullCheck(L_10);
				Stream_CopyTo_mCB6569082D97C68D16261175EE091E8539828E67(L_10, L_11, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x3A, FINALLY_002e);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_002e;
			}

FINALLY_002e:
			{ // begin finally (depth: 3)
				{
					CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_12 = V_6;
					if (!L_12)
					{
						goto IL_0039;
					}
				}

IL_0032:
				{
					CryptoStream_t02F19D004439DD03FD7FA81169B58FC3AA05C9FC * L_13 = V_6;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
				}

IL_0039:
				{
					IL2CPP_END_FINALLY(46)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(46)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x3A, IL_003a)
			}

IL_003a:
			{
				// var hash = new byte[sha.HashSize / 8];
				IL2CPP_RUNTIME_CLASS_INIT(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var);
				SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * L_14 = ((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->get_sha_1();
				NullCheck(L_14);
				int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_14);
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_15/(int32_t)8)));
				V_3 = L_16;
				// var raws = new byte[output.Length - hash.Length];
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_17 = V_0;
				NullCheck(L_17);
				int64_t L_18 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_17);
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_3;
				NullCheck(L_19);
				if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)L_18, (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8_RuntimeMethod_var);
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_18, (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))))))));
				V_4 = L_20;
				// output.Seek(0, SeekOrigin.Begin);
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_21 = V_0;
				NullCheck(L_21);
				VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_21, (((int64_t)((int64_t)0))), 0);
				// output.Read(raws, 0, raws.Length);
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_22 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = V_4;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = V_4;
				NullCheck(L_24);
				NullCheck(L_22);
				VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))));
				// output.Read(hash, 0, hash.Length);
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_25 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = V_3;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = V_3;
				NullCheck(L_27);
				NullCheck(L_25);
				VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_25, L_26, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))));
				// var chash = sha.ComputeHash(raws);
				SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * L_28 = ((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->get_sha_1();
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_4;
				NullCheck(L_28);
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = HashAlgorithm_ComputeHash_m18501D3068AEBEB5FA83EA72BE780E371DB0C122(L_28, L_29, /*hidden argument*/NULL);
				V_5 = L_30;
				// if (!hash.SequenceEqual(chash))
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_3;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = V_5;
				bool L_33 = Enumerable_SequenceEqual_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m66DC8281779947BC603B4EFD6DED9050BCE367E4((RuntimeObject*)(RuntimeObject*)L_31, (RuntimeObject*)(RuntimeObject*)L_32, /*hidden argument*/Enumerable_SequenceEqual_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m66DC8281779947BC603B4EFD6DED9050BCE367E4_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_00a6;
				}
			}

IL_009b:
			{
				// throw new System.Exception("Invalid content hash");
				Exception_t * L_34 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
				Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_34, _stringLiteralA44FC62E965F6E70D8A2010A087B9C76AFC8D144, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, Encryption_Decrypt_m3A27CB13320E30F1A3453E3873EB1E28E18740A8_RuntimeMethod_var);
			}

IL_00a6:
			{
				// return raws;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = V_4;
				V_7 = L_35;
				IL2CPP_LEAVE(0xC0, FINALLY_00ac);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ac;
		}

FINALLY_00ac:
		{ // begin finally (depth: 2)
			{
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_36 = V_1;
				if (!L_36)
				{
					goto IL_00b5;
				}
			}

IL_00af:
			{
				MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_37 = V_1;
				NullCheck(L_37);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_37);
			}

IL_00b5:
			{
				IL2CPP_END_FINALLY(172)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(172)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xC0, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_38 = V_0;
			if (!L_38)
			{
				goto IL_00bf;
			}
		}

IL_00b9:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_39 = V_0;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_39);
		}

IL_00bf:
		{
			IL2CPP_END_FINALLY(182)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
	}

IL_00c0:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = V_7;
		return L_40;
	}
}
// System.Void Encryption::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encryption__cctor_m804D8E18E2FE4A31B196CD4BCBABB7AF94A045AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encryption__cctor_m804D8E18E2FE4A31B196CD4BCBABB7AF94A045AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Aes aes = AesCryptoServiceProvider.Create();
		IL2CPP_RUNTIME_CLASS_INIT(Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653_il2cpp_TypeInfo_var);
		Aes_t45D82D059B1811A60AF2DA6FD0355CAFB591A653 * L_0 = Aes_Create_m389807DAE1E861547F06B1BA5C18EA8A525E4F3E(/*hidden argument*/NULL);
		((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->set_aes_0(L_0);
		// static SHA256 sha = SHA256.Create();
		SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * L_1 = SHA256_Create_mBB1886B9CB89D706FB87832AB8EC74F3BD835C3F(/*hidden argument*/NULL);
		((Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_StaticFields*)il2cpp_codegen_static_fields_for(Encryption_tA7B93B1D57D854FD4F39D492A7AD10B0DD0EAE60_il2cpp_TypeInfo_var))->set_sha_1(L_1);
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
// System.Int32 GameController::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameController_get_Score_m262D1170CB58211819997E501094D3E1B9BC1DC7 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		// public int Score { get { return _score; } set { _score = value; } }
		int32_t L_0 = __this->get__score_4();
		return L_0;
	}
}
// System.Void GameController::set_Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_set_Score_mAA3993313A24DFA1A1E8BC8B231753EEF8BCC456 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Score { get { return _score; } set { _score = value; } }
		int32_t L_0 = ___value0;
		__this->set__score_4(L_0);
		// public int Score { get { return _score; } set { _score = value; } }
		return;
	}
}
// System.String GameController::get_PlayerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameController_get_PlayerName_mAC7CD1720B4DD1BEA49029894504340E16679633 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		// public string PlayerName { get { return _playerName; } set { _playerName = value; } }
		String_t* L_0 = __this->get__playerName_5();
		return L_0;
	}
}
// System.Void GameController::set_PlayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_set_PlayerName_m72E6E4F39E1875D73CDFFAE786A9C1EA42D90D50 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string PlayerName { get { return _playerName; } set { _playerName = value; } }
		String_t* L_0 = ___value0;
		__this->set__playerName_5(L_0);
		// public string PlayerName { get { return _playerName; } set { _playerName = value; } }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mBCFBA31999BD51BFC0E3CACA495249FF8FB4E225 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Update_mBCFBA31999BD51BFC0E3CACA495249FF8FB4E225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * V_0 = NULL;
	{
		// QuitGame();
		GameController_QuitGame_mE3FEB4F2D9C91A13727DB9EBCC8EB60786C699B1(__this, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.S))
		bool L_0 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)115), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// SaveLoadSystem.SavePlayer(this);
		SaveLoadSystem_SavePlayer_mB03DAC3D8D780C260FD617BFCE34B58CA5AD8A5D(__this, /*hidden argument*/NULL);
		// Display();
		GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB(__this, /*hidden argument*/NULL);
		// Debug.Log("Saved");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC0AE8F6EA84111498894729659051CE9713AAB42, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (Input.GetKeyDown(KeyCode.L))
		bool L_1 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)108), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// PlayerData data = SaveLoadSystem.LoadPlayer();
		PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * L_2 = SaveLoadSystem_LoadPlayer_m696EEE14B6C0F57233B38FA19AA4C81D053F5376(/*hidden argument*/NULL);
		V_0 = L_2;
		// Score = data.score;
		PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_score_0();
		GameController_set_Score_mAA3993313A24DFA1A1E8BC8B231753EEF8BCC456_inline(__this, L_4, /*hidden argument*/NULL);
		// PlayerName = data.playerName;
		PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_playerName_1();
		GameController_set_PlayerName_m72E6E4F39E1875D73CDFFAE786A9C1EA42D90D50_inline(__this, L_6, /*hidden argument*/NULL);
		// Display();
		GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB(__this, /*hidden argument*/NULL);
		// Debug.Log("Loaded");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6DB90A0AB6DC7E31686681F013D6CAB3844650AE, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// TestOnly();
		GameController_TestOnly_mC3431CAD08D3F2A8165D995BA6C98C52280D2557(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_QuitGame_mE3FEB4F2D9C91A13727DB9EBCC8EB60786C699B1 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void GameController::TestOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TestOnly_mC3431CAD08D3F2A8165D995BA6C98C52280D2557 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_TestOnly_mC3431CAD08D3F2A8165D995BA6C98C52280D2557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("NOT DEVELOPMENT_BUILD");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralF6BBCE1D10617C6DB3669DDBE1E7C27D376A8833, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddScore_m4665FA35AC15797339A1766AF36F6D459B3E406C (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_AddScore_m4665FA35AC15797339A1766AF36F6D459B3E406C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Score += 10;
		int32_t L_0 = GameController_get_Score_m262D1170CB58211819997E501094D3E1B9BC1DC7_inline(__this, /*hidden argument*/NULL);
		GameController_set_Score_mAA3993313A24DFA1A1E8BC8B231753EEF8BCC456_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		// PlayerName = "Test1";
		GameController_set_PlayerName_m72E6E4F39E1875D73CDFFAE786A9C1EA42D90D50_inline(__this, _stringLiteral99EA7BF70F6E69AD71659995677B43F8A8312025, /*hidden argument*/NULL);
		// Display();
		GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::SubtractScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SubtractScore_mD1968949D9CA48E90AC8C9DF07D7D0F15FAF409D (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_SubtractScore_mD1968949D9CA48E90AC8C9DF07D7D0F15FAF409D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Score -= 10;
		int32_t L_0 = GameController_get_Score_m262D1170CB58211819997E501094D3E1B9BC1DC7_inline(__this, /*hidden argument*/NULL);
		GameController_set_Score_mAA3993313A24DFA1A1E8BC8B231753EEF8BCC456_inline(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		// PlayerName = "Test2";
		GameController_set_PlayerName_m72E6E4F39E1875D73CDFFAE786A9C1EA42D90D50_inline(__this, _stringLiteral2B84F621C0FD4BA8BD514C5C43AB9A897C8C014E, /*hidden argument*/NULL);
		// Display();
		GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::Display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Display_mF600B2C0DB78990CA201BC3534092FEA15794ABB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreTxt.text = "You got " + Score;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_scoreTxt_6();
		int32_t L_1 = GameController_get_Score_m262D1170CB58211819997E501094D3E1B9BC1DC7_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral096B95A8229C07AA3F8CE93B8E7B161371142735, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// playerTxt.text = "Your name is " + PlayerName;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_5 = __this->get_playerTxt_7();
		String_t* L_6 = GameController_get_PlayerName_mAC7CD1720B4DD1BEA49029894504340E16679633_inline(__this, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral19681EFFCB7DFC0F16D9429F4D8E2630A5EF0187, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m6C90AFC15A0F46BF2901D879C39FE7E50AE7CDB3 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlayerData::.ctor(GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mC734B6618D7914315D401F496F66143F57E5F970 (PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * __this, GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___gameController0, const RuntimeMethod* method)
{
	{
		// public PlayerData (GameController gameController)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// score = gameController.Score;
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = ___gameController0;
		NullCheck(L_0);
		int32_t L_1 = GameController_get_Score_m262D1170CB58211819997E501094D3E1B9BC1DC7_inline(L_0, /*hidden argument*/NULL);
		__this->set_score_0(L_1);
		// playerName = gameController.PlayerName;
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_2 = ___gameController0;
		NullCheck(L_2);
		String_t* L_3 = GameController_get_PlayerName_mAC7CD1720B4DD1BEA49029894504340E16679633_inline(L_2, /*hidden argument*/NULL);
		__this->set_playerName_1(L_3);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m23AE6143BDABB863B629ADE701E2998AB8651D4C (Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// System.Void Readme_Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mE73C1D6AE5454B5A67AAB04CAA5144A5CA0B0D96 (Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void SaveLoadSystem::SavePlayer(GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadSystem_SavePlayer_mB03DAC3D8D780C260FD617BFCE34B58CA5AD8A5D (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___gameController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SaveLoadSystem_SavePlayer_mB03DAC3D8D780C260FD617BFCE34B58CA5AD8A5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_0 = NULL;
	PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * V_1 = NULL;
	{
		// BinaryFormatter formatter = new BinaryFormatter();
		BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * L_0 = (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 *)il2cpp_codegen_object_new(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_mEA8ADD359BFAC7D9E9B6183FDC1C5C80E0F29806(L_0, /*hidden argument*/NULL);
		// string path = Application.persistentDataPath + "/player.dat";
		String_t* L_1 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_1, _stringLiteral24DD213B22F42A771CF237CB9F0A82354097D49E, /*hidden argument*/NULL);
		// FileStream stream = new FileStream(path, FileMode.Create);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_3 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_m967EF49BBCD52204BB79BA6E9DA533833B07B800(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		// PlayerData data = new PlayerData(gameController);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_4 = ___gameController0;
		PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * L_5 = (PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 *)il2cpp_codegen_object_new(PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043_il2cpp_TypeInfo_var);
		PlayerData__ctor_mC734B6618D7914315D401F496F66143F57E5F970(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// formatter.Serialize(stream, data);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_6 = V_0;
		PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * L_7 = V_1;
		NullCheck(L_0);
		BinaryFormatter_Serialize_mBA2FB6DB94D34F42E14DF7D788056FCF0CF41D52(L_0, L_6, L_7, /*hidden argument*/NULL);
		// stream.Close();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_8);
		// }
		return;
	}
}
// PlayerData SaveLoadSystem::LoadPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 * SaveLoadSystem_LoadPlayer_m696EEE14B6C0F57233B38FA19AA4C81D053F5376 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SaveLoadSystem_LoadPlayer_m696EEE14B6C0F57233B38FA19AA4C81D053F5376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_1 = NULL;
	{
		// string path = Application.persistentDataPath + "/player.dat";
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral24DD213B22F42A771CF237CB9F0A82354097D49E, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (File.Exists(path))
		String_t* L_2 = V_0;
		bool L_3 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// BinaryFormatter formatter = new BinaryFormatter();
		BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * L_4 = (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 *)il2cpp_codegen_object_new(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_mEA8ADD359BFAC7D9E9B6183FDC1C5C80E0F29806(L_4, /*hidden argument*/NULL);
		// FileStream stream = new FileStream(path, FileMode.Open);
		String_t* L_5 = V_0;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_6 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_m967EF49BBCD52204BB79BA6E9DA533833B07B800(L_6, L_5, 3, /*hidden argument*/NULL);
		V_1 = L_6;
		// PlayerData data = formatter.Deserialize(stream) as PlayerData;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_7 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_8 = BinaryFormatter_Deserialize_m20A831B13DF5C3F031F2141730291630A16A32AD(L_4, L_7, /*hidden argument*/NULL);
		// stream.Close();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_9);
		// return data;
		return ((PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 *)IsInstClass((RuntimeObject*)L_8, PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043_il2cpp_TypeInfo_var));
	}

IL_0037:
	{
		// Debug.LogError("Save file NOT Found in " + path);
		String_t* L_10 = V_0;
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral6ABC7411F94E66D973C3DF5720BFDD3A80DCC98E, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_11, /*hidden argument*/NULL);
		// return null;
		return (PlayerData_t884B4586F555C513CFA2CC9AE975F75C25538043 *)NULL;
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
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_mE3D6E47455F101F2DEEBC2A58D09A97CF38E80B8 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = __this->get_m_TargetCameraState_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_0, L_1, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_2 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (Input.GetKey(KeyCode.W))
		bool L_0 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0032:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_8 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)97), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0047:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_12 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)100), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_16 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)113), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0071:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_20 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)101), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_0086:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_0;
		return L_24;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B10_3 = NULL;
	{
		// Vector3 translation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.Escape))
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_2 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_3 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (Input.GetMouseButton(1))
		bool L_4 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_5 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		float L_6 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		bool L_7 = __this->get_invertY_10();
		G_B8_0 = L_6;
		G_B8_1 = L_5;
		G_B8_2 = (&V_3);
		if (L_7)
		{
			G_B9_0 = L_6;
			G_B9_1 = L_5;
			G_B9_2 = (&V_3);
			goto IL_005f;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0060;
	}

IL_005f:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0060:
	{
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply((float)G_B10_1, (float)(((float)((float)G_B10_0))))), /*hidden argument*/NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = __this->get_mouseSensitivityCurve_8();
		float L_9 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_12 = L_11;
		NullCheck(L_12);
		float L_13 = L_12->get_yaw_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_3;
		float L_15 = L_14.get_x_0();
		float L_16 = V_4;
		NullCheck(L_12);
		L_12->set_yaw_0(((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_17 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_pitch_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_3;
		float L_21 = L_20.get_y_1();
		float L_22 = V_4;
		NullCheck(L_18);
		L_18->set_pitch_1(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))));
	}

IL_00b1:
	{
		// translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47(__this, /*hidden argument*/NULL);
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_26 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)304), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_27, (10.0f), /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_00da:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_29 = __this->get_boost_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D(/*hidden argument*/NULL);
		float L_31 = L_30.get_y_1();
		__this->set_boost_6(((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)(0.2f))))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = __this->get_boost_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_34 = powf((2.0f), L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// m_TargetCameraState.Translate(translation);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_36 = __this->get_m_TargetCameraState_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_0;
		NullCheck(L_36);
		CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247(L_36, L_37, /*hidden argument*/NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_38 = logf((0.00999999f));
		float L_39 = __this->get_positionLerpTime_7();
		float L_40 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_41 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_38/(float)L_39)), (float)L_40)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_41));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_42 = logf((0.00999999f));
		float L_43 = __this->get_rotationLerpTime_9();
		float L_44 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_45 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44)));
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_45));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_46 = __this->get_m_InterpolatingCameraState_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_47 = __this->get_m_TargetCameraState_4();
		float L_48 = V_1;
		float L_49 = V_2;
		NullCheck(L_46);
		CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282(L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_50 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623(L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_0, /*hidden argument*/NULL);
		__this->set_m_TargetCameraState_4(L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_1, /*hidden argument*/NULL);
		__this->set_m_InterpolatingCameraState_5(L_1);
		// public float boost = 3.5f;
		__this->set_boost_6((3.5f));
		// public float positionLerpTime = 0.2f;
		__this->set_positionLerpTime_7((0.2f));
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_7, L_5, /*hidden argument*/NULL);
		__this->set_mouseSensitivityCurve_8(L_7);
		// public float rotationLerpTime = 0.01f;
		__this->set_rotationLerpTime_9((0.01f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___t0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___t0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___t0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___t0;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___t0;
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___translation0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController_CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = ___target0;
		NullCheck(L_1);
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_6 = ___target0;
		NullCheck(L_6);
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = ___target0;
		NullCheck(L_11);
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_16 = ___target0;
		NullCheck(L_16);
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_21 = ___target0;
		NullCheck(L_21);
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_26 = ___target0;
		NullCheck(L_26);
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameController_set_Score_mAA3993313A24DFA1A1E8BC8B231753EEF8BCC456_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Score { get { return _score; } set { _score = value; } }
		int32_t L_0 = ___value0;
		__this->set__score_4(L_0);
		// public int Score { get { return _score; } set { _score = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameController_set_PlayerName_m72E6E4F39E1875D73CDFFAE786A9C1EA42D90D50_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string PlayerName { get { return _playerName; } set { _playerName = value; } }
		String_t* L_0 = ___value0;
		__this->set__playerName_5(L_0);
		// public string PlayerName { get { return _playerName; } set { _playerName = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t GameController_get_Score_m262D1170CB58211819997E501094D3E1B9BC1DC7_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		// public int Score { get { return _score; } set { _score = value; } }
		int32_t L_0 = __this->get__score_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* GameController_get_PlayerName_mAC7CD1720B4DD1BEA49029894504340E16679633_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		// public string PlayerName { get { return _playerName; } set { _playerName = value; } }
		String_t* L_0 = __this->get__playerName_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m6510C633C5CE5469F032825306A482F311F89A20_gshared_inline (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_mF200874169D9957B0B84C426263AF8D9AC06F165_gshared_inline (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
