#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
struct VirtualFuncInvoker19
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, invokeData.method);
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

struct Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3;
struct Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214;
struct IDictionary_2_tE2DE8104C7B4CD8A93620F9DBC370057EF3201A2;
struct IDictionary_2_t05FBFB1AF7E95D14505D62963E3D825992DB7C31;
struct IDictionary_2_t9BA3AF1F8003B47CE311C1E4FF9453BCCD90093D;
struct IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B;
struct IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4;
struct IList_1_t0479E6B3EA7834363B066B89B4ADD143678D10D5;
struct IList_1_tAA2B4A5FE02CE45332EFB660CFBA79241B881134;
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C;
struct LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D;
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76;
struct LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t685540B7055415D10FB811FE128E1F88BFB54174;
struct List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StateU5BU5D_t37B5210B2E95FCD92D3F1CB77AA59C3D7263DFAF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TokenU5BU5D_t9D969C33F4F0C57A91ED12D0C0DF1E86BCCB656C;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D;
struct AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601;
struct BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854;
struct BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D;
struct BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802;
struct GenericGF_t33ADFA0C37B3E30084883323288898D91929846A;
struct GenericGFPoly_t45C4208908EA0BD577F4350F1BC01D9E83EE711A;
struct GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F;
struct HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6;
struct PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555;
struct ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1;
struct ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9;
struct ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A;
struct State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2;
struct String_t;
struct StringBuilder_t;
struct StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223;
struct SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5;
struct CorrectedBitsResult_t9C6CD8D649E9AF9D5EAA4327D165036BCD0F73FA;
struct Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF;
struct SvgImage_t15A324168F2D769FC6F1B68841773253093E6514;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t685540B7055415D10FB811FE128E1F88BFB54174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneDimensionalCodeWriter_tE6F7387ACE00693FC900D087CAA8B9A13F069348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SvgImage_t15A324168F2D769FC6F1B68841773253093E6514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____34FE7523D761357A8A0DE3DA82E1C7DDF71B8514A2FAAE4E4987BA78EFFDC42B_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6D141CD0B036C4E5A7B645E678A13005A9E0B7;
IL2CPP_EXTERN_C String_t* _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD5C8785DD5916B8669E67C2A4B9435344A3846;
IL2CPP_EXTERN_C String_t* _stringLiteral32725D282232F05FFA02D73D5E41117CB098398B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C040BFFD29AC6C9CD22396AB3049E61EABB1887;
IL2CPP_EXTERN_C String_t* _stringLiteral4244A0AD8D8E879A46026C4EE9CB6318F9FA49D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4607F6A1AD253C7780023D486297757B840DE5EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5295380188F75D696383F8BDB2147F0053791372;
IL2CPP_EXTERN_C String_t* _stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852;
IL2CPP_EXTERN_C String_t* _stringLiteral66CA8F8656DDD19F4C1E9D42D1D74CEBAC69D477;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14;
IL2CPP_EXTERN_C String_t* _stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4;
IL2CPP_EXTERN_C String_t* _stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C;
IL2CPP_EXTERN_C String_t* _stringLiteralB26234AD9B99491D85E6696E8F1AB69F80181948;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E44E7200FA3E8E69C96E31FA57E58E51E715C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC00B1DFB240934CD3E7CA4995672FDDB47B0D0;
IL2CPP_EXTERN_C String_t* _stringLiteralDD3F57AE65D16A0C02DFF491D897DC292AE9D229;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF04D617318442B519695D4A916E2601C2F206533;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E73755B7B3ABC61F614B6B3404904BDC750906;
IL2CPP_EXTERN_C String_t* _stringLiteralF8CC98BA3B02A8F5844A8EA88CB55814B9552614;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2BF525BE84B3D6B88D844591311E684F7987A3;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m654977132D632E0FE4182A91B756FB1B148F98EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_generateCheckWords_mB77BD204D6D233F211BEB2912B08CBAB770B917C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_getGF_m3EBDE49A18B762FB901C366020F75E7E1E20ACB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m178F4D952B603869C5FF438E4130094474C497D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m47EBBB3DD9A4AB6346FF58E7D9061A3F578147AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m19548BA01D006951765F4AAAE0860863CE54FB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6E3BA60E028CD09E61299428AABC17AD5A4A1D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m11768B3D2AECA70127884D0DAA2485176FAA086D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF184FAD53B05FD3987E9A779F08A38339FC9B56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HighLevelEncoder_encode_m92B9E0A06468448FF06CF1E9259B3A1B1B971BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddFirst_m483AC6A27C2ECDEB2139239D46AFAABB50DD9D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_m55BF4C43E33842B48219352D7064CFAED4D56BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_m2853450FA66EF1F59F7D0413AE7AC31B70FC50C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5C0F5EAAAC862603168253056B8A91DBC68ABF77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD198B1BAFF24ED7DF6D1173CDEE13ACFD6FA1E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD61DFC1D6C4A3EEBE5F1ADEEC845C7F1FE990235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9050D065887A962A990FDCFFAE19E12F55B6752A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0372D1C5A2A1BFC49305790F81CC145EE71BFDF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m701C37FAF343FDF7BF874EA865349454CAA67CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDD8C81B7E529A2F81E8451436BA1BD2CAD9A2DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7E0CC1F41BA4D5AA2748BBA5147E7A2ED504BF29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* State_appendFLGn_m804A72FC8EDCA2F298A417922CADE6AD28FE78A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29DDF7E352770508ACA38F2694272E5667918292_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D  : public RuntimeObject
{
	LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* ___list;
	LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D* ___next;
	LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D* ___prev;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___item;
};
struct LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F  : public RuntimeObject
{
	LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D* ___head;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t685540B7055415D10FB811FE128E1F88BFB54174  : public RuntimeObject
{
	StateU5BU5D_t37B5210B2E95FCD92D3F1CB77AA59C3D7263DFAF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63  : public RuntimeObject
{
	TokenU5BU5D_t9D969C33F4F0C57A91ED12D0C0DF1E86BCCB656C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8  : public RuntimeObject
{
};
struct AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D  : public RuntimeObject
{
	bool ___U3CisCompactU3Ek__BackingField;
	int32_t ___U3CSizeU3Ek__BackingField;
	int32_t ___U3CLayersU3Ek__BackingField;
	int32_t ___U3CCodeWordsU3Ek__BackingField;
	BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___U3CMatrixU3Ek__BackingField;
};
struct AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6  : public RuntimeObject
{
};
struct BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits;
	int32_t ___size;
};
struct BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147  : public RuntimeObject
{
	int32_t ___width;
	int32_t ___height;
	int32_t ___rowSize;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits;
};
struct CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1  : public RuntimeObject
{
	int32_t ___U3CDataU3Ek__BackingField;
	int32_t ___U3CErrorsCorrectedU3Ek__BackingField;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9  : public RuntimeObject
{
	BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___image;
	bool ___compact;
	int32_t ___nbLayers;
	int32_t ___nbDataBlocks;
	int32_t ___nbCenterLayers;
	int32_t ___shift;
};
struct DetectorResult_t9B81A3D6A0081E1BB6D96A4DB1F60701DACCB8BE  : public RuntimeObject
{
	BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___U3CBitsU3Ek__BackingField;
	ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___U3CPointsU3Ek__BackingField;
};
struct ECI_tF59A259DCBE19890B7599917A5DDB9A5F07111E0  : public RuntimeObject
{
	int32_t ___U3CValueU3Ek__BackingField;
};
struct Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802  : public RuntimeObject
{
	RuntimeObject* ___U3CHintsU3Ek__BackingField;
};
struct GenericGF_t33ADFA0C37B3E30084883323288898D91929846A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___expTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___logTable;
	GenericGFPoly_t45C4208908EA0BD577F4350F1BC01D9E83EE711A* ___zero;
	GenericGFPoly_t45C4208908EA0BD577F4350F1BC01D9E83EE711A* ___one;
	int32_t ___size;
	int32_t ___primitive;
	int32_t ___generatorBase;
};
struct GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F  : public RuntimeObject
{
};
struct HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___text;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
	bool ___disableEci;
};
struct PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CPixelsU3Ek__BackingField;
	int32_t ___U3CWidthU3Ek__BackingField;
	int32_t ___U3CHeightU3Ek__BackingField;
};
struct ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1  : public RuntimeObject
{
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___field;
};
struct ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9  : public RuntimeObject
{
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___field;
	RuntimeObject* ___cachedGenerators;
};
struct ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863  : public RuntimeObject
{
	float ___x;
	float ___y;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesX;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesY;
	String_t* ___toString;
};
struct State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2  : public RuntimeObject
{
	int32_t ___mode;
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___token;
	int32_t ___binaryShiftByteCount;
	int32_t ___bitCount;
	int32_t ___binaryShiftCost;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223  : public RuntimeObject
{
	Il2CppChar ___U3CForegroundU3Ek__BackingField;
	Il2CppChar ___U3CBackgroundU3Ek__BackingField;
	String_t* ___U3CLineFeedU3Ek__BackingField;
};
struct Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23  : public RuntimeObject
{
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___previous;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5  : public RuntimeObject
{
	BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___image;
	int32_t ___height;
	int32_t ___width;
	int32_t ___leftInit;
	int32_t ___rightInit;
	int32_t ___downInit;
	int32_t ___upInit;
};
struct CorrectedBitsResult_t9C6CD8D649E9AF9D5EAA4327D165036BCD0F73FA  : public RuntimeObject
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___correctBits;
	int32_t ___errorsCorrected;
	int32_t ___ecLevel;
};
struct Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF  : public RuntimeObject
{
	int32_t ___U3CXU3Ek__BackingField;
	int32_t ___U3CYU3Ek__BackingField;
};
struct SvgImage_t15A324168F2D769FC6F1B68841773253093E6514  : public RuntimeObject
{
	StringBuilder_t* ___content;
	int32_t ___U3CHeightU3Ek__BackingField;
	int32_t ___U3CWidthU3Ek__BackingField;
};
struct Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 
{
	LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* ____list;
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ____node;
	int32_t ____version;
	RuntimeObject* ____current;
	int32_t ____index;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB 
{
	LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* ____list;
	LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D* ____node;
	int32_t ____version;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ____current;
	int32_t ____index;
};
struct Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4 
{
	List_1_t685540B7055415D10FB811FE128E1F88BFB54174* ____list;
	int32_t ____index;
	int32_t ____version;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ____current;
};
struct AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601  : public DetectorResult_t9B81A3D6A0081E1BB6D96A4DB1F60701DACCB8BE
{
	bool ___U3CCompactU3Ek__BackingField;
	int32_t ___U3CNbDatablocksU3Ek__BackingField;
	int32_t ___U3CNbLayersU3Ek__BackingField;
	int32_t ___U3CErrorsCorrectedU3Ek__BackingField;
};
struct BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854  : public Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23
{
	int32_t ___binaryShiftStart;
	int32_t ___binaryShiftByteCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC  : public ECI_tF59A259DCBE19890B7599917A5DDB9A5F07111E0
{
	String_t* ___encodingName;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
};
struct Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 
{
	String_t* ___name;
	int64_t ___value;
	int16_t ___knownColor;
	int16_t ___state;
};
struct Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshaled_pinvoke
{
	char* ___name;
	int64_t ___value;
	int16_t ___knownColor;
	int16_t ___state;
};
struct Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshaled_com
{
	Il2CppChar* ___name;
	int64_t ___value;
	int16_t ___knownColor;
	int16_t ___state;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A  : public Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23
{
	int16_t ___value;
	int16_t ___bitCount;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_tA8EEE29DC5A765E2D3C74438A14006FD8B9299D8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_tA8EEE29DC5A765E2D3C74438A14006FD8B9299D8__padding[10];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D100_tD34BF3E8536AAF8E410623A82D6FCEFA0D5AFAA2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D100_tD34BF3E8536AAF8E410623A82D6FCEFA0D5AFAA2__padding[100];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_t468D198E5063E1F980E4CA1D080647B761757896 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t468D198E5063E1F980E4CA1D080647B761757896__padding[1024];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D108_tCA1FDB24B56B8C71598908D6B5F037838C5DA024 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D108_tCA1FDB24B56B8C71598908D6B5F037838C5DA024__padding[108];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D11148_t30854AD6D2620E9679A46A4B1527276EC02296EF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11148_t30854AD6D2620E9679A46A4B1527276EC02296EF__padding[11148];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D112_tC0D44618AEE8BBD73FECBF53187954CBFBCFADC2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_tC0D44618AEE8BBD73FECBF53187954CBFBCFADC2__padding[112];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995__padding[120];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D124_t79635A7B3D984DBD511CDB2A09472922B9076F5F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t79635A7B3D984DBD511CDB2A09472922B9076F5F__padding[124];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tB1E43DC924E683198CA679BFF34496D02844B11E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tB1E43DC924E683198CA679BFF34496D02844B11E__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D132_tD008F1B11D922081613D5AC460DA25658DED779C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D132_tD008F1B11D922081613D5AC460DA25658DED779C__padding[132];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D136_tE2080E87BB8D9298547754105BCD2CF3304EDFA8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D136_tE2080E87BB8D9298547754105BCD2CF3304EDFA8__padding[136];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D144_t02923E60D62C4172DD63C3BAA692EC0E54E086F5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t02923E60D62C4172DD63C3BAA692EC0E54E086F5__padding[144];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D148_tBB20F01C8418EE83238E3637F719DFCE55F977AA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D148_tBB20F01C8418EE83238E3637F719DFCE55F977AA__padding[148];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D152_tD403092E0785D684A9417636A781DBD3D6FC8E4D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_tD403092E0785D684A9417636A781DBD3D6FC8E4D__padding[152];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D156_t70DF9FF888A214D995E2914EFA1FC55C69E39ECA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D156_t70DF9FF888A214D995E2914EFA1FC55C69E39ECA__padding[156];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D164_tE3D9D8BCD7812A870B5736EBDA2A4AE72493813A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D164_tE3D9D8BCD7812A870B5736EBDA2A4AE72493813A__padding[164];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D168_tD6E65FC6179EF2C4210787D5553A87C1ED545735 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D168_tD6E65FC6179EF2C4210787D5553A87C1ED545735__padding[168];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D172_t3D054411CAC8EA0638C48F215D82D1846098E2BF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D172_t3D054411CAC8EA0638C48F215D82D1846098E2BF__padding[172];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D184_t3DAF41D1673ED71FB0AE2443F87A9315E300AF18 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D184_t3DAF41D1673ED71FB0AE2443F87A9315E300AF18__padding[184];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D192_t73507BA2B17E9F557387246B048926F08BE83538 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t73507BA2B17E9F557387246B048926F08BE83538__padding[192];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158__padding[20];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D200_t8F20B4A237B3BCB5FF3F72BB10CA530FF9AA9A7E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D200_t8F20B4A237B3BCB5FF3F72BB10CA530FF9AA9A7E__padding[200];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2048_tAB0A1889C06372F39D1A3A1B2030913BF941A46F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_tAB0A1889C06372F39D1A3A1B2030913BF941A46F__padding[2048];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D224_tD2C4C438B22CA8471B0997036D09253A6AE93BDE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D224_tD2C4C438B22CA8471B0997036D09253A6AE93BDE__padding[224];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178__padding[24];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D248_t8ED961081FD625CC3C4E5372F09C9618173B6375 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D248_t8ED961081FD625CC3C4E5372F09C9618173B6375__padding[248];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t4DF7955E369D4AF09171D4EE0EB9FAF2056CF866 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t4DF7955E369D4AF09171D4EE0EB9FAF2056CF866__padding[256];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2574_t5C12AE6BFC11DA44EC361094D4E0B44E2C306A4A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2574_t5C12AE6BFC11DA44EC361094D4E0B44E2C306A4A__padding[2574];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0__padding[26];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D272_tC5D041F0ED0D22463C09F136C5FF6D7806C2C958 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D272_tC5D041F0ED0D22463C09F136C5FF6D7806C2C958__padding[272];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1__padding[28];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D30_tFEDE59F93E2AF2E6498D1A700CC735EC1CF4CD2C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30_tFEDE59F93E2AF2E6498D1A700CC735EC1CF4CD2C__padding[30];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_tE0FBFB620AAE9F7EE2ADF1981254F7D36635774B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tE0FBFB620AAE9F7EE2ADF1981254F7D36635774B__padding[36];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3716_tFE6FC22FF0B3CFD89766B56BB185E399D7DE13BA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3716_tFE6FC22FF0B3CFD89766B56BB185E399D7DE13BA__padding[3716];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D384_t35CF0AD696401D54852DC5C614D6CD8DBF532AE7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_t35CF0AD696401D54852DC5C614D6CD8DBF532AE7__padding[384];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC__padding[40];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_t0A8EA7DE9937C939A345BF02D13B4ABCF6123652 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t0A8EA7DE9937C939A345BF02D13B4ABCF6123652__padding[44];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D48_tA8E5572B08B89A1FB9A2655DBBF5E7CEF82585E0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tA8E5572B08B89A1FB9A2655DBBF5E7CEF82585E0__padding[48];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D512_tEFD595A22AB307A7816C314B3A187A9115B0FBE4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_tEFD595A22AB307A7816C314B3A187A9115B0FBE4__padding[512];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0__padding[52];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D54_tBA0F27A0D240885E4ABC4DFEA06A56319BC983B6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D54_tBA0F27A0D240885E4ABC4DFEA06A56319BC983B6__padding[54];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D56_tC95FD7FAE2389D5EE2E8431591FE9A6C0F3610F1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tC95FD7FAE2389D5EE2E8431591FE9A6C0F3610F1__padding[56];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD__padding[6];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D60_t5B491EAD264B340DF1CB4A7B970CF547F8E73A09 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D60_t5B491EAD264B340DF1CB4A7B970CF547F8E73A09__padding[60];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_tDFE11D7EF527DA30F7781C126D142C19961F99C9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tDFE11D7EF527DA30F7781C126D142C19961F99C9__padding[64];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D72_tC9F93513F13116E2ED256D6F8DFC8B7E418F04D5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_tC9F93513F13116E2ED256D6F8DFC8B7E418F04D5__padding[72];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D80_t8358A65C408ED88B8F49BFE0DA95F82E3E3FE42F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t8358A65C408ED88B8F49BFE0DA95F82E3E3FE42F__padding[80];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D88_tB1DFCDE19E827CBFDDD4C81957759716527FA235 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D88_tB1DFCDE19E827CBFDDD4C81957759716527FA235__padding[88];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D9_t07F1CA742B570D64747EE3992B254718DC70DCC2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t07F1CA742B570D64747EE3992B254718DC70DCC2__padding[9];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_tB27EA2D370F13CB98873FA1E5EB40E0EB83EFDAE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tB27EA2D370F13CB98873FA1E5EB40E0EB83EFDAE__padding[96];
	};
};
#pragma pack(pop, tp)
struct BarcodeFormat_t360346ED0DDD1F69E7C340A4FAC58E69180C8DEC 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MidpointRounding_tD36CC4DADEF14C2D917E671961CEF65DB159DC30 
{
	int32_t ___value__;
};
struct PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555  : public RuntimeObject
{
	Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___U3CForegroundU3Ek__BackingField;
	Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___U3CBackgroundU3Ek__BackingField;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645  : public RuntimeObject
{
	Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___U3CForegroundU3Ek__BackingField;
	Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___U3CBackgroundU3Ek__BackingField;
	String_t* ___U3CFontNameU3Ek__BackingField;
	int32_t ___U3CFontSizeU3Ek__BackingField;
};
struct Table_tF471EDA76D762C27611900CE90A42CFBCB747EE6 
{
	int32_t ___value__;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t685540B7055415D10FB811FE128E1F88BFB54174_StaticFields
{
	StateU5BU5D_t37B5210B2E95FCD92D3F1CB77AA59C3D7263DFAF* ___s_emptyArray;
};
struct List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63_StaticFields
{
	TokenU5BU5D_t9D969C33F4F0C57A91ED12D0C0DF1E86BCCB656C* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8_StaticFields
{
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___018A19DA611E24A75122AB7F8638B900202C48C7ACDF482A10C7017E56EA1B0F;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___01D382070575DCF0FE01331D331575280321D7F09C9CAC24673BA181A2F732C1;
	__StaticArrayInitTypeSizeU3D272_tC5D041F0ED0D22463C09F136C5FF6D7806C2C958 ___031A7DAB4A9DA871178C39A60B07218F323F2FFF0B20515E960157325A736FA5;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___03AFB9095D050E297BBAB2F86D9B867378EA675884180C8984CE0DCE947F3635;
	__StaticArrayInitTypeSizeU3D30_tFEDE59F93E2AF2E6498D1A700CC735EC1CF4CD2C ___048F1C6BA9ABEEE037650E52B43535B87F5D0E33A17E5963078DACC7C730B531;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___04B8238B8817C8D6A2EC59A0CF6831D27FF30B5E0B1541599E0D433BDF8E6DCC;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___058136CC1E0E3BC635D71D3CB6C90CCA260B40324627991E938F59612D216948;
	__StaticArrayInitTypeSizeU3D30_tFEDE59F93E2AF2E6498D1A700CC735EC1CF4CD2C ___05CC43EDCFE1162519DBE1AF7E1335D1DAF982239BCF8053E6105AB2E8661271;
	__StaticArrayInitTypeSizeU3D512_tEFD595A22AB307A7816C314B3A187A9115B0FBE4 ___072A033D360FB1B422E89181C3089B4EB42C4C1DC16226CEC6B76252E78CCC95;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___0755D41A7E6483FE002E8A721F4AC00C2C9BFFFDBF036DC8BF5C720DCCD5558E;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___07D3741213269F079A9FF9B5021B5D06B8CE4D24E84DD85F068991ED352DEFC4;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___08008FE38F6DD9C8CF08EEAA27DAEC72C63D1FBE62A7664617837B7FBE3579DF;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___0923B8F138B2EDD9A1C360BA61E84ADDB537E2B82F9F14F1ADC291CBEAC90EA1;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___0972EA0FC33C85A08C0CB08E9E3A13D70F7C57215ECD0F2F813304AEDBC48A2B;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___099049BB630E06D6F5F9ABE2F3F256E9A1D41A35D4A218832CD6B4651A3FDDAE;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___09FC02D06A518D6A2E42057CA223013CE52E398FB680414062691AA290DA597D;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___0AEC6048672FB3B9BA52C4058EAF228C43C1735163092E53FE244601BEA9D8BA;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___0CD52975D68D04335BC1B147D61D749B87BB641972CE633EDFB5C39C37ACFC17;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___0D29B9AA3D0E997B3CF4FEEB2CE219F2DEEE880AD5451E149A63F42F95B62F64;
	__StaticArrayInitTypeSizeU3D48_tA8E5572B08B89A1FB9A2655DBBF5E7CEF82585E0 ___0DA449C0FF1FEA38DEDB3CBF33D6EA0BAC52B769108DFBFFC3B3FFBE2BEA62B6;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___0E5A9DA19B5F6C533C7A3FE96B89E352628918F0528547181D6A790A245AEE37;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___0E69E2878FF4865846511AD0F6C3CDFCD35124DA9CBC2DD2FFA9926E5225681D;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___0EFBE15675AE6B086C3E0262CD75F823C7F77CA53A65B42D8B515B7469763CD3;
	__StaticArrayInitTypeSizeU3D54_tBA0F27A0D240885E4ABC4DFEA06A56319BC983B6 ___0F326F6333970A0EE0B70548F659019839F42A0D35A4065BB89C5C0973D71EC0;
	__StaticArrayInitTypeSizeU3D152_tD403092E0785D684A9417636A781DBD3D6FC8E4D ___0F3826A3416B34D4978D777B72051BB9B20F05E1B37F0590C8A925F558D48E24;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___0FD1FEF0F55461833DC1732C3CF2BF1D560CE93949C628358451972E2E4DD083;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___0FD23C7C3687A528DA543E34841C6DE85AD4610511D1A1A741B9A7B5E7354FEF;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___0FE5EA953905A7E632F48916BEE4115FA1BC91A8B14BDD57F57CCF3C79F11926;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___10236EF2156BE2047BD3377ABA7937F2102CBE4DC8A927072D302A7E2CEA8F14;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___1200321A9D4D9ECACD206E9234BB30E6EA0CE3CD2F8E5FF759FD7651E58D7A1A;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___120146F23536CA41FF3D095892F4AEE1412D96B751FA67D465F45D6A9C1B35BA;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___126F68DF1532C2B52650C95F611297C8D903AC4685B56BD1A6E475249DC614D5;
	__StaticArrayInitTypeSizeU3D36_tE0FBFB620AAE9F7EE2ADF1981254F7D36635774B ___12882299078C85629712D32DC5C8A7585D76A7728B966688FE8BF2E24D5D3EC5;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___12DEDE5424FCC863514545E121A40894069D03534E02CFE4A66F1E79C72EBEB4;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___13725726F438CF735A00F646A3C0489D18FB4A297067C0186DD358DF4937ECD1;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___13C2A8B2FA10F7CD55272F4FB8F76348444562D66EB8F42C374D51825722C6A2;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___14164DB6AE6DD908B1A17BE450277EF3355DF63A8311EBB056FF03477957D69D;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___14F3AF8BBA4E69306FB8C4420147917A270AB0DA9322A09EF0CA818701224A52;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___1577DEEA3D606B9333A6C16EDC4C38AD182F37F459FE5D2F8BAFB9C03C81B58B;
	__StaticArrayInitTypeSizeU3D64_tDFE11D7EF527DA30F7781C126D142C19961F99C9 ___172272A31C68924D4492AD97C56E7B6989487DDF8D4691C6964EA08403561E91;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___17D36E5A2AD75C191F070405139EE1FAF2DAC6DDEC515605DBFCCB65D1CBA620;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___17EB2D7A14A7305A9CAFC3C9DDFB7189A8EF373A02DA385C379800BFDC952E9A;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___18045443A61D3E6F181335D3BF551A22980853C1E94009B0DD2A79A9279287F4;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___182FE6A6D2E6DF33EF2AF690D41FD78B3BE0CEA43D4E1AF5B2614A02E4E04507;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___195C23306CC1AC0CE60290FCBF363E8A054A493D31F26AE959C4F93B9032EB56;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___19D1DEB92599D0859647A8700314DD2D735B5B00B038278E456EDD676CA38687;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___19F62F45090513D31BFE4B2760AA4C0C9FED0DC89C824BA8788EBAE7DAA58CC2;
	int64_t ___1A408B5C9FB225A7230CC9434D8E38506A1C4E3E5A1471598F98F9B5326DA3F9;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___1A7A05BF60C95989ECB9F9710200B8FF883A46289813087969055CE6B6A4F9AC;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___1CCF6C0CE61BFFCCA95581F68036B911D3C95F7E3E1486121AE92C688FDA02B6;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___1D7C51C2DFB3815F118B7EA33BFD0C75F5251A7AD77D0E533D82694EFAF77250;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___1F5BBECF6766899B8129CD725DEDD69198C57C1DA1659815ECF08F793CD74184;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___1FE6C4DC18E85E72ED243CA7112D66D156196F93B91C0D79C284C2A25605B9C2;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___2219F43B7ECE977659BDE826A95F92A74A8967AFB37AFF87C51992D2B3CDDA55;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___236B40419B78D6875ED1777CBAA8239EDBD590ABB5984DC20CAF6025406CD41A;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___23BBAD722E68CA6E471CB9A92B60F129B3EDFAB520DBDCFA37A5E35F53DC467B;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___23CD6D0B6979506A1F632C96C0D955183FFA5B396ADB1FECD27EBB7C716CCAE1;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___246FE9DD05C396E40CA5A049DF92840B57E2B7E774419C0332D6C72885A65D02;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___24CA1A9EB94E3FBFE3297337ED4551BB4A6BE33A80C2806D9228F669FC7CD3A6;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___255F6A73A6E636371F66D82AAE4B3DAEB58920D7CFC3DF6BD21B0BC8FB75EDFE;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___25FA2D49BF8F75F41CD89C29BDA5156E28CBC531FE4BADD44984F087B0443B34;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___26C545B95F17016F053F61ED58396AB398DCC938541BF821A58F9A3172FA6D85;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___26FB6702A18E7D0957DABD387ADF16224EE29E7621C382DBD80ADC87A54C2A87;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___275480D553DA165EBE66E43A97468CA4CB9F11726F5F7C32C0B5FBE7F33940A1;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___27A9AA74316728E24981CD3CA2DA4A7E9C847C3EF43796D6C1B2FE4067D65913;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___27CC37683116A321F4C03B0D7015ACE1FD3B8F258E30AC673D40FBD6D27142C5;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___289A0E07707B4302E361AB3B2CAEF696AF373B8ED2042761D3338A6F1FBAE5A6;
	__StaticArrayInitTypeSizeU3D112_tC0D44618AEE8BBD73FECBF53187954CBFBCFADC2 ___291E48083328AAF2361C61E6FB7CAD73D236FFD69BE539EE6F1DBB93C48EFB31;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___29A05F6D876C04FC16B06D636BCFE9BDFD13ADBE58379648F5E56F2544979BC1;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___2A59B4E5B0B951A4D482BB2F7EB19895CA52774D9EE40ACB52368E92562FE353;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___2A723B9FCB382FDF7554955D78CDD6EB2F045105ABEEF9053AF538AB954F50A2;
	__StaticArrayInitTypeSizeU3D60_t5B491EAD264B340DF1CB4A7B970CF547F8E73A09 ___2BEFA7911D464B6339A7E3D6F411A3FBABC4AB57C75A50032CF3DD36CF48A64F;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___2DBDEBA00B1457645CBE9B424870A130245DFACFE7ED475D9B75F139F6657F9B;
	__StaticArrayInitTypeSizeU3D3716_tFE6FC22FF0B3CFD89766B56BB185E399D7DE13BA ___2FD9F61496C31BB58FD6C416932CBE892EAC01B45F793F108E72E508E1D7275F;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___3025292A422A82F39DF287AE586AA96C66B426EBC885D0DB9F375307B700CF26;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___3184A6E5EC4D9DBB4FD240E5D105E90FEC211DC6DAEC4CE88EE0E943487B9049;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___31BC1949C696C3EA72B1C8971B890B4ACD30B64C2243DA6D15F8D4B29B2BE63E;
	__StaticArrayInitTypeSizeU3D112_tC0D44618AEE8BBD73FECBF53187954CBFBCFADC2 ___31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___326A8CA97825794CBE04EB7E9AC623ED0335ADA08FEC52DF0140973F3C11BF48;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___333EEBA4755BA5655F1E167AC9A194B7A31FD702D0C906EA0C7653BA64F64AC3;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___34EDBD138605A3D78925D5D15761E45ECC6C14EBFBEF655552AD8203B19EFED5;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___34FE7523D761357A8A0DE3DA82E1C7DDF71B8514A2FAAE4E4987BA78EFFDC42B;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___35E3962D353487BAC8C20382B68B16D946F11EF9D1652B924C17828EB66B8987;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___376FEC89C1DDFBDC7A11B73B88081D866CCD5482393C738AA1CDF96698A7E63C;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___37E293668894EFC2772598381869A68625AA8E88DF1BAF5A5B4D8CA610B82A7A;
	__StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD ___3986C22E68642385C1AD4952D2CAAA099E7AEAD5D256CF29AB70FFEB2AF7B90D;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___3996041EA52DBFCA6404987AF2F578A31BEE64AFA72F6A37068C1A4F4F3C74F7;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___3A74D57482BD905DA0DBEF3CF35E1B89409A1FD7E186D2471D0D29823C193AE7;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___3A9BB11520249C4F2B1BCA94DCB2D9205720C9398D1A65D64160B02F289703D8;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___3C2488D83E1226EAFB83751D49CCD75EA105FC327A5484557DF8E24E4AA188BF;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___3C8EA24643709757EB8109CF5AB8FEED8AB1C216672478D85BDEFE8A6133CCA2;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___3CAE317EBA02EF12600199FA2D78DFE083C54BE83893BA7E395E36F69EAF8541;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___3CF59A29A6F8B44D23BBEC6DACCD8965E5220C2D4781780A30220CB6A92C0C70;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___3E3D5EAB67047C0BA6007007F9B33E31AD46F89A1491E9F92D1A0C8BF84B7E1E;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___3E5AB8662435C65FDA6C470D1EF424A9ED92BE8554B7E0727AD7234EC057CAF7;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___3E953A068B94D3C5FDD4B4CA444ACD27C20A432E12AC560D96696F34EA796C50;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___3EA16D2E0B5C77637B787240CD802F6D80AF9AC974F4B7C3E83D0A10862BD7E6;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___3EA2A3529D013F512CCD072CD2F78803EE57FD82A15521EA680135C0872AD98C;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___3FCAC1F7CEEA810B8D6EE6F7D8F017856284B055AB5C6F06B64A6B2968F581F1;
	__StaticArrayInitTypeSizeU3D192_t73507BA2B17E9F557387246B048926F08BE83538 ___400C0E18231705F4F9C7BA6F6E8817FD739DFC494E04EC17313B4271B1859934;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___40BD59C08A0A7B004FF75DB64D2029BF358D13E46614A4A4ACE5967D74A314DC;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___42206C420CA0A7A3713C06FC9890A566B99B2883F1AB9F6C30CA3A43BEDE1FE5;
	__StaticArrayInitTypeSizeU3D148_tBB20F01C8418EE83238E3637F719DFCE55F977AA ___426936B76072711955E414068F02B9E3F1417C4588DB2C0F07573059826975EC;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___42C10A7950523CCE6B9382EAEB102B25C1454BF1F82A5C866E437FAD5C2E8FA2;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___437620127E191BEBC6C17EFF361BAC59416FF983AFB4C3C9984779E8529A3AF0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___44093EEA40371522F7004E547716814C46F14668FA3301246EFD1C8F1AB50D7C;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___441CAB64D4900D5EBD01E8C095BC38383C3924C53D5D2BFF6E49B560F2BC13B4;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___443172DD7286929E10A2BFA422F4CD412C05EF05A99F4924ED2031F9B3DCE722;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___443AFE4C7F441BCF1F04D8A8D4147688B72043B95EC79150E40D3DC7ECB8A8BB;
	__StaticArrayInitTypeSizeU3D64_tDFE11D7EF527DA30F7781C126D142C19961F99C9 ___457C3EE1F912D05B2088A38762AF1C4DE10BDE0E6E68F56019F14FDD8052E284;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___459738E68BE1F8C9C40E0AB786DE5DD9B05E2ECEA47D4B1E02A678CC789A71E1;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___45D261060F92FEA257731D4533BA1B6D378854391DF58BFEB8C1FB1778D40CDC;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___46194B677BFC5FF2B7D69B1590995222B63D20D9F68A63DC84B77477C521AB5C;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___461D85ED33B25F3E0E5504D52E29569C2749FC5CEAC373977AD3CFDBA98E1EE7;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___46909D84EC9AF5DBF9113432593C4E89CCE8D2F54253B62FA0EA71FC3727D888;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___46C94F35DD2C4334C746C03A7010D02F23EE380918C065F451C019E49404648A;
	__StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD ___46F121972539C3A215848630FBD7785316566B2DC48BD8F0A5BAF3FC53109E65;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___47068B7F118B7E435FFB84E669EE2035A7DCBFF9F370B71AFF1010D8F86FD97E;
	__StaticArrayInitTypeSizeU3D192_t73507BA2B17E9F557387246B048926F08BE83538 ___48BC48E50F59739E776A473E658720BC6D9433EE1B18922E9C2073AE677EC054;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___4966BE15486C330627518445E374AD3B77A4C753713F34E90832D2637A33EC7D;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___4982C8E15D86BEDB33F39799B5FF5EDEC05852D0693802FCE8E0E69710D0F0F6;
	__StaticArrayInitTypeSizeU3D72_tC9F93513F13116E2ED256D6F8DFC8B7E418F04D5 ___49DA175B59DD524F60B4588AA0543382B4CE84AC0EDC7952502C7603F8A32766;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___4AC88F2CF7036F6D1F43EBA474C18C54DD90B6BFE11EC2CFCBC8998F18CCDD97;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___4B8D717CC775EDA73AA604D52E42BDF7F28E2460E4EDB24E04B38BA01C6069E6;
	__StaticArrayInitTypeSizeU3D224_tD2C4C438B22CA8471B0997036D09253A6AE93BDE ___4C2817831C601A9BBB49CE6749056395F47322DCB7FF38D100CF0F6E8D3DFC41;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___4D9EEEEC738149F07A06103E0E4B6E75099471DFD8F5EB7C4E2400FFEF064C2F;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___4E64D848E7E810CA70815A7E5E17D793C19920F2B4E480485C947DD72C5E5E30;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___4E84EFE399128EEF84D52B47F979C9BF1FA238CB86F5E44A2A7CD20FD17E2A97;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___4F46B1E848BF6A3FB8F3AED91D0D8E800F708969D1525ADECD4B4C09FE363183;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___4FBEA9B841346FAFF684EC88811CBDF95A2C479284DBB8D7FF76B00741808C68;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___500405D96FA46FC9F1034A6F706DD3938860BD66339432A6BCBB3FCF5C786318;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___503DE4A84834C731CDA8AA9413EF5C1064BF558521B019045531268E6E2FF36F;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___506570EFE367152953FDD1D14D773AF80749A7A79395213C803A3E3A701EE194;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___5171207C29B6B87B86B65B604A0F4874284DE01E326D1077F8D4D224C62B8EE1;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___51D73E882CADE033AC8DE08370EC96FCEABDFA458A02E6A7ADD0A2D5137DEEA4;
	int64_t ___523F04FF5F245FA953AD94E355ADAD2F2984DCDFBDBA048386221A679BD4550C;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___529F8D7E4FA0B173CD588B1BC9BA588E03827B844303D219AC18396353D68BD6;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___5315ECE4BC5C350C100C417E0C5C2E479EF80E8904507D2869D7FD1CDF1D1D14;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___5355534C824BF0CAEE4451882811E9C0948E18DF5D7E686E024DBB4E8ED5CDD2;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___53C8D809975CEC5C320BC40E1590AD53660F48899C241D2EC8160F9069855075;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___53E045D5B31086C47540542B72EE1B6903167A663E1B49DBD8CA10BCBD6FD2C3;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___54221FD7F79821CDEC2743C128F5B42C700B61BAEE70B77D85629EF174985FFE;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___54AEC9D816A2049C6D5B1B50D53ED28970F7856DF9D4E633186E25E8EEADD2F2;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___54C9639E6CD79D36B9F30418CD5E3E597717992C749A52735BB65E4498449444;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___54CC3130C99E4F12595E1184BD1AAE62D20D43FC6138ED4644FD79A1A2E51D33;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___55477E719FF85B833DE5527EC0B316C4DBBE336790D3BF49447F60D82B087CC4;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___55794D1F460959F1E8325B213DBCADF6C0DD7CEB4C69F297BBBF65C7B16F515E;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___557CA8779C711B333E63BDB32CF9ED72E6C5C5A01115DF80CD7BFAB15E0BDE2A;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___561F14598835BA7E3999D1611F0C4DDAC9F28310267DE2FD1E69B82019968929;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___567040487C6F18CBB8D5E5E4B173E703D178168DAD3AC10943F3557251C58623;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___56B2BFE53C008A4B62C97009BE32F6CF9CBB910933B6ABDCA3AE4314423E2BEC;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___579AED0AC63FF69DAC1BC21BCD1FDDA973007C765FB1E3178829088798846DEB;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___57C421A369852444CB9B4AD65840A75F199B433457EF19682DEC6760F206D384;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___585BC7A636D142652A8ED9100F0940502AFB849EAE508433D2930FB61AD61F36;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___58E8142CDDE695FFE119E16D03B99D32AFA9CEF767F293D16F9C8D527DCE4519;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___5A26869671F415C7CAC00A7BA28071F68D4D13884E815F88F519A51F68242A2D;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___5A62A202412C312108D20942EB0D3461C2B622D0F7489ACED8BCA40FDD25A220;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___5B3338E2FC111228503FBC18BD44C466D47ABF56A089F83E272B2EF7890B8438;
	__StaticArrayInitTypeSizeU3D96_tB27EA2D370F13CB98873FA1E5EB40E0EB83EFDAE ___5B6F85B8869E38A165A961AF5A2B9046FF1DB878FA266659D539F16C3F96635F;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___5B9D549107093388BC926FEA04B9A3A2DC67AC8CF071E86BD19A61861866E08A;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___5BBA2042E3C1022B2636E3AD2DA3A2189A212BCA10B897E49D1F13ECBC6236ED;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___5BDADD0B152323C10011CC7204303994D6647F495946C4ED80FADE49DCA4A786;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___5BE085A820D9056AA7FABDA1EBE6E33A209795E4198532B69C9EB3E681CE7C73;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___5ECD5993D00FBBE04B032B6779F4B2B102D77DE937884FA161FC5228A81E53E6;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___5EE85A1ECED9BE0350F258BC6847BBDECD3CACFB0304338AA1E09958B876097E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___5F101F2897521FF049B822F92CD7B53A80F9FB4914D4CBC57EF546B65B7E6839;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___600AC5C1423B779A4C99AE7DA84D1B1933C6D718C96B7561819FF39D757CE0F6;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___6163542BEDC9F741378F5E8DD94972C8B4400A62D3FE9AF8567897E54BBA76D2;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___61E3C6F89C765AA79F4705C5B6FB5ED942BDB2608A53E2DE1FF6AEEB734CC061;
	__StaticArrayInitTypeSizeU3D384_t35CF0AD696401D54852DC5C614D6CD8DBF532AE7 ___6209A6AC37E99A6466A972FB4A148367EB001A7EB55C30EBFA216ED4366F06D5;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___62485F3A7B1400F4F6CCC1898E2270F4198463F9B5D184CD50B58AF56D397F4B;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___6262C97B9D5012BB62ACB236D2F7BC008E5A44085B357D45671B93DC7D573670;
	__StaticArrayInitTypeSizeU3D10_tA8EEE29DC5A765E2D3C74438A14006FD8B9299D8 ___62BDDA37EA0223B1A9DDF568724B8E6ECC01B3CD2FC385C180F4CFF3D965AB04;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___62FEAB611DAA84030B232E7DD216F1BDE075AEDFD08DBCBA8E003D5ECB0F0367;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___631B971BF7A9D6D79FC9C7BE52F3716771B77B02D5522E093D93CD4B73D73831;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___642DD7F7203A2E843E095175CFB7A065EBB3D187342591A43AFE864E930CF266;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___643B781D27A00AA328CF5C5823D9FA11E7B6262EFC8008B26C5F77AF11CF65A9;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___64B1A06FA33725266DB34F8BF34BE202C9B17AAD7AF978D1CFBA2C84E5F65F6D;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___64CBA3F00AE73B633361F6F08153C7604C706E9DC3A4B49D5B1141E1C5E8974B;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___6533A1867F4BC99243B3A3404316609ABAC85E9C1F7E6CA85C8797855500615F;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___658F5748D813B4E437FD01EB363922CBAA7DA29D083B650477365BABC15547EA;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___66AA9E76039D3A06244CC7E2F954A1E68113129A35620FD6E589D841F90EB1AA;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___66E2AE5DC56EA19EB250B63843C02B03E69292CF68BE9BF94A695DB5BF39C33C;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___6853876EE0DC6D2CF1608B0E44AC2C0E0A559A10652A17DFC1CDD5A20B924CCA;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___689EB3A9AA00BA7C2C6B9EFF3B6F2CBBD9671BC1F8C4B426B88CFAF213947030;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___6A204E32397EA674B30C93C5BEB7C18BED0CAB135010047DB933C933AA668E12;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___6A8F9E996F931BF7B6F181E0575CE25D4A9E7BC932A6857937E65E0ED29373E0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___6AE24B485B347F50CDDEA7FFEE54B5BD62D20834ADC93046B5F7BC57CF9060B0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___6E03C9336138F77C7CE70FDF8F46C5BC25F7D4CC6B588A52ED21376966FA5CE6;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___6E55BC1411E596DF70CA77A520A57B363E3D71419561280A04D122820B4B8CB3;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___6E8A84CA24C0EEA9E88B84F0E6B29D72F1D3FA2C1C98194D4DA1D9FBCED0BBA0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___6E9AE95ACA02DF626FA33A9741718E9A2C4E3B2FCEFBBBD19323E7F8C82C99E5;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___6EAD47B68EA871CE5BC138EF9521E54E2DD5F9041ED3693236E3E0A05E07431D;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___7002DE627BC471A98A7A5632AE6C2EB53AB1701A1E0B7795AFA4375ED06ABBB4;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___7043EE766EA3F235BB890D428D4EC34A72E1B1EDC0FEDEE752BBA827D16E0CBD;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___70FEE9D32A08A1392FE88751836582F4138FC99A50A5074354BE850FE954EAA2;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___7315F44964957B6A4D34B2C68297EDE39FA0733AD1F128770FBB57A7C9FBD4A4;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___73414863041C7E9B6AA38694511E37AAF7F5D3DEE1DF825693CD213DDF875837;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___741138C155628CD30B6C81C066C1CA769470357D728F6C7DD0F447E3C1B7FFBE;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___741831DC3E09005B36AA2DBC67BE80CF0D2F3021B56BA57B16C2C9C62F3C2959;
	__StaticArrayInitTypeSizeU3D136_tE2080E87BB8D9298547754105BCD2CF3304EDFA8 ___747B650D6F668311F4AB3B7CF94372C72A493756EB4AE7E06E1BAC045E2D10B9;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___750DDBE67AE485B234E897FED9A00B8E83BA9100D33AA4D7CD9F3B879969A0AD;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___757E6461DCD89E6D070B806E44A51A08B97920A457933D992CF8C4A24791B2EE;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___76BE198D5251CD0E14A098EAD22BB8CECE4A64C385FEE85631584E162874CD11;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___7742950BE05BECE6E8CA77BE0660E044BF69561055E99E34DD743703114144D1;
	__StaticArrayInitTypeSizeU3D11148_t30854AD6D2620E9679A46A4B1527276EC02296EF ___77A49BD1409C8FFC6F52BAD393E00B54E8D02CF6A9792C695B24234DEE82164B;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___77E8A5EC90916CF9C8870B3073868F207E4B47E3D29F4FDD9A425796D343DC01;
	__StaticArrayInitTypeSizeU3D144_t02923E60D62C4172DD63C3BAA692EC0E54E086F5 ___783707DEB573CE35EA8ED5733E56C1EB36B6490168A9C3BD6BAC000D7D5BE0E9;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___78719695241A885A134CB1B0DE1C6AB3BFBEFCC154A81A261067CC988CA308AF;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___79A3929AD7981948AA75A38412BE3500D5618D0FB288518918E8C7CDF9F44DF6;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___7C5EFAD50018D440E7CCC2F9FD8E0876436D233BE74A69AB853DD23C9B28618A;
	__StaticArrayInitTypeSizeU3D156_t70DF9FF888A214D995E2914EFA1FC55C69E39ECA ___7D3F517A0A69021F0A7982BBC5E45D3232F8C2A9128E524706BD805C0F1E0546;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___7D6072048AF62D374C35066E5A55EC50722E525C80B18231BBF1C28693F49B63;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___7DDA5451B10D19F1E2B821131A5FEA0D8CC3B93CD37CBED3F609E77ECA4B6A90;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___7E5064A5D5B3E32AEF200544615BA57B26BDD213EEB9A4E67CB27C90B7780709;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___7EEE0A0CFFBC006C874032DE232E6CD3CD7A0151631B023E9CE67731198B3F05;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___7F2594D9703B7AD658198D94EBC8D100DC59C8A6F2C0738087355FE79B9608CC;
	__StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD ___7F379C159024C3171F2888C8E2E9D87641E4344CF1E6959A500AD635BAA782B2;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___7F9F285BDE6257FD7F84ECED557EB570BD7EAF576192E8C33B7F80871F448515;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___7FC14D64A500FEE702DA3A8AD7BB0B27515463E25E53EE60A7BD44295431AD05;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___812EB43FE6430D68CCA61919BE9E158DC69EA9D5FBA247A60BA9B5C39FB3619E;
	__StaticArrayInitTypeSizeU3D3716_tFE6FC22FF0B3CFD89766B56BB185E399D7DE13BA ___81512AF6BA6ACE8BD43DC44B1A304AF63820CD97EE9FC3BCCC40E59C50FEDD23;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___81A7FE95471927E1E79CC01C8D4BB688FA366E28CB5DC58B92634B474FE22B82;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___82780DF78F509F95EE94AF8DC252B925D47B58905E2FFA6496F36968A2363C07;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___8288302BAEB1A953FAD17BAB09C75451FEAEC39C5656870E803178CE4CBA4066;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___82F183D9F2A00259AC055474F99A4BDE23BC8A77E59BB671B8564015AD073156;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___83DAAB365843C739D4E5F86FD73833FA5422CAE5E07005B8CCBF261620ECF39E;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___844C87A358C6AF886A861C14991CC22D422D45B3BFA75AA4E332C690401F49ED;
	__StaticArrayInitTypeSizeU3D200_t8F20B4A237B3BCB5FF3F72BB10CA530FF9AA9A7E ___8472071A6FEF16D94675B980BF627257DA8B3E5A9694D79726B8619A6EA68FD8;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___84A29533CD28AA379618E8B5FCA42CEA74BE3BD0BD75DE950A4F82CB05BA1AE2;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___850EE833EB693A978D2B35F598EC6EC66F873F8E433E0DFE3C55DC2248BF697E;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___858E7991DEE7525CF7CFCFAFDFC56FD6A023A69ED9564520F72D5B3188D3053D;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___86CF0DF831FB1324BD0429DE875AEE8B8CAB9B5196128B09C13C78E757A3F9CF;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___870E1A1CCA1540913B709AA4783674D5E440E0CA4E05AF915FB90A9EBEE159C3;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___8728427AC2E609E58E24D84F1581F1C8BC53386AC64C85D23A1DCEEBC44560DC;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___88BA10E90EFA4621FA25BC36C710D1658574C29C959990030A1727EC5358DD8E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___8914DCBE85C664DB76FAD57914C5FA3D44EB61413118B1B095148B1C23047D25;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___892DE88D549D0D3CE77CE6B429A83073E507E61E990DD63F74264E8CF5D1612D;
	__StaticArrayInitTypeSizeU3D136_tE2080E87BB8D9298547754105BCD2CF3304EDFA8 ___894607FF91D1B5168E93600B28CA5C0EC8F10F970FB607D0C784E3F1C0D6BC29;
	__StaticArrayInitTypeSizeU3D132_tD008F1B11D922081613D5AC460DA25658DED779C ___8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___8A1992FF7BE7D7A25FD976B3A876092F634B75B2F1A14F3DF22937712F2677F8;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___8B49C497C23B987F166BB1FE82C2D06413B7FBB66E7569B5A32494DFE29A9A02;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___8CC11E14C2AF163BE625C6B583E8BF7A165EBEFB3D1644D7D296799B642610F6;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___8D48571A73F0976ABEB07869D8733CF12C7D654F1405F32896DB7696ACC2C9B2;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___8E118657ECA03534C0496C6DD6E6F89813594CF00835AC3998384D6D2227574A;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___8ED03B7FA2243D579904305B548B8E88B29DB7E2FF47D8F657A797D4488958EB;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___8F95B01B770EC99709C821F2393DA10B10313ED37AE9B31E8D1EBCF23796232B;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___9053C6EE1BA4FE5CEE59A5A7CC5AA00B07D2A49A10CB55ACE30DC02C51AAB4C1;
	__StaticArrayInitTypeSizeU3D256_t4DF7955E369D4AF09171D4EE0EB9FAF2056CF866 ___9174B971D0D8B34ECB569D2CD19CF540783AD868EFCC3617D3457FE1363A064E;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___92EA6942A51A0D5A69C8A0CA5F78BE7703A72A8DFAA8CF7ACAED65BF5304B032;
	__StaticArrayInitTypeSizeU3D96_tB27EA2D370F13CB98873FA1E5EB40E0EB83EFDAE ___93BC0426286F07D41DA22CF8A93B84C5DE808F16FDDB3187CA5EF7E5C7113BDF;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___941E37964F65B528719E7CFA0238A49E0F3BA86CF187C71927C13640856D8EC7;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___9638834D1F629557D9B80FA7EEB64409E238C0EF2E3149A55A39C3796F66E19A;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___968ADBA3E2ECE472C636EFA80FBFD03AA2924C57FA4A71DDFDBFEB83B9287FED;
	__StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD ___973678ECC720192FEE8B3CB7E6348E351A6520B5620D4DBFFD123DF9F4A822CF;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___97A6B3C64392CF429855F27D9D5C55EBE4A173C832772C415A50E8EF27ECE351;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___98E061174085DD0369B46477B0A3CE3DE9ED7A1D531D3101DB28DF308F050BA3;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___991F035EDCC9B77FD5E3C27DE5B12975B8AAB39E5439FD3FA3BB3FE9A336F6B8;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___992544026A60CA20D417D5E77B10AE8FC892183DF6793F296DBA40F689076816;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___9925F176AF8C92E389E6E75CE745A418ECB941709C07332D23E5EB9ABBB5291F;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___9939539B7D2265E62D73A20F44037369659C9583B1D928A74F2229F02E46013E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___9A3288E7C15922FAD2897996070560AAD59F004E1507EAEC2B1B942CDFB584C6;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___9A73C02D329D9E8F0AC3D817C986AC86E68D188FDC268B162F09D651FA7A423B;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___9B9D059B2D4058BF13D630725D29D4B3F6BD42B35826850288283DB18AC19FAB;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___9BD6123DF2D6A8DDEC9AA06E102070BF1DA9DE4809978C625745D7C2DF5CCCAE;
	int64_t ___9C7FE09A60ABDE16D8C26D51026AC838249356A34E3139650AC306D10D63360E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___9CAB136E66A010D8F93F2D20AC6EE292015B95226E34124B00E500F8C064CFA5;
	__StaticArrayInitTypeSizeU3D112_tC0D44618AEE8BBD73FECBF53187954CBFBCFADC2 ___9CEF436DFAEC5D0FF26734AA2AE76EBFAC739240E0A4607387D14F8263B197FA;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___9E86EB930ECA317B383C2B5017E37E7CC6FB409FB834204D4018E8F375F9705D;
	__StaticArrayInitTypeSizeU3D36_tE0FBFB620AAE9F7EE2ADF1981254F7D36635774B ___9EDC508BAD545AA9EEFBF2E03886D1110E9B823F0A79A8CD3E270AB8D5E9E647;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___9F1134ABC0AA5A88AEE4AA4E02E3EA79E178DB4ED9C0B3533D28DC6CE3EE0D87;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___9F35DF4FD6A5C75EC8D76DA2D9B0F4154E2950B3359F9564CFEAB70DE8A637BF;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___9F95BE23B2795CB3E32C1CC97154AB9E86EDF3A5AE9674F8A1F3C88D2096FAC3;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___A0241A6EC484A8C85C2B2E0E1240E8132BE93CC6A126E4F2DE5FF06D4796209E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___A0E9EC9F05F3226BB12272E84A311ECE3EFD8C1D2F05D3C8ED4633ACC3BE12A8;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___A1D0A8BD8B25A6D3FA0716D2FD850CB7ECAD8987B70DA9820C4914041D8DCC29;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___A27ADE353E6FFD0D1CBEF68ED136F69430DF6F353D141C8478DA43BC88C14255;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___A40E136CBB0ED5DE2266982B66DD4CB738B3500C6C9EF2896E6BA0448B6917C9;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___A4DAF1972AE41230119FB2BF4D7F392CB5D9E0C90271F0C6EC1299800EF182F1;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___A5C9909CB0CD1030CB389F4A504B5B88B4328CAC093EAD285EBBAEB027EA3309;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___A5FF20B6647CF687A002662C48875C654228DDF753EB1A4381BF7A628B42EF69;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___A675196C67C8F3F0B7B2868FBEEBAE7881746376063EB86967185B0F9FCD5381;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___A6A5A205BE67F420BD02E97F4D2BA0E900A3C51A28202C583CD40FD8F1E618B8;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___A70CA7E552008F98C0671CC2D24418B2FC74D2DC2CFBBDB9CC2540ED28193EF6;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___A76A68190FFE19EB6D3559CC880038EBA8A75223B3F02FECF74ED33A2E5CA6AE;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___A7CA3A34A7A5B72DE31AD5B26342092F03732E3B50C650BA42FC41064B21802D;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___A7E864C294E56992D029558C6558C7A6A685CCBAE308A471EBBA29C7D3D461B0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___A8C3A1EECF88D0D654D8DDA84C4EF2873C1BCE7CA570B1B62B756E03A3A6A985;
	__StaticArrayInitTypeSizeU3D168_tD6E65FC6179EF2C4210787D5553A87C1ED545735 ___AA75373A0609E9AD0D3F416A48CE4BB81EC06A3171698F7D131B1E5B6BCB2912;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___AD0CF721AFA5964008CADE69C7C70DCDC667E9BB28759A953013A371AD811665;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___AD15284DD337FFA32661178D3C6F80F692595D3257A9495D155C99B50FC8ECB2;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___AD21EC3956C2E559DB1A9C8F3B27A76DC1C70758A124D994376E1B0A31A184D2;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___AE2F60AE81DCC052A7540D7806FA343591D115242E7EFB824982CCCAE284157F;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___AF011DE7B2D9B312193BA7E541A9990C19B209BD9336B2BC9C53987D2CC3B2F5;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___B04739121B6AB0E4911BBE21B6DD9F0572EE0B5F08EF57E898AA8320F2A0F377;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___B07453F8F8AAFA940E2C6A8B6165F3650C6C877D812604196E8D86273B729619;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___B08B8258982F0B04483D36814D79E9CED6EAE9AA9EE627FFE9988EDF24E0518D;
	__StaticArrayInitTypeSizeU3D1024_t468D198E5063E1F980E4CA1D080647B761757896 ___B2954FFD2DDEC335D6190CB5CFBCB66E602EC593EEDB74C0545639A93C368F7B;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___B3E9E7062C9641F142F31775269CC963115C0AEB17D83EDD7E98E26C2EAAA5AD;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___B3FB30E6CE096761CC4E57F2733960D987A26D0134E856BB7FDC5D0745F0EA16;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___B4181D82DAC1FFDE3CFFCA6639D56290F4DC5B23D15C24C9522FC131DB8911B6;
	__StaticArrayInitTypeSizeU3D128_tB1E43DC924E683198CA679BFF34496D02844B11E ___B428CEC8765573319631F6A7EABA83A34C586D01B9F314C64CB5684F9908220B;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___B48F50B40234EE3E34270EDC4A811DC3C3063ADF681578D4FCC4E4F57FD402F8;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___B4E0F4B6127C4BE48F24A33634A3D7D375E4EC22E6AF7493F1EF2E2F40710F63;
	__StaticArrayInitTypeSizeU3D44_t0A8EA7DE9937C939A345BF02D13B4ABCF6123652 ___B507BA66C95A60706EC089F80F46572640788389E51DEB981DB759D0716082ED;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___B5C581E896007ECE4F2F517C390DB9F3847E64B65F69571B08FB9857FC220104;
	__StaticArrayInitTypeSizeU3D30_tFEDE59F93E2AF2E6498D1A700CC735EC1CF4CD2C ___B65996EF162F905BBE56993DD85D591048C0855FC3DCBEBD8DDE79268379DFDF;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___B6B4E363E4A386012A49F11497D4A553EF87735AFA9DA242BC36D37A6BDBCA6B;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___B737652425D7BB826CA8363DA5748CDAA2A62E143C7D827C2E4797DF13B5C3E0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___B84DF409355E849ECDDA893E2C57705C1FFE1B8B5386B1F29F1F54F16E0A5FF8;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___B858762AC0E821FE317ABFE5B4D5FE4E8BDC8724A5867C1A5022A3C2AA934BDF;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___B8F82C601B16E9D90512C383806249EFEB720506EA0A14DC3204A9E66FED2D8C;
	__StaticArrayInitTypeSizeU3D100_tD34BF3E8536AAF8E410623A82D6FCEFA0D5AFAA2 ___B96869CE70B7B782EB6C49C8A3E6710563D2E579CB7BC592C0D7CE7D8ACAFD95;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___B9DEDACEA8A8027DA835F48280C2306804CB0975F426C39E922650D1F6CE92DC;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___BA7907623B7B7D0577BFC2F94C91F2879D650B83DD8E39A8FC4D5B4337BCB09C;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___BADCCB26B3DDE3E09938F26E859A035FD564824881248FD50A914D04B3D59DD1;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___BAE7577F4468E897CC8C308F10CB40E8AEF92CBF75AD6F6DD774DBBC2F1AE655;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___BAEF3D21CCA3501CA0930391C229D888D7A1481EDA3B2E7CAC0521FFB0D31C66;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___BCA60071BC8236861037DB9B18BC84E80E50DDCCE148DBD3A3BDF66618F6F915;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___BD5D6B9728DF12362F896749937287D68BB6409DBDDFABD7B68623C4E39F0CD2;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___BDF5C5CACF2F7267BC69169665D69CFBAB6B0DFD73B98FA4386F878E188522D1;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___BF252892F612E1E4B3E6A8B488ADCEBB32102A027A487CD864BFC6D28D2BDF03;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___C19C60191EB3B9603C3D7045EEC943E3D9E7776A87CCD82B44BBBF08357B31E6;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___C2A5DAC5C8C5553A8275C880987450886DF24E677D38257FBD23FD4A1B30F08D;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___C30498C67D69A4F46123429F014B2A05EF7DA1683E4FCD249BDEA7FF9B51A869;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___C4909DCCF3D7C100F34206B39B6010C7A91DEA72D6AAE0705104AA1239272460;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___C4BDA8D1A189704101D7C0F3FFA9C49619948C46898B814F643C8B5A35AA47CC;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___C60B8B2173CA19D54F1981AD9BBF9A432732580774471068E1BD5210AF9E272B;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___C7258DC7B8BB950E4F6426BD5CF2530E0C5F37BA06914B36894D8B9DEBDD45CF;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___C738CE6D29606328EA27ABEB83C9A91DEC90E1A7C4B5CC08356C14A2434EA694;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___C7A5958727276CDEE4286492253978D00E716955FD04834EA62DFEB962A95291;
	__StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD ___C7D12A90C94D52A40E5239FA8BD51C1C7D033B17222A15FD2E50F7CC45C5C18A;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___C7E368D1295B382E7637268C99F9F18D4A7864166F631AE31DEEDEDECDC70653;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___C8631CE9D04A94EB20C3A753884AD774A70D740CC5434F9749CA5D7E8A4702A9;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___C8C362C52A33BDD8C9FA09B44CAF5284E23FD17E4976103C51B9F2FADF957033;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___C8E24BDFAF525FD736DFB45E23240F23B7ED7F09A96BF28CAED0CF94F51BA468;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___C8F88D6E82AA05B0F32EEEA351167F0EAEA23981C1E1F80305F3D75EB4C339DF;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___C9E1CFD4A0D59131F8AC7D3DA5911AF13135548E2C92FC062AFDDA77FA8994FC;
	__StaticArrayInitTypeSizeU3D2574_t5C12AE6BFC11DA44EC361094D4E0B44E2C306A4A ___C9F8AAA45DBC75D815807C58A934D50E56FEB7947355E48F977431ED92249D64;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___CA7CF7FA6ED304E35369A8E06948BD82528C9AC1F74CF71207DD723ECD416160;
	__StaticArrayInitTypeSizeU3D6_t55F76B346CE5ED76650ED98C66D0C132891E4BCD ___CBB4999C365FA0ABE5E75FA63E432602C40CD00CB6A10792AF8496C09576AE4D;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___CBE5AF6AC24E31D566328745DEBCD411DC1E0FE827EAEFA2901D966C02E8A2BA;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___CC0CEFD9E9B2AA59018C4A2CF62D831AD45D404EA5B75E5F53A073CFB92C0F7C;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___CC216089DA4A5F29CEE27180664BD91B6C87991677EF06F97D8103937BB2F47E;
	__StaticArrayInitTypeSizeU3D124_t79635A7B3D984DBD511CDB2A09472922B9076F5F ___CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___CC9ADB462C05913E6352A852E49FC045370634571080CA1ECF95841B06E63021;
	__StaticArrayInitTypeSizeU3D184_t3DAF41D1673ED71FB0AE2443F87A9315E300AF18 ___CCEC12EB14D845EB07AB7C43EC287492C71FE49F4620C71E29A745BFDD132C9E;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___CDC467024FA6B34C7E9CA501AD1A30225036CC96F6992AA0506C39C17B7F0A43;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___CF922F404DB827EA91F8C423C0621C677B464641FE0B6C6A7AEEB755FA19758B;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___CFCCE641455683949ABEF89889F39B5D4C21229C1C7FB15E1EB59BB0166BA855;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___D00A28AC5285007D566C113AA8E3F52E314F13DCC0F6A6BE6441461F7AB39F0D;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___D00D91AF4D0715FA4CD9DE25815E484FE263BF975E96FD4F27CC3B1EC3CF4B8F;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___D028BC86965900EA524F37873E408FFED261A6D493C2E16F53CA9D9B7EA9106B;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___D04468D46671F8BB09408F2DC16A4A4C0F9562BEEBF8835D408317ADCF3A7528;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___D31860D2AAC8572719923B2CDF9405F28404159067F7E6D326F13FBECCCD6F1B;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___D36081EEA47A16BEB470962DA026BC43E7F2C8F877D1D7DE9F012090EBAD2E8E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___D3626DAA08967C0BB98D7DA1C6CA404EC8F747199195DDBD0EBFF1AC09B3DBE2;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___D3C1F935901A3BA8AFC8EB475DE9FC61D4DEC55251E6B385760D1D705D7C172F;
	__StaticArrayInitTypeSizeU3D172_t3D054411CAC8EA0638C48F215D82D1846098E2BF ___D4E32EE12FA99FD74B5A6D561026D709AA3F6121B3F0BE0089E1A126032EE430;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___D5B4E5408CE7388270744E8C7EEAA4DFD12576FB8782AE976CB1AD70380F429C;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___D5C5159832DE340CACF18939A1F8BCB4B919226576A4A5B397827CC59717DB8B;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___D607394C3FB9CF576A4321D4EFB9C4F4531EFD539CFCCBEB9C2ACE986CDA0F4F;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___D66912A3DEFDE847CE0A094C2C665979574EF1CB3F2A708E08BC9D364DE61BE8;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___D7E91A101F74AA998AB891860D33BF3D41616076011A9C0FA9272E4A0EEBB0CA;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___D83EA65830337CF1E9B54F5BB2E519ADAF4468E1955A9424A92B6F88F5AEC7BF;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___D886B98E4F5ADFB2F1A5723F2E14DD4D01D04A2E36FA62749034A4FBCA662CD0;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___D8C1259490BED6A503CB038B8335940093EC88F912BD3E5A02600C43C011740A;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___D99B48D838464100EAC00292244245885B37909438B9B4AD22C06F18E9F4A888;
	__StaticArrayInitTypeSizeU3D56_tC95FD7FAE2389D5EE2E8431591FE9A6C0F3610F1 ___D9A7E16619B0E4535F822EAA39A5F9AC239D36012705F0F83CD0C09B2B987F24;
	__StaticArrayInitTypeSizeU3D10_tA8EEE29DC5A765E2D3C74438A14006FD8B9299D8 ___DA3E1F9CEF73071793FCA1A5C3FE2B750F875615F7890BB676A908B8E8FFF853;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___DAA961C1C1D1AA3CBC2455ED421C8868E2EF5DBAB325F2BC403F6F2DB66C398C;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___DBC2134BF2E99C031606EAF07E57D04C6E19A1515B0DAEB497C32101D7080AA5;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___DD531B41B38534C045D3405CDFB24986F8707992BD6BEC210174A8826C348231;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___DDAD1F1767B72E04B9420DEA0EF16AE383925385908E56C69BCEB06E8635D7B0;
	__StaticArrayInitTypeSizeU3D248_t8ED961081FD625CC3C4E5372F09C9618173B6375 ___DE64651006CFFFAC311C4370FD15C4D6EB76ACEBEA906C43C3997BFA28EB52B3;
	__StaticArrayInitTypeSizeU3D44_t0A8EA7DE9937C939A345BF02D13B4ABCF6123652 ___DF25E2B8991E258E2716505524C09F19368125912A47F4936D0225D417D705DE;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___DFB2E525833EF871960BD2D70DFFFBA4945898C2BFFDCE8C2757DECD84BB6C03;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___E01AA2133C0C420D16B81E39FCF4F90012ABCB742AD0E97354B0CC478951B396;
	__StaticArrayInitTypeSizeU3D164_tE3D9D8BCD7812A870B5736EBDA2A4AE72493813A ___E053D07E9CDB8908B4C6FA17142BBDF8B183DDE1E1357F73F5DB2F59C0BAF8BD;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___E0653D05CAD1F0DAF3713147FA239CBF43A4BD648420176043D81CB757AB3B85;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___E0D8A42856EEF19927055C9DA5BF93CC3462BD15BAA5344E425784071C4A624E;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___E132B2FF4D61C28380E68729D93CD753F51EC02FB3713E0CCD2D30D1A67C798D;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___E1D901CCDF12B1DF0D7A4FA7AD82911B2B146D844AF4C3FC07CE5847E8AFBBDC;
	__StaticArrayInitTypeSizeU3D128_tB1E43DC924E683198CA679BFF34496D02844B11E ___E23B166C4896519A59519AF204DD9025F07F20EB0E7F68F139E455669155303D;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___E300F02750E3D7D01E3F4641FE37B90D20E5102C717E1F8946E4600727E517C6;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___E372C8A58D0F580D5F63C47000D08E7A144D38B1527D24B19B7DA15DAF4D913C;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___E44DA7A1A8B6B6593EE50FBFAD6DCA4E6A2C1A7D87FA62CCD77FF0E7DC4532CC;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___E4AC02EB8FFE5ADB3F4DBD1CF4E351F0699C3EB19D1FD48FF297B62688774D32;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___E5136409EBFF600915DA0604934267F437779EEE9A9AF6B4D0001B6B7160DAB0;
	__StaticArrayInitTypeSizeU3D2048_tAB0A1889C06372F39D1A3A1B2030913BF941A46F ___E5138C133342AE7ABCEE10CA327CE3768D65AA469C407D468D01F6A146E644D5;
	__StaticArrayInitTypeSizeU3D108_tCA1FDB24B56B8C71598908D6B5F037838C5DA024 ___E520A618545C6BF154ED872A1B5F6FF51AF80ADB7CC841CFBE3D8410FAEDC89A;
	__StaticArrayInitTypeSizeU3D11148_t30854AD6D2620E9679A46A4B1527276EC02296EF ___E6158B3DB5ECF885C21279F9A4ECC65456BE79D326F38443499A3C1C808ABB7F;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___E78BBF6E2001D9293C521DC5CC81D45587C9BC129C2A020CF8B9C62A90B3C38C;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___E7DDCEFF47FEB3B9E49C207D4AB1E960F393B75FF2FE51441E6BA56880DBAE65;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___E8C65E4BD080058C3D32617A1DD410386970CD471821AE1EFB9BEB5AE82A3EDC;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___E8C83B5B87239548D39723CD1DB34E4EA679F1FC01E4ABC7DBBD865E19A3F470;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___E996F539ED1C91B7C8CF4051B9441635B9601656501661D84941C15A1169B7C1;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___EAD673C0741C8D152B725DFDE4754C5099BB1584865A42B8DE3DBEE1FBBB2D89;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___EBA6656A254CBA2E98364ED3AD3C577828CB73B2F40E80329519A11D37E7922B;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___EC3CAB4F9004BB9DC57CC5A27BB6B096B3A434A2B359AAB26F9F5BE703904466;
	__StaticArrayInitTypeSizeU3D26_t5FC45B0A14F5F80FA7FDE22075AFCECE544A34A0 ___EC44F3AFBF5578C70F8EA0B3CDD13B8CD9BE56FD07511987C10DE985AB7C77F2;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___EC9C6EF0275BDFAB1A7050B556C0CC6A44DBA4F8F9B57BA3C5EAF75FF9B24DA2;
	__StaticArrayInitTypeSizeU3D9_t07F1CA742B570D64747EE3992B254718DC70DCC2 ___ED2B39AC00852C1ED845A17AB05473D2E4BCF8EF7A04F76777675E856A559B60;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___ED7E370DFD0BF976F8669790B470A09CF0FF309DC9B1E2B3186CE4F0F9FA7D5A;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___EE1614CFCB93EA38F3C262F47F0A403BDF5F1133150072C1928C5F0E6DF646E4;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___EF201E7067F97E67468C3F485A180A0EF3572D9AFF24671EFDEB9A08644A3177;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___EF63E97002775A666DB9DBC340F0BA4CBFDE3967E7B9748A008B69F0AFFE8BE4;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___F0322FA35D36E5CA22C27848E69224DB4F774AF2F258B4E05CD36A18CCE1E55B;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___F0389978E6D16536767C3E8C4B08F2AC5C800798C828BBF4F1D721D7DDFA8775;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___F0B77F223AF396342A941058490B4217A319F40FFFADA0CB74A70338A10A751D;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___F0D2E24777179E1D479F7183A3E4544F9C3CCCE4CBF993BC7EC1AF55B687156F;
	__StaticArrayInitTypeSizeU3D16_tE29A14BEF70760AEA7EC5B7C0404CBC51FE7B6CA ___F10EB800F205B09A732C0E1EB94A9D53194237405ABA783F698D7D11C18CFB89;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___F1B64B21C00EB0FD1DF2FAB433EF6C0D8C79B51F83840B7B8CA14C63369F6616;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___F4543B9A7A6A578164DE4769CFE967EC6D9EA12B5D90076E36DB4DD71DE88938;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___F4605E50276D9BDC4D9496DC8DC35AF8084E8CD3A69D550B706B6E8B4DA0B0A3;
	__StaticArrayInitTypeSizeU3D80_t8358A65C408ED88B8F49BFE0DA95F82E3E3FE42F ___F500D20090AD6E636B0D0E537458FD41B869C7A7AF499F743A95118464B9C9B7;
	__StaticArrayInitTypeSizeU3D80_t8358A65C408ED88B8F49BFE0DA95F82E3E3FE42F ___F5BC6E1EE55ADFAAE875C15542C9BEE5FBA074B29E56A0D5016AC70D04BD53D7;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___F5DCC62363F3F4B53CFED2264390F57D2115F5BED397414B73A48893BF2033D2;
	__StaticArrayInitTypeSizeU3D3716_tFE6FC22FF0B3CFD89766B56BB185E399D7DE13BA ___F6146FBD47A9D255913B392A5A265681489D9E0F6544DEE7AD6714120705CAD7;
	__StaticArrayInitTypeSizeU3D20_tF4C97EED98E9261B1AA9397D61D9C5F797E68158 ___F6163685634824034CBB1450836111E3FC38C54FC623E60878EC7F9352F32B72;
	__StaticArrayInitTypeSizeU3D88_tB1DFCDE19E827CBFDDD4C81957759716527FA235 ___F6814F8BC9E0C14A6C6B67E19393B78B301F4409D0C7E2551891029AC11C8F75;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___F6FA3D57BC1703BDFF2CD1D7A4D2347C659064FD80F9319974F58D2437C8FDDD;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___F92FF6B3C8A668F4EE5A00A9C9728E432B407910BDB5C8518F092785F964C1DB;
	__StaticArrayInitTypeSizeU3D64_tDFE11D7EF527DA30F7781C126D142C19961F99C9 ___F93FB973C99E7583EB3A16A636DA67B7ADE950FA21624F7EBB766DC9E2062CB1;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___F989FC1A32987AA0550D1B9B512571F86F33CDDD0D4932A8C5E2921851D35A20;
	__StaticArrayInitTypeSizeU3D80_t8358A65C408ED88B8F49BFE0DA95F82E3E3FE42F ___FA679997A61BF1A27D5B90BD1C746443BFA7979761F27D63F49058FE27938F2A;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___FA6A147DB836123BA519E5C5A8A1AD2C85A252878EE51EA2529B00F1231E4A04;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___FB0A68F50C83F6DAF95A2B4C97639231BC3B9250C09BD0B8AADA492BCB4BA617;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___FB53FDE75D6FDED4EF44145A308EDE3DB612293C01A6E170C102980A9F6121A2;
	__StaticArrayInitTypeSizeU3D120_t4875AE94906EF071B6711706789C36AAA420F995 ___FBD4E957EA38F201724E795ED74940339ABCF92AD55B6596018CF982F4376215;
	__StaticArrayInitTypeSizeU3D28_t84119898FB61B94A1F975AC82F6654D141F09BB1 ___FC26CF118BC276877FD6A8A545629A099A6EBA3481CDA11FAEBEB3089F5E2452;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___FC8B60908EDD854C5710A554C6F9425131E81BD1E646323084C109FBA99B9190;
	__StaticArrayInitTypeSizeU3D12_t9D13B10BC3979298D946A1A2C581ED7981A003FB ___FCC16E4D9D2FD1D5DEAF1DC575CE1ECBF7C5FF3D410A9444630B1B2D54931AB0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___FCD4372EF6300C83F6533AB9DDF6114828B3051745BB352908A0E4010DE0364B;
	__StaticArrayInitTypeSizeU3D80_t8358A65C408ED88B8F49BFE0DA95F82E3E3FE42F ___FD0B7AE474CE390E446204EF2A7F3156444FA93BC0A0121EF7211A74D373F745;
	__StaticArrayInitTypeSizeU3D52_t3CD50E2A5BAE45875A8B6669E09D15F832A0A4F0 ___FD87A8CB026B07ABE41F06D4401365899D180024614BF41E0ACDDF878092E435;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___FDD4E3F255AC7426DF6A725F8BECA3BAA0952885CA56FC52B8E981CE8F0C58ED;
	__StaticArrayInitTypeSizeU3D40_t39FA2331013FC92CA5A56C51D8CD325BE5479EAC ___FDFAE9EBBF7515FB0D6B40D919FF7047DDD7B1FFDCFF8757935846C7B084CDE4;
	__StaticArrayInitTypeSizeU3D32_tA215E667F5C8338E398D6C0BF3A31CD11C015F92 ___FECE7D38FE2EF8C58A118369B2BEDDDF41C13D19A8992AFCC4FC3A5092E975C0;
	__StaticArrayInitTypeSizeU3D24_t63926168D4219130F8A07B4C3DDCE8D7926EE178 ___FF4BCA7CDC06ECF2C289EE0700D92982F25562CA730AE4AB5EFFDF02349440B6;
};
struct AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___DEFAULT_CHARSET;
};
struct BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___EMPTY_BITS;
	float ___LOAD_FACTOR;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____lookup;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___EXPECTED_CORNER_BITS;
};
struct Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___WORD_SIZE;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_StaticFields
{
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___AZTEC_DATA_12;
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___AZTEC_DATA_10;
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___AZTEC_DATA_6;
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___AZTEC_PARAM;
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___QR_CODE_FIELD_256;
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___DATA_MATRIX_FIELD_256;
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___AZTEC_DATA_8;
	GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___MAXICODE_FIELD_64;
};
struct GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_StaticFields
{
	GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F* ___gridSampler;
};
struct HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___MODE_NAMES;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___LATCH_TABLE;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___CHAR_MAP;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___SHIFT_TABLE;
};
struct State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_StaticFields
{
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___INITIAL_STATE;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_StaticFields
{
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___EMPTY;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC_StaticFields
{
	RuntimeObject* ___VALUE_TO_ECI;
	RuntimeObject* ___NAME_TO_ECI;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3  : public RuntimeArray
{
	ALIGN_FIELD (8) ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* m_Items[1];

	inline ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29DDF7E352770508ACA38F2694272E5667918292_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_AddFirst_m8AAD292E14E5ED400CA509F740E09CB2C4DE0D60_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601* Detector_detect_mB5FEE5EA82CC5502C4183896609A2E29CC4B1074 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, bool ___0_isMirror, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* Detector_getMatrixCenter_m17C8196A83A0915A6FE2092BFBF8767624047C0E (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* Detector_getBullsEyeCorners_mAB838E776762BAEBB667D15AF49882BFB89A749E (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_pCenter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_extractParameters_m44A65062449F7B8330CB370A73F983DDC247DC56 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___0_bullsEyeCorners, int32_t* ___1_errorsCorrected, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* Detector_sampleGrid_mB2D6ECDB5046D28D27D5B0B8A16A3E75A10DEFA2 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_image, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___1_topLeft, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___2_topRight, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___3_bottomRight, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___4_bottomLeft, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* Detector_getMatrixCornerPoints_m890E9BE8B0F82CEC857BDDB69BF66E3BED7318F0 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___0_bullsEyeCorners, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecDetectorResult__ctor_mE51AC1B378BC8238E80CF56D093DD5A4EADBA19C (AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_bits, ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___1_points, bool ___2_compact, int32_t ___3_nbDatablocks, int32_t ___4_nbLayers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_isValid_m151E6E8D7359BF49D0328F108A121544CD588005 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___0_point, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_sampleLine_mA59FED252ACD919E51D17A127515FDA6D1AA7683 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___0_p1, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___1_p2, int32_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_getRotation_mD4AF57ED65E85B9897C934CA00FE4A6A15CE1572 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_sides, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* Detector_getCorrectedParameterData_mC01E7666B0685F3C8B3862BF5E7A37DBF7EDA47E (int64_t ___0_parameterData, bool ___1_compact, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CorrectedParameter_get_Data_mB8BEB506F577CF8713A3999682D0E3FA0882207B_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CorrectedParameter_get_ErrorsCorrected_m2EBE9649A729E32CAA2A24192B11FD7CDCE61325_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_bitCount_m8CA894EF96EDECFB9DB08E4176D71145A1C0F431 (int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReedSolomonDecoder__ctor_m0D65A6B18B30E2FD9DDADDDB5A026083877691F3 (ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1* __this, GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReedSolomonDecoder_decodeWithECCount_m4B2E0E5F1A67325642F8D5513083ADBC97C30120 (ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_received, int32_t ___1_twoS, int32_t* ___2_errorsCorrected, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectedParameter__ctor_m86DCD9739D5C38F9349EB8E98A893A8AE2506D0B (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_data, int32_t ___1_errorsCorrected, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_init, bool ___1_color, int32_t ___2_dx, int32_t ___3_dy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Detector_distance_m2532FEC75B0F71814EF0C3A1782B60CC972965D8 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_a, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_isWhiteOrBlackRectangle_m10F48806D7609B0E7C62E71507BF65536D899B45 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_p1, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___1_p2, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___2_p3, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___3_p4, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924 (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* Detector_expandSquare_m3AB8DB5335624FF3A6305C75E82682F3400FD995 (ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___0_cornerPoints, int32_t ___1_oldSide, int32_t ___2_newSide, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* WhiteRectangleDetector_Create_mD21D6F3EED813A256B0641287468A5DAC5390368 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_image, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* WhiteRectangleDetector_detect_m16E0EC920C8A177FE12DFB4AC2C09BE2C8CB57A1 (WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695 (float ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* WhiteRectangleDetector_Create_m81AE3155A9008105C53F12249C7D33CBB3205455 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_image, int32_t ___1_initSize, int32_t ___2_x, int32_t ___3_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_getDimension_m4A5B3777B345563F6355EE4712970F6F1FA7DD4B (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F* GridSampler_get_Instance_mB4B81EE1991E655C5BF7F43B3CE8193FD46D3E23_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Detector_distance_m31E7F3A1C41BF2D11048BA71DA27B1A6D9BBC734 (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___0_a, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_getColor_mA1B71338E2000BB3990D4E4337D0A601191757B8 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_p1, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___1_p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_isValid_m9F11EFFB1A49A622AA21E9203EDE968CA5AD6892 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_distance_m9432B6FE834B0C79FB5A470F4C8B9999E2DF9E86 (int32_t ___0_aX, int32_t ___1_aY, int32_t ___2_bX, int32_t ___3_bY, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_distance_m595BE93565B28885999CEAE3341DF908E71D0A6A (float ___0_aX, float ___1_aY, float ___2_bX, float ___3_bY, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_mCAEE6EF5C3DB4D38FFAC5696166C2F654758D8B8_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m6C71E1FA744C2CBD238768117E13119786AA34B3_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorrectedParameter_set_Data_m187341829FFEE73BB7CF1B6EF44F52340AB17FC2_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorrectedParameter_set_ErrorsCorrected_m15024F47D7437243DFE6C779BB99B18D3C8D5726_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_m73F7AE59E69A890CB39C59178216175E574AE8BA (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_previous, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* __this, int32_t ___0_value, int32_t ___1_numBits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mC5D995C24BBAE1138FD1968D5B95579878427058 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mDB6BEC3CD32D86D21206054D760121E80B071A92 (String_t* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, bool ___4_disableEci, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, bool ___4_disableEci, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_mE1ABAC4D4D4ABD976B7D9E65BFF8B0EFEAAAF104 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, bool ___2_disableEci, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* HighLevelEncoder_encode_m92B9E0A06468448FF06CF1E9259B3A1B1B971BAF (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_TotalBitsInLayer_m052C577EC29856BFAB638B7E18639BCF85D304AC (int32_t ___0_layers, bool ___1_compact, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* Encoder_stuffBits_mA0EFD348121F485EB095CA6356D66180D24EAEAF (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_bits, int32_t ___1_wordSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* Encoder_generateCheckWords_mB77BD204D6D233F211BEB2912B08CBAB770B917C (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_bitArray, int32_t ___1_totalBits, int32_t ___2_wordSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* Encoder_generateModeMessage_m96C83B27B063B1A2AA5D77AB7FEE5C84E808FD4E (bool ___0_compact, int32_t ___1_layers, int32_t ___2_messageSizeInWords, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix__ctor_m3EA576981AF1BC5E9B2B9B8CEAA2324D652B66CE (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17 (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, int32_t ___0_x, int32_t ___1_y, bool ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawModeMessage_m2D7E8583F8A007F5EC1B4F3AF2CBABEC22F6FED8 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, bool ___1_compact, int32_t ___2_matrixSize, BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___3_modeMessage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawBullsEye_m429626515E0137B52F829153B18AF0CE27691C95 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_center, int32_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode__ctor_m76D7F62EC456790CB1695DA2C92D6DDC1E22930B (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mE5BA86D41CD674D2E7938DFC244F2BD67D403482_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Size_mAF05457489085E22BA915B508A76E86A90551341_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m4DC35FD11180900FA835BCB099B3386519FE38C8_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m1AEFCEF23AF3344B22319A32D688C45C10D174EC_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_m8A7ABDB02F8F8167DA0D154BDD126B4C36F0886A_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray__ctor_mDBF6684C57B783D47B9A985782EE62DC15CC48B3 (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* Encoder_getGF_m3EBDE49A18B762FB901C366020F75E7E1E20ACB6 (int32_t ___0_wordSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReedSolomonEncoder__ctor_m338938665872DFE4426BFE51C89F09A7A568454F (ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9* __this, GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Encoder_bitsToWords_m9150D53B09AD2A8C4CED20E2474201227E980AE1 (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_stuffedBits, int32_t ___1_wordSize, int32_t ___2_totalWords, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReedSolomonEncoder_encode_m032F73817FE34A6ACD80EC239B8F0FF74D347CB0 (ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_toEncode, int32_t ___1_ecBytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
inline void SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29DDF7E352770508ACA38F2694272E5667918292 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29DDF7E352770508ACA38F2694272E5667918292_gshared)(___0_array, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC* CharacterSetECI_getCharacterSetECI_m567E46CC92073E4299751B37D346927D3922A92C (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_appendFLGn_m804A72FC8EDCA2F298A417922CADE6AD28FE78A1 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_eci, const RuntimeMethod* method) ;
inline void Collection_1__ctor_m654977132D632E0FE4182A91B756FB1B148F98EE (Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534*, const RuntimeMethod*))Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForPair_m56F0DA5C29F8CCCC282BD7D741C53EE4B3E17743 (RuntimeObject* ___0_states, int32_t ___1_index, int32_t ___2_pairCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForChar_m97C120D141EA7D67088D44AABEB4F9F2D23DC713 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, RuntimeObject* ___0_states, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m192A14BCD04C70950486C46B0CE798BB5B65F6FF_inline (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* State_toBitArray_mA46C0EAE1B67B45804B381D16476B3E08516024B (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, const RuntimeMethod* method) ;
inline void LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57 (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForChar_m716D1B848D1E22AF6C9B5AD7BDEA9037CC6F8233 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_state, int32_t ___1_index, RuntimeObject* ___2_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_simplifyStates_m3E39A0B2A79FF1B46DF380D4BB20DF8FBC57B5A8 (RuntimeObject* ___0_states, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE_inline (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_endBinaryShift_m02C88F79A8E74D7DED5A91799EDEE5394C065FBD (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_latchAndAppend_mFF8F4D7DFF4D214126A44866D4D6931F5ECBF374 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_shiftAndAppend_m98BC26120D64F7D804DF7B8BA13355C6CBDE74D9 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_m769EFA53CFDB9F195B4AB22AFF439170C6002088_inline (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_addBinaryShiftChar_m45EEF05A6534F2AE47D6DF27186C5FD881AF84E5 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForPair_m09E95A7FDC325C1763803EBB2F6E62A524291C56 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_state, int32_t ___1_index, int32_t ___2_pairCode, RuntimeObject* ___3_result, const RuntimeMethod* method) ;
inline void List_1__ctor_m701C37FAF343FDF7BF874EA865349454CAA67CBC (List_1_t685540B7055415D10FB811FE128E1F88BFB54174* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t685540B7055415D10FB811FE128E1F88BFB54174*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Clear_mD61DFC1D6C4A3EEBE5F1ADEEC845C7F1FE990235_inline (List_1_t685540B7055415D10FB811FE128E1F88BFB54174* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t685540B7055415D10FB811FE128E1F88BFB54174*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
inline Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB LinkedList_1_GetEnumerator_m55BF4C43E33842B48219352D7064CFAED4D56BC0 (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB (*) (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
inline void Enumerator_Dispose_m178F4D952B603869C5FF438E4130094474C497D9 (Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
inline State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* Enumerator_get_Current_mF184FAD53B05FD3987E9A779F08A38339FC9B56D_inline (Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB* __this, const RuntimeMethod* method)
{
	return ((  State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* (*) (Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_isBetterThanOrEqualTo_m956D4AA59DF4C64BD76B4BECF9918939B61C3A66 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_other, const RuntimeMethod* method) ;
inline void List_1_Add_m5C0F5EAAAC862603168253056B8A91DBC68ABF77_inline (List_1_t685540B7055415D10FB811FE128E1F88BFB54174* __this, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t685540B7055415D10FB811FE128E1F88BFB54174*, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool Enumerator_MoveNext_m19548BA01D006951765F4AAAE0860863CE54FB6A (Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
inline LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D* LinkedList_1_AddFirst_m483AC6A27C2ECDEB2139239D46AFAABB50DD9D09 (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* __this, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_value, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D* (*) (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F*, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*, const RuntimeMethod*))LinkedList_1_AddFirst_m8AAD292E14E5ED400CA509F740E09CB2C4DE0D60_gshared)(__this, ___0_value, method);
}
inline Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4 List_1_GetEnumerator_m9050D065887A962A990FDCFFAE19E12F55B6752A (List_1_t685540B7055415D10FB811FE128E1F88BFB54174* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4 (*) (List_1_t685540B7055415D10FB811FE128E1F88BFB54174*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m47EBBB3DD9A4AB6346FF58E7D9061A3F578147AD (Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* Enumerator_get_Current_m11768B3D2AECA70127884D0DAA2485176FAA086D_inline (Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4* __this, const RuntimeMethod* method)
{
	return ((  State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* (*) (Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool LinkedList_1_Remove_m2853450FA66EF1F59F7D0413AE7AC31B70FC50C1 (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* __this, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F*, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*, const RuntimeMethod*))LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared)(__this, ___0_value, method);
}
inline bool Enumerator_MoveNext_m6E3BA60E028CD09E61299428AABC17AD5A4A1D87 (Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ToBinaryString_m46E6565F217FF2201F558E2E5F126F8D6BF0266B (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_calculateBinaryShiftCost_m7464EC8FFF2175390F8E1C1F3A3EA0D317F8F76B (int32_t ___0_binaryShiftByteCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258 (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, int32_t ___0_value, int32_t ___1_bitCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_token, int32_t ___1_mode, int32_t ___2_binaryBytes, int32_t ___3_bitCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* Token_addBinaryShift_m6726A3EE5EC07F368FDF077D97727271C1A05708 (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, int32_t ___0_start, int32_t ___1_byteCount, const RuntimeMethod* method) ;
inline void List_1__ctor_m0372D1C5A2A1BFC49305790F81CC145EE71BFDF7 (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_mD198B1BAFF24ED7DF6D1173CDEE13ACFD6FA1E32_inline (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63*, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* Token_get_Previous_mCB7101AD333616233C551D0F79C0208A90AC7D04_inline (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mDD8C81B7E529A2F81E8451436BA1BD2CAD9A2DD3_inline (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* List_1_get_Item_m7E0CC1F41BA4D5AA2748BBA5147E7A2ED504BF29 (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* (*) (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken__ctor_mF2C8BF4E71316ADEB35CEF76BBBE9B9DFBDE3BD4 (SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_previous, int32_t ___1_value, int32_t ___2_bitCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryShiftToken__ctor_m6C012760DCDE49BF29361E8C738985AEC208D6AE (BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_previous, int32_t ___1_binaryShiftStart, int32_t ___2_binaryShiftByteCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelData_set_Height_mDE7D31262F024ACD1C602E7D5E7E4DF9FD952336_inline (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelData_set_Width_m53C983C078BC83AFA022E8098DFBAE7150395C47_inline (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelData_set_Pixels_m364772D1E8C13A5EDD95E0DCC760BA5B2CAB8E1A_inline (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 Color_get_Black_m9E2140212109A218A378C54E16B683290A7D3272 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelDataRenderer_set_Foreground_mF0EE56C5925AB55F28CAB2A933F88A31697DCCF9_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 Color_get_White_mC907A1EB3D7562346DD188F3B476C3BD3C8D44F6 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelDataRenderer_set_Background_m31E9B2831B96EFA4DA35075958C653C81531AB10_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* PixelDataRenderer_Render_m39807C1BA6286998A9EB0D04ED14FE5EDA17BB61 (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncodingOptions_get_PureBarcode_m1C708F7A8D4C62343CD89C09E66A7E6E1AEEDEDF (EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncodingOptions_get_NoPadding_m655FC2D094890742C0FE72831DCEFC5C4425D1AE (EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodingOptions_get_Width_m0C9914DDD4EAF5E0C05B1E970F9607A31EB6D4AF (EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncodingOptions_get_Height_m6DE41C09891B45AD6A7A63736121F998629AA29A (EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 PixelDataRenderer_get_Foreground_mC272AF3353563465F711AB675D96C39594AFE329_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Color_get_B_mC668C85173CDC211AC0E2FEB3E6C36E9C57DCC61 (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Color_get_G_m8BBF290336C0D938F2546AB296B002C9995B3BAA (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Color_get_R_mA69925F53F4EF7AC1A3B4A94B9F4ABEA72662951 (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Color_get_A_m20373E97C1E01A1B27CD551E4FB1CB62DD381230 (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelData__ctor_m9CF7726C3FFDEEF03F9B4624F747C39AB0BFC5CC (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_width, int32_t ___1_height, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pixels, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Foreground_mCA8A8DE219C4C6268EB1FC507AC5F009035912E5_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Background_mA018A3794C69A3F93EF0B15DB61B67FCF65EEB66_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* SvgRenderer_Render_mB819096C9B65ECCAF2CAC7E7DDCF155BA8CD702D (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage__ctor_m15AC7394833398D068018446D0F31BAADE9B55A6 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_Create_mA66C25C411D2B2D2BFFDA3C3D38C91505C406E88 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* ___0_image, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___1_matrix, int32_t ___2_format, String_t* ___3_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___4_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SvgRenderer_get_FontSize_mFDF87211FD9CF7214CDB620329FB767BD23432A2_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddHeader_m474D900519A6BEE72285198917E329A1A8537F9B (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 SvgRenderer_get_Background_m4E6C129CFB7203E0FFCB40D5E2E49BDA43885519_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 SvgRenderer_get_Foreground_mE7BEEEFE29D307C7F2C5F06426B3EDEA88EDC6C3_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddTag_mC28654D7630E0296B0613AEE1009119A068B02D6 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_displaysizeX, int32_t ___1_displaysizeY, int32_t ___2_viewboxSizeX, int32_t ___3_viewboxSizeY, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___4_background, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___5_fill, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_AppendDarkCell_m7DD0A4A5F2B21108D01A17E8E1327BF2CE3691D8 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* ___0_image, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___1_matrix, int32_t ___2_offsetX, int32_t ___3_offSetY, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SvgRenderer_get_FontName_m49BEEE0CB733A1F94BC38CD6E20B3F3CBAA0898A_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgRenderer_ModifyContentDependingOnBarcodeFormat_m3B211927371911EA1EEC8F289461B81A05177B18 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, int32_t ___0_format, String_t* ___1_content, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddText_m5078988442BAEFF801F6B9479EC0F371A9ABC9FE (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, String_t* ___0_text, String_t* ___1_fontName, int32_t ___2_fontSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddEnd_mCBC335EB32AA76BA55B25CFAD55373D4E94759AE (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneDimensionalCodeWriter_CalculateChecksumDigitModulo10_m71D20DAB6F370B685E178C86188861C530C79932 (String_t* ___0_contents, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___0_startIndex, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix__ctor_m19005028FD02E114513B938F10B4DD067838DBD3 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_FindMaximumRectangle_mFFB8A070480E6118FFAE1F820E8A099E20798660 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___1_processed, int32_t ___2_startPosX, int32_t ___3_startPosY, int32_t ___4_endPosY, int32_t* ___5_endPosX, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddRec_m84A232E868A88FC23739EF281F3B59D9E4BAEF2D (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_posX, int32_t ___1_posY, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgImage_set_Width_m6909E3D152D8691CF5A215BEC19C2CAAEC31780D_inline (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgImage_set_Height_m761DC550CFF8D0DA7E470875B75D8DF6A9288594_inline (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetColorRgb_mD887A13C0A8F3C166523E52595FFB8DDCCB3CD2A (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9 (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_alpha, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetBackgroundStyle_mD33B7C3A70683D8785F524E3FBB5B5D7BCEDFAAC (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m5638E9608118C6416DB9B288DDEC2F3F7521B900 (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, RuntimeObject* ___4_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringRenderer_Render_m8AAB385C9C603140A4CE410B54077A8A099DADFF (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___3_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringRenderer_get_LineFeed_m92C9F44A1A67DCC0A513AD8CFF9FA84B45C2558F_inline (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StringRenderer_get_Background_m624D8F858E8A4FE3293CD9AB72D47BF895540D5F_inline (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StringRenderer_get_Foreground_m452D8C0FE1454128E8E7849120DA05D48A371220_inline (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1 (double ___0_value, int32_t ___1_digits, int32_t ___2_mode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
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
// Method Definition Index: 88840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectedBitsResult__ctor_m71E7DFA8C9EC81F2D420A7110F4946C797DA91A0 (CorrectedBitsResult_t9C6CD8D649E9AF9D5EAA4327D165036BCD0F73FA* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_correctBits, int32_t ___1_errorsCorrected, int32_t ___2_ecLevel, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_correctBits;
		__this->___correctBits = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___correctBits), (void*)L_0);
		int32_t L_1 = ___1_errorsCorrected;
		__this->___errorsCorrected = L_1;
		int32_t L_2 = ___2_ecLevel;
		__this->___ecLevel = L_2;
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
// Method Definition Index: 88841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__ctor_m14D44E4ADB5CFA695A665F85801569DF1EE5B627 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_image, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_image;
		__this->___image = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601* Detector_detect_m495E50E4235604C0C1D3AE27C1E4441F4AF38ACB (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601* L_0;
		L_0 = Detector_detect_mB5FEE5EA82CC5502C4183896609A2E29CC4B1074(__this, (bool)0, NULL);
		return L_0;
	}
}
// Method Definition Index: 88843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601* Detector_detect_mB5FEE5EA82CC5502C4183896609A2E29CC4B1074 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, bool ___0_isMirror, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_0 = NULL;
	ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* V_1 = NULL;
	int32_t V_2 = 0;
	BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* V_3 = NULL;
	ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* V_4 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_5 = NULL;
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_0;
		L_0 = Detector_getMatrixCenter_m17C8196A83A0915A6FE2092BFBF8767624047C0E(__this, NULL);
		V_0 = L_0;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601*)NULL;
	}

IL_000c:
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_2 = V_0;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_3;
		L_3 = Detector_getBullsEyeCorners_mAB838E776762BAEBB667D15AF49882BFB89A749E(__this, L_2, NULL);
		V_1 = L_3;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_4 = V_1;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601*)NULL;
	}

IL_0019:
	{
		bool L_5 = ___0_isMirror;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_9 = V_1;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_12);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_13 = V_1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_14 = V_5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_14);
	}

IL_002c:
	{
		V_2 = 0;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_15 = V_1;
		bool L_16;
		L_16 = Detector_extractParameters_m44A65062449F7B8330CB370A73F983DDC247DC56(__this, L_15, (&V_2), NULL);
		if (L_16)
		{
			goto IL_003b;
		}
	}
	{
		return (AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601*)NULL;
	}

IL_003b:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_17 = __this->___image;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_18 = V_1;
		int32_t L_19 = __this->___shift;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)(L_19%4));
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_22 = V_1;
		int32_t L_23 = __this->___shift;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_23, 1))%4));
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_26 = V_1;
		int32_t L_27 = __this->___shift;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_27, 2))%4));
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_30 = V_1;
		int32_t L_31 = __this->___shift;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_31, 3))%4));
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_34;
		L_34 = Detector_sampleGrid_mB2D6ECDB5046D28D27D5B0B8A16A3E75A10DEFA2(__this, L_17, L_21, L_25, L_29, L_33, NULL);
		V_3 = L_34;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_35 = V_3;
		if (L_35)
		{
			goto IL_007b;
		}
	}
	{
		return (AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601*)NULL;
	}

IL_007b:
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_36 = V_1;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_37;
		L_37 = Detector_getMatrixCornerPoints_m890E9BE8B0F82CEC857BDDB69BF66E3BED7318F0(__this, L_36, NULL);
		V_4 = L_37;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_38 = V_4;
		if (L_38)
		{
			goto IL_008a;
		}
	}
	{
		return (AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601*)NULL;
	}

IL_008a:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_39 = V_3;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_40 = V_4;
		bool L_41 = __this->___compact;
		int32_t L_42 = __this->___nbDataBlocks;
		int32_t L_43 = __this->___nbLayers;
		AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601* L_44 = (AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601*)il2cpp_codegen_object_new(AztecDetectorResult_tACEBD44841F72C1DDDE056CF64AEF5EE017ED601_il2cpp_TypeInfo_var);
		AztecDetectorResult__ctor_mE51AC1B378BC8238E80CF56D093DD5A4EADBA19C(L_44, L_39, L_40, L_41, L_42, L_43, NULL);
		return L_44;
	}
}
// Method Definition Index: 88844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_extractParameters_m44A65062449F7B8330CB370A73F983DDC247DC56 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___0_bullsEyeCorners, int32_t* ___1_errorsCorrected, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int64_t V_2 = 0;
	CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t* L_0 = ___1_errorsCorrected;
		*((int32_t*)L_0) = (int32_t)0;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_1 = ___0_bullsEyeCorners;
		NullCheck(L_1);
		int32_t L_2 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = Detector_isValid_m151E6E8D7359BF49D0328F108A121544CD588005(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_5 = ___0_bullsEyeCorners;
		NullCheck(L_5);
		int32_t L_6 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Detector_isValid_m151E6E8D7359BF49D0328F108A121544CD588005(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_9 = ___0_bullsEyeCorners;
		NullCheck(L_9);
		int32_t L_10 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12;
		L_12 = Detector_isValid_m151E6E8D7359BF49D0328F108A121544CD588005(__this, L_11, NULL);
		if (!L_12)
		{
			goto IL_002f;
		}
	}
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_13 = ___0_bullsEyeCorners;
		NullCheck(L_13);
		int32_t L_14 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = Detector_isValid_m151E6E8D7359BF49D0328F108A121544CD588005(__this, L_15, NULL);
		if (L_16)
		{
			goto IL_0031;
		}
	}

IL_002f:
	{
		return (bool)0;
	}

IL_0031:
	{
		int32_t L_17 = __this->___nbCenterLayers;
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_20 = ___0_bullsEyeCorners;
		NullCheck(L_20);
		int32_t L_21 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_23 = ___0_bullsEyeCorners;
		NullCheck(L_23);
		int32_t L_24 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_0;
		int32_t L_27;
		L_27 = Detector_sampleLine_mA59FED252ACD919E51D17A127515FDA6D1AA7683(__this, L_22, L_25, L_26, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_19;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_29 = ___0_bullsEyeCorners;
		NullCheck(L_29);
		int32_t L_30 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_32 = ___0_bullsEyeCorners;
		NullCheck(L_32);
		int32_t L_33 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = Detector_sampleLine_mA59FED252ACD919E51D17A127515FDA6D1AA7683(__this, L_31, L_34, L_35, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_36);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_28;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_38 = ___0_bullsEyeCorners;
		NullCheck(L_38);
		int32_t L_39 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_41 = ___0_bullsEyeCorners;
		NullCheck(L_41);
		int32_t L_42 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Detector_sampleLine_mA59FED252ACD919E51D17A127515FDA6D1AA7683(__this, L_40, L_43, L_44, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_45);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_37;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_47 = ___0_bullsEyeCorners;
		NullCheck(L_47);
		int32_t L_48 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_50 = ___0_bullsEyeCorners;
		NullCheck(L_50);
		int32_t L_51 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_0;
		int32_t L_54;
		L_54 = Detector_sampleLine_mA59FED252ACD919E51D17A127515FDA6D1AA7683(__this, L_49, L_52, L_53, NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_54);
		V_1 = L_46;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		int32_t L_57;
		L_57 = Detector_getRotation_mD4AF57ED65E85B9897C934CA00FE4A6A15CE1572(L_55, L_56, NULL);
		__this->___shift = L_57;
		int32_t L_58 = __this->___shift;
		if ((((int32_t)L_58) >= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		return (bool)0;
	}

IL_0099:
	{
		V_2 = ((int64_t)0);
		V_5 = 0;
		goto IL_00ea;
	}

IL_00a1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		int32_t L_60 = __this->___shift;
		int32_t L_61 = V_5;
		NullCheck(L_59);
		int32_t L_62 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_60, L_61))%4));
		int32_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_6 = L_63;
		bool L_64 = __this->___compact;
		if (!L_64)
		{
			goto IL_00c9;
		}
	}
	{
		int64_t L_65 = V_2;
		V_2 = ((int64_t)(L_65<<7));
		int64_t L_66 = V_2;
		int32_t L_67 = V_6;
		V_2 = ((int64_t)il2cpp_codegen_add(L_66, ((int64_t)((int32_t)(((int32_t)(L_67>>1))&((int32_t)127))))));
		goto IL_00e4;
	}

IL_00c9:
	{
		int64_t L_68 = V_2;
		V_2 = ((int64_t)(L_68<<((int32_t)10)));
		int64_t L_69 = V_2;
		int32_t L_70 = V_6;
		int32_t L_71 = V_6;
		V_2 = ((int64_t)il2cpp_codegen_add(L_69, ((int64_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(L_70>>2))&((int32_t)992))), ((int32_t)(((int32_t)(L_71>>1))&((int32_t)31))))))));
	}

IL_00e4:
	{
		int32_t L_72 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_00ea:
	{
		int32_t L_73 = V_5;
		if ((((int32_t)L_73) < ((int32_t)4)))
		{
			goto IL_00a1;
		}
	}
	{
		int64_t L_74 = V_2;
		bool L_75 = __this->___compact;
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* L_76;
		L_76 = Detector_getCorrectedParameterData_mC01E7666B0685F3C8B3862BF5E7A37DBF7EDA47E(L_74, L_75, NULL);
		V_3 = L_76;
		CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* L_77 = V_3;
		if (L_77)
		{
			goto IL_0101;
		}
	}
	{
		return (bool)0;
	}

IL_0101:
	{
		CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* L_78 = V_3;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = CorrectedParameter_get_Data_mB8BEB506F577CF8713A3999682D0E3FA0882207B_inline(L_78, NULL);
		V_4 = L_79;
		bool L_80 = __this->___compact;
		if (!L_80)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_81 = V_4;
		__this->___nbLayers = ((int32_t)il2cpp_codegen_add(((int32_t)(L_81>>6)), 1));
		int32_t L_82 = V_4;
		__this->___nbDataBlocks = ((int32_t)il2cpp_codegen_add(((int32_t)(L_82&((int32_t)63))), 1));
		goto IL_0149;
	}

IL_012c:
	{
		int32_t L_83 = V_4;
		__this->___nbLayers = ((int32_t)il2cpp_codegen_add(((int32_t)(L_83>>((int32_t)11))), 1));
		int32_t L_84 = V_4;
		__this->___nbDataBlocks = ((int32_t)il2cpp_codegen_add(((int32_t)(L_84&((int32_t)2047))), 1));
	}

IL_0149:
	{
		int32_t* L_85 = ___1_errorsCorrected;
		CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* L_86 = V_3;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = CorrectedParameter_get_ErrorsCorrected_m2EBE9649A729E32CAA2A24192B11FD7CDCE61325_inline(L_86, NULL);
		*((int32_t*)L_85) = (int32_t)L_87;
		return (bool)1;
	}
}
// Method Definition Index: 88845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_getRotation_mD4AF57ED65E85B9897C934CA00FE4A6A15CE1572 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_sides, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_sides;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0027;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		int32_t L_5 = V_3;
		int32_t L_6 = ___1_length;
		int32_t L_7 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(L_5>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, 2))&((int32_t)31)))))<<1)), ((int32_t)(L_7&1))));
		int32_t L_8 = V_0;
		int32_t L_9 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_8<<3)), L_9));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(L_13&1))<<((int32_t)11))), ((int32_t)(L_14>>1))));
		V_5 = 0;
		goto IL_0058;
	}

IL_003d:
	{
		int32_t L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_StaticFields*)il2cpp_codegen_static_fields_for(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var))->___EXPECTED_CORNER_BITS;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20;
		L_20 = SupportClass_bitCount_m8CA894EF96EDECFB9DB08E4176D71145A1C0F431(((int32_t)(L_15^L_19)), NULL);
		if ((((int32_t)L_20) > ((int32_t)2)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_21 = V_5;
		return L_21;
	}

IL_0052:
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0058:
	{
		int32_t L_23 = V_5;
		if ((((int32_t)L_23) < ((int32_t)4)))
		{
			goto IL_003d;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 88846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* Detector_getCorrectedParameterData_mC01E7666B0685F3C8B3862BF5E7A37DBF7EDA47E (int64_t ___0_parameterData, bool ___1_compact, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		bool L_0 = ___1_compact;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		V_0 = 7;
		V_1 = 2;
		goto IL_000e;
	}

IL_0009:
	{
		V_0 = ((int32_t)10);
		V_1 = 4;
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_3 = L_4;
		int32_t L_5 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0034;
	}

IL_0020:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_3;
		int32_t L_7 = V_6;
		int64_t L_8 = ___0_parameterData;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)((int32_t)(((int32_t)L_8)&((int32_t)15))));
		int64_t L_9 = ___0_parameterData;
		___0_parameterData = ((int64_t)(L_9>>4));
		int32_t L_10 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0034:
	{
		int32_t L_11 = V_6;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		V_4 = 0;
		il2cpp_codegen_runtime_class_init_inline(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* L_12 = ((GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var))->___AZTEC_PARAM;
		ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1* L_13 = (ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1*)il2cpp_codegen_object_new(ReedSolomonDecoder_t94905D603237E70041F5C519CB2B0BC7B3E61CD1_il2cpp_TypeInfo_var);
		ReedSolomonDecoder__ctor_m0D65A6B18B30E2FD9DDADDDB5A026083877691F3(L_13, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_3;
		int32_t L_15 = V_2;
		NullCheck(L_13);
		bool L_16;
		L_16 = ReedSolomonDecoder_decodeWithECCount_m4B2E0E5F1A67325642F8D5513083ADBC97C30120(L_13, L_14, L_15, (&V_4), NULL);
		if (L_16)
		{
			goto IL_0053;
		}
	}
	{
		return (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1*)NULL;
	}

IL_0053:
	{
		V_5 = 0;
		V_7 = 0;
		goto IL_006c;
	}

IL_005b:
	{
		int32_t L_17 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_3;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_17<<4)), L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006c:
	{
		int32_t L_23 = V_7;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_25 = V_5;
		int32_t L_26 = V_4;
		CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* L_27 = (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1*)il2cpp_codegen_object_new(CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1_il2cpp_TypeInfo_var);
		CorrectedParameter__ctor_m86DCD9739D5C38F9349EB8E98A893A8AE2506D0B(L_27, L_25, L_26, NULL);
		return L_27;
	}
}
// Method Definition Index: 88847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* Detector_getBullsEyeCorners_mAB838E776762BAEBB667D15AF49882BFB89A749E (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_pCenter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_0 = NULL;
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_1 = NULL;
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_2 = NULL;
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_3 = NULL;
	bool V_4 = false;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_5 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_6 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_7 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_8 = NULL;
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_9 = NULL;
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_10 = NULL;
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_11 = NULL;
	Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* V_12 = NULL;
	float V_13 = 0.0f;
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_0 = ___0_pCenter;
		V_0 = L_0;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_1 = ___0_pCenter;
		V_1 = L_1;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_2 = ___0_pCenter;
		V_2 = L_2;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_3 = ___0_pCenter;
		V_3 = L_3;
		V_4 = (bool)1;
		__this->___nbCenterLayers = 1;
		goto IL_00c6;
	}

IL_0017:
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_4 = V_0;
		bool L_5 = V_4;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_6;
		L_6 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_4, L_5, 1, (-1), NULL);
		V_9 = L_6;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_7 = V_1;
		bool L_8 = V_4;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_9;
		L_9 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_7, L_8, 1, 1, NULL);
		V_10 = L_9;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_10 = V_2;
		bool L_11 = V_4;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_12;
		L_12 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_10, L_11, (-1), 1, NULL);
		V_11 = L_12;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_13 = V_3;
		bool L_14 = V_4;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_15;
		L_15 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_13, L_14, (-1), (-1), NULL);
		V_12 = L_15;
		int32_t L_16 = __this->___nbCenterLayers;
		if ((((int32_t)L_16) <= ((int32_t)2)))
		{
			goto IL_00a5;
		}
	}
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_17 = V_12;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_18 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = Detector_distance_m2532FEC75B0F71814EF0C3A1782B60CC972965D8(L_17, L_18, NULL);
		int32_t L_20 = __this->___nbCenterLayers;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_21 = V_3;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_22 = V_0;
		float L_23;
		L_23 = Detector_distance_m2532FEC75B0F71814EF0C3A1782B60CC972965D8(L_21, L_22, NULL);
		int32_t L_24 = __this->___nbCenterLayers;
		V_13 = ((float)(((float)il2cpp_codegen_multiply(L_19, ((float)L_20)))/((float)il2cpp_codegen_multiply(L_23, ((float)((int32_t)il2cpp_codegen_add(L_24, 2)))))));
		float L_25 = V_13;
		if ((((double)((double)L_25)) < ((double)(0.75))))
		{
			goto IL_00d3;
		}
	}
	{
		float L_26 = V_13;
		if ((((double)((double)L_26)) > ((double)(1.25))))
		{
			goto IL_00d3;
		}
	}
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_27 = V_9;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_28 = V_10;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_29 = V_11;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_30 = V_12;
		bool L_31;
		L_31 = Detector_isWhiteOrBlackRectangle_m10F48806D7609B0E7C62E71507BF65536D899B45(__this, L_27, L_28, L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_00d3;
		}
	}

IL_00a5:
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_32 = V_9;
		V_0 = L_32;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_33 = V_10;
		V_1 = L_33;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_34 = V_11;
		V_2 = L_34;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_35 = V_12;
		V_3 = L_35;
		bool L_36 = V_4;
		V_4 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		int32_t L_37 = __this->___nbCenterLayers;
		__this->___nbCenterLayers = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00c6:
	{
		int32_t L_38 = __this->___nbCenterLayers;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)9))))
		{
			goto IL_0017;
		}
	}

IL_00d3:
	{
		int32_t L_39 = __this->___nbCenterLayers;
		if ((((int32_t)L_39) == ((int32_t)5)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_40 = __this->___nbCenterLayers;
		if ((((int32_t)L_40) == ((int32_t)7)))
		{
			goto IL_00e7;
		}
	}
	{
		return (ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3*)NULL;
	}

IL_00e7:
	{
		int32_t L_41 = __this->___nbCenterLayers;
		__this->___compact = (bool)((((int32_t)L_41) == ((int32_t)5))? 1 : 0);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_42, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_44, NULL);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_46 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_46, ((float)il2cpp_codegen_add(((float)L_43), (0.5f))), ((float)il2cpp_codegen_subtract(((float)L_45), (0.5f))), NULL);
		V_5 = L_46;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_47, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_49, NULL);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_51 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_51, ((float)il2cpp_codegen_add(((float)L_48), (0.5f))), ((float)il2cpp_codegen_add(((float)L_50), (0.5f))), NULL);
		V_6 = L_51;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_52, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_54, NULL);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_56 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_56, ((float)il2cpp_codegen_subtract(((float)L_53), (0.5f))), ((float)il2cpp_codegen_add(((float)L_55), (0.5f))), NULL);
		V_7 = L_56;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_57 = V_3;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_57, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_59 = V_3;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_59, NULL);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_61 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_61, ((float)il2cpp_codegen_subtract(((float)L_58), (0.5f))), ((float)il2cpp_codegen_subtract(((float)L_60), (0.5f))), NULL);
		V_8 = L_61;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_62 = (ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3*)(ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3*)SZArrayNew(ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3_il2cpp_TypeInfo_var, (uint32_t)4);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_63 = L_62;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_64 = V_5;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_64);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_65 = L_63;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_66 = V_6;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_66);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_67 = L_65;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_68 = V_7;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_68);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_69 = L_67;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_70 = V_8;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_70);
		int32_t L_71 = __this->___nbCenterLayers;
		int32_t L_72 = __this->___nbCenterLayers;
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_73;
		L_73 = Detector_expandSquare_m3AB8DB5335624FF3A6305C75E82682F3400FD995(L_69, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_71)), 3)), ((int32_t)il2cpp_codegen_multiply(2, L_72)), NULL);
		return L_73;
	}
}
// Method Definition Index: 88848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* Detector_getMatrixCenter_m17C8196A83A0915A6FE2092BFBF8767624047C0E (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_0 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_1 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_2 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* V_6 = NULL;
	ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* V_7 = NULL;
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = __this->___image;
		WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* L_1;
		L_1 = WhiteRectangleDetector_Create_mD21D6F3EED813A256B0641287468A5DAC5390368(L_0, NULL);
		V_6 = L_1;
		WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* L_2 = V_6;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)NULL;
	}

IL_0013:
	{
		WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* L_3 = V_6;
		NullCheck(L_3);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_4;
		L_4 = WhiteRectangleDetector_detect_m16E0EC920C8A177FE12DFB4AC2C09BE2C8CB57A1(L_3, NULL);
		V_7 = L_4;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_5 = V_7;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_6 = V_7;
		NullCheck(L_6);
		int32_t L_7 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_9 = V_7;
		NullCheck(L_9);
		int32_t L_10 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_12 = V_7;
		NullCheck(L_12);
		int32_t L_13 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_15 = V_7;
		NullCheck(L_15);
		int32_t L_16 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		goto IL_00c7;
	}

IL_0039:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_18 = __this->___image;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_18, NULL);
		V_4 = ((int32_t)(L_19/2));
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_20 = __this->___image;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_20, NULL);
		V_5 = ((int32_t)(L_21/2));
		int32_t L_22 = V_4;
		int32_t L_23 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_24 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_24, ((int32_t)il2cpp_codegen_add(L_22, 7)), ((int32_t)il2cpp_codegen_subtract(L_23, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_25;
		L_25 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_24, (bool)0, 1, (-1), NULL);
		NullCheck(L_25);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_26;
		L_26 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_25, NULL);
		V_0 = L_26;
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_29 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_29, ((int32_t)il2cpp_codegen_add(L_27, 7)), ((int32_t)il2cpp_codegen_add(L_28, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_30;
		L_30 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_29, (bool)0, 1, 1, NULL);
		NullCheck(L_30);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_31;
		L_31 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_30, NULL);
		V_1 = L_31;
		int32_t L_32 = V_4;
		int32_t L_33 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_34 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_34, ((int32_t)il2cpp_codegen_subtract(L_32, 7)), ((int32_t)il2cpp_codegen_add(L_33, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_35;
		L_35 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_34, (bool)0, (-1), 1, NULL);
		NullCheck(L_35);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_36;
		L_36 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_35, NULL);
		V_2 = L_36;
		int32_t L_37 = V_4;
		int32_t L_38 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_39 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_39, ((int32_t)il2cpp_codegen_subtract(L_37, 7)), ((int32_t)il2cpp_codegen_subtract(L_38, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_40;
		L_40 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_39, (bool)0, (-1), (-1), NULL);
		NullCheck(L_40);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_41;
		L_41 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_40, NULL);
		V_3 = L_41;
	}

IL_00c7:
	{
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_42 = V_0;
		NullCheck(L_42);
		float L_43;
		L_43 = VirtualFuncInvoker0< float >::Invoke(4, L_42);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_44 = V_3;
		NullCheck(L_44);
		float L_45;
		L_45 = VirtualFuncInvoker0< float >::Invoke(4, L_44);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_46 = V_1;
		NullCheck(L_46);
		float L_47;
		L_47 = VirtualFuncInvoker0< float >::Invoke(4, L_46);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_48 = V_2;
		NullCheck(L_48);
		float L_49;
		L_49 = VirtualFuncInvoker0< float >::Invoke(4, L_48);
		int32_t L_50;
		L_50 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_43, L_45)), L_47)), L_49))/(4.0f))), NULL);
		V_4 = L_50;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_51 = V_0;
		NullCheck(L_51);
		float L_52;
		L_52 = VirtualFuncInvoker0< float >::Invoke(5, L_51);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_53 = V_3;
		NullCheck(L_53);
		float L_54;
		L_54 = VirtualFuncInvoker0< float >::Invoke(5, L_53);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_55 = V_1;
		NullCheck(L_55);
		float L_56;
		L_56 = VirtualFuncInvoker0< float >::Invoke(5, L_55);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_57 = V_2;
		NullCheck(L_57);
		float L_58;
		L_58 = VirtualFuncInvoker0< float >::Invoke(5, L_57);
		int32_t L_59;
		L_59 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_52, L_54)), L_56)), L_58))/(4.0f))), NULL);
		V_5 = L_59;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_60 = __this->___image;
		int32_t L_61 = V_4;
		int32_t L_62 = V_5;
		WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* L_63;
		L_63 = WhiteRectangleDetector_Create_m81AE3155A9008105C53F12249C7D33CBB3205455(L_60, ((int32_t)15), L_61, L_62, NULL);
		V_6 = L_63;
		WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* L_64 = V_6;
		if (L_64)
		{
			goto IL_0130;
		}
	}
	{
		return (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)NULL;
	}

IL_0130:
	{
		WhiteRectangleDetector_t85507E21CB6080D79BDDA445804CC69ACB8B78C5* L_65 = V_6;
		NullCheck(L_65);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_66;
		L_66 = WhiteRectangleDetector_detect_m16E0EC920C8A177FE12DFB4AC2C09BE2C8CB57A1(L_65, NULL);
		V_7 = L_66;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_67 = V_7;
		if (!L_67)
		{
			goto IL_0153;
		}
	}
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_68 = V_7;
		NullCheck(L_68);
		int32_t L_69 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_0 = L_70;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_71 = V_7;
		NullCheck(L_71);
		int32_t L_72 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_1 = L_73;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_74 = V_7;
		NullCheck(L_74);
		int32_t L_75 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_2 = L_76;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_77 = V_7;
		NullCheck(L_77);
		int32_t L_78 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_3 = L_79;
		goto IL_01c3;
	}

IL_0153:
	{
		int32_t L_80 = V_4;
		int32_t L_81 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_82 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_82, ((int32_t)il2cpp_codegen_add(L_80, 7)), ((int32_t)il2cpp_codegen_subtract(L_81, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_83;
		L_83 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_82, (bool)0, 1, (-1), NULL);
		NullCheck(L_83);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_84;
		L_84 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_83, NULL);
		V_0 = L_84;
		int32_t L_85 = V_4;
		int32_t L_86 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_87 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_87, ((int32_t)il2cpp_codegen_add(L_85, 7)), ((int32_t)il2cpp_codegen_add(L_86, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_88;
		L_88 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_87, (bool)0, 1, 1, NULL);
		NullCheck(L_88);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_89;
		L_89 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_88, NULL);
		V_1 = L_89;
		int32_t L_90 = V_4;
		int32_t L_91 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_92 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_92, ((int32_t)il2cpp_codegen_subtract(L_90, 7)), ((int32_t)il2cpp_codegen_add(L_91, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_93;
		L_93 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_92, (bool)0, (-1), 1, NULL);
		NullCheck(L_93);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_94;
		L_94 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_93, NULL);
		V_2 = L_94;
		int32_t L_95 = V_4;
		int32_t L_96 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_97 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_97, ((int32_t)il2cpp_codegen_subtract(L_95, 7)), ((int32_t)il2cpp_codegen_subtract(L_96, 7)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_98;
		L_98 = Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B(__this, L_97, (bool)0, (-1), (-1), NULL);
		NullCheck(L_98);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_99;
		L_99 = Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E(L_98, NULL);
		V_3 = L_99;
	}

IL_01c3:
	{
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_100 = V_0;
		NullCheck(L_100);
		float L_101;
		L_101 = VirtualFuncInvoker0< float >::Invoke(4, L_100);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_102 = V_3;
		NullCheck(L_102);
		float L_103;
		L_103 = VirtualFuncInvoker0< float >::Invoke(4, L_102);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_104 = V_1;
		NullCheck(L_104);
		float L_105;
		L_105 = VirtualFuncInvoker0< float >::Invoke(4, L_104);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_106 = V_2;
		NullCheck(L_106);
		float L_107;
		L_107 = VirtualFuncInvoker0< float >::Invoke(4, L_106);
		int32_t L_108;
		L_108 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_101, L_103)), L_105)), L_107))/(4.0f))), NULL);
		V_4 = L_108;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_109 = V_0;
		NullCheck(L_109);
		float L_110;
		L_110 = VirtualFuncInvoker0< float >::Invoke(5, L_109);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_111 = V_3;
		NullCheck(L_111);
		float L_112;
		L_112 = VirtualFuncInvoker0< float >::Invoke(5, L_111);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_113 = V_1;
		NullCheck(L_113);
		float L_114;
		L_114 = VirtualFuncInvoker0< float >::Invoke(5, L_113);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_115 = V_2;
		NullCheck(L_115);
		float L_116;
		L_116 = VirtualFuncInvoker0< float >::Invoke(5, L_115);
		int32_t L_117;
		L_117 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_110, L_112)), L_114)), L_116))/(4.0f))), NULL);
		V_5 = L_117;
		int32_t L_118 = V_4;
		int32_t L_119 = V_5;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_120 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_120, L_118, L_119, NULL);
		return L_120;
	}
}
// Method Definition Index: 88849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* Detector_getMatrixCornerPoints_m890E9BE8B0F82CEC857BDDB69BF66E3BED7318F0 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___0_bullsEyeCorners, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_0 = ___0_bullsEyeCorners;
		int32_t L_1 = __this->___nbCenterLayers;
		int32_t L_2;
		L_2 = Detector_getDimension_m4A5B3777B345563F6355EE4712970F6F1FA7DD4B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_3;
		L_3 = Detector_expandSquare_m3AB8DB5335624FF3A6305C75E82682F3400FD995(L_0, ((int32_t)il2cpp_codegen_multiply(2, L_1)), L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 88850
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* Detector_sampleGrid_mB2D6ECDB5046D28D27D5B0B8A16A3E75A10DEFA2 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_image, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___1_topLeft, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___2_topRight, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___3_bottomRight, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___4_bottomLeft, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_il2cpp_TypeInfo_var);
		GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F* L_0;
		L_0 = GridSampler_get_Instance_mB4B81EE1991E655C5BF7F43B3CE8193FD46D3E23_inline(NULL);
		int32_t L_1;
		L_1 = Detector_getDimension_m4A5B3777B345563F6355EE4712970F6F1FA7DD4B(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___nbCenterLayers;
		V_1 = ((float)il2cpp_codegen_subtract(((float)(((float)L_2)/(2.0f))), ((float)L_3)));
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___nbCenterLayers;
		V_2 = ((float)il2cpp_codegen_add(((float)(((float)L_4)/(2.0f))), ((float)L_5)));
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_6 = ___0_image;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		float L_9 = V_1;
		float L_10 = V_1;
		float L_11 = V_2;
		float L_12 = V_1;
		float L_13 = V_2;
		float L_14 = V_2;
		float L_15 = V_1;
		float L_16 = V_2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_17 = ___1_topLeft;
		NullCheck(L_17);
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(4, L_17);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_19 = ___1_topLeft;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(5, L_19);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_21 = ___2_topRight;
		NullCheck(L_21);
		float L_22;
		L_22 = VirtualFuncInvoker0< float >::Invoke(4, L_21);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_23 = ___2_topRight;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(5, L_23);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_25 = ___3_bottomRight;
		NullCheck(L_25);
		float L_26;
		L_26 = VirtualFuncInvoker0< float >::Invoke(4, L_25);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_27 = ___3_bottomRight;
		NullCheck(L_27);
		float L_28;
		L_28 = VirtualFuncInvoker0< float >::Invoke(5, L_27);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_29 = ___4_bottomLeft;
		NullCheck(L_29);
		float L_30;
		L_30 = VirtualFuncInvoker0< float >::Invoke(4, L_29);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_31 = ___4_bottomLeft;
		NullCheck(L_31);
		float L_32;
		L_32 = VirtualFuncInvoker0< float >::Invoke(5, L_31);
		NullCheck(L_0);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_33;
		L_33 = VirtualFuncInvoker19< BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147*, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147*, int32_t, int32_t, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float >::Invoke(4, L_0, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_18, L_20, L_22, L_24, L_26, L_28, L_30, L_32);
		return L_33;
	}
}
// Method Definition Index: 88851
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_sampleLine_mA59FED252ACD919E51D17A127515FDA6D1AA7683 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___0_p1, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___1_p2, int32_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_0 = ___0_p1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_1 = ___1_p2;
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Detector_distance_m31E7F3A1C41BF2D11048BA71DA27B1A6D9BBC734(L_0, L_1, NULL);
		V_1 = L_2;
		float L_3 = V_1;
		int32_t L_4 = ___2_size;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_5 = ___0_p1;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(4, L_5);
		V_2 = L_6;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_7 = ___0_p1;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(5, L_7);
		V_3 = L_8;
		float L_9 = ((float)(L_3/((float)L_4)));
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_10 = ___1_p2;
		NullCheck(L_10);
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(4, L_10);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_12 = ___0_p1;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(4, L_12);
		float L_14 = V_1;
		V_4 = ((float)(((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract(L_11, L_13))))/L_14));
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_15 = ___1_p2;
		NullCheck(L_15);
		float L_16;
		L_16 = VirtualFuncInvoker0< float >::Invoke(5, L_15);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_17 = ___0_p1;
		NullCheck(L_17);
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(5, L_17);
		float L_19 = V_1;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract(L_16, L_18))))/L_19));
		V_6 = 0;
		goto IL_0081;
	}

IL_0046:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_20 = __this->___image;
		float L_21 = V_2;
		int32_t L_22 = V_6;
		float L_23 = V_4;
		int32_t L_24;
		L_24 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(((float)L_22), L_23)))), NULL);
		float L_25 = V_3;
		int32_t L_26 = V_6;
		float L_27 = V_5;
		int32_t L_28;
		L_28 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(((float)L_26), L_27)))), NULL);
		NullCheck(L_20);
		bool L_29;
		L_29 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_20, L_24, L_28, NULL);
		if (!L_29)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_size;
		int32_t L_32 = V_6;
		V_0 = ((int32_t)(L_30|((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_31, L_32)), 1))&((int32_t)31)))))));
	}

IL_007b:
	{
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0081:
	{
		int32_t L_34 = V_6;
		int32_t L_35 = ___2_size;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_36 = V_0;
		return L_36;
	}
}
// Method Definition Index: 88852
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_isWhiteOrBlackRectangle_m10F48806D7609B0E7C62E71507BF65536D899B45 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_p1, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___1_p2, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___2_p3, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___3_p4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_0 = ___0_p1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_1, 3)), NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_3 = __this->___image;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_3, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_5 = ___0_p1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_5, NULL);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_4, 1)), ((int32_t)il2cpp_codegen_add(L_6, 3)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_8 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_8, L_2, L_7, NULL);
		___0_p1 = L_8;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_9 = ___1_p2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_9, NULL);
		int32_t L_11;
		L_11 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_10, 3)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_12 = ___1_p2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_12, NULL);
		int32_t L_14;
		L_14 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_13, 3)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_15 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_15, L_11, L_14, NULL);
		___1_p2 = L_15;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_16 = __this->___image;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_16, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_18 = ___2_p3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_18, NULL);
		int32_t L_20;
		L_20 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_17, 1)), ((int32_t)il2cpp_codegen_add(L_19, 3)), NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_21 = __this->___image;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_21, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_23 = ___2_p3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_23, NULL);
		int32_t L_25;
		L_25 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_22, 1)), ((int32_t)il2cpp_codegen_subtract(L_24, 3)), NULL);
		int32_t L_26;
		L_26 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, L_25, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_27 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_27, L_20, L_26, NULL);
		___2_p3 = L_27;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_28 = __this->___image;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_28, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_30 = ___3_p4;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_30, NULL);
		int32_t L_32;
		L_32 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_29, 1)), ((int32_t)il2cpp_codegen_add(L_31, 3)), NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_33 = __this->___image;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_33, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_35 = ___3_p4;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_35, NULL);
		int32_t L_37;
		L_37 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_34, 1)), ((int32_t)il2cpp_codegen_add(L_36, 3)), NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_38 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_38, L_32, L_37, NULL);
		___3_p4 = L_38;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_39 = ___3_p4;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_40 = ___0_p1;
		int32_t L_41;
		L_41 = Detector_getColor_mA1B71338E2000BB3990D4E4337D0A601191757B8(__this, L_39, L_40, NULL);
		V_0 = L_41;
		int32_t L_42 = V_0;
		if (L_42)
		{
			goto IL_00df;
		}
	}
	{
		return (bool)0;
	}

IL_00df:
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_43 = ___0_p1;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_44 = ___1_p2;
		int32_t L_45;
		L_45 = Detector_getColor_mA1B71338E2000BB3990D4E4337D0A601191757B8(__this, L_43, L_44, NULL);
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_00ec;
		}
	}
	{
		return (bool)0;
	}

IL_00ec:
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_47 = ___1_p2;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_48 = ___2_p3;
		int32_t L_49;
		L_49 = Detector_getColor_mA1B71338E2000BB3990D4E4337D0A601191757B8(__this, L_47, L_48, NULL);
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) == ((int32_t)L_50)))
		{
			goto IL_00f9;
		}
	}
	{
		return (bool)0;
	}

IL_00f9:
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_51 = ___2_p3;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_52 = ___3_p4;
		int32_t L_53;
		L_53 = Detector_getColor_mA1B71338E2000BB3990D4E4337D0A601191757B8(__this, L_51, L_52, NULL);
		int32_t L_54 = V_0;
		return (bool)((((int32_t)L_53) == ((int32_t)L_54))? 1 : 0);
	}
}
// Method Definition Index: 88853
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_getColor_mA1B71338E2000BB3990D4E4337D0A601191757B8 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_p1, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___1_p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_0 = ___0_p1;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_1 = ___1_p2;
		il2cpp_codegen_runtime_class_init_inline(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Detector_distance_m2532FEC75B0F71814EF0C3A1782B60CC972965D8(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_4 = ___1_p2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_4, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_6 = ___0_p1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_6, NULL);
		float L_8 = V_0;
		V_1 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_5, L_7)))/L_8));
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_9 = ___1_p2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_9, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_11 = ___0_p1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_11, NULL);
		float L_13 = V_0;
		V_2 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_10, L_12)))/L_13));
		V_3 = 0;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_14 = ___0_p1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_14, NULL);
		V_4 = ((float)L_15);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_16 = ___0_p1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_16, NULL);
		V_5 = ((float)L_17);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_18 = __this->___image;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_19 = ___0_p1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_19, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_21 = ___0_p1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_21, NULL);
		NullCheck(L_18);
		bool L_23;
		L_23 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_18, L_20, L_22, NULL);
		V_6 = L_23;
		float L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_25;
		L_25 = floor(((double)L_24));
		V_7 = il2cpp_codegen_cast_double_to_int<int32_t>(L_25);
		V_9 = 0;
		goto IL_00a3;
	}

IL_0070:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_26 = __this->___image;
		float L_27 = V_4;
		int32_t L_28;
		L_28 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(L_27, NULL);
		float L_29 = V_5;
		int32_t L_30;
		L_30 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(L_29, NULL);
		NullCheck(L_26);
		bool L_31;
		L_31 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_26, L_28, L_30, NULL);
		bool L_32 = V_6;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0091:
	{
		float L_34 = V_4;
		float L_35 = V_1;
		V_4 = ((float)il2cpp_codegen_add(L_34, L_35));
		float L_36 = V_5;
		float L_37 = V_2;
		V_5 = ((float)il2cpp_codegen_add(L_36, L_37));
		int32_t L_38 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00a3:
	{
		int32_t L_39 = V_9;
		int32_t L_40 = V_7;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_41 = V_3;
		float L_42 = V_0;
		V_8 = ((float)(((float)L_41)/L_42));
		float L_43 = V_8;
		if ((!(((float)L_43) > ((float)(0.100000001f)))))
		{
			goto IL_00c3;
		}
	}
	{
		float L_44 = V_8;
		if ((!(((float)L_44) < ((float)(0.899999976f)))))
		{
			goto IL_00c3;
		}
	}
	{
		return 0;
	}

IL_00c3:
	{
		float L_45 = V_8;
		bool L_46 = V_6;
		if ((((int32_t)((((int32_t)((!(((float)L_45) <= ((float)(0.100000001f))))? 1 : 0)) == ((int32_t)0))? 1 : 0)) == ((int32_t)L_46)))
		{
			goto IL_00d5;
		}
	}
	{
		return (-1);
	}

IL_00d5:
	{
		return 1;
	}
}
// Method Definition Index: 88854
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* Detector_getFirstDifferent_m68021CC88D573CA077C4F1BCC20CC83A7887206B (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_init, bool ___1_color, int32_t ___2_dx, int32_t ___3_dy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_0 = ___0_init;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_0, NULL);
		int32_t L_2 = ___2_dx;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_3 = ___0_init;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_3, NULL);
		int32_t L_5 = ___3_dy;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		goto IL_001e;
	}

IL_0015:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_dx;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int32_t L_8 = V_1;
		int32_t L_9 = ___3_dy;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_001e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		bool L_12;
		L_12 = Detector_isValid_m9F11EFFB1A49A622AA21E9203EDE968CA5AD6892(__this, L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_13 = __this->___image;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		bool L_16;
		L_16 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_13, L_14, L_15, NULL);
		bool L_17 = ___1_color;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_0015;
		}
	}

IL_0038:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = ___2_dx;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		int32_t L_20 = V_1;
		int32_t L_21 = ___3_dy;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		goto IL_0047;
	}

IL_0043:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = ___2_dx;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
	}

IL_0047:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		bool L_26;
		L_26 = Detector_isValid_m9F11EFFB1A49A622AA21E9203EDE968CA5AD6892(__this, L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_0061;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_27 = __this->___image;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_27);
		bool L_30;
		L_30 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_27, L_28, L_29, NULL);
		bool L_31 = ___1_color;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_0043;
		}
	}

IL_0061:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = ___2_dx;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_32, L_33));
		goto IL_006c;
	}

IL_0067:
	{
		int32_t L_34 = V_1;
		int32_t L_35 = ___3_dy;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_006c:
	{
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		bool L_38;
		L_38 = Detector_isValid_m9F11EFFB1A49A622AA21E9203EDE968CA5AD6892(__this, L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_0086;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_39 = __this->___image;
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		NullCheck(L_39);
		bool L_42;
		L_42 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_39, L_40, L_41, NULL);
		bool L_43 = ___1_color;
		if ((((int32_t)L_42) == ((int32_t)L_43)))
		{
			goto IL_0067;
		}
	}

IL_0086:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = ___3_dy;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_44, L_45));
		int32_t L_46 = V_0;
		int32_t L_47 = V_1;
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_48 = (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF*)il2cpp_codegen_object_new(Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF_il2cpp_TypeInfo_var);
		Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077(L_48, L_46, L_47, NULL);
		return L_48;
	}
}
// Method Definition Index: 88855
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* Detector_expandSquare_m3AB8DB5335624FF3A6305C75E82682F3400FD995 (ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* ___0_cornerPoints, int32_t ___1_oldSide, int32_t ___2_newSide, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_4 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_5 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_6 = NULL;
	ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* V_7 = NULL;
	{
		int32_t L_0 = ___2_newSide;
		int32_t L_1 = ___1_oldSide;
		V_0 = ((float)(((float)L_0)/((float)il2cpp_codegen_multiply((2.0f), ((float)L_1)))));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_2 = ___0_cornerPoints;
		NullCheck(L_2);
		int32_t L_3 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(4, L_4);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_6 = ___0_cornerPoints;
		NullCheck(L_6);
		int32_t L_7 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(4, L_8);
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_9));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_10 = ___0_cornerPoints;
		NullCheck(L_10);
		int32_t L_11 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(5, L_12);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_14 = ___0_cornerPoints;
		NullCheck(L_14);
		int32_t L_15 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(5, L_16);
		V_2 = ((float)il2cpp_codegen_subtract(L_13, L_17));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_18 = ___0_cornerPoints;
		NullCheck(L_18);
		int32_t L_19 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		float L_21;
		L_21 = VirtualFuncInvoker0< float >::Invoke(4, L_20);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_22 = ___0_cornerPoints;
		NullCheck(L_22);
		int32_t L_23 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		float L_25;
		L_25 = VirtualFuncInvoker0< float >::Invoke(4, L_24);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_26 = ___0_cornerPoints;
		NullCheck(L_26);
		int32_t L_27 = 0;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		float L_29;
		L_29 = VirtualFuncInvoker0< float >::Invoke(5, L_28);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_30 = ___0_cornerPoints;
		NullCheck(L_30);
		int32_t L_31 = 2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		float L_33;
		L_33 = VirtualFuncInvoker0< float >::Invoke(5, L_32);
		V_3 = ((float)(((float)il2cpp_codegen_add(L_29, L_33))/(2.0f)));
		float L_34 = ((float)(((float)il2cpp_codegen_add(L_21, L_25))/(2.0f)));
		float L_35 = V_0;
		float L_36 = V_1;
		float L_37 = V_3;
		float L_38 = V_0;
		float L_39 = V_2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_40 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_40, ((float)il2cpp_codegen_add(L_34, ((float)il2cpp_codegen_multiply(L_35, L_36)))), ((float)il2cpp_codegen_add(L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)))), NULL);
		V_4 = L_40;
		float L_41 = V_0;
		float L_42 = V_1;
		float L_43 = V_3;
		float L_44 = V_0;
		float L_45 = V_2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_46 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_46, ((float)il2cpp_codegen_subtract(L_34, ((float)il2cpp_codegen_multiply(L_41, L_42)))), ((float)il2cpp_codegen_subtract(L_43, ((float)il2cpp_codegen_multiply(L_44, L_45)))), NULL);
		V_5 = L_46;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_47 = ___0_cornerPoints;
		NullCheck(L_47);
		int32_t L_48 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		float L_50;
		L_50 = VirtualFuncInvoker0< float >::Invoke(4, L_49);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_51 = ___0_cornerPoints;
		NullCheck(L_51);
		int32_t L_52 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		float L_54;
		L_54 = VirtualFuncInvoker0< float >::Invoke(4, L_53);
		V_1 = ((float)il2cpp_codegen_subtract(L_50, L_54));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_55 = ___0_cornerPoints;
		NullCheck(L_55);
		int32_t L_56 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		float L_58;
		L_58 = VirtualFuncInvoker0< float >::Invoke(5, L_57);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_59 = ___0_cornerPoints;
		NullCheck(L_59);
		int32_t L_60 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		float L_62;
		L_62 = VirtualFuncInvoker0< float >::Invoke(5, L_61);
		V_2 = ((float)il2cpp_codegen_subtract(L_58, L_62));
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_63 = ___0_cornerPoints;
		NullCheck(L_63);
		int32_t L_64 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		float L_66;
		L_66 = VirtualFuncInvoker0< float >::Invoke(4, L_65);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_67 = ___0_cornerPoints;
		NullCheck(L_67);
		int32_t L_68 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		float L_70;
		L_70 = VirtualFuncInvoker0< float >::Invoke(4, L_69);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_71 = ___0_cornerPoints;
		NullCheck(L_71);
		int32_t L_72 = 1;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		float L_74;
		L_74 = VirtualFuncInvoker0< float >::Invoke(5, L_73);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_75 = ___0_cornerPoints;
		NullCheck(L_75);
		int32_t L_76 = 3;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		float L_78;
		L_78 = VirtualFuncInvoker0< float >::Invoke(5, L_77);
		V_3 = ((float)(((float)il2cpp_codegen_add(L_74, L_78))/(2.0f)));
		float L_79 = ((float)(((float)il2cpp_codegen_add(L_66, L_70))/(2.0f)));
		float L_80 = V_0;
		float L_81 = V_1;
		float L_82 = V_3;
		float L_83 = V_0;
		float L_84 = V_2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_85 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_85, ((float)il2cpp_codegen_add(L_79, ((float)il2cpp_codegen_multiply(L_80, L_81)))), ((float)il2cpp_codegen_add(L_82, ((float)il2cpp_codegen_multiply(L_83, L_84)))), NULL);
		V_6 = L_85;
		float L_86 = V_0;
		float L_87 = V_1;
		float L_88 = V_3;
		float L_89 = V_0;
		float L_90 = V_2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_91 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_91, ((float)il2cpp_codegen_subtract(L_79, ((float)il2cpp_codegen_multiply(L_86, L_87)))), ((float)il2cpp_codegen_subtract(L_88, ((float)il2cpp_codegen_multiply(L_89, L_90)))), NULL);
		V_7 = L_91;
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_92 = (ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3*)(ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3*)SZArrayNew(ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3_il2cpp_TypeInfo_var, (uint32_t)4);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_93 = L_92;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_94 = V_4;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_94);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_94);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_95 = L_93;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_96 = V_6;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_96);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_96);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_97 = L_95;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_98 = V_5;
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_98);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_98);
		ResultPointU5BU5D_t50CBC2E76AD5F45F440406C2982EF439181E0EE3* L_99 = L_97;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_100 = V_7;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_100);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(3), (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)L_100);
		return L_99;
	}
}
// Method Definition Index: 88856
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_isValid_m9F11EFFB1A49A622AA21E9203EDE968CA5AD6892 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___0_x;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_2 = __this->___image;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_2, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = ___1_y;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = ___1_y;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_6 = __this->___image;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_6, NULL);
		return (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
// Method Definition Index: 88857
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_isValid_m151E6E8D7359BF49D0328F108A121544CD588005 (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___0_point, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_0 = ___0_point;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(4, L_0);
		int32_t L_2;
		L_2 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(L_1, NULL);
		V_0 = L_2;
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_3 = ___0_point;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(5, L_3);
		int32_t L_5;
		L_5 = MathUtils_round_mCBAC741C788DD4BB1372982061AC902A0B802695(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		bool L_8;
		L_8 = Detector_isValid_m9F11EFFB1A49A622AA21E9203EDE968CA5AD6892(__this, L_6, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 88858
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Detector_distance_m2532FEC75B0F71814EF0C3A1782B60CC972965D8 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___0_a, Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_0, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_2 = ___0_a;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_2, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_4 = ___1_b;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(L_4, NULL);
		Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* L_6 = ___1_b;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(L_6, NULL);
		float L_8;
		L_8 = MathUtils_distance_m9432B6FE834B0C79FB5A470F4C8B9999E2DF9E86(L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 88859
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Detector_distance_m31E7F3A1C41BF2D11048BA71DA27B1A6D9BBC734 (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___0_a, ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_0 = ___0_a;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(4, L_0);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_2 = ___0_a;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(5, L_2);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_4 = ___1_b;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(4, L_4);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_6 = ___1_b;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(5, L_6);
		float L_8;
		L_8 = MathUtils_distance_m595BE93565B28885999CEAE3341DF908E71D0A6A(L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 88860
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_getDimension_m4A5B3777B345563F6355EE4712970F6F1FA7DD4B (Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___compact;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___nbLayers;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, L_1)), ((int32_t)11)));
	}

IL_0014:
	{
		int32_t L_2 = __this->___nbLayers;
		int32_t L_3 = __this->___nbLayers;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, L_2)), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_3)), 6))/((int32_t)15))))))), ((int32_t)15)));
	}
}
// Method Definition Index: 88861
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__cctor_mA96EB2EFF8554BAA349748755148D50C2C9DFEEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____34FE7523D761357A8A0DE3DA82E1C7DDF71B8514A2FAAE4E4987BA78EFFDC42B_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____34FE7523D761357A8A0DE3DA82E1C7DDF71B8514A2FAAE4E4987BA78EFFDC42B_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_StaticFields*)il2cpp_codegen_static_fields_for(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var))->___EXPECTED_CORNER_BITS = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_StaticFields*)il2cpp_codegen_static_fields_for(Detector_t17E56E85775B2D96B2C34723AA6C15B433DAF4C9_il2cpp_TypeInfo_var))->___EXPECTED_CORNER_BITS), (void*)L_1);
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
// Method Definition Index: 88862
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88863
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_X_mCAEE6EF5C3DB4D38FFAC5696166C2F654758D8B8 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CXU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88864
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88865
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_Y_m6C71E1FA744C2CBD238768117E13119786AA34B3 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CYU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88866
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* Point_toResultPoint_m7B56E6B46ECA0EFCA45AD7FFC8DF36BE7BAB175E (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(__this, NULL);
		int32_t L_1;
		L_1 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(__this, NULL);
		ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863* L_2 = (ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863*)il2cpp_codegen_object_new(ResultPoint_t46C208CF53EBD67835A14852AD028CBA7F8BA863_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mFE8A6E16459FF6840CF96D8F66DD4DE390CF7924(L_2, ((float)L_0), ((float)L_1), NULL);
		return L_2;
	}
}
// Method Definition Index: 88867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mDD296D20CBB5597B2D96AF5874C4DF9A007FB077 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_x;
		Point_set_X_mCAEE6EF5C3DB4D38FFAC5696166C2F654758D8B8_inline(__this, L_0, NULL);
		int32_t L_1 = ___1_y;
		Point_set_Y_m6C71E1FA744C2CBD238768117E13119786AA34B3_inline(__this, L_1, NULL);
		return;
	}
}
// Method Definition Index: 88868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_m87103F3E7432600E85AABAD515A89A09FA6B3709 (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3;
		L_3 = Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline(__this, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7;
		L_7 = Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_10;
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
// Method Definition Index: 88869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CorrectedParameter_get_Data_mB8BEB506F577CF8713A3999682D0E3FA0882207B (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectedParameter_set_Data_m187341829FFEE73BB7CF1B6EF44F52340AB17FC2 (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CorrectedParameter_get_ErrorsCorrected_m2EBE9649A729E32CAA2A24192B11FD7CDCE61325 (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CErrorsCorrectedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectedParameter_set_ErrorsCorrected_m15024F47D7437243DFE6C779BB99B18D3C8D5726 (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorsCorrectedU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectedParameter__ctor_m86DCD9739D5C38F9349EB8E98A893A8AE2506D0B (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_data, int32_t ___1_errorsCorrected, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_data;
		CorrectedParameter_set_Data_m187341829FFEE73BB7CF1B6EF44F52340AB17FC2_inline(__this, L_0, NULL);
		int32_t L_1 = ___1_errorsCorrected;
		CorrectedParameter_set_ErrorsCorrected_m15024F47D7437243DFE6C779BB99B18D3C8D5726_inline(__this, L_1, NULL);
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
// Method Definition Index: 88874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AztecCode_get_isCompact_m13B7EEEE04B6184C17BF84B4DAB3B48E53608AA6 (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CisCompactU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mE5BA86D41CD674D2E7938DFC244F2BD67D403482 (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = ___0_value;
		__this->___U3CisCompactU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AztecCode_get_Size_m00F19596881DCE92647E7347AEF070E80E6DC63C (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CSizeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_Size_mAF05457489085E22BA915B508A76E86A90551341 (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSizeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AztecCode_get_Layers_mF03EEDBFACE1EAC40962FC646E828E0260B53B8C (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CLayersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m4DC35FD11180900FA835BCB099B3386519FE38C8 (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLayersU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AztecCode_get_CodeWords_mA0C03D1884670DE8518E59E22C90A946012BBD00 (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CCodeWordsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m1AEFCEF23AF3344B22319A32D688C45C10D174EC (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCodeWordsU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* AztecCode_get_Matrix_mFDF859E847644FABC60459B67926A50A28EC8FF5 (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = __this->___U3CMatrixU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_m8A7ABDB02F8F8167DA0D154BDD126B4C36F0886A (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_value;
		__this->___U3CMatrixU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatrixU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AztecCode__ctor_m76D7F62EC456790CB1695DA2C92D6DDC1E22930B (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 88885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryShiftToken__ctor_m6C012760DCDE49BF29361E8C738985AEC208D6AE (BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_previous, int32_t ___1_binaryShiftStart, int32_t ___2_binaryShiftByteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = ___0_previous;
		il2cpp_codegen_runtime_class_init_inline(Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var);
		Token__ctor_m73F7AE59E69A890CB39C59178216175E574AE8BA(__this, L_0, NULL);
		int32_t L_1 = ___1_binaryShiftStart;
		__this->___binaryShiftStart = L_1;
		int32_t L_2 = ___2_binaryShiftByteCount;
		__this->___binaryShiftByteCount = L_2;
		return;
	}
}
// Method Definition Index: 88886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryShiftToken_appendTo_m37BB483AF0D55439E4CBF377B8A2520A27389EE9 (BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854* __this, BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_bitArray, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___binaryShiftByteCount;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)62))))
		{
			goto IL_0053;
		}
	}

IL_0018:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_4 = ___0_bitArray;
		NullCheck(L_4);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_4, ((int32_t)31), 5, NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)62))))
		{
			goto IL_0034;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_6 = ___0_bitArray;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)31))), ((int32_t)16), NULL);
		goto IL_0053;
	}

IL_0034:
	{
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_9 = ___0_bitArray;
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_10, ((int32_t)31), NULL);
		NullCheck(L_9);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_9, L_11, 5, NULL);
		goto IL_0053;
	}

IL_0048:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_12 = ___0_bitArray;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_12, ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)31))), 5, NULL);
	}

IL_0053:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_14 = ___0_bitArray;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___1_text;
		int32_t L_16 = __this->___binaryShiftStart;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_14, L_19, 8, NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0068:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 88887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryShiftToken_ToString_m973262F738C5998178FF47B8313E28B37A959476 (BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3 = __this->___binaryShiftStart;
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7 = __this->___binaryShiftStart;
		int32_t L_8 = __this->___binaryShiftByteCount;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_7, L_8)), 1));
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		return L_11;
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
// Method Definition Index: 88888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mBD7309A1F384A9E098FEAD00FCA62D646A357754 (String_t* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ((AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_StaticFields*)il2cpp_codegen_static_fields_for(AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var))->___DEFAULT_CHARSET;
		String_t* L_1 = ___0_data;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_3;
		L_3 = Encoder_encode_mC5D995C24BBAE1138FD1968D5B95579878427058(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 88889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mB072B9F9DC772B7A00A8D9E5C531AB2E06E3BAC9 (String_t* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_minECCPercent;
		int32_t L_2 = ___2_userSpecifiedLayers;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_3;
		L_3 = Encoder_encode_mDB6BEC3CD32D86D21206054D760121E80B071A92(L_0, L_1, L_2, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, (bool)0, NULL);
		return L_3;
	}
}
// Method Definition Index: 88890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_m9DBD2122565800B8F5BA352DA5E6F53181E778FF (String_t* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_minECCPercent;
		int32_t L_2 = ___2_userSpecifiedLayers;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___3_encoding;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_4;
		L_4 = Encoder_encode_mDB6BEC3CD32D86D21206054D760121E80B071A92(L_0, L_1, L_2, L_3, (bool)0, NULL);
		return L_4;
	}
}
// Method Definition Index: 88891
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mDB6BEC3CD32D86D21206054D760121E80B071A92 (String_t* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, bool ___4_disableEci, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B3_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___3_encoding;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ((AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_StaticFields*)il2cpp_codegen_static_fields_for(AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var))->___DEFAULT_CHARSET;
		G_B3_0 = L_1;
		goto IL_000b;
	}

IL_000a:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___3_encoding;
		G_B3_0 = L_2;
	}

IL_000b:
	{
		String_t* L_3 = ___0_data;
		NullCheck(G_B3_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, G_B3_0, L_3);
		int32_t L_5 = ___1_minECCPercent;
		int32_t L_6 = ___2_userSpecifiedLayers;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___3_encoding;
		bool L_8 = ___4_disableEci;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_9;
		L_9 = Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27(L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// Method Definition Index: 88892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mC5D995C24BBAE1138FD1968D5B95579878427058 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_1;
		L_1 = Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27(L_0, ((int32_t)33), 0, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, (bool)0, NULL);
		return L_1;
	}
}
// Method Definition Index: 88893
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_m819A2DC9FB605581816BD92EE92E2CDEF694FC96 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		int32_t L_1 = ___1_minECCPercent;
		int32_t L_2 = ___2_userSpecifiedLayers;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_3;
		L_3 = Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27(L_0, L_1, L_2, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, (bool)0, NULL);
		return L_3;
	}
}
// Method Definition Index: 88894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_m786CEA32FA5176AA7F762B648DF5201820CD01FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		int32_t L_1 = ___1_minECCPercent;
		int32_t L_2 = ___2_userSpecifiedLayers;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___3_encoding;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_4;
		L_4 = Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27(L_0, L_1, L_2, L_3, (bool)0, NULL);
		return L_4;
	}
}
// Method Definition Index: 88895
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_minECCPercent, int32_t ___2_userSpecifiedLayers, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, bool ___4_disableEci, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_7 = NULL;
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_8 = NULL;
	int32_t V_9 = 0;
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_10 = NULL;
	int32_t V_11 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_12 = NULL;
	int32_t V_13 = 0;
	BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___3_encoding;
		bool L_2 = ___4_disableEci;
		HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* L_3 = (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB*)il2cpp_codegen_object_new(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		HighLevelEncoder__ctor_mE1ABAC4D4D4ABD976B7D9E65BFF8B0EFEAAAF104(L_3, L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_4;
		L_4 = HighLevelEncoder_encode_m92B9E0A06468448FF06CF1E9259B3A1B1B971BAF(L_3, NULL);
		V_0 = L_4;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_5, NULL);
		int32_t L_7 = ___1_minECCPercent;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_6, L_7))/((int32_t)100))), ((int32_t)11)));
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_8, NULL);
		int32_t L_10 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = ___2_userSpecifiedLayers;
		if (!L_11)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_12 = ___2_userSpecifiedLayers;
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		int32_t L_13 = ___2_userSpecifiedLayers;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = il2cpp_codegen_abs(L_13);
		V_4 = L_14;
		int32_t L_15 = V_4;
		bool L_16 = V_3;
		if (L_16)
		{
			G_B3_0 = L_15;
			goto IL_0043;
		}
		G_B2_0 = L_15;
	}
	{
		G_B4_0 = ((int32_t)32);
		G_B4_1 = G_B2_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 4;
		G_B4_1 = G_B3_0;
	}

IL_0044:
	{
		if ((((int32_t)G_B4_1) <= ((int32_t)G_B4_0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_17 = ___2_userSpecifiedLayers;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE2BF525BE84B3D6B88D844591311E684F7987A3)), L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27_RuntimeMethod_var)));
	}

IL_005c:
	{
		int32_t L_22 = V_4;
		bool L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Encoder_TotalBitsInLayer_m052C577EC29856BFAB638B7E18639BCF85D304AC(L_22, L_23, NULL);
		V_5 = L_24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ((Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var))->___WORD_SIZE;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		int32_t L_29 = V_5;
		int32_t L_30 = V_5;
		int32_t L_31 = V_6;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)(L_30%L_31))));
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_32 = V_0;
		int32_t L_33 = V_6;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_34;
		L_34 = Encoder_stuffBits_mA0EFD348121F485EB095CA6356D66180D24EAEAF(L_32, L_33, NULL);
		V_7 = L_34;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_35 = V_7;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_35, NULL);
		int32_t L_37 = V_1;
		int32_t L_38 = V_15;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_36, L_37))) <= ((int32_t)L_38)))
		{
			goto IL_009c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27_RuntimeMethod_var)));
	}

IL_009c:
	{
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_41 = V_7;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_41, NULL);
		int32_t L_43 = V_6;
		if ((((int32_t)L_42) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)64))))))
		{
			goto IL_0154;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A7C2EA52CC29D9EFF9EB9AEA82AA1456542F7B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27_RuntimeMethod_var)));
	}

IL_00be:
	{
		V_6 = 0;
		V_7 = (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D*)NULL;
		V_16 = 0;
	}

IL_00c7:
	{
		int32_t L_45 = V_16;
		if ((((int32_t)L_45) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d8;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_46 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4E73755B7B3ABC61F614B6B3404904BDC750906)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_encode_mAAE6B1B6DFEC80C904D05830FADAF4AA730CED27_RuntimeMethod_var)));
	}

IL_00d8:
	{
		int32_t L_47 = V_16;
		V_3 = (bool)((((int32_t)((((int32_t)L_47) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_3;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_49 = V_16;
		G_B17_0 = L_49;
		goto IL_00ec;
	}

IL_00e8:
	{
		int32_t L_50 = V_16;
		G_B17_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00ec:
	{
		V_4 = G_B17_0;
		int32_t L_51 = V_4;
		bool L_52 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		int32_t L_53;
		L_53 = Encoder_TotalBitsInLayer_m052C577EC29856BFAB638B7E18639BCF85D304AC(L_51, L_52, NULL);
		V_5 = L_53;
		int32_t L_54 = V_2;
		int32_t L_55 = V_5;
		if ((((int32_t)L_54) > ((int32_t)L_55)))
		{
			goto IL_0149;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_56 = V_7;
		if (!L_56)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_57 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ((Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var))->___WORD_SIZE;
		int32_t L_59 = V_4;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_57) == ((int32_t)L_61)))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ((Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var))->___WORD_SIZE;
		int32_t L_63 = V_4;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_6 = L_65;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_66 = V_0;
		int32_t L_67 = V_6;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_68;
		L_68 = Encoder_stuffBits_mA0EFD348121F485EB095CA6356D66180D24EAEAF(L_66, L_67, NULL);
		V_7 = L_68;
	}

IL_0121:
	{
		int32_t L_69 = V_5;
		int32_t L_70 = V_5;
		int32_t L_71 = V_6;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_69, ((int32_t)(L_70%L_71))));
		bool L_72 = V_3;
		if (!L_72)
		{
			goto IL_013c;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_73 = V_7;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_73, NULL);
		int32_t L_75 = V_6;
		if ((((int32_t)L_74) > ((int32_t)((int32_t)il2cpp_codegen_multiply(L_75, ((int32_t)64))))))
		{
			goto IL_0149;
		}
	}

IL_013c:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_76 = V_7;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_76, NULL);
		int32_t L_78 = V_1;
		int32_t L_79 = V_17;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_77, L_78))) <= ((int32_t)L_79)))
		{
			goto IL_0154;
		}
	}

IL_0149:
	{
		int32_t L_80 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		goto IL_00c7;
	}

IL_0154:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_81 = V_7;
		int32_t L_82 = V_5;
		int32_t L_83 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_84;
		L_84 = Encoder_generateCheckWords_mB77BD204D6D233F211BEB2912B08CBAB770B917C(L_81, L_82, L_83, NULL);
		V_8 = L_84;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_85 = V_7;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_85, NULL);
		int32_t L_87 = V_6;
		V_9 = ((int32_t)(L_86/L_87));
		bool L_88 = V_3;
		int32_t L_89 = V_4;
		int32_t L_90 = V_9;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_91;
		L_91 = Encoder_generateModeMessage_m96C83B27B063B1A2AA5D77AB7FEE5C84E808FD4E(L_88, L_89, L_90, NULL);
		V_10 = L_91;
		bool L_92 = V_3;
		if (L_92)
		{
			goto IL_0180;
		}
	}
	{
		G_B28_0 = ((int32_t)14);
		goto IL_0182;
	}

IL_0180:
	{
		G_B28_0 = ((int32_t)11);
	}

IL_0182:
	{
		int32_t L_93 = V_4;
		V_11 = ((int32_t)il2cpp_codegen_add(G_B28_0, ((int32_t)il2cpp_codegen_multiply(L_93, 4))));
		int32_t L_94 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_94);
		V_12 = L_95;
		bool L_96 = V_3;
		if (!L_96)
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_97 = V_11;
		V_13 = L_97;
		V_18 = 0;
		goto IL_01ab;
	}

IL_019e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_12;
		int32_t L_99 = V_18;
		int32_t L_100 = V_18;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_100);
		int32_t L_101 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01ab:
	{
		int32_t L_102 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_12;
		NullCheck(L_103);
		if ((((int32_t)L_102) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_020e;
	}

IL_01b5:
	{
		int32_t L_104 = V_11;
		int32_t L_105 = V_11;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_104, 1)), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_105/2)), 1))/((int32_t)15)))))));
		int32_t L_106 = V_11;
		V_19 = ((int32_t)(L_106/2));
		int32_t L_107 = V_13;
		V_20 = ((int32_t)(L_107/2));
		V_21 = 0;
		goto IL_0208;
	}

IL_01d8:
	{
		int32_t L_108 = V_21;
		int32_t L_109 = V_21;
		V_22 = ((int32_t)il2cpp_codegen_add(L_108, ((int32_t)(L_109/((int32_t)15)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_12;
		int32_t L_111 = V_19;
		int32_t L_112 = V_21;
		int32_t L_113 = V_20;
		int32_t L_114 = V_22;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_111, L_112)), 1))), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_113, L_114)), 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_12;
		int32_t L_116 = V_19;
		int32_t L_117 = V_21;
		int32_t L_118 = V_20;
		int32_t L_119 = V_22;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_116, L_117))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_118, L_119)), 1)));
		int32_t L_120 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_0208:
	{
		int32_t L_121 = V_21;
		int32_t L_122 = V_19;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_01d8;
		}
	}

IL_020e:
	{
		int32_t L_123 = V_13;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_124 = (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147*)il2cpp_codegen_object_new(BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m3EA576981AF1BC5E9B2B9B8CEAA2324D652B66CE(L_124, L_123, NULL);
		V_14 = L_124;
		V_23 = 0;
		V_24 = 0;
		goto IL_034e;
	}

IL_0222:
	{
		int32_t L_125 = V_4;
		int32_t L_126 = V_23;
		bool L_127 = V_3;
		if (L_127)
		{
			G_B39_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_125, L_126)), 4));
			goto IL_0230;
		}
		G_B38_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_125, L_126)), 4));
	}
	{
		G_B40_0 = ((int32_t)12);
		G_B40_1 = G_B38_0;
		goto IL_0232;
	}

IL_0230:
	{
		G_B40_0 = ((int32_t)9);
		G_B40_1 = G_B39_0;
	}

IL_0232:
	{
		V_25 = ((int32_t)il2cpp_codegen_add(G_B40_1, G_B40_0));
		V_26 = 0;
		goto IL_0336;
	}

IL_023d:
	{
		int32_t L_128 = V_26;
		V_27 = ((int32_t)il2cpp_codegen_multiply(L_128, 2));
		V_28 = 0;
		goto IL_0328;
	}

IL_024b:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_129 = V_8;
		int32_t L_130 = V_24;
		int32_t L_131 = V_27;
		int32_t L_132 = V_28;
		NullCheck(L_129);
		bool L_133;
		L_133 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_129, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_130, L_131)), L_132)), NULL);
		if (!L_133)
		{
			goto IL_0278;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_134 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_12;
		int32_t L_136 = V_23;
		int32_t L_137 = V_28;
		NullCheck(L_135);
		int32_t L_138 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_136, 2)), L_137));
		int32_t L_139 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = V_12;
		int32_t L_141 = V_23;
		int32_t L_142 = V_26;
		NullCheck(L_140);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_141, 2)), L_142));
		int32_t L_144 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_134);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_134, L_139, L_144, (bool)1, NULL);
	}

IL_0278:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_145 = V_8;
		int32_t L_146 = V_24;
		int32_t L_147 = V_25;
		int32_t L_148 = V_27;
		int32_t L_149 = V_28;
		NullCheck(L_145);
		bool L_150;
		L_150 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_145, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_146, ((int32_t)il2cpp_codegen_multiply(L_147, 2)))), L_148)), L_149)), NULL);
		if (!L_150)
		{
			goto IL_02af;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_151 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_12;
		int32_t L_153 = V_23;
		int32_t L_154 = V_26;
		NullCheck(L_152);
		int32_t L_155 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_153, 2)), L_154));
		int32_t L_156 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = V_12;
		int32_t L_158 = V_11;
		int32_t L_159 = V_23;
		int32_t L_160 = V_28;
		NullCheck(L_157);
		int32_t L_161 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_158, 1)), ((int32_t)il2cpp_codegen_multiply(L_159, 2)))), L_160));
		int32_t L_162 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_151);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_151, L_156, L_162, (bool)1, NULL);
	}

IL_02af:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_163 = V_8;
		int32_t L_164 = V_24;
		int32_t L_165 = V_25;
		int32_t L_166 = V_27;
		int32_t L_167 = V_28;
		NullCheck(L_163);
		bool L_168;
		L_168 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_163, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_164, ((int32_t)il2cpp_codegen_multiply(L_165, 4)))), L_166)), L_167)), NULL);
		if (!L_168)
		{
			goto IL_02eb;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_169 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = V_12;
		int32_t L_171 = V_11;
		int32_t L_172 = V_23;
		int32_t L_173 = V_28;
		NullCheck(L_170);
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_171, 1)), ((int32_t)il2cpp_codegen_multiply(L_172, 2)))), L_173));
		int32_t L_175 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = V_12;
		int32_t L_177 = V_11;
		int32_t L_178 = V_23;
		int32_t L_179 = V_26;
		NullCheck(L_176);
		int32_t L_180 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_177, 1)), ((int32_t)il2cpp_codegen_multiply(L_178, 2)))), L_179));
		int32_t L_181 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_169);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_169, L_175, L_181, (bool)1, NULL);
	}

IL_02eb:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_182 = V_8;
		int32_t L_183 = V_24;
		int32_t L_184 = V_25;
		int32_t L_185 = V_27;
		int32_t L_186 = V_28;
		NullCheck(L_182);
		bool L_187;
		L_187 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_182, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_183, ((int32_t)il2cpp_codegen_multiply(L_184, 6)))), L_185)), L_186)), NULL);
		if (!L_187)
		{
			goto IL_0322;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_188 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = V_12;
		int32_t L_190 = V_11;
		int32_t L_191 = V_23;
		int32_t L_192 = V_26;
		NullCheck(L_189);
		int32_t L_193 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_190, 1)), ((int32_t)il2cpp_codegen_multiply(L_191, 2)))), L_192));
		int32_t L_194 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_12;
		int32_t L_196 = V_23;
		int32_t L_197 = V_28;
		NullCheck(L_195);
		int32_t L_198 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_196, 2)), L_197));
		int32_t L_199 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		NullCheck(L_188);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_188, L_194, L_199, (bool)1, NULL);
	}

IL_0322:
	{
		int32_t L_200 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_0328:
	{
		int32_t L_201 = V_28;
		if ((((int32_t)L_201) < ((int32_t)2)))
		{
			goto IL_024b;
		}
	}
	{
		int32_t L_202 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_202, 1));
	}

IL_0336:
	{
		int32_t L_203 = V_26;
		int32_t L_204 = V_25;
		if ((((int32_t)L_203) < ((int32_t)L_204)))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_205 = V_24;
		int32_t L_206 = V_25;
		V_24 = ((int32_t)il2cpp_codegen_add(L_205, ((int32_t)il2cpp_codegen_multiply(L_206, 8))));
		int32_t L_207 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_207, 1));
	}

IL_034e:
	{
		int32_t L_208 = V_23;
		int32_t L_209 = V_4;
		if ((((int32_t)L_208) < ((int32_t)L_209)))
		{
			goto IL_0222;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_210 = V_14;
		bool L_211 = V_3;
		int32_t L_212 = V_13;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_213 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		Encoder_drawModeMessage_m2D7E8583F8A007F5EC1B4F3AF2CBABEC22F6FED8(L_210, L_211, L_212, L_213, NULL);
		bool L_214 = V_3;
		if (!L_214)
		{
			goto IL_0377;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_215 = V_14;
		int32_t L_216 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		Encoder_drawBullsEye_m429626515E0137B52F829153B18AF0CE27691C95(L_215, ((int32_t)(L_216/2)), 5, NULL);
		goto IL_03fd;
	}

IL_0377:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_217 = V_14;
		int32_t L_218 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		Encoder_drawBullsEye_m429626515E0137B52F829153B18AF0CE27691C95(L_217, ((int32_t)(L_218/2)), 7, NULL);
		V_29 = 0;
		V_30 = 0;
		goto IL_03f3;
	}

IL_038b:
	{
		int32_t L_219 = V_13;
		V_31 = ((int32_t)(((int32_t)(L_219/2))&1));
		goto IL_03df;
	}

IL_0395:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_220 = V_14;
		int32_t L_221 = V_13;
		int32_t L_222 = V_30;
		int32_t L_223 = V_31;
		NullCheck(L_220);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_220, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_221/2)), L_222)), L_223, (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_224 = V_14;
		int32_t L_225 = V_13;
		int32_t L_226 = V_30;
		int32_t L_227 = V_31;
		NullCheck(L_224);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_224, ((int32_t)il2cpp_codegen_add(((int32_t)(L_225/2)), L_226)), L_227, (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_228 = V_14;
		int32_t L_229 = V_31;
		int32_t L_230 = V_13;
		int32_t L_231 = V_30;
		NullCheck(L_228);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_228, L_229, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_230/2)), L_231)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_232 = V_14;
		int32_t L_233 = V_31;
		int32_t L_234 = V_13;
		int32_t L_235 = V_30;
		NullCheck(L_232);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_232, L_233, ((int32_t)il2cpp_codegen_add(((int32_t)(L_234/2)), L_235)), (bool)1, NULL);
		int32_t L_236 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_236, 2));
	}

IL_03df:
	{
		int32_t L_237 = V_31;
		int32_t L_238 = V_13;
		if ((((int32_t)L_237) < ((int32_t)L_238)))
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_239 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_239, ((int32_t)15)));
		int32_t L_240 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_240, ((int32_t)16)));
	}

IL_03f3:
	{
		int32_t L_241 = V_29;
		int32_t L_242 = V_11;
		if ((((int32_t)L_241) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_242/2)), 1)))))
		{
			goto IL_038b;
		}
	}

IL_03fd:
	{
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_243 = (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D*)il2cpp_codegen_object_new(AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D_il2cpp_TypeInfo_var);
		AztecCode__ctor_m76D7F62EC456790CB1695DA2C92D6DDC1E22930B(L_243, NULL);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_244 = L_243;
		bool L_245 = V_3;
		NullCheck(L_244);
		AztecCode_set_isCompact_mE5BA86D41CD674D2E7938DFC244F2BD67D403482_inline(L_244, L_245, NULL);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_246 = L_244;
		int32_t L_247 = V_13;
		NullCheck(L_246);
		AztecCode_set_Size_mAF05457489085E22BA915B508A76E86A90551341_inline(L_246, L_247, NULL);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_248 = L_246;
		int32_t L_249 = V_4;
		NullCheck(L_248);
		AztecCode_set_Layers_m4DC35FD11180900FA835BCB099B3386519FE38C8_inline(L_248, L_249, NULL);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_250 = L_248;
		int32_t L_251 = V_9;
		NullCheck(L_250);
		AztecCode_set_CodeWords_m1AEFCEF23AF3344B22319A32D688C45C10D174EC_inline(L_250, L_251, NULL);
		AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* L_252 = L_250;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_253 = V_14;
		NullCheck(L_252);
		AztecCode_set_Matrix_m8A7ABDB02F8F8167DA0D154BDD126B4C36F0886A_inline(L_252, L_253, NULL);
		return L_252;
	}
}
// Method Definition Index: 88896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawBullsEye_m429626515E0137B52F829153B18AF0CE27691C95 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_center, int32_t ___2_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		int32_t L_0 = ___1_center;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_003a;
	}

IL_000a:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_2 = ___0_matrix;
		int32_t L_3 = V_1;
		int32_t L_4 = ___1_center;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_6 = ___0_matrix;
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_center;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_10 = ___0_matrix;
		int32_t L_11 = ___1_center;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), L_13, (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_14 = ___0_matrix;
		int32_t L_15 = ___1_center;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_14);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), L_17, (bool)1, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003a:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___1_center;
		int32_t L_21 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21)))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 2));
	}

IL_0044:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_size;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_25 = ___0_matrix;
		int32_t L_26 = ___1_center;
		int32_t L_27 = ___2_size;
		int32_t L_28 = ___1_center;
		int32_t L_29 = ___2_size;
		NullCheck(L_25);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_30 = ___0_matrix;
		int32_t L_31 = ___1_center;
		int32_t L_32 = ___2_size;
		int32_t L_33 = ___1_center;
		int32_t L_34 = ___2_size;
		NullCheck(L_30);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_30, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_31, L_32)), 1)), ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_35 = ___0_matrix;
		int32_t L_36 = ___1_center;
		int32_t L_37 = ___2_size;
		int32_t L_38 = ___1_center;
		int32_t L_39 = ___2_size;
		NullCheck(L_35);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_38, L_39)), 1)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_40 = ___0_matrix;
		int32_t L_41 = ___1_center;
		int32_t L_42 = ___2_size;
		int32_t L_43 = ___1_center;
		int32_t L_44 = ___2_size;
		NullCheck(L_40);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_40, ((int32_t)il2cpp_codegen_add(L_41, L_42)), ((int32_t)il2cpp_codegen_subtract(L_43, L_44)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_45 = ___0_matrix;
		int32_t L_46 = ___1_center;
		int32_t L_47 = ___2_size;
		int32_t L_48 = ___1_center;
		int32_t L_49 = ___2_size;
		NullCheck(L_45);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_48, L_49)), 1)), (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_50 = ___0_matrix;
		int32_t L_51 = ___1_center;
		int32_t L_52 = ___2_size;
		int32_t L_53 = ___1_center;
		int32_t L_54 = ___2_size;
		NullCheck(L_50);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_50, ((int32_t)il2cpp_codegen_add(L_51, L_52)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_53, L_54)), 1)), (bool)1, NULL);
		return;
	}
}
// Method Definition Index: 88897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* Encoder_generateModeMessage_m96C83B27B063B1A2AA5D77AB7FEE5C84E808FD4E (bool ___0_compact, int32_t ___1_layers, int32_t ___2_messageSizeInWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_0 = NULL;
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_0 = (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D*)il2cpp_codegen_object_new(BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		BitArray__ctor_mDBF6684C57B783D47B9A985782EE62DC15CC48B3(L_0, NULL);
		V_0 = L_0;
		bool L_1 = ___0_compact;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_2 = V_0;
		int32_t L_3 = ___1_layers;
		NullCheck(L_2);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), 2, NULL);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_4 = V_0;
		int32_t L_5 = ___2_messageSizeInWords;
		NullCheck(L_4);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), 6, NULL);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_7;
		L_7 = Encoder_generateCheckWords_mB77BD204D6D233F211BEB2912B08CBAB770B917C(L_6, ((int32_t)28), 4, NULL);
		V_0 = L_7;
		goto IL_0048;
	}

IL_0029:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_8 = V_0;
		int32_t L_9 = ___1_layers;
		NullCheck(L_8);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), 5, NULL);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_10 = V_0;
		int32_t L_11 = ___2_messageSizeInWords;
		NullCheck(L_10);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), ((int32_t)11), NULL);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_13;
		L_13 = Encoder_generateCheckWords_mB77BD204D6D233F211BEB2912B08CBAB770B917C(L_12, ((int32_t)40), 4, NULL);
		V_0 = L_13;
	}

IL_0048:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 88898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_drawModeMessage_m2D7E8583F8A007F5EC1B4F3AF2CBABEC22F6FED8 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, bool ___1_compact, int32_t ___2_matrixSize, BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___3_modeMessage, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___2_matrixSize;
		V_0 = ((int32_t)(L_0/2));
		bool L_1 = ___1_compact;
		if (!L_1)
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, 3)), L_3));
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_4 = ___3_modeMessage;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_7 = ___0_matrix;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 5)), (bool)1, NULL);
	}

IL_0025:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_10 = ___3_modeMessage;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_10, ((int32_t)il2cpp_codegen_add(L_11, 7)), NULL);
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_13 = ___0_matrix;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_13);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_13, ((int32_t)il2cpp_codegen_add(L_14, 5)), L_15, (bool)1, NULL);
	}

IL_003b:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_16 = ___3_modeMessage;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)20), L_17)), NULL);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_19 = ___0_matrix;
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_19, L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), (bool)1, NULL);
	}

IL_0052:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_22 = ___3_modeMessage;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24;
		L_24 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_22, ((int32_t)il2cpp_codegen_subtract(((int32_t)27), L_23)), NULL);
		if (!L_24)
		{
			goto IL_0069;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_25 = ___0_matrix;
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		NullCheck(L_25);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, 5)), L_27, (bool)1, NULL);
	}

IL_0069:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006d:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)7)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_0072:
	{
		V_3 = 0;
		goto IL_00e2;
	}

IL_0076:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_30, 5)), L_31)), ((int32_t)(L_32/5))));
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_33 = ___3_modeMessage;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		bool L_35;
		L_35 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_0096;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_36 = ___0_matrix;
		int32_t L_37 = V_4;
		int32_t L_38 = V_0;
		NullCheck(L_36);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_36, L_37, ((int32_t)il2cpp_codegen_subtract(L_38, 7)), (bool)1, NULL);
	}

IL_0096:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_39 = ___3_modeMessage;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		bool L_41;
		L_41 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)10))), NULL);
		if (!L_41)
		{
			goto IL_00ae;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_42 = ___0_matrix;
		int32_t L_43 = V_0;
		int32_t L_44 = V_4;
		NullCheck(L_42);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_42, ((int32_t)il2cpp_codegen_add(L_43, 7)), L_44, (bool)1, NULL);
	}

IL_00ae:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_45 = ___3_modeMessage;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		bool L_47;
		L_47 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)29), L_46)), NULL);
		if (!L_47)
		{
			goto IL_00c6;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_48 = ___0_matrix;
		int32_t L_49 = V_4;
		int32_t L_50 = V_0;
		NullCheck(L_48);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_48, L_49, ((int32_t)il2cpp_codegen_add(L_50, 7)), (bool)1, NULL);
	}

IL_00c6:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_51 = ___3_modeMessage;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		bool L_53;
		L_53 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_51, ((int32_t)il2cpp_codegen_subtract(((int32_t)39), L_52)), NULL);
		if (!L_53)
		{
			goto IL_00de;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_54 = ___0_matrix;
		int32_t L_55 = V_0;
		int32_t L_56 = V_4;
		NullCheck(L_54);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 7)), L_56, (bool)1, NULL);
	}

IL_00de:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e2:
	{
		int32_t L_58 = V_3;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)10))))
		{
			goto IL_0076;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 88899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* Encoder_generateCheckWords_mB77BD204D6D233F211BEB2912B08CBAB770B917C (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_bitArray, int32_t ___1_totalBits, int32_t ___2_wordSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_0 = ___0_bitArray;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_0, NULL);
		int32_t L_2 = ___2_wordSize;
		if (!((int32_t)(L_1%L_2)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32725D282232F05FFA02D73D5E41117CB098398B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_generateCheckWords_mB77BD204D6D233F211BEB2912B08CBAB770B917C_RuntimeMethod_var)));
	}

IL_0015:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_4 = ___0_bitArray;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_4, NULL);
		int32_t L_6 = ___2_wordSize;
		V_0 = ((int32_t)(L_5/L_6));
		int32_t L_7 = ___2_wordSize;
		il2cpp_codegen_runtime_class_init_inline(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* L_8;
		L_8 = Encoder_getGF_m3EBDE49A18B762FB901C366020F75E7E1E20ACB6(L_7, NULL);
		ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9* L_9 = (ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9*)il2cpp_codegen_object_new(ReedSolomonEncoder_tDC6FC0F8DD7C0F7CB823C581B7F8D2345E1CD8F9_il2cpp_TypeInfo_var);
		ReedSolomonEncoder__ctor_m338938665872DFE4426BFE51C89F09A7A568454F(L_9, L_8, NULL);
		int32_t L_10 = ___1_totalBits;
		int32_t L_11 = ___2_wordSize;
		V_1 = ((int32_t)(L_10/L_11));
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_12 = ___0_bitArray;
		int32_t L_13 = ___2_wordSize;
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = Encoder_bitsToWords_m9150D53B09AD2A8C4CED20E2474201227E980AE1(L_12, L_13, L_14, NULL);
		V_2 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_9);
		ReedSolomonEncoder_encode_m032F73817FE34A6ACD80EC239B8F0FF74D347CB0(L_9, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		int32_t L_19 = ___1_totalBits;
		int32_t L_20 = ___2_wordSize;
		V_3 = ((int32_t)(L_19%L_20));
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_21 = (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D*)il2cpp_codegen_object_new(BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		BitArray__ctor_mDBF6684C57B783D47B9A985782EE62DC15CC48B3(L_21, NULL);
		V_4 = L_21;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_22 = V_4;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_22, 0, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_2;
		V_5 = L_24;
		V_6 = 0;
		goto IL_0072;
	}

IL_005b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_5;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_29 = V_4;
		int32_t L_30 = V_7;
		int32_t L_31 = ___2_wordSize;
		NullCheck(L_29);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_29, L_30, L_31, NULL);
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0072:
	{
		int32_t L_33 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_5;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_35 = V_4;
		return L_35;
	}
}
// Method Definition Index: 88900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Encoder_bitsToWords_m9150D53B09AD2A8C4CED20E2474201227E980AE1 (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_stuffedBits, int32_t ___1_wordSize, int32_t ___2_totalWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		int32_t L_0 = ___2_totalWords;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_2 = ___0_stuffedBits;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_2, NULL);
		int32_t L_4 = ___1_wordSize;
		V_2 = ((int32_t)(L_3/L_4));
		goto IL_004d;
	}

IL_0014:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_0040;
	}

IL_001b:
	{
		int32_t L_5 = V_3;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_6 = ___0_stuffedBits;
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_wordSize;
		int32_t L_9 = V_4;
		NullCheck(L_6);
		bool L_10;
		L_10 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, L_8)), L_9)), NULL);
		if (L_10)
		{
			G_B4_0 = L_5;
			goto IL_002d;
		}
		G_B3_0 = L_5;
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_002d:
	{
		int32_t L_11 = ___1_wordSize;
		int32_t L_12 = V_4;
		G_B5_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), 1))&((int32_t)31)))));
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		V_3 = ((int32_t)(G_B5_1|G_B5_0));
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = ___1_wordSize;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_18);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004d:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 88901
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* Encoder_getGF_m3EBDE49A18B762FB901C366020F75E7E1E20ACB6 (int32_t ___0_wordSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_wordSize;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 4)))
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_004c;
			}
			case 4:
			{
				goto IL_003a;
			}
			case 5:
			{
				goto IL_004c;
			}
			case 6:
			{
				goto IL_0040;
			}
			case 7:
			{
				goto IL_004c;
			}
			case 8:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_002e:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* L_1 = ((GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var))->___AZTEC_PARAM;
		return L_1;
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* L_2 = ((GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var))->___AZTEC_DATA_6;
		return L_2;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* L_3 = ((GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var))->___AZTEC_DATA_8;
		return L_3;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* L_4 = ((GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var))->___AZTEC_DATA_10;
		return L_4;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var);
		GenericGF_t33ADFA0C37B3E30084883323288898D91929846A* L_5 = ((GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_StaticFields*)il2cpp_codegen_static_fields_for(GenericGF_t33ADFA0C37B3E30084883323288898D91929846A_il2cpp_TypeInfo_var))->___AZTEC_DATA_12;
		return L_5;
	}

IL_004c:
	{
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_wordSize), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A6D141CD0B036C4E5A7B645E678A13005A9E0B7)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_getGF_m3EBDE49A18B762FB901C366020F75E7E1E20ACB6_RuntimeMethod_var)));
	}
}
// Method Definition Index: 88902
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* Encoder_stuffBits_mA0EFD348121F485EB095CA6356D66180D24EAEAF (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_bits, int32_t ___1_wordSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_0 = (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D*)il2cpp_codegen_object_new(BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		BitArray__ctor_mDBF6684C57B783D47B9A985782EE62DC15CC48B3(L_0, NULL);
		V_0 = L_0;
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_1 = ___0_bits;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = ___1_wordSize;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))), 2));
		V_3 = 0;
		goto IL_008c;
	}

IL_001a:
	{
		V_4 = 0;
		V_5 = 0;
		goto IL_004b;
	}

IL_0022:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_5;
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_7 = ___0_bits;
		int32_t L_8 = V_3;
		int32_t L_9 = V_5;
		NullCheck(L_7);
		bool L_10;
		L_10 = BitArray_get_Item_m8AC0F73BA3EB749F315421E2972C2E2FB4A02E17(L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0035:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = ___1_wordSize;
		int32_t L_13 = V_5;
		V_4 = ((int32_t)(L_11|((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13))&((int32_t)31)))))));
	}

IL_0045:
	{
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004b:
	{
		int32_t L_15 = V_5;
		int32_t L_16 = ___1_wordSize;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)((int32_t)(L_17&L_18))) == ((uint32_t)L_19))))
		{
			goto IL_0068;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_20 = V_0;
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		int32_t L_23 = ___1_wordSize;
		NullCheck(L_20);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_20, ((int32_t)(L_21&L_22)), L_23, NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_0088;
	}

IL_0068:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		if (((int32_t)(L_25&L_26)))
		{
			goto IL_007f;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_27 = V_0;
		int32_t L_28 = V_4;
		int32_t L_29 = ___1_wordSize;
		NullCheck(L_27);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_27, ((int32_t)(L_28|1)), L_29, NULL);
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0088;
	}

IL_007f:
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_31 = V_0;
		int32_t L_32 = V_4;
		int32_t L_33 = ___1_wordSize;
		NullCheck(L_31);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_31, L_32, L_33, NULL);
	}

IL_0088:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = ___1_wordSize;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_008c:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_001a;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_38 = V_0;
		return L_38;
	}
}
// Method Definition Index: 88903
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Encoder_TotalBitsInLayer_m052C577EC29856BFAB638B7E18639BCF85D304AC (int32_t ___0_layers, bool ___1_compact, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___1_compact;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((int32_t)112);
		goto IL_0009;
	}

IL_0007:
	{
		G_B3_0 = ((int32_t)88);
	}

IL_0009:
	{
		int32_t L_1 = ___0_layers;
		int32_t L_2 = ___0_layers;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(G_B3_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), L_1)))), L_2));
	}
}
// Method Definition Index: 88904
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__cctor_m34A273271BBBFDBD4D4792310E336302DF93476F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____8A019BA8F105330945DEE7EB1C1A8F0FD7A6ED50EC1DA572C608744C0B3E24EC_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var))->___WORD_SIZE = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_StaticFields*)il2cpp_codegen_static_fields_for(Encoder_t11229EB13F6CDC6EA9151CF9B018A616EBCC648B_il2cpp_TypeInfo_var))->___WORD_SIZE), (void*)L_1);
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
// Method Definition Index: 88905
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__cctor_m7AD0BA20455B0B60E69143271CF83FD4EEF01D12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29DDF7E352770508ACA38F2694272E5667918292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_7 = NULL;
	int32_t V_8 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD033B5766A1B644BF791C9396B14A543AD25C5D4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8DEFE38892D6ECBD587674E5A0EC40F37474683C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralFE0551951E4C48B5FCD9FF681A6AAE721895D771);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral064E2EB96BFBA4435F9EA2F79B02C0B9259C8FB4);
		((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___MODE_NAMES = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___MODE_NAMES), (void*)L_5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_6 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____1A8F4E562C2DABE4728E98773DB84DA4BD971C37D436C5750CDD268EA5910902_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_9);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_11 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____347DEEE146787EA01C48F2EDA088FFDAF23BB2444A747DD23B11FDA66098C05D_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_13);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_15 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____45F364B6BC0DA851AB1F1F74FF755A876A1B777D30FC741AFA07D991DEEF17FB_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_17, L_18, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_17);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_19 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____223D2602D7E760EDC918D74F3974774438D5D0E671A3C5BC2D09720BA091D1C1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_21, L_22, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_21);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_23 = L_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____25E47AD2FC8E5BB15C5CE4B2349FD6FF82F52EAEC76E84DB445C957A97D86F9A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_25, L_26, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_25);
		((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___LATCH_TABLE = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___LATCH_TABLE), (void*)L_23);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_27 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)5);
		((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP), (void*)L_27);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_28 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)6);
		((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE), (void*)L_28);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_29 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_30);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_31 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_32);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_33 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_34);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_35 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_36);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_37 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_38);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_39 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_40);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_41 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_42);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_43 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_44);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_45 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_46);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_47 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_48);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_49 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(5), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_50);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_51 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_51);
		int32_t L_52 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_2 = ((int32_t)65);
		goto IL_017e;
	}

IL_016b:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_54 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_54);
		int32_t L_55 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		int32_t L_57 = V_2;
		int32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_58, ((int32_t)65))), 2)));
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_017e:
	{
		int32_t L_60 = V_2;
		if ((((int32_t)L_60) <= ((int32_t)((int32_t)90))))
		{
			goto IL_016b;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_61 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_61);
		int32_t L_62 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_3 = ((int32_t)97);
		goto IL_01a6;
	}

IL_0193:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_64 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_64);
		int32_t L_65 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = V_3;
		int32_t L_68 = V_3;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_68, ((int32_t)97))), 2)));
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01a6:
	{
		int32_t L_70 = V_3;
		if ((((int32_t)L_70) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0193;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_71 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_71);
		int32_t L_72 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)1);
		V_4 = ((int32_t)48);
		goto IL_01d3;
	}

IL_01bc:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_74 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_74);
		int32_t L_75 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = V_4;
		int32_t L_78 = V_4;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_78, ((int32_t)48))), 2)));
		int32_t L_79 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_01d3:
	{
		int32_t L_80 = V_4;
		if ((((int32_t)L_80) <= ((int32_t)((int32_t)57))))
		{
			goto IL_01bc;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_81 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_81);
		int32_t L_82 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)((int32_t)12));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_84 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_84);
		int32_t L_85 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)((int32_t)13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = L_87;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_89 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____31C335D45EE24E3E73C8752FF336B474B595D625C9752E20124AD00ABAAB6584_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_88, L_89, NULL);
		V_0 = L_88;
		V_5 = 0;
		goto IL_021d;
	}

IL_0209:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_90 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_90);
		int32_t L_91 = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_0;
		int32_t L_94 = V_5;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		int32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		int32_t L_97 = V_5;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (int32_t)L_97);
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_021d:
	{
		int32_t L_99 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length)))))
		{
			goto IL_0209;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = L_101;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_103 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB09707BA385B59C72B0741005BB3D6102E487EA8____CC7FED0F1EECD78D8413D37FCF850C4C60B8178D8EDEE43D9A5158C2CC83D140_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_102, L_103, NULL);
		V_1 = L_102;
		V_6 = 0;
		goto IL_0257;
	}

IL_023c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_1;
		int32_t L_105 = V_6;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_0251;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_108 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		NullCheck(L_108);
		int32_t L_109 = 4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = V_1;
		int32_t L_112 = V_6;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = V_6;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (int32_t)L_115);
	}

IL_0251:
	{
		int32_t L_116 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_0257:
	{
		int32_t L_117 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_1;
		NullCheck(L_118);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
		{
			goto IL_023c;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_119 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		V_7 = L_119;
		V_8 = 0;
		goto IL_027b;
	}

IL_026a:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_120 = V_7;
		int32_t L_121 = V_8;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29DDF7E352770508ACA38F2694272E5667918292(L_123, (-1), SupportClass_Fill_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29DDF7E352770508ACA38F2694272E5667918292_RuntimeMethod_var);
		int32_t L_124 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_027b:
	{
		int32_t L_125 = V_8;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_126 = V_7;
		NullCheck(L_126);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)(((RuntimeArray*)L_126)->max_length)))))
		{
			goto IL_026a;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_127 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_127);
		int32_t L_128 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_130 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_130);
		int32_t L_131 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_133 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_133);
		int32_t L_134 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)28));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_136 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_136);
		int32_t L_137 = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_139 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_139);
		int32_t L_140 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_142 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		NullCheck(L_142);
		int32_t L_143 = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)15));
		return;
	}
}
// Method Definition Index: 88906
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m1A3CCDA247EC91D6392FD415C88C022E7C8F6D71 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_text;
		__this->___text = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)L_0);
		__this->___encoding = (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding), (void*)(Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL);
		__this->___disableEci = (bool)0;
		return;
	}
}
// Method Definition Index: 88907
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_m8A6C20072A55B988103ABB6765D885E2E0F22C79 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_text;
		__this->___text = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)L_0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___1_encoding;
		__this->___encoding = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding), (void*)L_1);
		__this->___disableEci = (bool)0;
		return;
	}
}
// Method Definition Index: 88908
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder__ctor_mE1ABAC4D4D4ABD976B7D9E65BFF8B0EFEAAAF104 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, bool ___2_disableEci, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_text;
		__this->___text = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)L_0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___1_encoding;
		__this->___encoding = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding), (void*)L_1);
		bool L_2 = ___2_disableEci;
		__this->___disableEci = L_2;
		return;
	}
}
// Method Definition Index: 88909
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* HighLevelEncoder_encode_m92B9E0A06468448FF06CF1E9259B3A1B1B971BAF (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m654977132D632E0FE4182A91B756FB1B148F98EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_2 = NULL;
	CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	RuntimeObject* V_8 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_9 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B31_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_0 = ((State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_StaticFields*)il2cpp_codegen_static_fields_for(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var))->___INITIAL_STATE;
		V_0 = L_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = __this->___encoding;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		bool L_2 = __this->___disableEci;
		if (L_2)
		{
			goto IL_004d;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = __this->___encoding;
		il2cpp_codegen_runtime_class_init_inline(CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC_il2cpp_TypeInfo_var);
		CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC* L_4;
		L_4 = CharacterSetECI_getCharacterSetECI_m567E46CC92073E4299751B37D346927D3922A92C(L_3, NULL);
		V_3 = L_4;
		CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC* L_5 = V_3;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = __this->___encoding;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(9, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C040BFFD29AC6C9CD22396AB3049E61EABB1887)), L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HighLevelEncoder_encode_m92B9E0A06468448FF06CF1E9259B3A1B1B971BAF_RuntimeMethod_var)));
	}

IL_0040:
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_10 = V_0;
		CharacterSetECI_t40F6C0824D02E9781CCD7D188074F17171289EAC* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4, L_11);
		NullCheck(L_10);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_13;
		L_13 = State_appendFLGn_m804A72FC8EDCA2F298A417922CADE6AD28FE78A1(L_10, L_12, NULL);
		V_0 = L_13;
	}

IL_004d:
	{
		Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534* L_14 = (Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534*)il2cpp_codegen_object_new(Collection_1_tAC84FFE33119BBF55ACAD23DFAE408FDF3677534_il2cpp_TypeInfo_var);
		Collection_1__ctor_m654977132D632E0FE4182A91B756FB1B148F98EE(L_14, Collection_1__ctor_m654977132D632E0FE4182A91B756FB1B148F98EE_RuntimeMethod_var);
		V_1 = L_14;
		RuntimeObject* L_15 = V_1;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_16 = V_0;
		NullCheck(L_15);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_15, L_16);
		V_4 = 0;
		goto IL_0110;
	}

IL_0062:
	{
		int32_t L_17 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___text;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0073;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_007e;
	}

IL_0073:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___text;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		G_B9_0 = ((int32_t)(L_22));
	}

IL_007e:
	{
		V_6 = G_B9_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___text;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		uint8_t L_27 = V_7;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)44)))))
		{
			goto IL_009f;
		}
	}
	{
		uint8_t L_28 = V_7;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)13))))
		{
			goto IL_00ad;
		}
	}
	{
		uint8_t L_29 = V_7;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)44))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00e5;
	}

IL_009f:
	{
		uint8_t L_30 = V_7;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)46))))
		{
			goto IL_00bb;
		}
	}
	{
		uint8_t L_31 = V_7;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00e5;
	}

IL_00ad:
	{
		int32_t L_32 = V_6;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)10))))
		{
			goto IL_00b6;
		}
	}
	{
		G_B19_0 = 0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B19_0 = 2;
	}

IL_00b7:
	{
		V_5 = G_B19_0;
		goto IL_00e8;
	}

IL_00bb:
	{
		int32_t L_33 = V_6;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)32))))
		{
			goto IL_00c4;
		}
	}
	{
		G_B23_0 = 0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B23_0 = 3;
	}

IL_00c5:
	{
		V_5 = G_B23_0;
		goto IL_00e8;
	}

IL_00c9:
	{
		int32_t L_34 = V_6;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)32))))
		{
			goto IL_00d2;
		}
	}
	{
		G_B27_0 = 0;
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B27_0 = 4;
	}

IL_00d3:
	{
		V_5 = G_B27_0;
		goto IL_00e8;
	}

IL_00d7:
	{
		int32_t L_35 = V_6;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e0;
		}
	}
	{
		G_B31_0 = 0;
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B31_0 = 5;
	}

IL_00e1:
	{
		V_5 = G_B31_0;
		goto IL_00e8;
	}

IL_00e5:
	{
		V_5 = 0;
	}

IL_00e8:
	{
		int32_t L_36 = V_5;
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		RuntimeObject* L_37 = V_1;
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = HighLevelEncoder_updateStateListForPair_m56F0DA5C29F8CCCC282BD7D741C53EE4B3E17743(L_37, L_38, L_39, NULL);
		V_1 = L_40;
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_010a;
	}

IL_0100:
	{
		RuntimeObject* L_42 = V_1;
		int32_t L_43 = V_4;
		RuntimeObject* L_44;
		L_44 = HighLevelEncoder_updateStateListForChar_m97C120D141EA7D67088D44AABEB4F9F2D23DC713(__this, L_42, L_43, NULL);
		V_1 = L_44;
	}

IL_010a:
	{
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0110:
	{
		int32_t L_46 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___text;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		V_2 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)NULL;
		RuntimeObject* L_48 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var, L_48);
		V_8 = L_49;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0159:
			{
				{
					RuntimeObject* L_50 = V_8;
					if (!L_50)
					{
						goto IL_0164;
					}
				}
				{
					RuntimeObject* L_51 = V_8;
					NullCheck(L_51);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_51);
				}

IL_0164:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_014e_1;
			}

IL_012b_1:
			{
				RuntimeObject* L_52 = V_8;
				NullCheck(L_52);
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_53;
				L_53 = InterfaceFuncInvoker0< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(0, IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var, L_52);
				V_9 = L_53;
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_54 = V_2;
				if (L_54)
				{
					goto IL_013c_1;
				}
			}
			{
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_55 = V_9;
				V_2 = L_55;
				goto IL_014e_1;
			}

IL_013c_1:
			{
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_56 = V_9;
				NullCheck(L_56);
				int32_t L_57;
				L_57 = State_get_BitCount_m192A14BCD04C70950486C46B0CE798BB5B65F6FF_inline(L_56, NULL);
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_58 = V_2;
				NullCheck(L_58);
				int32_t L_59;
				L_59 = State_get_BitCount_m192A14BCD04C70950486C46B0CE798BB5B65F6FF_inline(L_58, NULL);
				if ((((int32_t)L_57) >= ((int32_t)L_59)))
				{
					goto IL_014e_1;
				}
			}
			{
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_60 = V_9;
				V_2 = L_60;
			}

IL_014e_1:
			{
				RuntimeObject* L_61 = V_8;
				NullCheck(L_61);
				bool L_62;
				L_62 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_61);
				if (L_62)
				{
					goto IL_012b_1;
				}
			}
			{
				goto IL_0165;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0165:
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_63 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___text;
		NullCheck(L_63);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_65;
		L_65 = State_toBitArray_mA46C0EAE1B67B45804B381D16476B3E08516024B(L_63, L_64, NULL);
		return L_65;
	}
}
// Method Definition Index: 88910
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForChar_m97C120D141EA7D67088D44AABEB4F9F2D23DC713 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, RuntimeObject* ___0_states, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_2 = NULL;
	{
		LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_0 = (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F*)il2cpp_codegen_object_new(LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57(L_0, LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_states;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0032:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001f_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_6;
				L_6 = InterfaceFuncInvoker0< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(0, IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_7 = V_2;
				int32_t L_8 = ___1_index;
				LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_9 = V_0;
				HighLevelEncoder_updateStateForChar_m716D1B848D1E22AF6C9B5AD7BDEA9037CC6F8233(__this, L_7, L_8, L_9, NULL);
			}

IL_001f_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0033;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = HighLevelEncoder_simplifyStates_m3E39A0B2A79FF1B46DF380D4BB20DF8FBC57B5A8(L_12, NULL);
		return L_13;
	}
}
// Method Definition Index: 88911
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForChar_m716D1B848D1E22AF6C9B5AD7BDEA9037CC6F8233 (HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB* __this, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_state, int32_t ___1_index, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_5 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_6 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___text;
		int32_t L_1 = ___1_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int32_t)(uint16_t)((int32_t)((int32_t)L_3&((int32_t)255))));
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_5 = ___0_state;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE_inline(L_5, NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Il2CppChar L_9 = V_0;
		NullCheck(L_8);
		Il2CppChar L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		V_2 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)NULL;
		V_3 = 0;
		goto IL_0091;
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_12 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Il2CppChar L_16 = V_0;
		NullCheck(L_15);
		Il2CppChar L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_20 = V_2;
		if (L_20)
		{
			goto IL_0043;
		}
	}
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_21 = ___0_state;
		int32_t L_22 = ___1_index;
		NullCheck(L_21);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_23;
		L_23 = State_endBinaryShift_m02C88F79A8E74D7DED5A91799EDEE5394C065FBD(L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_0043:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_25 = V_3;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_26 = ___0_state;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE_inline(L_26, NULL);
		if ((((int32_t)L_25) == ((int32_t)L_27)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0066;
		}
	}

IL_0053:
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		NullCheck(L_29);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_32;
		L_32 = State_latchAndAppend_mFF8F4D7DFF4D214126A44866D4D6931F5ECBF374(L_29, L_30, L_31, NULL);
		V_5 = L_32;
		RuntimeObject* L_33 = ___2_result;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_34 = V_5;
		NullCheck(L_33);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_33, L_34);
	}

IL_0066:
	{
		bool L_35 = V_1;
		if (L_35)
		{
			goto IL_008d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_36 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_37 = ___0_state;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE_inline(L_37, NULL);
		NullCheck(L_36);
		int32_t L_39 = L_38;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_44 = V_2;
		int32_t L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_44);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_47;
		L_47 = State_shiftAndAppend_m98BC26120D64F7D804DF7B8BA13355C6CBDE74D9(L_44, L_45, L_46, NULL);
		V_6 = L_47;
		RuntimeObject* L_48 = ___2_result;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_49 = V_6;
		NullCheck(L_48);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_48, L_49);
	}

IL_008d:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0091:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) <= ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_52 = ___0_state;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = State_get_BinaryShiftByteCount_m769EFA53CFDB9F195B4AB22AFF439170C6002088_inline(L_52, NULL);
		if ((((int32_t)L_53) > ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_54 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___CHAR_MAP;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_55 = ___0_state;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE_inline(L_55, NULL);
		NullCheck(L_54);
		int32_t L_57 = L_56;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Il2CppChar L_59 = V_0;
		NullCheck(L_58);
		Il2CppChar L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if (L_61)
		{
			goto IL_00bf;
		}
	}

IL_00ae:
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_62 = ___0_state;
		int32_t L_63 = ___1_index;
		NullCheck(L_62);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_64;
		L_64 = State_addBinaryShiftChar_m45EEF05A6534F2AE47D6DF27186C5FD881AF84E5(L_62, L_63, NULL);
		V_7 = L_64;
		RuntimeObject* L_65 = ___2_result;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_66 = V_7;
		NullCheck(L_65);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_65, L_66);
	}

IL_00bf:
	{
		return;
	}
}
// Method Definition Index: 88912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_updateStateListForPair_m56F0DA5C29F8CCCC282BD7D741C53EE4B3E17743 (RuntimeObject* ___0_states, int32_t ___1_index, int32_t ___2_pairCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_0 = (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F*)il2cpp_codegen_object_new(LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57(L_0, LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_states;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_6;
				L_6 = InterfaceFuncInvoker0< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(0, IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var, L_5);
				int32_t L_7 = ___1_index;
				int32_t L_8 = ___2_pairCode;
				LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_9 = V_0;
				il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
				HighLevelEncoder_updateStateForPair_m09E95A7FDC325C1763803EBB2F6E62A524291C56(L_6, L_7, L_8, L_9, NULL);
			}

IL_001d_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = HighLevelEncoder_simplifyStates_m3E39A0B2A79FF1B46DF380D4BB20DF8FBC57B5A8(L_12, NULL);
		return L_13;
	}
}
// Method Definition Index: 88913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_updateStateForPair_m09E95A7FDC325C1763803EBB2F6E62A524291C56 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_state, int32_t ___1_index, int32_t ___2_pairCode, RuntimeObject* ___3_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_0 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_1 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_2 = NULL;
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_0 = ___0_state;
		int32_t L_1 = ___1_index;
		NullCheck(L_0);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_2;
		L_2 = State_endBinaryShift_m02C88F79A8E74D7DED5A91799EDEE5394C065FBD(L_0, L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___3_result;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_4 = V_0;
		int32_t L_5 = ___2_pairCode;
		NullCheck(L_4);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_6;
		L_6 = State_latchAndAppend_mFF8F4D7DFF4D214126A44866D4D6931F5ECBF374(L_4, 4, L_5, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_3, L_6);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_7 = ___0_state;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE_inline(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_9 = ___3_result;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_10 = V_0;
		int32_t L_11 = ___2_pairCode;
		NullCheck(L_10);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_12;
		L_12 = State_shiftAndAppend_m98BC26120D64F7D804DF7B8BA13355C6CBDE74D9(L_10, 4, L_11, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_9, L_12);
	}

IL_002d:
	{
		int32_t L_13 = ___2_pairCode;
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_14 = ___2_pairCode;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_004f;
		}
	}

IL_0035:
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_15 = V_0;
		int32_t L_16 = ___2_pairCode;
		NullCheck(L_15);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_17;
		L_17 = State_latchAndAppend_mFF8F4D7DFF4D214126A44866D4D6931F5ECBF374(L_15, 2, ((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_16)), NULL);
		NullCheck(L_17);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_18;
		L_18 = State_latchAndAppend_mFF8F4D7DFF4D214126A44866D4D6931F5ECBF374(L_17, 2, 1, NULL);
		V_1 = L_18;
		RuntimeObject* L_19 = ___3_result;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_20 = V_1;
		NullCheck(L_19);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_004f:
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_21 = ___0_state;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = State_get_BinaryShiftByteCount_m769EFA53CFDB9F195B4AB22AFF439170C6002088_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_23 = ___0_state;
		int32_t L_24 = ___1_index;
		NullCheck(L_23);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_25;
		L_25 = State_addBinaryShiftChar_m45EEF05A6534F2AE47D6DF27186C5FD881AF84E5(L_23, L_24, NULL);
		int32_t L_26 = ___1_index;
		NullCheck(L_25);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_27;
		L_27 = State_addBinaryShiftChar_m45EEF05A6534F2AE47D6DF27186C5FD881AF84E5(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		V_2 = L_27;
		RuntimeObject* L_28 = ___3_result;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_29 = V_2;
		NullCheck(L_28);
		InterfaceActionInvoker1< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(2, ICollection_1_t4E0E149DC67AE884C9CB4D0410B99DB6854FC214_il2cpp_TypeInfo_var, L_28, L_29);
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 88914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighLevelEncoder_simplifyStates_m3E39A0B2A79FF1B46DF380D4BB20DF8FBC57B5A8 (RuntimeObject* ___0_states, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m178F4D952B603869C5FF438E4130094474C497D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m47EBBB3DD9A4AB6346FF58E7D9061A3F578147AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m19548BA01D006951765F4AAAE0860863CE54FB6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6E3BA60E028CD09E61299428AABC17AD5A4A1D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m11768B3D2AECA70127884D0DAA2485176FAA086D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF184FAD53B05FD3987E9A779F08A38339FC9B56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddFirst_m483AC6A27C2ECDEB2139239D46AFAABB50DD9D09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m55BF4C43E33842B48219352D7064CFAED4D56BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_m2853450FA66EF1F59F7D0413AE7AC31B70FC50C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C0F5EAAAC862603168253056B8A91DBC68ABF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD61DFC1D6C4A3EEBE5F1ADEEC845C7F1FE990235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9050D065887A962A990FDCFFAE19E12F55B6752A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m701C37FAF343FDF7BF874EA865349454CAA67CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t685540B7055415D10FB811FE128E1F88BFB54174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* V_0 = NULL;
	List_1_t685540B7055415D10FB811FE128E1F88BFB54174* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_3 = NULL;
	bool V_4 = false;
	Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB V_5;
	memset((&V_5), 0, sizeof(V_5));
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_6 = NULL;
	Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4 V_7;
	memset((&V_7), 0, sizeof(V_7));
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_8 = NULL;
	{
		LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_0 = (LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F*)il2cpp_codegen_object_new(LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57(L_0, LinkedList_1__ctor_m2DD2B1BF40F622A7890947F042B193616813CA57_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t685540B7055415D10FB811FE128E1F88BFB54174* L_1 = (List_1_t685540B7055415D10FB811FE128E1F88BFB54174*)il2cpp_codegen_object_new(List_1_t685540B7055415D10FB811FE128E1F88BFB54174_il2cpp_TypeInfo_var);
		List_1__ctor_m701C37FAF343FDF7BF874EA865349454CAA67CBC(L_1, List_1__ctor_m701C37FAF343FDF7BF874EA865349454CAA67CBC_RuntimeMethod_var);
		V_1 = L_1;
		RuntimeObject* L_2 = ___0_states;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t1A1CB8D5BC9F6EF9143F9038F16FF20602D7667B_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c3:
			{
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_00cc;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_00cc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00b6_1;
			}

IL_0018_1:
			{
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_7;
				L_7 = InterfaceFuncInvoker0< State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* >::Invoke(0, IEnumerator_1_t9D876CD1E972BBD80B7C3A4582FD28D1717495C4_il2cpp_TypeInfo_var, L_6);
				V_3 = L_7;
				V_4 = (bool)1;
				List_1_t685540B7055415D10FB811FE128E1F88BFB54174* L_8 = V_1;
				NullCheck(L_8);
				List_1_Clear_mD61DFC1D6C4A3EEBE5F1ADEEC845C7F1FE990235_inline(L_8, List_1_Clear_mD61DFC1D6C4A3EEBE5F1ADEEC845C7F1FE990235_RuntimeMethod_var);
				LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_9 = V_0;
				NullCheck(L_9);
				Enumerator_t37344998A1306342933FAB1A157BC3E7FDF059CB L_10;
				L_10 = LinkedList_1_GetEnumerator_m55BF4C43E33842B48219352D7064CFAED4D56BC0(L_9, LinkedList_1_GetEnumerator_m55BF4C43E33842B48219352D7064CFAED4D56BC0_RuntimeMethod_var);
				V_5 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0067_1:
					{
						Enumerator_Dispose_m178F4D952B603869C5FF438E4130094474C497D9((&V_5), Enumerator_Dispose_m178F4D952B603869C5FF438E4130094474C497D9_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_005c_2;
					}

IL_0032_2:
					{
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_11;
						L_11 = Enumerator_get_Current_mF184FAD53B05FD3987E9A779F08A38339FC9B56D_inline((&V_5), Enumerator_get_Current_mF184FAD53B05FD3987E9A779F08A38339FC9B56D_RuntimeMethod_var);
						V_6 = L_11;
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_12 = V_6;
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_13 = V_3;
						NullCheck(L_12);
						bool L_14;
						L_14 = State_isBetterThanOrEqualTo_m956D4AA59DF4C64BD76B4BECF9918939B61C3A66(L_12, L_13, NULL);
						if (!L_14)
						{
							goto IL_004a_2;
						}
					}
					{
						V_4 = (bool)0;
						goto IL_0075_1;
					}

IL_004a_2:
					{
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_15 = V_3;
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_16 = V_6;
						NullCheck(L_15);
						bool L_17;
						L_17 = State_isBetterThanOrEqualTo_m956D4AA59DF4C64BD76B4BECF9918939B61C3A66(L_15, L_16, NULL);
						if (!L_17)
						{
							goto IL_005c_2;
						}
					}
					{
						List_1_t685540B7055415D10FB811FE128E1F88BFB54174* L_18 = V_1;
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_19 = V_6;
						NullCheck(L_18);
						List_1_Add_m5C0F5EAAAC862603168253056B8A91DBC68ABF77_inline(L_18, L_19, List_1_Add_m5C0F5EAAAC862603168253056B8A91DBC68ABF77_RuntimeMethod_var);
					}

IL_005c_2:
					{
						bool L_20;
						L_20 = Enumerator_MoveNext_m19548BA01D006951765F4AAAE0860863CE54FB6A((&V_5), Enumerator_MoveNext_m19548BA01D006951765F4AAAE0860863CE54FB6A_RuntimeMethod_var);
						if (L_20)
						{
							goto IL_0032_2;
						}
					}
					{
						goto IL_0075_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0075_1:
			{
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0081_1;
				}
			}
			{
				LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_22 = V_0;
				State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_23 = V_3;
				NullCheck(L_22);
				LinkedListNode_1_tF5CA84B9D5897BDF0E8ADDEC70EFF7F9BE5D7C4D* L_24;
				L_24 = LinkedList_1_AddFirst_m483AC6A27C2ECDEB2139239D46AFAABB50DD9D09(L_22, L_23, LinkedList_1_AddFirst_m483AC6A27C2ECDEB2139239D46AFAABB50DD9D09_RuntimeMethod_var);
			}

IL_0081_1:
			{
				List_1_t685540B7055415D10FB811FE128E1F88BFB54174* L_25 = V_1;
				NullCheck(L_25);
				Enumerator_tD9EDB264AFBA4322B77EA0BF9B8550AD451C71F4 L_26;
				L_26 = List_1_GetEnumerator_m9050D065887A962A990FDCFFAE19E12F55B6752A(L_25, List_1_GetEnumerator_m9050D065887A962A990FDCFFAE19E12F55B6752A_RuntimeMethod_var);
				V_7 = L_26;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a8_1:
					{
						Enumerator_Dispose_m47EBBB3DD9A4AB6346FF58E7D9061A3F578147AD((&V_7), Enumerator_Dispose_m47EBBB3DD9A4AB6346FF58E7D9061A3F578147AD_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_009d_2;
					}

IL_008b_2:
					{
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_27;
						L_27 = Enumerator_get_Current_m11768B3D2AECA70127884D0DAA2485176FAA086D_inline((&V_7), Enumerator_get_Current_m11768B3D2AECA70127884D0DAA2485176FAA086D_RuntimeMethod_var);
						V_8 = L_27;
						LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_28 = V_0;
						State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_29 = V_8;
						NullCheck(L_28);
						bool L_30;
						L_30 = LinkedList_1_Remove_m2853450FA66EF1F59F7D0413AE7AC31B70FC50C1(L_28, L_29, LinkedList_1_Remove_m2853450FA66EF1F59F7D0413AE7AC31B70FC50C1_RuntimeMethod_var);
					}

IL_009d_2:
					{
						bool L_31;
						L_31 = Enumerator_MoveNext_m6E3BA60E028CD09E61299428AABC17AD5A4A1D87((&V_7), Enumerator_MoveNext_m6E3BA60E028CD09E61299428AABC17AD5A4A1D87_RuntimeMethod_var);
						if (L_31)
						{
							goto IL_008b_2;
						}
					}
					{
						goto IL_00b6_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b6_1:
			{
				RuntimeObject* L_32 = V_2;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_00cd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cd:
	{
		LinkedList_1_t599DF713B74B0E390C77CA95A26B883AE1AB6E3F* L_34 = V_0;
		return L_34;
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
// Method Definition Index: 88915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken__ctor_mF2C8BF4E71316ADEB35CEF76BBBE9B9DFBDE3BD4 (SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_previous, int32_t ___1_value, int32_t ___2_bitCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = ___0_previous;
		il2cpp_codegen_runtime_class_init_inline(Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var);
		Token__ctor_m73F7AE59E69A890CB39C59178216175E574AE8BA(__this, L_0, NULL);
		int32_t L_1 = ___1_value;
		__this->___value = ((int16_t)L_1);
		int32_t L_2 = ___2_bitCount;
		__this->___bitCount = ((int16_t)L_2);
		return;
	}
}
// Method Definition Index: 88916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleToken_appendTo_m2D22A94C73581343E71708799E23149E6EEE100D (SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A* __this, BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* ___0_bitArray, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_text, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_0 = ___0_bitArray;
		int16_t L_1 = __this->___value;
		int16_t L_2 = __this->___bitCount;
		NullCheck(L_0);
		BitArray_appendBits_mB4B9167904A11E482D118213188C1EC168A5C07A(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 88917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleToken_ToString_m84ECE585D50023957848D1F36B3F383B9681846F (SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int16_t L_0 = __this->___value;
		int16_t L_1 = __this->___bitCount;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_1&((int32_t)31))))), 1))));
		int32_t L_2 = V_0;
		int16_t L_3 = __this->___bitCount;
		V_0 = ((int32_t)(L_2|((int32_t)(1<<((int32_t)((int32_t)L_3&((int32_t)31)))))));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->___bitCount;
		String_t* L_6;
		L_6 = SupportClass_ToBinaryString_m46E6565F217FF2201F558E2E5F126F8D6BF0266B(((int32_t)(L_4|((int32_t)(1<<((int32_t)((int32_t)L_5&((int32_t)31))))))), NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, 1, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_7, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_8;
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
// Method Definition Index: 88918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_token, int32_t ___1_mode, int32_t ___2_binaryBytes, int32_t ___3_bitCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = ___0_token;
		__this->___token = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token), (void*)L_0);
		int32_t L_1 = ___1_mode;
		__this->___mode = L_1;
		int32_t L_2 = ___2_binaryBytes;
		__this->___binaryShiftByteCount = L_2;
		int32_t L_3 = ___3_bitCount;
		__this->___bitCount = L_3;
		int32_t L_4 = ___2_binaryBytes;
		il2cpp_codegen_runtime_class_init_inline(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = State_calculateBinaryShiftCost_m7464EC8FFF2175390F8E1C1F3A3EA0D317F8F76B(L_4, NULL);
		__this->___binaryShiftCost = L_5;
		return;
	}
}
// Method Definition Index: 88919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___mode;
		return L_0;
	}
}
// Method Definition Index: 88920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* State_get_Token_mC54C75F96F63C194F78AACDD6F7D6D658055BC89 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = __this->___token;
		return L_0;
	}
}
// Method Definition Index: 88921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_m769EFA53CFDB9F195B4AB22AFF439170C6002088 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___binaryShiftByteCount;
		return L_0;
	}
}
// Method Definition Index: 88922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m192A14BCD04C70950486C46B0CE798BB5B65F6FF (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___bitCount;
		return L_0;
	}
}
// Method Definition Index: 88923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_appendFLGn_m804A72FC8EDCA2F298A417922CADE6AD28FE78A1 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_eci, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_0;
		L_0 = State_shiftAndAppend_m98BC26120D64F7D804DF7B8BA13355C6CBDE74D9(__this, 4, 0, NULL);
		NullCheck(L_0);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_1 = L_0->___token;
		V_0 = L_1;
		V_1 = 3;
		int32_t L_2 = ___0_eci;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_3 = V_0;
		NullCheck(L_3);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_4;
		L_4 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(L_3, 0, 3, NULL);
		V_0 = L_4;
		goto IL_0075;
	}

IL_001f:
	{
		int32_t L_5 = ___0_eci;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)999999))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD5C8785DD5916B8669E67C2A4B9435344A3846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&State_appendFLGn_m804A72FC8EDCA2F298A417922CADE6AD28FE78A1_RuntimeMethod_var)));
	}

IL_0032:
	{
		il2cpp_codegen_runtime_class_init_inline(AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ((AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_StaticFields*)il2cpp_codegen_static_fields_for(AztecWriter_t23B9A092EAD54A3C95DF939C09C80BE615C4FBD6_il2cpp_TypeInfo_var))->___DEFAULT_CHARSET;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_eci), NULL);
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_7, L_8);
		V_2 = L_9;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_11);
		NullCheck(L_10);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_12;
		L_12 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), 3, NULL);
		V_0 = L_12;
		V_3 = 0;
		goto IL_0067;
	}

IL_0053:
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_18;
		L_18 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(L_13, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, ((int32_t)48))), 2)), 4, NULL);
		V_0 = L_18;
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0067:
	{
		int32_t L_20 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_23)->max_length)), 4))));
	}

IL_0075:
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_24 = V_0;
		int32_t L_25 = __this->___mode;
		int32_t L_26 = __this->___bitCount;
		int32_t L_27 = V_1;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_28 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)il2cpp_codegen_object_new(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1(L_28, L_24, L_25, 0, ((int32_t)il2cpp_codegen_add(L_26, L_27)), NULL);
		return L_28;
	}
}
// Method Definition Index: 88924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_latchAndAppend_mFF8F4D7DFF4D214126A44866D4D6931F5ECBF374 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___bitCount;
		V_0 = L_0;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_1 = __this->___token;
		V_1 = L_1;
		int32_t L_2 = ___0_mode;
		int32_t L_3 = __this->___mode;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___LATCH_TABLE;
		int32_t L_5 = __this->___mode;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___0_mode;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_11 = V_1;
		int32_t L_12 = V_3;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_14;
		L_14 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(L_11, ((int32_t)(L_12&((int32_t)65535))), ((int32_t)(L_13>>((int32_t)16))), NULL);
		V_1 = L_14;
		int32_t L_15 = V_0;
		int32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(L_16>>((int32_t)16)))));
	}

IL_003f:
	{
		int32_t L_17 = ___0_mode;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 5;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 4;
	}

IL_0047:
	{
		V_2 = G_B5_0;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_18 = V_1;
		int32_t L_19 = ___1_value;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_21;
		L_21 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(L_18, L_19, L_20, NULL);
		V_1 = L_21;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_22 = V_1;
		int32_t L_23 = ___0_mode;
		int32_t L_24 = V_0;
		int32_t L_25 = V_2;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_26 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)il2cpp_codegen_object_new(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1(L_26, L_22, L_23, 0, ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		return L_26;
	}
}
// Method Definition Index: 88925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_shiftAndAppend_m98BC26120D64F7D804DF7B8BA13355C6CBDE74D9 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_mode, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* G_B2_0 = NULL;
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* G_B3_1 = NULL;
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = __this->___token;
		int32_t L_1 = __this->___mode;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
		G_B1_0 = L_0;
	}
	{
		G_B3_0 = 5;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_2 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___SHIFT_TABLE;
		int32_t L_3 = __this->___mode;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___0_mode;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_0;
		NullCheck(G_B3_1);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_10;
		L_10 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(G_B3_1, L_8, L_9, NULL);
		int32_t L_11 = ___1_value;
		NullCheck(L_10);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_12;
		L_12 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(L_10, L_11, 5, NULL);
		int32_t L_13 = __this->___mode;
		int32_t L_14 = __this->___bitCount;
		int32_t L_15 = V_0;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_16 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)il2cpp_codegen_object_new(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1(L_16, L_12, L_13, 0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), 5)), NULL);
		return L_16;
	}
}
// Method Definition Index: 88926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_addBinaryShiftChar_m45EEF05A6534F2AE47D6DF27186C5FD881AF84E5 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B9_0 = 0;
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = __this->___token;
		V_0 = L_0;
		int32_t L_1 = __this->___mode;
		V_1 = L_1;
		int32_t L_2 = __this->___bitCount;
		V_2 = L_2;
		int32_t L_3 = __this->___mode;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = __this->___mode;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_5 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___LATCH_TABLE;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_11 = V_0;
		int32_t L_12 = V_5;
		int32_t L_13 = V_5;
		NullCheck(L_11);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_14;
		L_14 = Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258(L_11, ((int32_t)(L_12&((int32_t)65535))), ((int32_t)(L_13>>((int32_t)16))), NULL);
		V_0 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(L_16>>((int32_t)16)))));
		V_1 = 0;
	}

IL_0050:
	{
		int32_t L_17 = __this->___binaryShiftByteCount;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_18 = __this->___binaryShiftByteCount;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)31))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_19 = __this->___binaryShiftByteCount;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)62))))
		{
			goto IL_006f;
		}
	}
	{
		G_B9_0 = 8;
		goto IL_0075;
	}

IL_006f:
	{
		G_B9_0 = ((int32_t)9);
		goto IL_0075;
	}

IL_0073:
	{
		G_B9_0 = ((int32_t)18);
	}

IL_0075:
	{
		V_3 = G_B9_0;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = __this->___binaryShiftByteCount;
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_25 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)il2cpp_codegen_object_new(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1(L_25, L_20, L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), ((int32_t)il2cpp_codegen_add(L_23, L_24)), NULL);
		V_4 = L_25;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = L_26->___binaryShiftByteCount;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)2078)))))
		{
			goto IL_00a4;
		}
	}
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_28 = V_4;
		int32_t L_29 = ___0_index;
		NullCheck(L_28);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_30;
		L_30 = State_endBinaryShift_m02C88F79A8E74D7DED5A91799EDEE5394C065FBD(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		V_4 = L_30;
	}

IL_00a4:
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_31 = V_4;
		return L_31;
	}
}
// Method Definition Index: 88927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* State_endBinaryShift_m02C88F79A8E74D7DED5A91799EDEE5394C065FBD (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___binaryShiftByteCount;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_1 = __this->___token;
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___binaryShiftByteCount;
		int32_t L_4 = __this->___binaryShiftByteCount;
		NullCheck(L_1);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_5;
		L_5 = Token_addBinaryShift_m6726A3EE5EC07F368FDF077D97727271C1A05708(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), L_4, NULL);
		int32_t L_6 = __this->___mode;
		int32_t L_7 = __this->___bitCount;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_8 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)il2cpp_codegen_object_new(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1(L_8, L_5, L_6, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 88928
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool State_isBetterThanOrEqualTo_m956D4AA59DF4C64BD76B4BECF9918939B61C3A66 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitCount;
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___LATCH_TABLE;
		int32_t L_2 = __this->___mode;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_5 = ___0_other;
		NullCheck(L_5);
		int32_t L_6 = L_5->___mode;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_8>>((int32_t)16)))));
		int32_t L_9 = __this->___binaryShiftByteCount;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_10 = ___0_other;
		NullCheck(L_10);
		int32_t L_11 = L_10->___binaryShiftByteCount;
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_0;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_13 = ___0_other;
		NullCheck(L_13);
		int32_t L_14 = L_13->___binaryShiftCost;
		int32_t L_15 = __this->___binaryShiftCost;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_subtract(L_14, L_15))));
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_16 = __this->___binaryShiftByteCount;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_17 = ___0_other;
		NullCheck(L_17);
		int32_t L_18 = L_17->___binaryShiftByteCount;
		if ((((int32_t)L_16) <= ((int32_t)L_18)))
		{
			goto IL_005a;
		}
	}
	{
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_19 = ___0_other;
		NullCheck(L_19);
		int32_t L_20 = L_19->___binaryShiftByteCount;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)10)));
	}

IL_005a:
	{
		int32_t L_22 = V_0;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_23 = ___0_other;
		NullCheck(L_23);
		int32_t L_24 = L_23->___bitCount;
		return (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 88929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* State_toBitArray_mA46C0EAE1B67B45804B381D16476B3E08516024B (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD198B1BAFF24ED7DF6D1173CDEE13ACFD6FA1E32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0372D1C5A2A1BFC49305790F81CC145EE71BFDF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDD8C81B7E529A2F81E8451436BA1BD2CAD9A2DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7E0CC1F41BA4D5AA2748BBA5147E7A2ED504BF29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* V_0 = NULL;
	BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* V_1 = NULL;
	Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* V_2 = NULL;
	int32_t V_3 = 0;
	{
		List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* L_0 = (List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63*)il2cpp_codegen_object_new(List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63_il2cpp_TypeInfo_var);
		List_1__ctor_m0372D1C5A2A1BFC49305790F81CC145EE71BFDF7(L_0, List_1__ctor_m0372D1C5A2A1BFC49305790F81CC145EE71BFDF7_RuntimeMethod_var);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_text;
		NullCheck(L_1);
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_2;
		L_2 = State_endBinaryShift_m02C88F79A8E74D7DED5A91799EDEE5394C065FBD(__this, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_2);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_3 = L_2->___token;
		V_2 = L_3;
		goto IL_0025;
	}

IL_0017:
	{
		List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* L_4 = V_0;
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_5 = V_2;
		NullCheck(L_4);
		List_1_Add_mD198B1BAFF24ED7DF6D1173CDEE13ACFD6FA1E32_inline(L_4, L_5, List_1_Add_mD198B1BAFF24ED7DF6D1173CDEE13ACFD6FA1E32_RuntimeMethod_var);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_6 = V_2;
		NullCheck(L_6);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_7;
		L_7 = Token_get_Previous_mCB7101AD333616233C551D0F79C0208A90AC7D04_inline(L_6, NULL);
		V_2 = L_7;
	}

IL_0025:
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_8 = V_2;
		if (L_8)
		{
			goto IL_0017;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_9 = (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D*)il2cpp_codegen_object_new(BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D_il2cpp_TypeInfo_var);
		BitArray__ctor_mDBF6684C57B783D47B9A985782EE62DC15CC48B3(L_9, NULL);
		V_1 = L_9;
		List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mDD8C81B7E529A2F81E8451436BA1BD2CAD9A2DD3_inline(L_10, List_1_get_Count_mDD8C81B7E529A2F81E8451436BA1BD2CAD9A2DD3_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_004b;
	}

IL_0039:
	{
		List_1_t72B988B09500C3B78964DF5409BE8236EA79FE63* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_14;
		L_14 = List_1_get_Item_m7E0CC1F41BA4D5AA2748BBA5147E7A2ED504BF29(L_12, L_13, List_1_get_Item_m7E0CC1F41BA4D5AA2748BBA5147E7A2ED504BF29_RuntimeMethod_var);
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_text;
		NullCheck(L_14);
		VirtualActionInvoker2< BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_14, L_15, L_16);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_004b:
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 88930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* State_ToString_mF0657786FB7503FAD1317CE8EAA801D093E03F23 (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_StaticFields*)il2cpp_codegen_static_fields_for(HighLevelEncoder_t49D795FF693F7AA2BA4445A4AD20ED8825CE21AB_il2cpp_TypeInfo_var))->___MODE_NAMES;
		int32_t L_1 = __this->___mode;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->___bitCount;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		int32_t L_7 = __this->___binaryShiftByteCount;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral56B1BA74374AD8DF80D155ECBB6EEC7BFF94E852, L_3, L_6, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 88931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_calculateBinaryShiftCost_m7464EC8FFF2175390F8E1C1F3A3EA0D317F8F76B (int32_t ___0_binaryShiftByteCount, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_binaryShiftByteCount;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)62))))
		{
			goto IL_0008;
		}
	}
	{
		return ((int32_t)21);
	}

IL_0008:
	{
		int32_t L_1 = ___0_binaryShiftByteCount;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0010;
		}
	}
	{
		return ((int32_t)20);
	}

IL_0010:
	{
		int32_t L_2 = ___0_binaryShiftByteCount;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		return ((int32_t)10);
	}

IL_0017:
	{
		return 0;
	}
}
// Method Definition Index: 88932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__cctor_m8CD2F3EF6AE79E469301CE5787F1251691F1DA23 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = ((Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_StaticFields*)il2cpp_codegen_static_fields_for(Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var))->___EMPTY;
		State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* L_1 = (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2*)il2cpp_codegen_object_new(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var);
		State__ctor_m7D96325F6CCBF2483899BC67DEB93B09521A8EC1(L_1, L_0, 0, 0, 0, NULL);
		((State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_StaticFields*)il2cpp_codegen_static_fields_for(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var))->___INITIAL_STATE = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_StaticFields*)il2cpp_codegen_static_fields_for(State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2_il2cpp_TypeInfo_var))->___INITIAL_STATE), (void*)L_1);
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
// Method Definition Index: 88933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_m73F7AE59E69A890CB39C59178216175E574AE8BA (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* ___0_previous, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = ___0_previous;
		__this->___previous = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previous), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* Token_get_Previous_mCB7101AD333616233C551D0F79C0208A90AC7D04 (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = __this->___previous;
		return L_0;
	}
}
// Method Definition Index: 88935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* Token_add_m67446B831F1A72301E2E4519B3A7F17F3B2F1258 (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, int32_t ___0_value, int32_t ___1_bitCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_bitCount;
		SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A* L_2 = (SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A*)il2cpp_codegen_object_new(SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A_il2cpp_TypeInfo_var);
		SimpleToken__ctor_mF2C8BF4E71316ADEB35CEF76BBBE9B9DFBDE3BD4(L_2, __this, L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 88936
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* Token_addBinaryShift_m6726A3EE5EC07F368FDF077D97727271C1A05708 (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, int32_t ___0_start, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_byteCount;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)31))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___1_byteCount;
	}

IL_000a:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_byteCount;
		BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854* L_4 = (BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854*)il2cpp_codegen_object_new(BinaryShiftToken_t8AC366BB55B89C38598AC0B7477746FBAD9CB854_il2cpp_TypeInfo_var);
		BinaryShiftToken__ctor_m6C012760DCDE49BF29361E8C738985AEC208D6AE(L_4, __this, L_2, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 88938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__cctor_m430C151991DCAB66C5263A67B395B0D7C84FF5CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A* L_0 = (SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A*)il2cpp_codegen_object_new(SimpleToken_t938367C29975B81991AEB95EB049064B4CE2A04A_il2cpp_TypeInfo_var);
		SimpleToken__ctor_mF2C8BF4E71316ADEB35CEF76BBBE9B9DFBDE3BD4(L_0, (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23*)NULL, 0, 0, NULL);
		((Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_StaticFields*)il2cpp_codegen_static_fields_for(Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var))->___EMPTY = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_StaticFields*)il2cpp_codegen_static_fields_for(Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23_il2cpp_TypeInfo_var))->___EMPTY), (void*)L_0);
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
// Method Definition Index: 88941
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelData__ctor_m9CF7726C3FFDEEF03F9B4624F747C39AB0BFC5CC (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_width, int32_t ___1_height, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pixels, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_height;
		PixelData_set_Height_mDE7D31262F024ACD1C602E7D5E7E4DF9FD952336_inline(__this, L_0, NULL);
		int32_t L_1 = ___0_width;
		PixelData_set_Width_m53C983C078BC83AFA022E8098DFBAE7150395C47_inline(__this, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pixels;
		PixelData_set_Pixels_m364772D1E8C13A5EDD95E0DCC760BA5B2CAB8E1A_inline(__this, L_2, NULL);
		return;
	}
}
// Method Definition Index: 88942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PixelData_get_Pixels_mC30595A1DA77594B7DA9BCA5B2D1BB2BC37A558E (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CPixelsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelData_set_Pixels_m364772D1E8C13A5EDD95E0DCC760BA5B2CAB8E1A (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CPixelsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPixelsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PixelData_get_Width_mE5AACF356EDA9AC79AB2386FF41EA6F1BD5CB710 (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelData_set_Width_m53C983C078BC83AFA022E8098DFBAE7150395C47 (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PixelData_get_Height_mEEFDCEC9283D2E4B221F2B334698D4B0DD011838 (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelData_set_Height_mDE7D31262F024ACD1C602E7D5E7E4DF9FD952336 (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField = L_0;
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
// Method Definition Index: 88948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 PixelDataRenderer_get_Foreground_mC272AF3353563465F711AB675D96C39594AFE329 (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CForegroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelDataRenderer_set_Foreground_mF0EE56C5925AB55F28CAB2A933F88A31697DCCF9 (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CForegroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CForegroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15 (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88951
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelDataRenderer_set_Background_m31E9B2831B96EFA4DA35075958C653C81531AB10 (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CBackgroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBackgroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelDataRenderer__ctor_m8770DAEE4FDA2B9128F089ABC763CC7A0F094ACB (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0;
		L_0 = Color_get_Black_m9E2140212109A218A378C54E16B683290A7D3272(NULL);
		PixelDataRenderer_set_Foreground_mF0EE56C5925AB55F28CAB2A933F88A31697DCCF9_inline(__this, L_0, NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_1;
		L_1 = Color_get_White_mC907A1EB3D7562346DD188F3B476C3BD3C8D44F6(NULL);
		PixelDataRenderer_set_Background_m31E9B2831B96EFA4DA35075958C653C81531AB10_inline(__this, L_1, NULL);
		return;
	}
}
// Method Definition Index: 88953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* PixelDataRenderer_Render_mBB991C634C9D23A1CE18E4E1437AA69900592C06 (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_matrix;
		int32_t L_1 = ___1_format;
		String_t* L_2 = ___2_content;
		PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* L_3;
		L_3 = PixelDataRenderer_Render_m39807C1BA6286998A9EB0D04ED14FE5EDA17BB61(__this, L_0, L_1, L_2, (EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802*)NULL, NULL);
		return L_3;
	}
}
// Method Definition Index: 88954
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* PixelDataRenderer_Render_m39807C1BA6286998A9EB0D04ED14FE5EDA17BB61 (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_matrix;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_0, NULL);
		V_0 = L_1;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_2 = ___0_matrix;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_2, NULL);
		V_1 = L_3;
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_4 = ___3_options;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_5 = ___3_options;
		NullCheck(L_5);
		bool L_6;
		L_6 = EncodingOptions_get_PureBarcode_m1C708F7A8D4C62343CD89C09E66A7E6E1AEEDEDF(L_5, NULL);
		if (L_6)
		{
			goto IL_0062;
		}
	}

IL_001b:
	{
		String_t* L_7 = ___2_content;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_9 = ___1_format;
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = ___1_format;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = ___1_format;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)128))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_12 = ___1_format;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)64))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___1_format;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_14 = ___1_format;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)256))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___1_format;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)16384))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = ___1_format;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)131072))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_17 = ___1_format;
		G_B14_0 = ((((int32_t)L_17) == ((int32_t)((int32_t)262144)))? 1 : 0);
		goto IL_0063;
	}

IL_005f:
	{
		G_B14_0 = 1;
		goto IL_0063;
	}

IL_0062:
	{
		G_B14_0 = 0;
	}

IL_0063:
	{
		if (G_B14_0)
		{
			goto IL_0068;
		}
	}
	{
		G_B17_0 = 0;
		goto IL_006a;
	}

IL_0068:
	{
		G_B17_0 = ((int32_t)16);
	}

IL_006a:
	{
		V_2 = G_B17_0;
		V_3 = 1;
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_18 = ___3_options;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_19 = ___3_options;
		NullCheck(L_19);
		bool L_20;
		L_20 = EncodingOptions_get_NoPadding_m655FC2D094890742C0FE72831DCEFC5C4425D1AE(L_19, NULL);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_21 = ___3_options;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = EncodingOptions_get_Width_m0C9914DDD4EAF5E0C05B1E970F9607A31EB6D4AF(L_21, NULL);
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_008c;
		}
	}
	{
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_24 = ___3_options;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = EncodingOptions_get_Width_m0C9914DDD4EAF5E0C05B1E970F9607A31EB6D4AF(L_24, NULL);
		V_0 = L_25;
	}

IL_008c:
	{
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_26 = ___3_options;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = EncodingOptions_get_Height_m6DE41C09891B45AD6A7A63736121F998629AA29A(L_26, NULL);
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_009e;
		}
	}
	{
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_29 = ___3_options;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = EncodingOptions_get_Height_m6DE41C09891B45AD6A7A63736121F998629AA29A(L_29, NULL);
		V_1 = L_30;
	}

IL_009e:
	{
		int32_t L_31 = V_0;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_32 = ___0_matrix;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_32, NULL);
		V_3 = ((int32_t)(L_31/L_33));
		int32_t L_34 = V_3;
		int32_t L_35 = V_1;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_36 = ___0_matrix;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_36, NULL);
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)(L_35/L_37)))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_38 = V_1;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_39 = ___0_matrix;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_39, NULL);
		V_3 = ((int32_t)(L_38/L_40));
	}

IL_00bb:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_1;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c1;
		}
	}
	{
		V_2 = 0;
	}

IL_00c1:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_43, L_44)), 4)));
		V_4 = L_45;
		V_5 = 0;
		V_6 = 0;
		goto IL_01f4;
	}

IL_00d8:
	{
		V_7 = 0;
		goto IL_01e6;
	}

IL_00e0:
	{
		V_8 = 0;
		goto IL_015b;
	}

IL_00e5:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_46 = ___0_matrix;
		int32_t L_47 = V_8;
		int32_t L_48 = V_6;
		NullCheck(L_46);
		bool L_49;
		L_49 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_46, L_47, L_48, NULL);
		if (L_49)
		{
			goto IL_00f9;
		}
	}
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_50;
		L_50 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		G_B33_0 = L_50;
		goto IL_00ff;
	}

IL_00f9:
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_51;
		L_51 = PixelDataRenderer_get_Foreground_mC272AF3353563465F711AB675D96C39594AFE329_inline(__this, NULL);
		G_B33_0 = L_51;
	}

IL_00ff:
	{
		V_9 = G_B33_0;
		V_10 = 0;
		goto IL_0150;
	}

IL_0106:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_4;
		int32_t L_53 = V_5;
		int32_t L_54 = L_53;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		uint8_t L_55;
		L_55 = Color_get_B_mC668C85173CDC211AC0E2FEB3E6C36E9C57DCC61((&V_9), NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (uint8_t)L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_4;
		int32_t L_57 = V_5;
		int32_t L_58 = L_57;
		V_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		uint8_t L_59;
		L_59 = Color_get_G_m8BBF290336C0D938F2546AB296B002C9995B3BAA((&V_9), NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = L_61;
		V_5 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		uint8_t L_63;
		L_63 = Color_get_R_mA69925F53F4EF7AC1A3B4A94B9F4ABEA72662951((&V_9), NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)L_63);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_4;
		int32_t L_65 = V_5;
		int32_t L_66 = L_65;
		V_5 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		uint8_t L_67;
		L_67 = Color_get_A_m20373E97C1E01A1B27CD551E4FB1CB62DD381230((&V_9), NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)L_67);
		int32_t L_68 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0150:
	{
		int32_t L_69 = V_10;
		int32_t L_70 = V_3;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_71 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_015b:
	{
		int32_t L_72 = V_8;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_73 = ___0_matrix;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_73, NULL);
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_75 = V_3;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_76 = ___0_matrix;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_76, NULL);
		V_11 = ((int32_t)il2cpp_codegen_multiply(L_75, L_77));
		goto IL_01db;
	}

IL_0171:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_4;
		int32_t L_79 = V_5;
		int32_t L_80 = L_79;
		V_5 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_81;
		L_81 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_81;
		uint8_t L_82;
		L_82 = Color_get_B_mC668C85173CDC211AC0E2FEB3E6C36E9C57DCC61((&V_12), NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)L_82);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_4;
		int32_t L_84 = V_5;
		int32_t L_85 = L_84;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_86;
		L_86 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_86;
		uint8_t L_87;
		L_87 = Color_get_G_m8BBF290336C0D938F2546AB296B002C9995B3BAA((&V_12), NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)L_87);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = V_4;
		int32_t L_89 = V_5;
		int32_t L_90 = L_89;
		V_5 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_91;
		L_91 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_91;
		uint8_t L_92;
		L_92 = Color_get_R_mA69925F53F4EF7AC1A3B4A94B9F4ABEA72662951((&V_12), NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (uint8_t)L_92);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_4;
		int32_t L_94 = V_5;
		int32_t L_95 = L_94;
		V_5 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_96;
		L_96 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_96;
		uint8_t L_97;
		L_97 = Color_get_A_m20373E97C1E01A1B27CD551E4FB1CB62DD381230((&V_12), NULL);
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (uint8_t)L_97);
		int32_t L_98 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01db:
	{
		int32_t L_99 = V_11;
		int32_t L_100 = V_0;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_101 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01e6:
	{
		int32_t L_102 = V_7;
		int32_t L_103 = V_3;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_104 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_01f4:
	{
		int32_t L_105 = V_6;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_106 = ___0_matrix;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_106, NULL);
		int32_t L_108 = V_2;
		if ((((int32_t)L_105) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_107, L_108)))))
		{
			goto IL_00d8;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_109 = ___0_matrix;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_109, NULL);
		int32_t L_111 = V_3;
		int32_t L_112 = V_2;
		V_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_110, L_111)), L_112));
		goto IL_028b;
	}

IL_0211:
	{
		V_14 = 0;
		goto IL_0280;
	}

IL_0216:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = V_4;
		int32_t L_114 = V_5;
		int32_t L_115 = L_114;
		V_5 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_116;
		L_116 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_116;
		uint8_t L_117;
		L_117 = Color_get_B_mC668C85173CDC211AC0E2FEB3E6C36E9C57DCC61((&V_12), NULL);
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (uint8_t)L_117);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_4;
		int32_t L_119 = V_5;
		int32_t L_120 = L_119;
		V_5 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_121;
		L_121 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_121;
		uint8_t L_122;
		L_122 = Color_get_G_m8BBF290336C0D938F2546AB296B002C9995B3BAA((&V_12), NULL);
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (uint8_t)L_122);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = V_4;
		int32_t L_124 = V_5;
		int32_t L_125 = L_124;
		V_5 = ((int32_t)il2cpp_codegen_add(L_125, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_126;
		L_126 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_126;
		uint8_t L_127;
		L_127 = Color_get_R_mA69925F53F4EF7AC1A3B4A94B9F4ABEA72662951((&V_12), NULL);
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (uint8_t)L_127);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = V_4;
		int32_t L_129 = V_5;
		int32_t L_130 = L_129;
		V_5 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_131;
		L_131 = PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline(__this, NULL);
		V_12 = L_131;
		uint8_t L_132;
		L_132 = Color_get_A_m20373E97C1E01A1B27CD551E4FB1CB62DD381230((&V_12), NULL);
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (uint8_t)L_132);
		int32_t L_133 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_133, 1));
	}

IL_0280:
	{
		int32_t L_134 = V_14;
		int32_t L_135 = V_0;
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_0216;
		}
	}
	{
		int32_t L_136 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_028b:
	{
		int32_t L_137 = V_13;
		int32_t L_138 = V_1;
		if ((((int32_t)L_137) < ((int32_t)L_138)))
		{
			goto IL_0211;
		}
	}
	{
		int32_t L_139 = V_0;
		int32_t L_140 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = V_4;
		PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* L_142 = (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6*)il2cpp_codegen_object_new(PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6_il2cpp_TypeInfo_var);
		PixelData__ctor_m9CF7726C3FFDEEF03F9B4624F747C39AB0BFC5CC(L_142, L_139, L_140, L_141, NULL);
		return L_142;
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
// Method Definition Index: 88955
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 SvgRenderer_get_Foreground_mE7BEEEFE29D307C7F2C5F06426B3EDEA88EDC6C3 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CForegroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88956
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_set_Foreground_mCA8A8DE219C4C6268EB1FC507AC5F009035912E5 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CForegroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CForegroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88957
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 SvgRenderer_get_Background_m4E6C129CFB7203E0FFCB40D5E2E49BDA43885519 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88958
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_set_Background_mA018A3794C69A3F93EF0B15DB61B67FCF65EEB66 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CBackgroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBackgroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgRenderer_get_FontName_m49BEEE0CB733A1F94BC38CD6E20B3F3CBAA0898A (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___U3CFontNameU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88960
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_set_FontName_mBFB29026266B4B0B5C4E7A41D59B56D16A671D91 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_value;
		__this->___U3CFontNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFontNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SvgRenderer_get_FontSize_mFDF87211FD9CF7214CDB620329FB767BD23432A2 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CFontSizeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88962
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_set_FontSize_mF1FC4BD65C9CC6F9440542D4EBBE58036555069D (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFontSizeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer__ctor_mEAA298EC3CA614D939366118C35F3DBEB742A9E7 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0;
		L_0 = Color_get_Black_m9E2140212109A218A378C54E16B683290A7D3272(NULL);
		SvgRenderer_set_Foreground_mCA8A8DE219C4C6268EB1FC507AC5F009035912E5_inline(__this, L_0, NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_1;
		L_1 = Color_get_White_mC907A1EB3D7562346DD188F3B476C3BD3C8D44F6(NULL);
		SvgRenderer_set_Background_mA018A3794C69A3F93EF0B15DB61B67FCF65EEB66_inline(__this, L_1, NULL);
		return;
	}
}
// Method Definition Index: 88964
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* SvgRenderer_Render_mC9EEFDED21592A72EC349A4A4493EFA04D80C6BC (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_matrix;
		int32_t L_1 = ___1_format;
		String_t* L_2 = ___2_content;
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_3;
		L_3 = SvgRenderer_Render_mB819096C9B65ECCAF2CAC7E7DDCF155BA8CD702D(__this, L_0, L_1, L_2, (EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802*)NULL, NULL);
		return L_3;
	}
}
// Method Definition Index: 88965
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* SvgRenderer_Render_mB819096C9B65ECCAF2CAC7E7DDCF155BA8CD702D (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SvgImage_t15A324168F2D769FC6F1B68841773253093E6514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* V_0 = NULL;
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_matrix;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_0, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_2 = ___0_matrix;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_2, NULL);
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_4 = (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514*)il2cpp_codegen_object_new(SvgImage_t15A324168F2D769FC6F1B68841773253093E6514_il2cpp_TypeInfo_var);
		SvgImage__ctor_m15AC7394833398D068018446D0F31BAADE9B55A6(L_4, L_1, L_3, NULL);
		V_0 = L_4;
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_5 = V_0;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_6 = ___0_matrix;
		int32_t L_7 = ___1_format;
		String_t* L_8 = ___2_content;
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_9 = ___3_options;
		SvgRenderer_Create_mA66C25C411D2B2D2BFFDA3C3D38C91505C406E88(__this, L_5, L_6, L_7, L_8, L_9, NULL);
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_10 = V_0;
		return L_10;
	}
}
// Method Definition Index: 88966
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_Create_mA66C25C411D2B2D2BFFDA3C3D38C91505C406E88 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* ___0_image, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___1_matrix, int32_t ___2_format, String_t* ___3_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___4_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04D617318442B519695D4A916E2601C2F206533);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	String_t* G_B27_0 = NULL;
	int32_t G_B30_0 = 0;
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___1_matrix;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_1 = ___1_matrix;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_1, NULL);
		V_0 = L_2;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_3 = ___1_matrix;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_3, NULL);
		V_1 = L_4;
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_5 = ___4_options;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* L_6 = ___4_options;
		NullCheck(L_6);
		bool L_7;
		L_7 = EncodingOptions_get_PureBarcode_m1C708F7A8D4C62343CD89C09E66A7E6E1AEEDEDF(L_6, NULL);
		if (L_7)
		{
			goto IL_0073;
		}
	}

IL_001f:
	{
		String_t* L_8 = ___3_content;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_10 = ___2_format;
		if ((((int32_t)L_10) == ((int32_t)4)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_11 = ___2_format;
		if ((((int32_t)L_11) == ((int32_t)8)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_12 = ___2_format;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)16))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_13 = ___2_format;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)128))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_14 = ___2_format;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)64))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_15 = ___2_format;
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_16 = ___2_format;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)256))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_17 = ___2_format;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)16384))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = ___2_format;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)32768))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_19 = ___2_format;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)131072))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_20 = ___2_format;
		G_B18_0 = ((((int32_t)L_20) == ((int32_t)((int32_t)262144)))? 1 : 0);
		goto IL_0074;
	}

IL_0070:
	{
		G_B18_0 = 1;
		goto IL_0074;
	}

IL_0073:
	{
		G_B18_0 = 0;
	}

IL_0074:
	{
		int32_t L_21 = G_B18_0;
		if (!L_21)
		{
			G_B23_0 = L_21;
			goto IL_0091;
		}
		G_B19_0 = L_21;
	}
	{
		int32_t L_22;
		L_22 = SvgRenderer_get_FontSize_mFDF87211FD9CF7214CDB620329FB767BD23432A2_inline(__this, NULL);
		if ((((int32_t)L_22) < ((int32_t)1)))
		{
			G_B21_0 = G_B19_0;
			goto IL_0088;
		}
		G_B20_0 = G_B19_0;
	}
	{
		int32_t L_23;
		L_23 = SvgRenderer_get_FontSize_mFDF87211FD9CF7214CDB620329FB767BD23432A2_inline(__this, NULL);
		G_B22_0 = L_23;
		G_B22_1 = G_B20_0;
		goto IL_008a;
	}

IL_0088:
	{
		G_B22_0 = ((int32_t)10);
		G_B22_1 = G_B21_0;
	}

IL_008a:
	{
		V_2 = G_B22_0;
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_add(L_25, 3))));
		G_B23_0 = G_B22_1;
	}

IL_0091:
	{
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_26 = ___0_image;
		NullCheck(L_26);
		SvgImage_AddHeader_m474D900519A6BEE72285198917E329A1A8537F9B(L_26, NULL);
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_27 = ___0_image;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_30;
		L_30 = SvgRenderer_get_Background_m4E6C129CFB7203E0FFCB40D5E2E49BDA43885519_inline(__this, NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_31;
		L_31 = SvgRenderer_get_Foreground_mE7BEEEFE29D307C7F2C5F06426B3EDEA88EDC6C3_inline(__this, NULL);
		NullCheck(L_27);
		SvgImage_AddTag_mC28654D7630E0296B0613AEE1009119A068B02D6(L_27, 0, 0, L_28, L_29, L_30, L_31, NULL);
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_32 = ___0_image;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_33 = ___1_matrix;
		SvgRenderer_AppendDarkCell_m7DD0A4A5F2B21108D01A17E8E1327BF2CE3691D8(L_32, L_33, 0, 0, NULL);
		if (!G_B23_0)
		{
			goto IL_00fe;
		}
	}
	{
		String_t* L_34;
		L_34 = SvgRenderer_get_FontName_m49BEEE0CB733A1F94BC38CD6E20B3F3CBAA0898A_inline(__this, NULL);
		bool L_35;
		L_35 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_34, NULL);
		if (L_35)
		{
			goto IL_00cd;
		}
	}
	{
		String_t* L_36;
		L_36 = SvgRenderer_get_FontName_m49BEEE0CB733A1F94BC38CD6E20B3F3CBAA0898A_inline(__this, NULL);
		G_B27_0 = L_36;
		goto IL_00d2;
	}

IL_00cd:
	{
		G_B27_0 = _stringLiteralF04D617318442B519695D4A916E2601C2F206533;
	}

IL_00d2:
	{
		V_3 = G_B27_0;
		int32_t L_37;
		L_37 = SvgRenderer_get_FontSize_mFDF87211FD9CF7214CDB620329FB767BD23432A2_inline(__this, NULL);
		if ((((int32_t)L_37) < ((int32_t)1)))
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_38;
		L_38 = SvgRenderer_get_FontSize_mFDF87211FD9CF7214CDB620329FB767BD23432A2_inline(__this, NULL);
		G_B30_0 = L_38;
		goto IL_00e6;
	}

IL_00e4:
	{
		G_B30_0 = ((int32_t)10);
	}

IL_00e6:
	{
		V_4 = G_B30_0;
		int32_t L_39 = ___2_format;
		String_t* L_40 = ___3_content;
		String_t* L_41;
		L_41 = SvgRenderer_ModifyContentDependingOnBarcodeFormat_m3B211927371911EA1EEC8F289461B81A05177B18(__this, L_39, L_40, NULL);
		___3_content = L_41;
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_42 = ___0_image;
		String_t* L_43 = ___3_content;
		String_t* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_42);
		SvgImage_AddText_m5078988442BAEFF801F6B9479EC0F371A9ABC9FE(L_42, L_43, L_44, L_45, NULL);
	}

IL_00fe:
	{
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_46 = ___0_image;
		NullCheck(L_46);
		SvgImage_AddEnd_mCBC335EB32AA76BA55B25CFAD55373D4E94759AE(L_46, NULL);
		return;
	}
}
// Method Definition Index: 88967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgRenderer_ModifyContentDependingOnBarcodeFormat_m3B211927371911EA1EEC8F289461B81A05177B18 (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, int32_t ___0_format, String_t* ___1_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneDimensionalCodeWriter_tE6F7387ACE00693FC900D087CAA8B9A13F069348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_format;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)128))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___0_format;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)64))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = ___0_format;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00f8;
	}

IL_001a:
	{
		int32_t L_3 = ___0_format;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16384))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_4 = ___0_format;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_00f8;
		}
	}

IL_002d:
	{
		String_t* L_5 = ___1_content;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_6) >= ((int32_t)8)))
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_7 = ___1_content;
		il2cpp_codegen_runtime_class_init_inline(OneDimensionalCodeWriter_tE6F7387ACE00693FC900D087CAA8B9A13F069348_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = OneDimensionalCodeWriter_CalculateChecksumDigitModulo10_m71D20DAB6F370B685E178C86188861C530C79932(L_7, NULL);
		___1_content = L_8;
	}

IL_003e:
	{
		String_t* L_9 = ___1_content;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_11 = ___1_content;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_11, 4, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
		___1_content = L_12;
		goto IL_00f8;
	}

IL_005d:
	{
		String_t* L_13 = ___1_content;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)13))))
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_15 = ___1_content;
		il2cpp_codegen_runtime_class_init_inline(OneDimensionalCodeWriter_tE6F7387ACE00693FC900D087CAA8B9A13F069348_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = OneDimensionalCodeWriter_CalculateChecksumDigitModulo10_m71D20DAB6F370B685E178C86188861C530C79932(L_15, NULL);
		___1_content = L_16;
	}

IL_006f:
	{
		String_t* L_17 = ___1_content;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((((int32_t)L_18) <= ((int32_t)7)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_19 = ___1_content;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_19, 7, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
		___1_content = L_20;
	}

IL_0086:
	{
		String_t* L_21 = ___1_content;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)1)))
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_23 = ___1_content;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_23, 1, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
		___1_content = L_24;
		goto IL_00f8;
	}

IL_009f:
	{
		String_t* L_25 = ___1_content;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)12))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_27 = ___1_content;
		il2cpp_codegen_runtime_class_init_inline(OneDimensionalCodeWriter_tE6F7387ACE00693FC900D087CAA8B9A13F069348_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = OneDimensionalCodeWriter_CalculateChecksumDigitModulo10_m71D20DAB6F370B685E178C86188861C530C79932(L_27, NULL);
		___1_content = L_28;
	}

IL_00b1:
	{
		String_t* L_29 = ___1_content;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		if ((((int32_t)L_30) <= ((int32_t)((int32_t)11))))
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_31 = ___1_content;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_31, ((int32_t)11), _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
		___1_content = L_32;
	}

IL_00ca:
	{
		String_t* L_33 = ___1_content;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		if ((((int32_t)L_34) <= ((int32_t)6)))
		{
			goto IL_00e1;
		}
	}
	{
		String_t* L_35 = ___1_content;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_35, 6, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
		___1_content = L_36;
	}

IL_00e1:
	{
		String_t* L_37 = ___1_content;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_39 = ___1_content;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_39, 1, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
		___1_content = L_40;
	}

IL_00f8:
	{
		String_t* L_41 = ___1_content;
		return L_41;
	}
}
// Method Definition Index: 88968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_AppendDarkCell_m7DD0A4A5F2B21108D01A17E8E1327BF2CE3691D8 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* ___0_image, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___1_matrix, int32_t ___2_offsetX, int32_t ___3_offSetY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___1_matrix;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_1 = ___1_matrix;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_1, NULL);
		V_0 = L_2;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_3 = ___1_matrix;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_7 = (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147*)il2cpp_codegen_object_new(BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m19005028FD02E114513B938F10B4DD067838DBD3(L_7, L_5, L_6, NULL);
		V_2 = L_7;
		V_3 = (bool)0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		goto IL_00cc;
	}

IL_002a:
	{
		V_8 = 0;
		goto IL_0095;
	}

IL_002f:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_8 = V_2;
		int32_t L_9 = V_6;
		int32_t L_10 = V_8;
		NullCheck(L_8);
		bool L_11;
		L_11 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_8, L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_008f;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_12 = V_2;
		int32_t L_13 = V_6;
		int32_t L_14 = V_8;
		NullCheck(L_12);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_12, L_13, L_14, (bool)1, NULL);
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_15 = ___1_matrix;
		int32_t L_16 = V_6;
		int32_t L_17 = V_8;
		NullCheck(L_15);
		bool L_18;
		L_18 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_15, L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0061;
		}
	}
	{
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_20 = V_6;
		V_4 = L_20;
		int32_t L_21 = V_8;
		V_5 = L_21;
		V_3 = (bool)1;
		goto IL_008f;
	}

IL_0061:
	{
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_008f;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_23 = ___1_matrix;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_24 = V_2;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = V_8;
		SvgRenderer_FindMaximumRectangle_mFFB8A070480E6118FFAE1F820E8A099E20798660(L_23, L_24, L_25, L_26, L_27, (&V_7), NULL);
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_28 = ___0_image;
		int32_t L_29 = V_4;
		int32_t L_30 = ___2_offsetX;
		int32_t L_31 = V_5;
		int32_t L_32 = ___3_offSetY;
		int32_t L_33 = V_7;
		int32_t L_34 = V_4;
		int32_t L_35 = V_8;
		int32_t L_36 = V_5;
		NullCheck(L_28);
		SvgImage_AddRec_m84A232E868A88FC23739EF281F3B59D9E4BAEF2D(L_28, ((int32_t)il2cpp_codegen_add(L_29, L_30)), ((int32_t)il2cpp_codegen_add(L_31, L_32)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_33, L_34)), 1)), ((int32_t)il2cpp_codegen_subtract(L_35, L_36)), NULL);
		V_3 = (bool)0;
	}

IL_008f:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0095:
	{
		int32_t L_38 = V_8;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_002f;
		}
	}
	{
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_00c6;
		}
	}
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_41 = ___1_matrix;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_42 = V_2;
		int32_t L_43 = V_4;
		int32_t L_44 = V_5;
		int32_t L_45 = V_1;
		SvgRenderer_FindMaximumRectangle_mFFB8A070480E6118FFAE1F820E8A099E20798660(L_41, L_42, L_43, L_44, L_45, (&V_7), NULL);
		SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* L_46 = ___0_image;
		int32_t L_47 = V_4;
		int32_t L_48 = ___2_offsetX;
		int32_t L_49 = V_5;
		int32_t L_50 = ___3_offSetY;
		int32_t L_51 = V_7;
		int32_t L_52 = V_4;
		int32_t L_53 = V_1;
		int32_t L_54 = V_5;
		NullCheck(L_46);
		SvgImage_AddRec_m84A232E868A88FC23739EF281F3B59D9E4BAEF2D(L_46, ((int32_t)il2cpp_codegen_add(L_47, L_48)), ((int32_t)il2cpp_codegen_add(L_49, L_50)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_51, L_52)), 1)), ((int32_t)il2cpp_codegen_subtract(L_53, L_54)), NULL);
		V_3 = (bool)0;
	}

IL_00c6:
	{
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00cc:
	{
		int32_t L_56 = V_6;
		int32_t L_57 = V_0;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 88969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_FindMaximumRectangle_mFFB8A070480E6118FFAE1F820E8A099E20798660 (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___1_processed, int32_t ___2_startPosX, int32_t ___3_startPosY, int32_t ___4_endPosY, int32_t* ___5_endPosX, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___5_endPosX;
		int32_t L_1 = ___2_startPosX;
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t L_2 = ___2_startPosX;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0040;
	}

IL_000a:
	{
		int32_t L_3 = ___3_startPosY;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000e:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_4 = ___0_matrix;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		bool L_7;
		L_7 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_4, L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001d:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___4_endPosY;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t* L_11 = ___5_endPosX;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		int32_t L_13 = ___3_startPosY;
		V_2 = L_13;
		goto IL_0037;
	}

IL_002a:
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_14 = ___1_processed;
		int32_t L_15 = V_0;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		BitMatrix_set_Item_mCC8F8FEFFB3AFB468E3AA049CE52B74721D214A7(L_14, L_15, L_16, (bool)1, NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0037:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = ___4_endPosY;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0040:
	{
		int32_t L_21 = V_0;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_22 = ___0_matrix;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_22, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_000a;
		}
	}
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
// Method Definition Index: 88970
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_get_Content_mCE0E5D7861294DD6F9525B9CDF4B39C6E9A62DFE (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = __this->___content;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		return L_1;
	}
}
// Method Definition Index: 88971
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_set_Content_mCB3CD6047623D127735BDBF69CEBD8B3B52F394B (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = __this->___content;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		String_t* L_1 = ___0_value;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___content;
		String_t* L_3 = ___0_value;
		NullCheck(L_2);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
// Method Definition Index: 88972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SvgImage_get_Height_mBCE650E2DDF029113650ABA8E4D07752478D232B (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_set_Height_m761DC550CFF8D0DA7E470875B75D8DF6A9288594 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SvgImage_get_Width_m7D76079464DB6E4AB275D8070A561FCCF4B6CCB1 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88975
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_set_Width_m6909E3D152D8691CF5A215BEC19C2CAAEC31780D (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage__ctor_m34E82B5CE99EA435670FFA2407B4889292B9E245 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___content = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___content), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88977
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage__ctor_m15AC7394833398D068018446D0F31BAADE9B55A6 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___content = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___content), (void*)L_0);
		int32_t L_1 = ___0_width;
		SvgImage_set_Width_m6909E3D152D8691CF5A215BEC19C2CAAEC31780D_inline(__this, L_1, NULL);
		int32_t L_2 = ___1_height;
		SvgImage_set_Height_m761DC550CFF8D0DA7E470875B75D8DF6A9288594_inline(__this, L_2, NULL);
		return;
	}
}
// Method Definition Index: 88978
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage__ctor_mA0CC991BE8C996A10C3FF65E9B25AA23F51BBBAC (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_content;
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_1, L_0, NULL);
		__this->___content = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___content), (void*)L_1);
		return;
	}
}
// Method Definition Index: 88979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_ToString_m76598802A685E22C0E647D821E1108B8DA302F9E (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = __this->___content;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_0);
		return L_1;
	}
}
// Method Definition Index: 88980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddHeader_m474D900519A6BEE72285198917E329A1A8537F9B (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4244A0AD8D8E879A46026C4EE9CB6318F9FA49D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4607F6A1AD253C7780023D486297757B840DE5EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC00B1DFB240934CD3E7CA4995672FDDB47B0D0);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = __this->___content;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral4244A0AD8D8E879A46026C4EE9CB6318F9FA49D8, NULL);
		StringBuilder_t* L_2 = __this->___content;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral4607F6A1AD253C7780023D486297757B840DE5EA, NULL);
		StringBuilder_t* L_4 = __this->___content;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralDAC00B1DFB240934CD3E7CA4995672FDDB47B0D0, NULL);
		return;
	}
}
// Method Definition Index: 88981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddEnd_mCBC335EB32AA76BA55B25CFAD55373D4E94759AE (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = __this->___content;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14, NULL);
		return;
	}
}
// Method Definition Index: 88982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddTag_mC28654D7630E0296B0613AEE1009119A068B02D6 (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_displaysizeX, int32_t ___1_displaysizeY, int32_t ___2_viewboxSizeX, int32_t ___3_viewboxSizeY, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___4_background, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___5_fill, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB26234AD9B99491D85E6696E8F1AB69F80181948);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD3F57AE65D16A0C02DFF491D897DC292AE9D229);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_displaysizeX;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___1_displaysizeY;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0074;
		}
	}

IL_0008:
	{
		StringBuilder_t* L_2 = __this->___content;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___2_viewboxSizeX;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___3_viewboxSizeY;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_13 = ___4_background;
		String_t* L_14;
		L_14 = SvgImage_GetColorRgb_mD887A13C0A8F3C166523E52595FFB8DDCCB3CD2A(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_12;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_16 = ___4_background;
		double L_17;
		L_17 = SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9(L_16, NULL);
		double L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.double_class, &L_18);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_15;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_21 = ___5_fill;
		String_t* L_22;
		L_22 = SvgImage_GetColorRgb_mD887A13C0A8F3C166523E52595FFB8DDCCB3CD2A(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_24 = ___5_fill;
		double L_25;
		L_25 = SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9(L_24, NULL);
		double L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_defaults.double_class, &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_23;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_29 = ___4_background;
		String_t* L_30;
		L_30 = SvgImage_GetBackgroundStyle_mD33B7C3A70683D8785F524E3FBB5B5D7BCEDFAAC(L_29, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralB26234AD9B99491D85E6696E8F1AB69F80181948, L_28, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_31, NULL);
		return;
	}

IL_0074:
	{
		StringBuilder_t* L_33 = __this->___content;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34;
		int32_t L_36 = ___2_viewboxSizeX;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_defaults.int32_class, &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_35;
		int32_t L_40 = ___3_viewboxSizeY;
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(il2cpp_defaults.int32_class, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_42);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_39;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_44 = ___4_background;
		String_t* L_45;
		L_45 = SvgImage_GetColorRgb_mD887A13C0A8F3C166523E52595FFB8DDCCB3CD2A(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_45);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_43;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_47 = ___4_background;
		double L_48;
		L_48 = SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9(L_47, NULL);
		double L_49 = L_48;
		RuntimeObject* L_50 = Box(il2cpp_defaults.double_class, &L_49);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_46;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_52 = ___5_fill;
		String_t* L_53;
		L_53 = SvgImage_GetColorRgb_mD887A13C0A8F3C166523E52595FFB8DDCCB3CD2A(L_52, NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_53);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_53);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_51;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_55 = ___5_fill;
		double L_56;
		L_56 = SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9(L_55, NULL);
		double L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_defaults.double_class, &L_57);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_58);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = L_54;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_60 = ___4_background;
		String_t* L_61;
		L_61 = SvgImage_GetBackgroundStyle_mD33B7C3A70683D8785F524E3FBB5B5D7BCEDFAAC(L_60, NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_61);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_59;
		int32_t L_63 = ___0_displaysizeX;
		int32_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_defaults.int32_class, &L_64);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_65);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_62;
		int32_t L_67 = ___1_displaysizeY;
		int32_t L_68 = L_67;
		RuntimeObject* L_69 = Box(il2cpp_defaults.int32_class, &L_68);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_69);
		String_t* L_70;
		L_70 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralDD3F57AE65D16A0C02DFF491D897DC292AE9D229, L_66, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, L_70, NULL);
		return;
	}
}
// Method Definition Index: 88983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddText_m5078988442BAEFF801F6B9479EC0F371A9ABC9FE (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, String_t* ___0_text, String_t* ___1_fontName, int32_t ___2_fontSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8CC98BA3B02A8F5844A8EA88CB55814B9552614);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = __this->___content;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2 = ___1_fontName;
		int32_t L_3 = ___2_fontSize;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		String_t* L_6 = ___0_text;
		NullCheck(L_0);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_m5638E9608118C6416DB9B288DDEC2F3F7521B900(L_0, L_1, _stringLiteralF8CC98BA3B02A8F5844A8EA88CB55814B9552614, L_2, L_5, L_6, NULL);
		return;
	}
}
// Method Definition Index: 88984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddRec_m84A232E868A88FC23739EF281F3B59D9E4BAEF2D (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_posX, int32_t ___1_posY, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E44E7200FA3E8E69C96E31FA57E58E51E715C);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = __this->___content;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___0_posX;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		int32_t L_8 = ___1_posY;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12 = ___2_width;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		int32_t L_16 = ___3_height;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.int32_class, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		NullCheck(L_0);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_0, L_1, _stringLiteralB85E44E7200FA3E8E69C96E31FA57E58E51E715C, L_15, NULL);
		return;
	}
}
// Method Definition Index: 88985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9 (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_alpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		uint8_t L_0;
		L_0 = Color_get_A_m20373E97C1E01A1B27CD551E4FB1CB62DD381230((&___0_alpha), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(((double)(((double)L_0)/(255.0))), 2, NULL);
		return L_1;
	}
}
// Method Definition Index: 88986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetBackgroundStyle_mD33B7C3A70683D8785F524E3FBB5B5D7BCEDFAAC (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66CA8F8656DDD19F4C1E9D42D1D74CEBAC69D477);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	double V_0 = 0.0;
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_color;
		double L_1;
		L_1 = SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9(L_0, NULL);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint8_t L_4;
		L_4 = Color_get_R_mA69925F53F4EF7AC1A3B4A94B9F4ABEA72662951((&___0_color), NULL);
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.byte_class, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint8_t L_8;
		L_8 = Color_get_G_m8BBF290336C0D938F2546AB296B002C9995B3BAA((&___0_color), NULL);
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.byte_class, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		uint8_t L_12;
		L_12 = Color_get_B_mC668C85173CDC211AC0E2FEB3E6C36E9C57DCC61((&___0_color), NULL);
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.byte_class, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		double L_16 = V_0;
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.double_class, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral66CA8F8656DDD19F4C1E9D42D1D74CEBAC69D477, L_15, NULL);
		return L_19;
	}
}
// Method Definition Index: 88987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetColorRgb_mD887A13C0A8F3C166523E52595FFB8DDCCB3CD2A (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		uint8_t L_2;
		L_2 = Color_get_R_mA69925F53F4EF7AC1A3B4A94B9F4ABEA72662951((&___0_color), NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		uint8_t L_6;
		L_6 = Color_get_G_m8BBF290336C0D938F2546AB296B002C9995B3BAA((&___0_color), NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		uint8_t L_10;
		L_10 = Color_get_B_mC668C85173CDC211AC0E2FEB3E6C36E9C57DCC61((&___0_color), NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		return L_12;
	}
}
// Method Definition Index: 88988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetColorRgba_m83E99F23B20B919820107C80CAB9F6D9EBCCAFA5 (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	double V_0 = 0.0;
	uint8_t V_1 = 0x0;
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_color;
		double L_1;
		L_1 = SvgImage_ConvertAlpha_mF0A79B01D7EDAE48FD9322726C36B1CFCDF704C9(L_0, NULL);
		V_0 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		uint8_t L_4;
		L_4 = Color_get_R_mA69925F53F4EF7AC1A3B4A94B9F4ABEA72662951((&___0_color), NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_1), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		uint8_t L_8;
		L_8 = Color_get_G_m8BBF290336C0D938F2546AB296B002C9995B3BAA((&___0_color), NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_1), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		uint8_t L_12;
		L_12 = Color_get_B_mC668C85173CDC211AC0E2FEB3E6C36E9C57DCC61((&___0_color), NULL);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_1), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16;
		L_16 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		return L_17;
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
// Method Definition Index: 88989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringRenderer_get_Foreground_m452D8C0FE1454128E8E7849120DA05D48A371220 (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0 = __this->___U3CForegroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringRenderer_set_Foreground_m531E3F2591EC906DDDD65FD1714AFE36A67BF9B5 (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0 = ___0_value;
		__this->___U3CForegroundU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringRenderer_get_Background_m624D8F858E8A4FE3293CD9AB72D47BF895540D5F (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0 = __this->___U3CBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringRenderer_set_Background_m197950221950674C18ADAA8AA78AB56A1C4EF86B (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0 = ___0_value;
		__this->___U3CBackgroundU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringRenderer_Render_m205A90D477D1959A0870311A93595BA00989F54B (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_matrix;
		int32_t L_1 = ___1_format;
		String_t* L_2 = ___2_content;
		String_t* L_3;
		L_3 = StringRenderer_Render_m8AAB385C9C603140A4CE410B54077A8A099DADFF(__this, L_0, L_1, L_2, (EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802*)NULL, NULL);
		return L_3;
	}
}
// Method Definition Index: 88994
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringRenderer_Render_m8AAB385C9C603140A4CE410B54077A8A099DADFF (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t232F9335F1A5C6196BEF25ACAA8DB25BB5DEC802* ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t G_B4_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B3_1 = NULL;
	Il2CppChar G_B5_0 = 0x0;
	int32_t G_B5_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B5_2 = NULL;
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_matrix;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_0, NULL);
		V_0 = L_1;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_2 = ___0_matrix;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_2, NULL);
		String_t* L_4;
		L_4 = StringRenderer_get_LineFeed_m92C9F44A1A67DCC0A513AD8CFF9FA84B45C2558F_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		int32_t L_6 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, L_5)), L_6)));
		V_1 = L_7;
		int32_t L_8 = 0;
		V_2 = L_8;
		V_3 = L_8;
		goto IL_0092;
	}

IL_0027:
	{
		V_4 = 0;
		goto IL_0052;
	}

IL_002c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_12 = ___0_matrix;
		int32_t L_13 = V_4;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		bool L_15;
		L_15 = BitMatrix_get_Item_mFB8960047F2513CC3FB5D1B1B63F0FB2F702719D(L_12, L_13, L_14, NULL);
		if (L_15)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_9;
			goto IL_0045;
		}
		G_B3_0 = L_11;
		G_B3_1 = L_9;
	}
	{
		Il2CppChar L_16;
		L_16 = StringRenderer_get_Background_m624D8F858E8A4FE3293CD9AB72D47BF895540D5F_inline(__this, NULL);
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_004b;
	}

IL_0045:
	{
		Il2CppChar L_17;
		L_17 = StringRenderer_get_Foreground_m452D8C0FE1454128E8E7849120DA05D48A371220_inline(__this, NULL);
		G_B5_0 = L_17;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_004b:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (Il2CppChar)G_B5_0);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		int32_t L_19 = V_4;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_20 = ___0_matrix;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline(L_20, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_22;
		L_22 = StringRenderer_get_LineFeed_m92C9F44A1A67DCC0A513AD8CFF9FA84B45C2558F_inline(__this, NULL);
		V_5 = L_22;
		V_6 = 0;
		goto IL_0083;
	}

IL_0069:
	{
		String_t* L_23 = V_5;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		V_7 = L_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_1;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		Il2CppChar L_29 = V_7;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)L_29);
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0083:
	{
		int32_t L_31 = V_6;
		String_t* L_32 = V_5;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0092:
	{
		int32_t L_35 = V_3;
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_36 = ___0_matrix;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline(L_36, NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0027;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = V_1;
		String_t* L_39;
		L_39 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_38, NULL);
		return L_39;
	}
}
// Method Definition Index: 88995
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringRenderer_get_LineFeed_m92C9F44A1A67DCC0A513AD8CFF9FA84B45C2558F (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___U3CLineFeedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88996
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringRenderer_set_LineFeed_mDACDA526B26B1725816611AE30ACBB0C0E8D6EC9 (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_value;
		__this->___U3CLineFeedU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLineFeedU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88997
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringRenderer__ctor_m1392C6C1F5CC0D06B0CFA690B6E577A47EA67AA4 (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		__this->___U3CForegroundU3Ek__BackingField = ((int32_t)9608);
		__this->___U3CBackgroundU3Ek__BackingField = ((int32_t)32);
		__this->___U3CLineFeedU3Ek__BackingField = _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLineFeedU3Ek__BackingField), (void*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 88869
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CorrectedParameter_get_Data_mB8BEB506F577CF8713A3999682D0E3FA0882207B_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88871
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CorrectedParameter_get_ErrorsCorrected_m2EBE9649A729E32CAA2A24192B11FD7CDCE61325_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CErrorsCorrectedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88862
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m4A1B1EED2046FEC88F32A98AF87ED1E9C342CADE_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88864
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_mC9C29A6C4DB8362F41B3C712C3A114D5E3DACD46_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88223
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_m9B143C53ADB0605A80438B0BAF2378420500A603_inline (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___width;
		return L_0;
	}
}
// Method Definition Index: 88224
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m93A7E63E7563078CD71A1DABB054CC9BD25C5329_inline (BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___height;
		return L_0;
	}
}
// Method Definition Index: 88422
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F* GridSampler_get_Instance_mB4B81EE1991E655C5BF7F43B3CE8193FD46D3E23_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_il2cpp_TypeInfo_var);
		GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F* L_0 = ((GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_StaticFields*)il2cpp_codegen_static_fields_for(GridSampler_t7B05C0003EA8E0765467A61898F366B53ED10F0F_il2cpp_TypeInfo_var))->___gridSampler;
		return L_0;
	}
}
// Method Definition Index: 88863
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_mCAEE6EF5C3DB4D38FFAC5696166C2F654758D8B8_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CXU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88865
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m6C71E1FA744C2CBD238768117E13119786AA34B3_inline (Point_tF78C8A9FE640C26BCC8D2403D2F716B4503807EF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CYU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88870
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorrectedParameter_set_Data_m187341829FFEE73BB7CF1B6EF44F52340AB17FC2_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88872
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorrectedParameter_set_ErrorsCorrected_m15024F47D7437243DFE6C779BB99B18D3C8D5726_inline (CorrectedParameter_tF11D69F7C9C6B821CE55ECB8DF698C720695C0B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorsCorrectedU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88194
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitArray_get_Size_m2640E1F97288113EAF8D844BBE512D5FA8CABAD1_inline (BitArray_t4A80EAC33ADD4E05126B11AEE58C901B6363C93D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
// Method Definition Index: 88875
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_isCompact_mE5BA86D41CD674D2E7938DFC244F2BD67D403482_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = ___0_value;
		__this->___U3CisCompactU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88877
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Size_mAF05457489085E22BA915B508A76E86A90551341_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSizeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88879
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Layers_m4DC35FD11180900FA835BCB099B3386519FE38C8_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLayersU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88881
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_CodeWords_m1AEFCEF23AF3344B22319A32D688C45C10D174EC_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCodeWordsU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88883
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AztecCode_set_Matrix_m8A7ABDB02F8F8167DA0D154BDD126B4C36F0886A_inline (AztecCode_tDF46FE12C4BB2FE281B7F73BBD81B94EC880815D* __this, BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BitMatrix_tC23C7B64FC9BD645367718EC32BFF22A00612147* L_0 = ___0_value;
		__this->___U3CMatrixU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatrixU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BitCount_m192A14BCD04C70950486C46B0CE798BB5B65F6FF_inline (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___bitCount;
		return L_0;
	}
}
// Method Definition Index: 88919
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_Mode_mD3D8C3BCC383964FBF7FE7C1BFEC1BD3184E15AE_inline (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___mode;
		return L_0;
	}
}
// Method Definition Index: 88921
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t State_get_BinaryShiftByteCount_m769EFA53CFDB9F195B4AB22AFF439170C6002088_inline (State_t38B3715BF6BD3F85F06C31D70584A4C6ABFB32D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___binaryShiftByteCount;
		return L_0;
	}
}
// Method Definition Index: 88934
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* Token_get_Previous_mCB7101AD333616233C551D0F79C0208A90AC7D04_inline (Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Token_t6D47F366D4C6BC924B4B47968D615B3CFA1D4F23* L_0 = __this->___previous;
		return L_0;
	}
}
// Method Definition Index: 88947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelData_set_Height_mDE7D31262F024ACD1C602E7D5E7E4DF9FD952336_inline (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88945
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelData_set_Width_m53C983C078BC83AFA022E8098DFBAE7150395C47_inline (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelData_set_Pixels_m364772D1E8C13A5EDD95E0DCC760BA5B2CAB8E1A_inline (PixelData_tDA2A0BD0AE6907BE714FD725B47B886B831D65E6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CPixelsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPixelsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88949
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelDataRenderer_set_Foreground_mF0EE56C5925AB55F28CAB2A933F88A31697DCCF9_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CForegroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CForegroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelDataRenderer_set_Background_m31E9B2831B96EFA4DA35075958C653C81531AB10_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CBackgroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBackgroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 PixelDataRenderer_get_Background_m0BB06F3591CAD9835E24D72706AF46F3A5119F15_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 PixelDataRenderer_get_Foreground_mC272AF3353563465F711AB675D96C39594AFE329_inline (PixelDataRenderer_tB9882BA8197FCBFE79C0500D5135BF6F28F9C555* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CForegroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88956
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Foreground_mCA8A8DE219C4C6268EB1FC507AC5F009035912E5_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CForegroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CForegroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88958
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Background_mA018A3794C69A3F93EF0B15DB61B67FCF65EEB66_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = ___0_value;
		__this->___U3CBackgroundU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBackgroundU3Ek__BackingField))->___name), (void*)NULL);
		return;
	}
}
// Method Definition Index: 88961
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SvgRenderer_get_FontSize_mFDF87211FD9CF7214CDB620329FB767BD23432A2_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CFontSizeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88957
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 SvgRenderer_get_Background_m4E6C129CFB7203E0FFCB40D5E2E49BDA43885519_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88955
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 SvgRenderer_get_Foreground_mE7BEEEFE29D307C7F2C5F06426B3EDEA88EDC6C3_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_0 = __this->___U3CForegroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88959
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SvgRenderer_get_FontName_m49BEEE0CB733A1F94BC38CD6E20B3F3CBAA0898A_inline (SvgRenderer_tCC4136C14CC9CADBB3D18D8F2FD7357CC5AD1645* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___U3CFontNameU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 701
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 88975
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgImage_set_Width_m6909E3D152D8691CF5A215BEC19C2CAAEC31780D_inline (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88973
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgImage_set_Height_m761DC550CFF8D0DA7E470875B75D8DF6A9288594_inline (SvgImage_t15A324168F2D769FC6F1B68841773253093E6514* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 2125
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		double L_0 = ___0_value;
		int32_t L_1 = ___1_digits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1(L_0, L_1, 0, NULL);
		return L_2;
	}
}
// Method Definition Index: 88995
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringRenderer_get_LineFeed_m92C9F44A1A67DCC0A513AD8CFF9FA84B45C2558F_inline (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___U3CLineFeedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88991
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StringRenderer_get_Background_m624D8F858E8A4FE3293CD9AB72D47BF895540D5F_inline (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0 = __this->___U3CBackgroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88989
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StringRenderer_get_Foreground_m452D8C0FE1454128E8E7849120DA05D48A371220_inline (StringRenderer_tCCDF130392F3585831AFC676900CF7B9C459E223* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0 = __this->___U3CForegroundU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 11401
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 59528
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 11393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 11444
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 11382
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
