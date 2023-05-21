#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// GridCellScript[]
struct GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// XOScript[]
struct XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AA
struct AA_t840936959FBBBE3B4BD9DEFA5164B75559DF2FF7;
// AIPlayer
struct AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734;
// Achievment1
struct Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Audio
struct Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Audio_Settings
struct Audio_Settings_t9EE3D6BFBCF6D98CCE660433AD19AF4CCAF64F97;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Choise
struct Choise_tC98E73115F45A9D543BBCACBC7E7E54AC7326BBF;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DialogManager
struct DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2;
// Dialogue
struct Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455;
// DownloadCount
struct DownloadCount_tF5635E1E9AE29FF2E50F6DF935A0E3E0A480D967;
// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10;
// Eva
struct Eva_t0E098CC7273CBF8BB080E5284ACCB1A241F43299;
// Eva_teleportation
struct Eva_teleportation_t30B47DE11C227553A77977AD0DF72C1A695D7043;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F;
// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GUIHandler
struct GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970;
// GameInfo
struct GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GridCellScript
struct GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B;
// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Liza
struct Liza_tA9CE07463B9859CC5685F9556827BB737C9A6F04;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NextScene
struct NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SavedAchievment
struct SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9;
// Saver
struct Saver_t24EF218FD4AF7C68D8863C2976D40019EB79AC2D;
// Saver_Set
struct Saver_Set_t582E4D83A59969E26606B348FCCA6FAAE06FC941;
// Scene
struct Scene_tF2B7ED0D6838C04B614A11173D235D0C06BDEFA8;
// ScoreController
struct ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// Spawner
struct Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// XOScript
struct XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7;
// achievment_manager
struct achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6;
// cameracontroller
struct cameracontroller_tFC54DC5BCD00DBC2C2EE815AB1CB07C20E212A22;
// controller_plate
struct controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C;
// dialAnimator
struct dialAnimator_t60790F18D2A12C7FF7968187CE5B892B3CF142D1;
// dialogManager
struct dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F;
// down_dialogue
struct down_dialogue_t4DE1D95B8A16C3313D009947AB3EFC0CB4228FF5;
// dream
struct dream_t7DDBBB287C4242AFE5BD7B041CEACE473F5ED044;
// firstDialogue
struct firstDialogue_t55B7C557B2BB2DDF44F216003790DAFD18A790BB;
// go_stolovaya
struct go_stolovaya_t6E4B8A33C8FC2DF55730E337C0274D66E042F640;
// go_to_cabinet1
struct go_to_cabinet1_tAC8162903FCDFBAD22BDBE111930860043EB3E2A;
// go_to_cabinet2
struct go_to_cabinet2_t008F30BB3B6F2B6475B8C033D316DD170C7C92A7;
// go_to_flat
struct go_to_flat_t90EB623AFD973590EE6BAA3256BE73C264A5E3B6;
// go_to_flat2
struct go_to_flat2_t0BC2A7781D2649A2CA8F2F017F4A796F5B52E56F;
// go_to_flat3
struct go_to_flat3_tA67133EB91A102F0536A79E9F5653F7FF1EF604C;
// go_to_mini_game1
struct go_to_mini_game1_t21168930EA297BB5BA87BD712E5F0BF4F0F3A874;
// menustart
struct menustart_tFD51D687776FF29E403225F1741D5CF6F9D0870B;
// minigame2_open
struct minigame2_open_t90ACA0867E9F328A4CB8746D6CC639CB335E140A;
// openmenu
struct openmenu_t684B1E74B1DA7FF30FCB3F88CBFD5C5BC7AF6B1D;
// rect
struct rect_t87132ADB36A371C14FD6B2FB8BB05AFF72AB1295;
// trigger_food_empty
struct trigger_food_empty_t2528BE39F13183B584DF4DE562CFF02F34699BE2;
// trigger_glass
struct trigger_glass_t00E115D96A800FF2028788ECFB27EA85D87F9EC3;
// trigger_room
struct trigger_room_t7B472F3CD0C41D76E2CAD8040818D36899634873;
// trigger_stolovaya
struct trigger_stolovaya_tEA2EE0C8A69A591BF39B61381A71B8CA4D0AB427;
// AIPlayer/<DoMove>d__3
struct U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E;
// Achievment1/<Wait>d__4
struct U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// DialogManager/<TypeSentence>d__14
struct U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6;
// DialogManager/<WaitSeconds>d__10
struct U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F;
// GUIHandler/<DoItsADrawAnim>d__34
struct U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF;
// GUIHandler/<DoPlayer1WinsAnim>d__32
struct U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA;
// GUIHandler/<DoPlayer2WinsAnim>d__33
struct U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Spawner/<SpawnRandomGameObject>d__5
struct U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2;
// achievment_manager/<Wait>d__4
struct U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7;
// dialogManager/<TypeSentence>d__17
struct U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56;
// dialogManager/<WaitSeconds>d__12
struct U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5;

IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CBD482FD0F16CD8337E23267B7BC55EA28FE29542EB79A68701A5527AED185EF_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABE73DE3B75DC71E00232E7C8F9C7786CB848D4;
IL2CPP_EXTERN_C String_t* _stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D;
IL2CPP_EXTERN_C String_t* _stringLiteral22FFFB964897545843A75ACB2C250C3F534D71C6;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral366F71B84E3DE7E09FDFBA7BA9AD6719296732FF;
IL2CPP_EXTERN_C String_t* _stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880;
IL2CPP_EXTERN_C String_t* _stringLiteral3C00005C6D090E3E1C8EF9DCC3B448B10F212B37;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFEC72748E3E1FE89698BF8DF9674DAF0857A72;
IL2CPP_EXTERN_C String_t* _stringLiteral3E331A419A1826DBBAF4888CD9B4F1D9E1796D66;
IL2CPP_EXTERN_C String_t* _stringLiteral4AF924A0B3A74B67768C9567B6CFBA2FA83EBE6D;
IL2CPP_EXTERN_C String_t* _stringLiteral54AC73CED89A45F5FBCAE0BD608B80D2E98F83AB;
IL2CPP_EXTERN_C String_t* _stringLiteral5F7F90A7CF2D57747B4AC2E2D0668D18A88D8924;
IL2CPP_EXTERN_C String_t* _stringLiteral68F77B0CC98F9B21CBB4A551561F3FA9D89FAA57;
IL2CPP_EXTERN_C String_t* _stringLiteral69755F1A52C21605DA9873EC1DA43191E678010C;
IL2CPP_EXTERN_C String_t* _stringLiteral7199DC4D518631B6B363364577E0CD199012D943;
IL2CPP_EXTERN_C String_t* _stringLiteral7469E1FC95F4ABC182BC1214C7D249E93924E816;
IL2CPP_EXTERN_C String_t* _stringLiteral74B5F970E290D4D8DDA85E02F1624E535D5E98E6;
IL2CPP_EXTERN_C String_t* _stringLiteral759EAA993FA42808278389EDD5B9B835166A59AC;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF68718767F1ECC2E397BC187AD2445A3355251;
IL2CPP_EXTERN_C String_t* _stringLiteral80463A526DEAE80A3D1DEE325D631B8FF241BA78;
IL2CPP_EXTERN_C String_t* _stringLiteral83ADAE6CEBBECBE7278FF10484DAD9669A442B19;
IL2CPP_EXTERN_C String_t* _stringLiteral83D70FCEFCA975C0148585632997E2DE8F1182ED;
IL2CPP_EXTERN_C String_t* _stringLiteral86A6184DAAE93091F8B63B45A1E617A15C427FE9;
IL2CPP_EXTERN_C String_t* _stringLiteral8CD5C3403DEA8A36E0009C0B5C4C11A02385F5C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3FE64651D88FF774EA13E37B9E156E441B9ACEB;
IL2CPP_EXTERN_C String_t* _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB98FAF367D8D8104EA150019B551036E5A7E550;
IL2CPP_EXTERN_C String_t* _stringLiteralABE97D5D48AAF9383A24FD0549BF70E04C7A1180;
IL2CPP_EXTERN_C String_t* _stringLiteralAC76D5A3C7B88DCDB729A99348BC53016B128D48;
IL2CPP_EXTERN_C String_t* _stringLiteralAC775EBA4F50D375635D2A9E217EC24FF658AE2D;
IL2CPP_EXTERN_C String_t* _stringLiteralB1CE7FED4E991ED73EFCCCB9EFC5D7907BC58CA4;
IL2CPP_EXTERN_C String_t* _stringLiteralB3E24127019316F65850790838C7F2C1177975E3;
IL2CPP_EXTERN_C String_t* _stringLiteralBF525511B79427965DE0A0812C55CF9FF75347DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BEDCA46343858B0AFA557FF9DAE61167A0F8B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC537ACBB5E1EC533D450847B81811332345029E5;
IL2CPP_EXTERN_C String_t* _stringLiteralD396246182378FA195A14D289A236DBF224DA294;
IL2CPP_EXTERN_C String_t* _stringLiteralD54A56582219823961747B2D97353A6F5471BEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12;
IL2CPP_EXTERN_C String_t* _stringLiteralD9A169E0BE4442E883D5D8A6A050A8BEF499E51A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB991014BC317EE99A5E92777236547ECC494D73;
IL2CPP_EXTERN_C String_t* _stringLiteralE033FC3E8BB8E73CFB1C048F77FC12186F6BE6CB;
IL2CPP_EXTERN_C String_t* _stringLiteralE13B9B474A20652C610BFE6465CB5F1CB1A89DC4;
IL2CPP_EXTERN_C String_t* _stringLiteralE3400E82FA686B4C3C4E6D356DDE26CE566DCB33;
IL2CPP_EXTERN_C String_t* _stringLiteralE634A86541A93E30FE17B4226431BB799E67B930;
IL2CPP_EXTERN_C String_t* _stringLiteralE7517CEB8C87D2467BF2580412C9E6FA1E96CE5B;
IL2CPP_EXTERN_C String_t* _stringLiteralE84AB6A35415470C742A12FDD315C2290FA2083D;
IL2CPP_EXTERN_C String_t* _stringLiteralECBA9F6AA7AF73E039D69DAB5CB94E8B141FAA6F;
IL2CPP_EXTERN_C String_t* _stringLiteralECF3DE2977E205979A6ACE9D1B2BE608579FF7E8;
IL2CPP_EXTERN_C String_t* _stringLiteralED2F964E01D6E7CB9B75362F182A3A90C3181C4D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF32DD1A37C7477ACB63A4C2B5E92699264551A8;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDE71CCFDD0038A86A46AB52F763801607A6B11;
IL2CPP_EXTERN_C String_t* _stringLiteralFCD7D8E98229C1B56E0515344B40709B99E1FAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF54A0A7F9CA1BBC3AEDB1CD086C4EA1944018BB;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D_m50532F26FD5DFFFC611E6FAC3CA5A7C8917C5D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisXOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7_mB0E5E0B9F3F8B20487C206A31B01BA95F624FEAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734_m79DE6CD3FC44FCCC932F59A2EF99DB10F3C8A1A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_mB4B19606DC8C557B4288092660C422AD0CC4DBF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoItsADrawAnimU3Ed__34_System_Collections_IEnumerator_Reset_m0A1B873492271ADEC645051FA5884B2E4B35F02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoMoveU3Ed__3_System_Collections_IEnumerator_Reset_m017007E07C4C923506FC43F1BA05CA240DF30EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoPlayer1WinsAnimU3Ed__32_System_Collections_IEnumerator_Reset_m73FC75988C650EDE47F05447B5DFBB399F7AFD6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoPlayer2WinsAnimU3Ed__33_System_Collections_IEnumerator_Reset_mAF25B60009BA238F7C3F01E36015D301971DF03A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnRandomGameObjectU3Ed__5_System_Collections_IEnumerator_Reset_m7460CBEC8CB440583F6FA18F405E6620ADAA5551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTypeSentenceU3Ed__14_System_Collections_IEnumerator_Reset_m60E5E227691AA60A4446023464E5DD6F3D239E7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTypeSentenceU3Ed__17_System_Collections_IEnumerator_Reset_mEFA6332776D5464818E45C23D346110EACFF82C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitSecondsU3Ed__10_System_Collections_IEnumerator_Reset_mB4EEB002AE02340CFC871DDDF95A6CE04A674942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitSecondsU3Ed__12_System_Collections_IEnumerator_Reset_m69925BF9725359A877FE133FE7810553F9FC4392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitU3Ed__4_System_Collections_IEnumerator_Reset_m05A6F6592F0C9149A961CB377FD16BDCEB9AB5CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitU3Ed__4_System_Collections_IEnumerator_Reset_m29740A4FAD52129CAC8E326D433DF4B3B9B22FEB_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// AA
struct AA_t840936959FBBBE3B4BD9DEFA5164B75559DF2FF7  : public RuntimeObject
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// GameInfo
struct GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174  : public RuntimeObject
{
	// GameInfo/GameStates GameInfo::_state
	int32_t ____state_2;
	// Player GameInfo::player1
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player1_3;
	// Player GameInfo::player2
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player2_4;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public RuntimeObject
{
	// System.Boolean Player::_isX
	bool ____isX_0;
	// System.String Player::_name
	String_t* ____name_1;
	// System.Boolean Player::_isHuman
	bool ____isHuman_2;
	// System.Int32 Player::score
	int32_t ___score_3;
	// System.Int32 Player::won
	int32_t ___won_4;
	// System.Int32 Player::lost
	int32_t ___lost_5;
	// System.Int32 Player::drawn
	int32_t ___drawn_6;
	// System.Int32 Player::totalGames
	int32_t ___totalGames_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AIPlayer/<DoMove>d__3
struct U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E  : public RuntimeObject
{
	// System.Int32 AIPlayer/<DoMove>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AIPlayer/<DoMove>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 AIPlayer/<DoMove>d__3::move
	int32_t ___move_2;
	// pieces AIPlayer/<DoMove>d__3::piece
	int32_t ___piece_3;
	// AIPlayer AIPlayer/<DoMove>d__3::<>4__this
	AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* ___U3CU3E4__this_4;
};

// Achievment1/<Wait>d__4
struct U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236  : public RuntimeObject
{
	// System.Int32 Achievment1/<Wait>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Achievment1/<Wait>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Achievment1 Achievment1/<Wait>d__4::<>4__this
	Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* ___U3CU3E4__this_2;
};

// DialogManager/<TypeSentence>d__14
struct U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6  : public RuntimeObject
{
	// System.Int32 DialogManager/<TypeSentence>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogManager/<TypeSentence>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String DialogManager/<TypeSentence>d__14::sentence
	String_t* ___sentence_2;
	// UnityEngine.UI.Text DialogManager/<TypeSentence>d__14::textBox
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textBox_3;
	// UnityEngine.AudioClip DialogManager/<TypeSentence>d__14::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_4;
	// DialogManager DialogManager/<TypeSentence>d__14::<>4__this
	DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* ___U3CU3E4__this_5;
	// System.Char[] DialogManager/<TypeSentence>d__14::<>s__1
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___U3CU3Es__1_6;
	// System.Int32 DialogManager/<TypeSentence>d__14::<>s__2
	int32_t ___U3CU3Es__2_7;
	// System.Char DialogManager/<TypeSentence>d__14::<letter>5__3
	Il2CppChar ___U3CletterU3E5__3_8;
	// System.Char[] DialogManager/<TypeSentence>d__14::<>s__4
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___U3CU3Es__4_9;
	// System.Int32 DialogManager/<TypeSentence>d__14::<>s__5
	int32_t ___U3CU3Es__5_10;
	// System.Char DialogManager/<TypeSentence>d__14::<letter>5__6
	Il2CppChar ___U3CletterU3E5__6_11;
};

// DialogManager/<WaitSeconds>d__10
struct U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F  : public RuntimeObject
{
	// System.Int32 DialogManager/<WaitSeconds>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogManager/<WaitSeconds>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single DialogManager/<WaitSeconds>d__10::x
	float ___x_2;
	// DialogManager DialogManager/<WaitSeconds>d__10::<>4__this
	DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* ___U3CU3E4__this_3;
};

// GUIHandler/<DoItsADrawAnim>d__34
struct U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF  : public RuntimeObject
{
	// System.Int32 GUIHandler/<DoItsADrawAnim>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GUIHandler/<DoItsADrawAnim>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GUIHandler GUIHandler/<DoItsADrawAnim>d__34::<>4__this
	GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* ___U3CU3E4__this_2;
};

// GUIHandler/<DoPlayer1WinsAnim>d__32
struct U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA  : public RuntimeObject
{
	// System.Int32 GUIHandler/<DoPlayer1WinsAnim>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GUIHandler/<DoPlayer1WinsAnim>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GUIHandler GUIHandler/<DoPlayer1WinsAnim>d__32::<>4__this
	GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* ___U3CU3E4__this_2;
};

// GUIHandler/<DoPlayer2WinsAnim>d__33
struct U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4  : public RuntimeObject
{
	// System.Int32 GUIHandler/<DoPlayer2WinsAnim>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GUIHandler/<DoPlayer2WinsAnim>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GUIHandler GUIHandler/<DoPlayer2WinsAnim>d__33::<>4__this
	GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* ___U3CU3E4__this_2;
};

// Spawner/<SpawnRandomGameObject>d__5
struct U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2  : public RuntimeObject
{
	// System.Int32 Spawner/<SpawnRandomGameObject>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spawner/<SpawnRandomGameObject>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spawner Spawner/<SpawnRandomGameObject>d__5::<>4__this
	Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* ___U3CU3E4__this_2;
	// System.Int32 Spawner/<SpawnRandomGameObject>d__5::<randomFood>5__1
	int32_t ___U3CrandomFoodU3E5__1_3;
};

// achievment_manager/<Wait>d__4
struct U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7  : public RuntimeObject
{
	// System.Int32 achievment_manager/<Wait>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object achievment_manager/<Wait>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// achievment_manager achievment_manager/<Wait>d__4::<>4__this
	achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* ___U3CU3E4__this_2;
};

// dialogManager/<TypeSentence>d__17
struct U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56  : public RuntimeObject
{
	// System.Int32 dialogManager/<TypeSentence>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object dialogManager/<TypeSentence>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String dialogManager/<TypeSentence>d__17::sentence
	String_t* ___sentence_2;
	// UnityEngine.UI.Text dialogManager/<TypeSentence>d__17::textBox
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textBox_3;
	// UnityEngine.AudioClip dialogManager/<TypeSentence>d__17::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_4;
	// dialogManager dialogManager/<TypeSentence>d__17::<>4__this
	dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* ___U3CU3E4__this_5;
	// System.Char[] dialogManager/<TypeSentence>d__17::<>s__1
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___U3CU3Es__1_6;
	// System.Int32 dialogManager/<TypeSentence>d__17::<>s__2
	int32_t ___U3CU3Es__2_7;
	// System.Char dialogManager/<TypeSentence>d__17::<letter>5__3
	Il2CppChar ___U3CletterU3E5__3_8;
	// System.Char[] dialogManager/<TypeSentence>d__17::<>s__4
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___U3CU3Es__4_9;
	// System.Int32 dialogManager/<TypeSentence>d__17::<>s__5
	int32_t ___U3CU3Es__5_10;
	// System.Char dialogManager/<TypeSentence>d__17::<letter>5__6
	Il2CppChar ___U3CletterU3E5__6_11;
};

// dialogManager/<WaitSeconds>d__12
struct U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5  : public RuntimeObject
{
	// System.Int32 dialogManager/<WaitSeconds>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object dialogManager/<WaitSeconds>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single dialogManager/<WaitSeconds>d__12::x
	float ___x_2;
	// dialogManager dialogManager/<WaitSeconds>d__12::<>4__this
	dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* ___U3CU3E4__this_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
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
#pragma pack(pop, tp)

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::CBD482FD0F16CD8337E23267B7BC55EA28FE29542EB79A68701A5527AED185EF
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___CBD482FD0F16CD8337E23267B7BC55EA28FE29542EB79A68701A5527AED185EF_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// AIPlayer
struct AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BoardManager AIPlayer::board
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___board_4;
};

// Achievment1
struct Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Achievment1::usl
	bool ___usl_4;
	// UnityEngine.Animator Achievment1::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// System.Boolean Achievment1::usl2
	bool ___usl2_6;
	// System.String Achievment1::uslovie
	String_t* ___uslovie_7;
};

// Audio
struct Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Audio::audio_source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio_source_4;
	// System.Single Audio::musicVolume
	float ___musicVolume_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Audio_Settings
struct Audio_Settings_t9EE3D6BFBCF6D98CCE660433AD19AF4CCAF64F97  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Audio_Settings::mixer
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___mixer_4;
	// System.Single Audio_Settings::musicVolume
	float ___musicVolume_5;
};

// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GridCellScript[] BoardManager::gridCells
	GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* ___gridCells_11;
	// GUIHandler BoardManager::gHandler
	GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* ___gHandler_12;
	// System.Int32 BoardManager::pieceToPlayNext
	int32_t ___pieceToPlayNext_13;
	// System.Int32[] BoardManager::scoreBoard
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scoreBoard_14;
};

// Choise
struct Choise_tC98E73115F45A9D543BBCACBC7E7E54AC7326BBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Choise::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// UnityEngine.UI.Button Choise::button1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button1_5;
	// UnityEngine.UI.Button Choise::button2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button2_6;
	// UnityEngine.GameObject Choise::_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObject_7;
};

// DialogManager
struct DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DialogManager::Character
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___Character_4;
	// UnityEngine.UI.Text DialogManager::TextOut
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextOut_5;
	// UnityEngine.UI.Text DialogManager::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_6;
	// UnityEngine.UI.Image DialogManager::imageCharacter
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageCharacter_7;
	// UnityEngine.UI.Button DialogManager::buttonDialogSkip
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonDialogSkip_8;
	// System.Boolean DialogManager::_IsStart
	bool ____IsStart_9;
	// System.Int32 DialogManager::IndexCharacter
	int32_t ___IndexCharacter_10;
	// System.Int32 DialogManager::IndexText
	int32_t ___IndexText_11;
	// Dialogue DialogManager::dialogueCharacter
	Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* ___dialogueCharacter_12;
	// UnityEngine.AudioClip DialogManager::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_13;
};

// Dialogue
struct Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> Dialogue::Read
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Read_4;
	// System.String Dialogue::nameCharacter
	String_t* ___nameCharacter_5;
	// UnityEngine.Sprite Dialogue::image_C
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image_C_6;
};

// DownloadCount
struct DownloadCount_tF5635E1E9AE29FF2E50F6DF935A0E3E0A480D967  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Eva
struct Eva_t0E098CC7273CBF8BB080E5284ACCB1A241F43299  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Eva_teleportation
struct Eva_teleportation_t30B47DE11C227553A77977AD0DF72C1A695D7043  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Eva_teleportation::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// GUIHandler
struct GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform GUIHandler::button_PLAY
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___button_PLAY_4;
	// UnityEngine.Transform GUIHandler::button_RESIGN
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___button_RESIGN_5;
	// UnityEngine.Transform GUIHandler::player1_Label
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player1_Label_6;
	// UnityEngine.Transform GUIHandler::player1_Computer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player1_Computer_7;
	// UnityEngine.Transform GUIHandler::player1_Human
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player1_Human_8;
	// UnityEngine.Transform GUIHandler::player1_X
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player1_X_9;
	// UnityEngine.Transform GUIHandler::player1_O
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player1_O_10;
	// UnityEngine.Transform GUIHandler::player2_Label
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player2_Label_11;
	// UnityEngine.Transform GUIHandler::player2_Computer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player2_Computer_12;
	// UnityEngine.Transform GUIHandler::player2_Human
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player2_Human_13;
	// UnityEngine.Transform GUIHandler::player2_X
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player2_X_14;
	// UnityEngine.Transform GUIHandler::player2_O
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player2_O_15;
	// UnityEngine.Transform GUIHandler::txt_Draw
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___txt_Draw_16;
	// UnityEngine.Transform GUIHandler::txt_Plr1Wins
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___txt_Plr1Wins_17;
	// UnityEngine.Transform GUIHandler::txt_Plr2Wins
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___txt_Plr2Wins_18;
	// UnityEngine.Camera GUIHandler::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_19;
	// GameInfo GUIHandler::gInfo
	GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* ___gInfo_20;
	// BoardManager GUIHandler::board
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___board_21;
	// AIPlayer GUIHandler::aiPlayer
	AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* ___aiPlayer_22;
	// TMPro.TextMeshProUGUI GUIHandler::counter1
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___counter1_23;
	// TMPro.TextMeshProUGUI GUIHandler::counter2
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___counter2_24;
	// UnityEngine.UI.Text GUIHandler::counter1_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___counter1_text_25;
	// UnityEngine.UI.Text GUIHandler::counter2_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___counter2_text_26;
	// System.Int32 GUIHandler::pl1
	int32_t ___pl1_27;
	// System.Int32 GUIHandler::pl2
	int32_t ___pl2_28;
	// System.Boolean GUIHandler::suspendInteractions
	bool ___suspendInteractions_31;
};

struct GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields
{
	// System.Int32 GUIHandler::i
	int32_t ___i_29;
	// System.Int32 GUIHandler::j
	int32_t ___j_30;
};

// GridCellScript
struct GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GridCellScript/CellStates GridCellScript::_state
	int32_t ____state_4;
	// XOScript[] GridCellScript::xoScripts
	XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* ___xoScripts_5;
	// System.Boolean GridCellScript::stateHasChanged
	bool ___stateHasChanged_6;
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___axisSprites_7;
};

// Liza
struct Liza_tA9CE07463B9859CC5685F9556827BB737C9A6F04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NextScene
struct NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text NextScene::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Single PlayerController::moveInput
	float ___moveInput_5;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// Joystick PlayerController::joystick
	Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* ___joystick_7;
	// UnityEngine.Rigidbody2D PlayerController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_8;
	// System.Boolean PlayerController::FacingRight
	bool ___FacingRight_9;
};

// SavedAchievment
struct SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_StaticFields
{
	// System.Int32 SavedAchievment::i
	int32_t ___i_4;
	// System.Int32 SavedAchievment::teacher
	int32_t ___teacher_5;
};

// Saver
struct Saver_t24EF218FD4AF7C68D8863C2976D40019EB79AC2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Saver_Set
struct Saver_Set_t582E4D83A59969E26606B348FCCA6FAAE06FC941  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Scene
struct Scene_tF2B7ED0D6838C04B614A11173D235D0C06BDEFA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ScoreController
struct ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScoreController::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_4;
	// UnityEngine.UI.Text ScoreController::time
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___time_5;
	// System.Int32 ScoreController::score
	int32_t ___score_6;
	// System.Single ScoreController::timeLeft
	float ___timeLeft_7;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SoundManager::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_5;
};

struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::<instance>k__BackingField
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___U3CinstanceU3Ek__BackingField_4;
};

// Spawner
struct Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Spawner::foods
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___foods_4;
	// UnityEngine.GameObject Spawner::bomb
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bomb_5;
	// System.Single Spawner::xBounds
	float ___xBounds_6;
	// System.Single Spawner::yBounds
	float ___yBounds_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// XOScript
struct XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean XOScript::_isX
	bool ____isX_4;
};

// achievment_manager
struct achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text achievment_manager::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// System.Boolean achievment_manager::usl
	bool ___usl_5;
	// UnityEngine.Animator achievment_manager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// System.String achievment_manager::uslovie
	String_t* ___uslovie_7;
};

// cameracontroller
struct cameracontroller_tFC54DC5BCD00DBC2C2EE815AB1CB07C20E212A22  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single cameracontroller::leftLimit
	float ___leftLimit_4;
	// System.Single cameracontroller::rightLimit
	float ___rightLimit_5;
	// System.Single cameracontroller::bottomLimit
	float ___bottomLimit_6;
	// System.Single cameracontroller::upperLimit
	float ___upperLimit_7;
};

// controller_plate
struct controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single controller_plate::speed
	float ___speed_4;
	// System.Single controller_plate::NormalSpeed
	float ___NormalSpeed_5;
	// System.Single controller_plate::moveInput
	float ___moveInput_6;
	// UnityEngine.Rigidbody2D controller_plate::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_7;
};

// dialAnimator
struct dialAnimator_t60790F18D2A12C7FF7968187CE5B892B3CF142D1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator dialAnimator::startAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___startAnim_4;
	// dialogManager dialAnimator::dm
	dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* ___dm_5;
};

// dialogManager
struct dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> dialogManager::Character
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___Character_4;
	// UnityEngine.UI.Text dialogManager::TextOut
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextOut_5;
	// UnityEngine.UI.Text dialogManager::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_6;
	// UnityEngine.UI.Image dialogManager::imageCharacter
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageCharacter_7;
	// UnityEngine.UI.Button dialogManager::buttonDialogSkip
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonDialogSkip_8;
	// System.Boolean dialogManager::_IsStart
	bool ____IsStart_9;
	// System.Int32 dialogManager::IndexCharacter
	int32_t ___IndexCharacter_10;
	// System.Int32 dialogManager::IndexText
	int32_t ___IndexText_11;
	// Dialogue dialogManager::dialogueCharacter
	Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* ___dialogueCharacter_12;
	// UnityEngine.Animator dialogManager::boxAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___boxAnim_13;
	// UnityEngine.Animator dialogManager::startAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___startAnim_14;
	// UnityEngine.AudioClip dialogManager::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_15;
};

// down_dialogue
struct down_dialogue_t4DE1D95B8A16C3313D009947AB3EFC0CB4228FF5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text down_dialogue::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// dialogManager down_dialogue::DM
	dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* ___DM_5;
};

// dream
struct dream_t7DDBBB287C4242AFE5BD7B041CEACE473F5ED044  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text dream::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// firstDialogue
struct firstDialogue_t55B7C557B2BB2DDF44F216003790DAFD18A790BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// go_stolovaya
struct go_stolovaya_t6E4B8A33C8FC2DF55730E337C0274D66E042F640  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// go_to_cabinet1
struct go_to_cabinet1_tAC8162903FCDFBAD22BDBE111930860043EB3E2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text go_to_cabinet1::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// go_to_cabinet2
struct go_to_cabinet2_t008F30BB3B6F2B6475B8C033D316DD170C7C92A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI go_to_cabinet2::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_4;
	// System.Boolean go_to_cabinet2::usl
	bool ___usl_5;
};

// go_to_flat
struct go_to_flat_t90EB623AFD973590EE6BAA3256BE73C264A5E3B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text go_to_flat::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// go_to_flat2
struct go_to_flat2_t0BC2A7781D2649A2CA8F2F017F4A796F5B52E56F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text go_to_flat2::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// go_to_flat3
struct go_to_flat3_tA67133EB91A102F0536A79E9F5653F7FF1EF604C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text go_to_flat3::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// go_to_mini_game1
struct go_to_mini_game1_t21168930EA297BB5BA87BD712E5F0BF4F0F3A874  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text go_to_mini_game1::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// menustart
struct menustart_tFD51D687776FF29E403225F1741D5CF6F9D0870B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// minigame2_open
struct minigame2_open_t90ACA0867E9F328A4CB8746D6CC639CB335E140A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text minigame2_open::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// openmenu
struct openmenu_t684B1E74B1DA7FF30FCB3F88CBFD5C5BC7AF6B1D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// rect
struct rect_t87132ADB36A371C14FD6B2FB8BB05AFF72AB1295  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// trigger_food_empty
struct trigger_food_empty_t2528BE39F13183B584DF4DE562CFF02F34699BE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text trigger_food_empty::time
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___time_4;
};

// trigger_glass
struct trigger_glass_t00E115D96A800FF2028788ECFB27EA85D87F9EC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// trigger_room
struct trigger_room_t7B472F3CD0C41D76E2CAD8040818D36899634873  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// trigger_stolovaya
struct trigger_stolovaya_tEA2EE0C8A69A591BF39B61381A71B8CA4D0AB427  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator trigger_stolovaya::startAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___startAnim_4;
	// UnityEngine.UI.Text trigger_stolovaya::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
};

// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
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
// GridCellScript[]
struct GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A  : public RuntimeArray
{
	ALIGN_FIELD (8) GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* m_Items[1];

	inline GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// XOScript[]
struct XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E  : public RuntimeArray
{
	ALIGN_FIELD (8) XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* m_Items[1];

	inline XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Void achievment_manager/<Wait>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4__ctor_m6D5E2A0AD4C67A76DD95117692D306E26F3E55C3 (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator achievment_manager::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* achievment_manager_Wait_mF7FF987AB118E13D1E043CB511CC4F942D501350 (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void achievment_manager::ShowAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void achievment_manager_ShowAchievment_mAFDEC85472F75D3F4D54EA3C739AF8EB25A6F314 (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void achievment_manager::CloseAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void achievment_manager_CloseAchievment_m6267131299DA9AA01A42977A76910EBBCF1048E3 (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void DialogManager/<WaitSeconds>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__10__ctor_m789CE5B578260C6CE32A912F501A8F478499086D (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void DialogManager::WriteDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_WriteDialogue_m58F338D160E67A637DA12A6783BC6C36FA8DD287 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<Dialogue>()
inline Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 Dialogue::GetReadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dialogue_GetReadCount_mD9BFA27783675F4811CFBF13A621D25D18DD2192 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Dialogue::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dialogue_Name_mFF3A8860F4DB3E9D5648D54803F43D205B8B26F3 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) ;
// System.String Dialogue::GetReadStringIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dialogue_GetReadStringIndex_m060C1492C241F723404CF60FB89CA585CB53EC65 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void DialogManager::TextDialog(System.String,System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_TextDialog_mAC1970CDBEEAAAEE4A9732D3C8B9D2D99727ED42 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, String_t* ___text0, String_t* ___name1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DialogManager::TypeSentence(System.String,UnityEngine.UI.Text,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogManager_TypeSentence_m138F3DAB2DB718FC82F96ADE7A8A6593A37212BC (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, String_t* ___sentence0, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textBox1, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void DialogManager/<TypeSentence>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__14__ctor_m71DB349B0D8D45E3F7CD935D3D590E2D6AC2EB40 (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void DialogManager::NextIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_NextIndex_m20AF1A6B57A3AB6E806409A5FAD2EDE5B7B2AF10 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// SoundManager SoundManager::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline (const RuntimeMethod* method) ;
// System.Void SoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void dialogManager::EndDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_EndDialog_m5E80430993260D9F1A46BBF6E958102431E94A33 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) ;
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<BoardManager>()
inline BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC (const RuntimeMethod* method)
{
	return ((  BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Int32 BoardManager::GetBestMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_GetBestMove_mC2EC07AA69DD732F472A28B7A85B616934A0AEA6 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AIPlayer::DoMove(System.Int32,pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIPlayer_DoMove_mCC5EDA9F70EDCFD697D652D3FFA57F96E2B01422 (AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* __this, int32_t ___move0, int32_t ___piece1, const RuntimeMethod* method) ;
// System.Void AIPlayer/<DoMove>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoMoveU3Ed__3__ctor_m4D92D43ABF304F8F322AC8D552DAE73DE43F349A (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BoardManager::AIPlayMoveAt(System.Int32,pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_AIPlayMoveAt_m79D0CBAC442D4A36ED7120136C0ACDABED898BF3 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___cell0, int32_t ___piece1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GUIHandler>()
inline GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* Object_FindObjectOfType_TisGUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_mB4B19606DC8C557B4288092660C422AD0CC4DBF6 (const RuntimeMethod* method)
{
	return ((  GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void BoardManager::InitScoreboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitScoreboard_m23BCC8D814402187E67BED5ABB8D391E120511B2 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void GridCellScript::set_state(GridCellScript/CellStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCellScript_set_state_mE5CC25CFB2761E4D26680161F0164F7E79D1C2BD (GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// GridCellScript/CellStates GridCellScript::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9 (GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* __this, const RuntimeMethod* method) ;
// System.Int32 GUIHandler::GetCurrentPlayerPieceAsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIHandler_GetCurrentPlayerPieceAsInt_m6BE07E18B43E2C53757CA6F02ABE0D39F35AFAB6 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// System.Void GUIHandler::NextTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_NextTurn_m268CA4AFC16AA993CF46CC54E872B7D0E27E4F1C (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32[] BoardManager::GetBoardAsInts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BoardManager_GetBoardAsInts_m5B0F486387AB74FDCE25B3DD642EBADC6A9FA490 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Int32 BoardManager::HasGameBeenWon(System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_HasGameBeenWon_mAC8112D8D047D5AE3F622136926DC527356EF84A (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___board0, const RuntimeMethod* method) ;
// System.Void GUIHandler::GameDrawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_GameDrawn_m1E76647339D759DA6CAB22B1DEA118F0CDCD42BF (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// System.Int32 BoardManager::GetScoreFor(System.Int32,System.Int32,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_GetScoreFor_m4A00F5386E6F9A273D557D8DAC4439FCE2B7FEB3 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___nextPlayer0, int32_t ___i1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___board2, const RuntimeMethod* method) ;
// System.Void GUIHandler::GameWon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_GameWon_mAB81B3710B2D741E3F02F1628E9CC11D80600D7F (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// System.Void BoardManager::SetCellsCountersFor(System.Int32,System.Int32,System.Int32&,System.Int32&,System.Int32[]&,BoardManager/Directions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___friendPiece0, int32_t ___pos1, int32_t* ___friendCounter2, int32_t* ___foeCounter3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___board4, int32_t ___dir5, const RuntimeMethod* method) ;
// System.Int32 BoardManager::CalcScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_CalcScore_m01B2E1CC04A422AA5092F3ED04D534D1B4F9813D (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___friendCellsCount0, int32_t ___foeCellsCount1, const RuntimeMethod* method) ;
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::set_PlayerIs(beings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerIs_mF6C7BF8DF0A53ACD825B50DD8E4F542E78EADE39 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Player::set_PlayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Player::set_PlayingAs(pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayingAs_mF0B993218E5E4F8BB9D62D16283E8BD9E4810F2E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameInfo::set_state(GameInfo/GameStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_set_state_m4FD5E9E5B1207E5AED74B2F96D17DCE1C229F7DE (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___value0, const RuntimeMethod* method) ;
// GameInfo/GameStates GameInfo::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) ;
// pieces Player::get_PlayingAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void GameInfo::UpdatePlayerScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_UpdatePlayerScore_mA79B1F7D768484197BE9D5BD816488DE4B1DB540 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, int32_t ___score1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessageUpwards_m9562D91F1C57987B01596D0428B087B2A0F01CC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<XOScript>()
inline XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* GameObject_GetComponentsInChildren_TisXOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7_mB0E5E0B9F3F8B20487C206A31B01BA95F624FEAA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void XOScript::HideO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_HideO_mAF1D654E0D2E4B37B4E2E2955EC4838AD6698BB4 (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) ;
// System.Void XOScript::HideX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_HideX_m5B430F56CDD5FE3BE8EA38C1DC5BA87692956A5D (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) ;
// System.Void XOScript::ShowO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_ShowO_mEC3E28EBAB3BB4699665B4EB31BDFC655F2D7F5C (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) ;
// System.Void XOScript::ShowX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_ShowX_m0256153261F79E538A40EAF2D7E3B5D61D6EDA67 (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) ;
// System.Void GameInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo__ctor_m25EF2A1449134DAB68FD8DAE3AB8C5C79049937C (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<AIPlayer>()
inline AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* Object_FindObjectOfType_TisAIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734_m79DE6CD3FC44FCCC932F59A2EF99DB10F3C8A1A5 (const RuntimeMethod* method)
{
	return ((  AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void GameInfo::SetPlayer(System.Int32,beings,System.String,pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, int32_t ___playeris1, String_t* ___playerName2, int32_t ___piece3, const RuntimeMethod* method) ;
// Player GameInfo::GetCurrentPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameInfo_GetCurrentPlayer_m6445982088E72A942EC5A75C538DA18037BD8978 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) ;
// System.Boolean BoardManager::WasWinnerX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_WasWinnerX_m56C86EB8F18989B0344C94418070F0EA4D0559E7 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// pieces GameInfo::GetPlayerPiece(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameInfo_GetPlayerPiece_mC43F44BFCCD8F4A87AEEC8FEA87264DFA0712E3D (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GUIHandler::DoPlayer1WinsAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIHandler_DoPlayer1WinsAnim_mD296504D17A871C09813FFB53935A3CDE00ACAB8 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GUIHandler::DoPlayer2WinsAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIHandler_DoPlayer2WinsAnim_mD188D0FA4176DE8FB7CF911FCA70AC50995004D6 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// System.Void GameInfo::GameWon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_GameWon_mC657B00AFAF421DC198D0C6A59EDCA10F56BD7D7 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, const RuntimeMethod* method) ;
// System.Void GameInfo::GameDrawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_GameDrawn_m6B87BEE0AE7CF6BDD14550675958CBF73A4F55E2 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GUIHandler::DoItsADrawAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIHandler_DoItsADrawAnim_m2149CF28BC607855C097220959C16001DC9FAC1F (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// System.Void GUIHandler/<DoPlayer1WinsAnim>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer1WinsAnimU3Ed__32__ctor_m7E395350B2341D765B431708F5E47FE0514280A2 (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GUIHandler/<DoPlayer2WinsAnim>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer2WinsAnimU3Ed__33__ctor_mFFE604F11730ADD63AFD35D2B2056B8B502AAE72 (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GUIHandler/<DoItsADrawAnim>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoItsADrawAnimU3Ed__34__ctor_m008010F91860060796727FA845993657BF3E7C1C (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GUIHandler::CheckAndPlayAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_CheckAndPlayAI_mC6E57D897920F71E14AA8E431C2CFBE055436C51 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) ;
// beings Player::get_PlayerIs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void AIPlayer::PlayAIMove(pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIPlayer_PlayAIMove_mC7717D34F781FDDB23F955579579CEE8D7EB15EC (AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* __this, int32_t ___piece0, const RuntimeMethod* method) ;
// Player GameInfo::GetPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameInfo_GetPlayer_m93AF763375B2405D0920A4C29786AE2700D609BF (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::GetRayIntersection(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_GetRayIntersection_m14FE964631FC806EC3C7D6EBCA461315961492C4 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GridCellScript>()
inline GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* GameObject_GetComponent_TisGridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D_m50532F26FD5DFFFC611E6FAC3CA5A7C8917C5D2E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String Player::get_PlayerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void BoardManager::ClearBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_ClearBoard_mCE77812DE14FC1530673E389A5D164EEAD5371BC (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Void GameInfo::StartPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_StartPlaying_mB64A345C086CF034B5491890B6400F52A06FD4DE (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Achievment1/<Wait>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4__ctor_m00A9B6E8C31EB3B6F555EB5CD77F07B155B51047 (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Achievment1::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Achievment1_Wait_mE86E81481BC2174CB394EC4541DD4E82D9207FB4 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) ;
// System.Int32 SavedAchievment::get_PLAYER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SavedAchievment_get_PLAYER_m2AF0FDAD5E3964A12CF0E4EF2B180F3AA2D9126D (const RuntimeMethod* method) ;
// System.Int32 SavedAchievment::get_TEACHER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SavedAchievment_get_TEACHER_m5AE472B403247BC99B629F26851765B3442E11FD (const RuntimeMethod* method) ;
// System.Void Achievment1::ShowAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievment1_ShowAchievment_m64884AC134B9DAFCCE869793E18076388A2EFD88 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) ;
// System.Void Achievment1::CloseAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievment1_CloseAchievment_m42E30DDC94C50CE5076B721E7D59DDA061B64FB4 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void PlayerController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void SoundManager::set_instance(SoundManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D_inline (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Spawner::SpawnRandomGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawner_SpawnRandomGameObject_m4F5CA0FD228C0AAAB00741C8BFA821511F4C01D9 (Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* __this, const RuntimeMethod* method) ;
// System.Void Spawner/<SpawnRandomGameObject>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomGameObjectU3Ed__5__ctor_mE43791233DC34CDD9C27BF5E7FCE28C03729AC00 (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void dialogManager/<WaitSeconds>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__12__ctor_mFCFB44968BFA9E40D3643A4545B08594A8368235 (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void dialogManager::WriteDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_WriteDialogue_m4BBBD169E738787EC46BE3890AE1770C90FFDB15 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) ;
// System.Void dialogManager::TextDialog(System.String,System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_TextDialog_m584E5846C44006FC4A7F327BFB69C8059CFEDB93 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, String_t* ___text0, String_t* ___name1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator dialogManager::TypeSentence(System.String,UnityEngine.UI.Text,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dialogManager_TypeSentence_m3762017B713E2FF45763E66FFEABC3F53C9A0089 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, String_t* ___sentence0, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textBox1, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound2, const RuntimeMethod* method) ;
// System.Void dialogManager/<TypeSentence>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__17__ctor_m3626BBBDBA24B6AA63237773D6DAB25A22DD55B2 (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void dialogManager::NextIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_NextIndex_m4F9388DA8DCFC08FAF9E67CEB4120A740F8103CF (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<dialogManager>()
inline dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29 (const RuntimeMethod* method)
{
	return ((  dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void dialogManager::StartDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_StartDialogue_m56FB9CDBED4A905A49F09BA7FA5A20802573928F (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
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
// System.Collections.IEnumerator achievment_manager::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* achievment_manager_Wait_mF7FF987AB118E13D1E043CB511CC4F942D501350 (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* L_0 = (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7*)il2cpp_codegen_object_new(U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitU3Ed__4__ctor_m6D5E2A0AD4C67A76DD95117692D306E26F3E55C3(L_0, 0, NULL);
		U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void achievment_manager::CloseAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void achievment_manager_CloseAchievment_m6267131299DA9AA01A42977A76910EBBCF1048E3 (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isOpen", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_6;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void achievment_manager::ShowAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void achievment_manager_ShowAchievment_mAFDEC85472F75D3F4D54EA3C739AF8EB25A6F314 (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isOpen", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_6;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)1, NULL);
		// StartCoroutine(Wait());
		RuntimeObject* L_1;
		L_1 = achievment_manager_Wait_mF7FF987AB118E13D1E043CB511CC4F942D501350(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void achievment_manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void achievment_manager_Update_m9672042C75A20224BDFA2DE13DA4CBAA6500D557 (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (usl == false)
		bool L_0 = __this->___usl_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		// animator.SetBool("isOpen", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_6;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)0, NULL);
		// if (text.text == uslovie)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___text_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		String_t* L_5 = __this->___uslovie_7;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// usl = true;
		__this->___usl_5 = (bool)1;
		// ShowAchievment();
		achievment_manager_ShowAchievment_mAFDEC85472F75D3F4D54EA3C739AF8EB25A6F314(__this, NULL);
	}

IL_004b:
	{
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void achievment_manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void achievment_manager__ctor_mEA5BB84F40A653DC95F5278C48D12F6253ED1F8A (achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* __this, const RuntimeMethod* method) 
{
	{
		// public bool usl = false;
		__this->___usl_5 = (bool)0;
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
// System.Void achievment_manager/<Wait>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4__ctor_m6D5E2A0AD4C67A76DD95117692D306E26F3E55C3 (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void achievment_manager/<Wait>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4_System_IDisposable_Dispose_m17D9A4416B32D1A78C9B0ACE0EA103D919EEA33A (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean achievment_manager/<Wait>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitU3Ed__4_MoveNext_mAE4D7E4E466792EC40845A71E76C891EF945D854 (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// CloseAchievment();
		achievment_manager_tB2AE705857BE0CECF09E82D3BC63AF48A2D01FB6* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		achievment_manager_CloseAchievment_m6267131299DA9AA01A42977A76910EBBCF1048E3(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object achievment_manager/<Wait>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEEDEBE5DDC57399039AD7BB22E452BD85F1A6F5 (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void achievment_manager/<Wait>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4_System_Collections_IEnumerator_Reset_m29740A4FAD52129CAC8E326D433DF4B3B9B22FEB (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitU3Ed__4_System_Collections_IEnumerator_Reset_m29740A4FAD52129CAC8E326D433DF4B3B9B22FEB_RuntimeMethod_var)));
	}
}
// System.Object achievment_manager/<Wait>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__4_System_Collections_IEnumerator_get_Current_m48C037BF23F1DBCCE1F248504DDA45F785DFCAED (U3CWaitU3Ed__4_t15AD58DF273B8F8235A39B226CD93459D6140AB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Audio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Update_m984ECC185C811C50694A9E3315454C5F3BB5678F (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetFloat("Volume") < 1)
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F, NULL);
		V_0 = (bool)((((float)L_0) < ((float)(1.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// musicVolume = PlayerPrefs.GetFloat("Volume");
		float L_2;
		L_2 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F, NULL);
		__this->___musicVolume_5 = L_2;
		goto IL_0033;
	}

IL_0028:
	{
		// musicVolume = 1f;
		__this->___musicVolume_5 = (1.0f);
	}

IL_0033:
	{
		// audio_source.volume = musicVolume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audio_source_4;
		float L_4 = __this->___musicVolume_5;
		NullCheck(L_3);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Audio::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_SetVolume_mC4FFE31946D0CE705A36232D474D5F819CFFFC38 (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, float ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// musicVolume = volume;
		float L_0 = ___volume0;
		__this->___musicVolume_5 = L_0;
		// PlayerPrefs.SetFloat("Volume", volume);
		float L_1 = ___volume0;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F, L_1, NULL);
		// }
		return;
	}
}
// System.Void Audio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio__ctor_m77A1146A37D12C6FE8759416FFCC7B3C4DE470EB (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
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
// System.Void Audio_Settings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Settings_Start_mD25D70DD4566045842A6449692BD5692174CF991 (Audio_Settings_t9EE3D6BFBCF6D98CCE660433AD19AF4CCAF64F97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___mixer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mixer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Audio_Settings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Settings_Update_m6FAC86AC6BFE9FFAB8BB4A6E33F13F42525FD863 (Audio_Settings_t9EE3D6BFBCF6D98CCE660433AD19AF4CCAF64F97* __this, const RuntimeMethod* method) 
{
	{
		// mixer.volume = musicVolume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___mixer_4;
		float L_1 = __this->___musicVolume_5;
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Audio_Settings::ToggleMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Settings_ToggleMusic_mB6E4212E7C8DDE4CEBF925B6E6E1E2D11E97C0D7 (Audio_Settings_t9EE3D6BFBCF6D98CCE660433AD19AF4CCAF64F97* __this, float ___vlm0, const RuntimeMethod* method) 
{
	{
		// musicVolume = vlm;
		float L_0 = ___vlm0;
		__this->___musicVolume_5 = L_0;
		// }
		return;
	}
}
// System.Void Audio_Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Settings__ctor_m02F63EA0C5A62D3F313533F3AB9347CF20259F59 (Audio_Settings_t9EE3D6BFBCF6D98CCE660433AD19AF4CCAF64F97* __this, const RuntimeMethod* method) 
{
	{
		// private float musicVolume=1f;
		__this->___musicVolume_5 = (1.0f);
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
// System.Void cameracontroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameracontroller_Start_mBA33FE1DDE5BE15CAF9D55A2C067C2A75D7B73D4 (cameracontroller_tFC54DC5BCD00DBC2C2EE815AB1CB07C20E212A22* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void cameracontroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameracontroller_Update_m8873B933180381CBF4CB927869D721C1C052AC62 (cameracontroller_tFC54DC5BCD00DBC2C2EE815AB1CB07C20E212A22* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = new Vector3(Mathf.Clamp(transform.position.x, leftLimit, rightLimit),
		//     Mathf.Clamp(transform.position.y, bottomLimit, upperLimit), transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___leftLimit_4;
		float L_5 = __this->___rightLimit_5;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_3, L_4, L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		float L_10 = __this->___bottomLimit_6;
		float L_11 = __this->___upperLimit_7;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, L_10, L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_6, L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_16, NULL);
		// }
		return;
	}
}
// System.Void cameracontroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameracontroller__ctor_mF03693F73F83A64273CCA8F20EA38CB01D50A93A (cameracontroller_tFC54DC5BCD00DBC2C2EE815AB1CB07C20E212A22* __this, const RuntimeMethod* method) 
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
// System.Void Choise::Choise_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Choise_Choise_B_m68C6227FB342FB4E9E6117775A147D380BD9C710 (Choise_tC98E73115F45A9D543BBCACBC7E7E54AC7326BBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69755F1A52C21605DA9873EC1DA43191E678010C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// button1.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button1_5;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// button2.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___button2_6;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// _gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____gameObject_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// if (text.text == "??? ????????...")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___text_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral69755F1A52C21605DA9873EC1DA43191E678010C, NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// _gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____gameObject_7;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// button1.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___button1_5;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// button2.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___button2_6;
		NullCheck(L_9);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_9, (bool)1, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Choise::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Choise__ctor_m971AF9B9CA2A618886AD0FA084D8BB17036D0BE2 (Choise_tC98E73115F45A9D543BBCACBC7E7E54AC7326BBF* __this, const RuntimeMethod* method) 
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
// System.Void controller_plate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_plate_Start_m44FA198A7B9A28D28D481858780F46EACC7AA61B (controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// speed = 0f;
		__this->___speed_4 = (0.0f);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void controller_plate::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_plate_FixedUpdate_m30AB47B110959A859B0837A27C50820548E6E7A3 (controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C* __this, const RuntimeMethod* method) 
{
	{
		// rb.velocity = new Vector2(speed, rb.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rb_7;
		float L_1 = __this->___speed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_7;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_2, NULL);
		float L_4 = L_3.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_1, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void controller_plate::OnRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_plate_OnRight_m38DC02199843D0EC4AD8BDF0185F86B10C6E55DC (controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (speed <= 0f)
		float L_0 = __this->___speed_4;
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// speed = NormalSpeed;
		float L_2 = __this->___NormalSpeed_5;
		__this->___speed_4 = L_2;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void controller_plate::OnLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_plate_OnLeft_mCFF72846EFD74B7E91515904059703EBF9A2C35C (controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (speed >= 0f)
		float L_0 = __this->___speed_4;
		V_0 = (bool)((((int32_t)((!(((float)L_0) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// speed = -NormalSpeed;
		float L_2 = __this->___NormalSpeed_5;
		__this->___speed_4 = ((-L_2));
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void controller_plate::OnButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_plate_OnButtonUp_m8BF96316919EAAC0632F7FCDA2BC1D4D5A5DC0BC (controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C* __this, const RuntimeMethod* method) 
{
	{
		// speed = 0f;
		__this->___speed_4 = (0.0f);
		// }
		return;
	}
}
// System.Void controller_plate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_plate__ctor_m365580A507BACCA9DC5A31E4A1C0078880D19851 (controller_plate_tD6A280B33F913AC8A8F62EFA89B2E4323076647C* __this, const RuntimeMethod* method) 
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
// System.Collections.IEnumerator DialogManager::WaitSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogManager_WaitSeconds_m2A4C61B51B5AE5D25D4D1C9E4497210DE581BDB8 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* L_0 = (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F*)il2cpp_codegen_object_new(U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitSecondsU3Ed__10__ctor_m789CE5B578260C6CE32A912F501A8F478499086D(L_0, 0, NULL);
		U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* L_2 = L_1;
		float L_3 = ___x0;
		NullCheck(L_2);
		L_2->___x_2 = L_3;
		return L_2;
	}
}
// System.Void DialogManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_Start_m8744EB84F3CA65D1A2C8D3F11506015B4324CC6A (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, const RuntimeMethod* method) 
{
	{
		// WriteDialogue();
		DialogManager_WriteDialogue_m58F338D160E67A637DA12A6783BC6C36FA8DD287(__this, NULL);
		// IndexCharacter++;
		int32_t L_0 = __this->___IndexCharacter_10;
		__this->___IndexCharacter_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void DialogManager::WriteDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_WriteDialogue_m58F338D160E67A637DA12A6783BC6C36FA8DD287 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCD7D8E98229C1B56E0515344B40709B99E1FAE0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// if (Character.Count > IndexCharacter)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___Character_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_2 = __this->___IndexCharacter_10;
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00c3;
		}
	}
	{
		// if (Character[IndexCharacter].GetComponent<Dialogue>() != null)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___Character_4;
		int32_t L_5 = __this->___IndexCharacter_10;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_7;
		L_7 = GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C(L_6, GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00c0;
		}
	}
	{
		// dialogueCharacter = Character[IndexCharacter].GetComponent<Dialogue>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___Character_4;
		int32_t L_11 = __this->___IndexCharacter_10;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_13;
		L_13 = GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C(L_12, GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C_RuntimeMethod_var);
		__this->___dialogueCharacter_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dialogueCharacter_12), (void*)L_13);
		// if (IndexText >= dialogueCharacter.GetReadCount())
		int32_t L_14 = __this->___IndexText_11;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_15 = __this->___dialogueCharacter_12;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Dialogue_GetReadCount_mD9BFA27783675F4811CFBF13A621D25D18DD2192(L_15, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		// System.Console.WriteLine("end dialogue");
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteralFCD7D8E98229C1B56E0515344B40709B99E1FAE0, NULL);
		goto IL_00bf;
	}

IL_0085:
	{
		// string name = dialogueCharacter.Name();
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_18 = __this->___dialogueCharacter_12;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Dialogue_Name_mFF3A8860F4DB3E9D5648D54803F43D205B8B26F3(L_18, NULL);
		V_3 = L_19;
		// Sprite image = dialogueCharacter.image_C;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_20 = __this->___dialogueCharacter_12;
		NullCheck(L_20);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = L_20->___image_C_6;
		V_4 = L_21;
		// string text = dialogueCharacter.GetReadStringIndex(IndexText);
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_22 = __this->___dialogueCharacter_12;
		int32_t L_23 = __this->___IndexText_11;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = Dialogue_GetReadStringIndex_m060C1492C241F723404CF60FB89CA585CB53EC65(L_22, L_23, NULL);
		V_5 = L_24;
		// TextDialog(text, name, image);
		String_t* L_25 = V_5;
		String_t* L_26 = V_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27 = V_4;
		DialogManager_TextDialog_mAC1970CDBEEAAAEE4A9732D3C8B9D2D99727ED42(__this, L_25, L_26, L_27, NULL);
	}

IL_00bf:
	{
	}

IL_00c0:
	{
		goto IL_00ce;
	}

IL_00c3:
	{
		// Debug.Log("end dialogue");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFCD7D8E98229C1B56E0515344B40709B99E1FAE0, NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void DialogManager::TextDialog(System.String,System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_TextDialog_mAC1970CDBEEAAAEE4A9732D3C8B9D2D99727ED42 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, String_t* ___text0, String_t* ___name1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image2, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(TypeSentence(text, TextOut, sound));
		String_t* L_0 = ___text0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___TextOut_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___sound_13;
		RuntimeObject* L_3;
		L_3 = DialogManager_TypeSentence_m138F3DAB2DB718FC82F96ADE7A8A6593A37212BC(__this, L_0, L_1, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// nameText.text = name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___nameText_6;
		String_t* L_6 = ___name1;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// imageCharacter.sprite = image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___imageCharacter_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = ___image2;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DialogManager::TypeSentence(System.String,UnityEngine.UI.Text,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogManager_TypeSentence_m138F3DAB2DB718FC82F96ADE7A8A6593A37212BC (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, String_t* ___sentence0, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textBox1, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* L_0 = (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6*)il2cpp_codegen_object_new(U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTypeSentenceU3Ed__14__ctor_m71DB349B0D8D45E3F7CD935D3D590E2D6AC2EB40(L_0, 0, NULL);
		U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* L_2 = L_1;
		String_t* L_3 = ___sentence0;
		NullCheck(L_2);
		L_2->___sentence_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sentence_2), (void*)L_3);
		U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* L_4 = L_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = ___textBox1;
		NullCheck(L_4);
		L_4->___textBox_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___textBox_3), (void*)L_5);
		U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* L_6 = L_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = ___sound2;
		NullCheck(L_6);
		L_6->___sound_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___sound_4), (void*)L_7);
		return L_6;
	}
}
// System.Void DialogManager::NextIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_NextIndex_m20AF1A6B57A3AB6E806409A5FAD2EDE5B7B2AF10 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E24127019316F65850790838C7F2C1177975E3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = IndexCharacter; i < Character.Count; i++)
		int32_t L_0 = __this->___IndexCharacter_10;
		V_0 = L_0;
		goto IL_0014;
	}

IL_000a:
	{
		// WriteDialogue();
		DialogManager_WriteDialogue_m58F338D160E67A637DA12A6783BC6C36FA8DD287(__this, NULL);
		// return;
		goto IL_0079;
	}

IL_0014:
	{
		// for (int i = IndexCharacter; i < Character.Count; i++)
		int32_t L_1 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___Character_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_000a;
		}
	}
	{
		// if (IndexCharacter >= Character.Count)
		int32_t L_5 = __this->___IndexCharacter_10;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___Character_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// IndexCharacter = 0;
		__this->___IndexCharacter_10 = 0;
		// IndexText++;
		int32_t L_9 = __this->___IndexText_11;
		__this->___IndexText_11 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// WriteDialogue();
		DialogManager_WriteDialogue_m58F338D160E67A637DA12A6783BC6C36FA8DD287(__this, NULL);
	}

IL_005e:
	{
		// if (TextOut.text == "????? ?? ???????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___TextOut_5;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralB3E24127019316F65850790838C7F2C1177975E3, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void DialogManager::NextDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager_NextDialog_mD7A82E16DA9555ED27A76078D991FD318F5CBC39 (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, const RuntimeMethod* method) 
{
	{
		// NextIndex();
		DialogManager_NextIndex_m20AF1A6B57A3AB6E806409A5FAD2EDE5B7B2AF10(__this, NULL);
		// IndexCharacter++;
		int32_t L_0 = __this->___IndexCharacter_10;
		__this->___IndexCharacter_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void DialogManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogManager__ctor_m0E030665E9FBD5696CB6B5EBD2BA1FA3F0676D8E (DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> Character = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___Character_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Character_4), (void*)L_0);
		// private bool _IsStart = true;
		__this->____IsStart_9 = (bool)1;
		// int IndexCharacter = 0;
		__this->___IndexCharacter_10 = 0;
		// int IndexText = 0;
		__this->___IndexText_11 = 0;
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
// System.Void DialogManager/<WaitSeconds>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__10__ctor_m789CE5B578260C6CE32A912F501A8F478499086D (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DialogManager/<WaitSeconds>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__10_System_IDisposable_Dispose_m8944CFE9240CCD2464BA4F8D388BD87A8E63E4B9 (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DialogManager/<WaitSeconds>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitSecondsU3Ed__10_MoveNext_m2823761B098C598541020E96FFF7EB9BB17A7E01 (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(x);
		float L_3 = __this->___x_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object DialogManager/<WaitSeconds>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSecondsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6D93CB2B150D6238E588FE41433A04DFA785B046 (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DialogManager/<WaitSeconds>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__10_System_Collections_IEnumerator_Reset_mB4EEB002AE02340CFC871DDDF95A6CE04A674942 (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitSecondsU3Ed__10_System_Collections_IEnumerator_Reset_mB4EEB002AE02340CFC871DDDF95A6CE04A674942_RuntimeMethod_var)));
	}
}
// System.Object DialogManager/<WaitSeconds>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSecondsU3Ed__10_System_Collections_IEnumerator_get_Current_m87BDA05B581072C470651C8B4A619AE6852E2CF8 (U3CWaitSecondsU3Ed__10_tFEE0B990DC088E21A8236523B7962F27BD53174F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DialogManager/<TypeSentence>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__14__ctor_m71DB349B0D8D45E3F7CD935D3D590E2D6AC2EB40 (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DialogManager/<TypeSentence>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__14_System_IDisposable_Dispose_m04A9A85B204DB13C9EF2FBBB672EB32FE25D60DC (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DialogManager/<TypeSentence>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTypeSentenceU3Ed__14_MoveNext_m2ABEC057A75742E13F82884BB9AB86F5949927D8 (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0035;
			}
			case 5:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0027:
	{
		goto IL_0041;
	}

IL_0029:
	{
		goto IL_009a;
	}

IL_002b:
	{
		goto IL_017d;
	}

IL_0030:
	{
		goto IL_0277;
	}

IL_0035:
	{
		goto IL_02e3;
	}

IL_003a:
	{
		goto IL_033b;
	}

IL_003f:
	{
		return (bool)0;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// TextOut.text = "";
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_2 = __this->___U3CU3E4__this_5;
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = L_2->___TextOut_5;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// buttonDialogSkip.enabled = false;
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_4 = __this->___U3CU3E4__this_5;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->___buttonDialogSkip_8;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// if (_IsStart)
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_6 = __this->___U3CU3E4__this_5;
		NullCheck(L_6);
		bool L_7 = L_6->____IsStart_9;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00ae;
		}
	}
	{
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _IsStart = false;
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_10 = __this->___U3CU3E4__this_5;
		NullCheck(L_10);
		L_10->____IsStart_9 = (bool)0;
	}

IL_00ae:
	{
		// if (sentence.Split(" ").Length < 4)
		String_t* L_11 = __this->___sentence_2;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_11, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
		NullCheck(L_12);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)4))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01b3;
		}
	}
	{
		// foreach (char letter in sentence.ToCharArray())
		String_t* L_14 = __this->___sentence_2;
		NullCheck(L_14);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15;
		L_15 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_14, NULL);
		__this->___U3CU3Es__1_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_6), (void*)L_15);
		__this->___U3CU3Es__2_7 = 0;
		goto IL_0193;
	}

IL_00ea:
	{
		// foreach (char letter in sentence.ToCharArray())
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->___U3CU3Es__1_6;
		int32_t L_17 = __this->___U3CU3Es__2_7;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->___U3CletterU3E5__3_8 = L_19;
		// textBox.text += letter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___textBox_3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = L_20;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_21);
		Il2CppChar* L_23 = (&__this->___U3CletterU3E5__3_8);
		String_t* L_24;
		L_24 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, L_24, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_25);
		// SoundManager.instance.PlaySound(sound);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_26;
		L_26 = SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = __this->___sound_4;
		NullCheck(L_26);
		SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400(L_26, L_27, NULL);
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___textBox_3;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_28);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		String_t* L_31 = __this->___sentence_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		V_3 = (bool)((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_0164;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_34 = __this->___U3CU3E4__this_5;
		NullCheck(L_34);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_35 = L_34->___buttonDialogSkip_8;
		NullCheck(L_35);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)1, NULL);
	}

IL_0164:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_36 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_36, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_36);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_017d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_37 = __this->___U3CU3Es__2_7;
		__this->___U3CU3Es__2_7 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0193:
	{
		// foreach (char letter in sentence.ToCharArray())
		int32_t L_38 = __this->___U3CU3Es__2_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = __this->___U3CU3Es__1_6;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_00ea;
		}
	}
	{
		__this->___U3CU3Es__1_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_6), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		goto IL_036b;
	}

IL_01b3:
	{
		// foreach (char letter in sentence.ToCharArray())
		String_t* L_40 = __this->___sentence_2;
		NullCheck(L_40);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41;
		L_41 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_40, NULL);
		__this->___U3CU3Es__4_9 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_9), (void*)L_41);
		__this->___U3CU3Es__5_10 = 0;
		goto IL_0351;
	}

IL_01d1:
	{
		// foreach (char letter in sentence.ToCharArray())
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = __this->___U3CU3Es__4_9;
		int32_t L_43 = __this->___U3CU3Es__5_10;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint16_t L_45 = (uint16_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		__this->___U3CletterU3E5__6_11 = L_45;
		// textBox.text += letter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46 = __this->___textBox_3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_47 = L_46;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_47);
		Il2CppChar* L_49 = (&__this->___U3CletterU3E5__6_11);
		String_t* L_50;
		L_50 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_49, NULL);
		String_t* L_51;
		L_51 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_48, L_50, NULL);
		NullCheck(L_47);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_51);
		// SoundManager.instance.PlaySound(sound);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_52;
		L_52 = SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_53 = __this->___sound_4;
		NullCheck(L_52);
		SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400(L_52, L_53, NULL);
		// if (letter == '.')
		Il2CppChar L_54 = __this->___U3CletterU3E5__6_11;
		V_4 = (bool)((((int32_t)L_54) == ((int32_t)((int32_t)46)))? 1 : 0);
		bool L_55 = V_4;
		if (!L_55)
		{
			goto IL_0284;
		}
	}
	{
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_56 = __this->___textBox_3;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_56);
		NullCheck(L_57);
		int32_t L_58;
		L_58 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_57, NULL);
		String_t* L_59 = __this->___sentence_2;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_59, NULL);
		V_5 = (bool)((((int32_t)L_58) == ((int32_t)L_60))? 1 : 0);
		bool L_61 = V_5;
		if (!L_61)
		{
			goto IL_025e;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_62 = __this->___U3CU3E4__this_5;
		NullCheck(L_62);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_63 = L_62->___buttonDialogSkip_8;
		NullCheck(L_63);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_63, (bool)1, NULL);
	}

IL_025e:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_64 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_64, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_64);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0277:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0322;
	}

IL_0284:
	{
		// else if (letter == ',')
		Il2CppChar L_65 = __this->___U3CletterU3E5__6_11;
		V_6 = (bool)((((int32_t)L_65) == ((int32_t)((int32_t)44)))? 1 : 0);
		bool L_66 = V_6;
		if (!L_66)
		{
			goto IL_02ed;
		}
	}
	{
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_67 = __this->___textBox_3;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_67);
		NullCheck(L_68);
		int32_t L_69;
		L_69 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_68, NULL);
		String_t* L_70 = __this->___sentence_2;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_70, NULL);
		V_7 = (bool)((((int32_t)L_69) == ((int32_t)L_71))? 1 : 0);
		bool L_72 = V_7;
		if (!L_72)
		{
			goto IL_02ca;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_73 = __this->___U3CU3E4__this_5;
		NullCheck(L_73);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_74 = L_73->___buttonDialogSkip_8;
		NullCheck(L_74);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_74, (bool)1, NULL);
	}

IL_02ca:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_75 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_75, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_75);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_02e3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0322;
	}

IL_02ed:
	{
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_76 = __this->___textBox_3;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_76);
		NullCheck(L_77);
		int32_t L_78;
		L_78 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_77, NULL);
		String_t* L_79 = __this->___sentence_2;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_79, NULL);
		V_8 = (bool)((((int32_t)L_78) == ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_0322;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		DialogManager_t6D984B69C559D3E0A330C2C1A2F6B3E982DD78C2* L_82 = __this->___U3CU3E4__this_5;
		NullCheck(L_82);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_83 = L_82->___buttonDialogSkip_8;
		NullCheck(L_83);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_83, (bool)1, NULL);
	}

IL_0322:
	{
		// yield return new WaitForSeconds(0.03f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_84 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_84);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_84, (0.0299999993f), NULL);
		__this->___U3CU3E2__current_1 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_84);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_033b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_85 = __this->___U3CU3Es__5_10;
		__this->___U3CU3Es__5_10 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0351:
	{
		// foreach (char letter in sentence.ToCharArray())
		int32_t L_86 = __this->___U3CU3Es__5_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_87 = __this->___U3CU3Es__4_9;
		NullCheck(L_87);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))
		{
			goto IL_01d1;
		}
	}
	{
		__this->___U3CU3Es__4_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_9), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
	}

IL_036b:
	{
		// }
		return (bool)0;
	}
}
// System.Object DialogManager/<TypeSentence>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeSentenceU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE0FCCFD14951AA250A3E2603B3C795D48EC9FA7E (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DialogManager/<TypeSentence>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__14_System_Collections_IEnumerator_Reset_m60E5E227691AA60A4446023464E5DD6F3D239E7F (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTypeSentenceU3Ed__14_System_Collections_IEnumerator_Reset_m60E5E227691AA60A4446023464E5DD6F3D239E7F_RuntimeMethod_var)));
	}
}
// System.Object DialogManager/<TypeSentence>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeSentenceU3Ed__14_System_Collections_IEnumerator_get_Current_m1C7F85D11A3A8DB994C780C031BA649DFEB074E6 (U3CTypeSentenceU3Ed__14_t9C82413DAD04E9065252E30E30EC9A713F333EC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void firstDialogue::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstDialogue_Start_m80452FA3A5A509471A2B7A25720B8CC5E69EA98E (firstDialogue_t55B7C557B2BB2DDF44F216003790DAFD18A790BB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void firstDialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstDialogue__ctor_m51AEE3398A28634FD9F3B10B82BFFCC456AB8D59 (firstDialogue_t55B7C557B2BB2DDF44F216003790DAFD18A790BB* __this, const RuntimeMethod* method) 
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
// System.Void down_dialogue::DownDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void down_dialogue_DownDialogue_mB4594659E52A21AB3F148B865CFE2637558140A1 (down_dialogue_t4DE1D95B8A16C3313D009947AB3EFC0CB4228FF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CD5C3403DEA8A36E0009C0B5C4C11A02385F5C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "???????, ? ???? ????? ???? ???.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral8CD5C3403DEA8A36E0009C0B5C4C11A02385F5C1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// DM.EndDialog();
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_4 = __this->___DM_5;
		NullCheck(L_4);
		dialogManager_EndDialog_m5E80430993260D9F1A46BBF6E958102431E94A33(L_4, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void down_dialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void down_dialogue__ctor_m4DE4B0A50F12830234B935B84C09483E5C163AEB (down_dialogue_t4DE1D95B8A16C3313D009947AB3EFC0CB4228FF5* __this, const RuntimeMethod* method) 
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
// System.Void dream::_Dream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dream__Dream_m11FAE407E3E6BA0283FDE3BE0D9FAB6A9591B6FF (dream_t7DDBBB287C4242AFE5BD7B041CEACE473F5ED044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC537ACBB5E1EC533D450847B81811332345029E5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "???? ????????????, ??? ?????? ????????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralC537ACBB5E1EC533D450847B81811332345029E5, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void dream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dream__ctor_m1F0A4AC45C21465C448417FA03610AFC3A6ADEDD (dream_t7DDBBB287C4242AFE5BD7B041CEACE473F5ED044* __this, const RuntimeMethod* method) 
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
// System.Void Eva::_Eva()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eva__Eva_mFF8159E362F43AE3353BD3C6D607A5B09D63A5A6 (Eva_t0E098CC7273CBF8BB080E5284ACCB1A241F43299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(12);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)12), NULL);
		// }
		return;
	}
}
// System.Void Eva::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eva__ctor_m4DDF47A98111DA75706AB4886E30245770620093 (Eva_t0E098CC7273CBF8BB080E5284ACCB1A241F43299* __this, const RuntimeMethod* method) 
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
// System.Void Eva_teleportation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eva_teleportation_Update_m428A8C2012576957C9D0837C006C8BCD944E657F (Eva_teleportation_t30B47DE11C227553A77977AD0DF72C1A695D7043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F7F90A7CF2D57747B4AC2E2D0668D18A88D8924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "?? ????? ??????????? ???.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral5F7F90A7CF2D57747B4AC2E2D0668D18A88D8924, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// transform.position = new Vector3(169.9f, -20.8f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (169.899994f), (-20.7999992f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Eva_teleportation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eva_teleportation__ctor_mDEB2D3DFECEBFADB9C70F7502DD1E3B398CB1A56 (Eva_teleportation_t30B47DE11C227553A77977AD0DF72C1A695D7043* __this, const RuntimeMethod* method) 
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
// System.Void go_to_cabinet1::go_To()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_cabinet1_go_To_mA311C28D79BCCC950EBD759A649CF6F466F7D3FE (go_to_cabinet1_tAC8162903FCDFBAD22BDBE111930860043EB3E2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral366F71B84E3DE7E09FDFBA7BA9AD6719296732FF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "??????... ?? ??? ?????????...")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral366F71B84E3DE7E09FDFBA7BA9AD6719296732FF, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// SceneManager.LoadScene(13);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)13), NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void go_to_cabinet1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_cabinet1__ctor_m72ECD857B738045F3051B7D87BBDEDB6D658A046 (go_to_cabinet1_tAC8162903FCDFBAD22BDBE111930860043EB3E2A* __this, const RuntimeMethod* method) 
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
// System.Void go_to_cabinet2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_cabinet2_Update_mA3864601C575A0E9BC72A9CBCCE23D11A5767B99 (go_to_cabinet2_t008F30BB3B6F2B6475B8C033D316DD170C7C92A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE634A86541A93E30FE17B4226431BB799E67B930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF54A0A7F9CA1BBC3AEDB1CD086C4EA1944018BB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "????: 3")
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralFF54A0A7F9CA1BBC3AEDB1CD086C4EA1944018BB, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Invoke("NextScene", 50);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralE634A86541A93E30FE17B4226431BB799E67B930, (50.0f), NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void go_to_cabinet2::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_cabinet2_NextScene_m217E7182A7CC7B27E6D53924EF2994140CEF110B (go_to_cabinet2_t008F30BB3B6F2B6475B8C033D316DD170C7C92A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
		// }
		return;
	}
}
// System.Void go_to_cabinet2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_cabinet2__ctor_mC4EE6D4073871EC065D775CA82CB02F5500B2870 (go_to_cabinet2_t008F30BB3B6F2B6475B8C033D316DD170C7C92A7* __this, const RuntimeMethod* method) 
{
	{
		// public bool usl = false;
		__this->___usl_5 = (bool)0;
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
// System.Void go_to_flat::go_to_flat_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_flat_go_to_flat_B_m6646759FA4DA8D115170CC4D03D8B9F3FFE396F8 (go_to_flat_t90EB623AFD973590EE6BAA3256BE73C264A5E3B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7517CEB8C87D2467BF2580412C9E6FA1E96CE5B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "?????, ?? ?????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralE7517CEB8C87D2467BF2580412C9E6FA1E96CE5B, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// SceneManager.LoadScene(8);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(8, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void go_to_flat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_flat__ctor_mBD0F07A9038A7676331E8C9E30A7E9A654ECC4F2 (go_to_flat_t90EB623AFD973590EE6BAA3256BE73C264A5E3B6* __this, const RuntimeMethod* method) 
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
// System.Void go_to_flat2::Go_to_flat_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_flat2_Go_to_flat_2_m0DDE726F84F7F1E652C533916CE75FBDA01D5681 (go_to_flat2_t0BC2A7781D2649A2CA8F2F017F4A796F5B52E56F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84AB6A35415470C742A12FDD315C2290FA2083D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "???????, ????? ???????? ?????? ??????. ???? ????? ?????? ??????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralE84AB6A35415470C742A12FDD315C2290FA2083D, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// SceneManager.LoadScene(9);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)9), NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void go_to_flat2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_flat2__ctor_m319B39C670A45AF3C0633A59D4D467732B080030 (go_to_flat2_t0BC2A7781D2649A2CA8F2F017F4A796F5B52E56F* __this, const RuntimeMethod* method) 
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
// System.Void go_to_flat3::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_flat3_Load_mA4FE810C2486A89B77049540319D46A31B0D0685 (go_to_flat3_tA67133EB91A102F0536A79E9F5653F7FF1EF604C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBA9F6AA7AF73E039D69DAB5CB94E8B141FAA6F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "??????? ?? ????? ??????????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralECBA9F6AA7AF73E039D69DAB5CB94E8B141FAA6F, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// SceneManager.LoadScene(10);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)10), NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void go_to_flat3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_flat3__ctor_m33210D7C7E3CBA67BBFB1AD4E1C2193C3BDCBA26 (go_to_flat3_tA67133EB91A102F0536A79E9F5653F7FF1EF604C* __this, const RuntimeMethod* method) 
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
// System.Void go_to_mini_game1::go_To()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_mini_game1_go_To_m10CD87786038E25D7C1AD2A20CB5533B2A6B68A7 (go_to_mini_game1_t21168930EA297BB5BA87BD712E5F0BF4F0F3A874* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD54A56582219823961747B2D97353A6F5471BEAA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "?? ?????? ?? ?? ??????? ???????? ????, ? ???????? ????. ?? ????????? ?????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralD54A56582219823961747B2D97353A6F5471BEAA, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void go_to_mini_game1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_to_mini_game1__ctor_mC8FFD3AEDC59EEE5566A5E527EE0A2A2C5CCBB6D (go_to_mini_game1_t21168930EA297BB5BA87BD712E5F0BF4F0F3A874* __this, const RuntimeMethod* method) 
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_5 = __this->___variableJoystick_5;
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_9, L_14, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch(index)
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0019:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_3 = __this->___variableJoystick_4;
		NullCheck(L_3);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_3, 0, NULL);
		// break;
		goto IL_0048;
	}

IL_0028:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_4 = __this->___variableJoystick_4;
		NullCheck(L_4);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_4, 1, NULL);
		// break;
		goto IL_0048;
	}

IL_0037:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_5 = __this->___variableJoystick_4;
		NullCheck(L_5);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_5, 2, NULL);
		// break;
		goto IL_0048;
	}

IL_0046:
	{
		// break;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (index)
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_005f;
			}
		}
	}
	{
		goto IL_0082;
	}

IL_0019:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_3 = __this->___variableJoystick_4;
		NullCheck(L_3);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6(L_3, 0, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_5 = __this->___axisSprites_7;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_8, NULL);
		// break;
		goto IL_0084;
	}

IL_003c:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_9 = __this->___variableJoystick_4;
		NullCheck(L_9);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6(L_9, 1, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_11 = __this->___axisSprites_7;
		int32_t L_12 = ___index0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_14, NULL);
		// break;
		goto IL_0084;
	}

IL_005f:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_15 = __this->___variableJoystick_4;
		NullCheck(L_15);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6(L_15, 2, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_17 = __this->___axisSprites_7;
		int32_t L_18 = ___index0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_20, NULL);
		// break;
		goto IL_0084;
	}

IL_0082:
	{
		// break;
		goto IL_0084;
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___valueText_5;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 1, NULL);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		float L_6 = V_0;
		return L_6;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 2, NULL);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		float L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		return L_3;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return handleRange; }
		float L_0 = __this->___handleRange_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return handleRange; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return deadZone; }
		float L_0 = __this->___deadZone_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return deadZone; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->___snapX_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->___snapY_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// HandleRange = handleRange;
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505(__this, L_0, NULL);
		// DeadZone = deadZone;
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19(__this, L_1, NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_004e:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		// background.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		NullCheck(L_7);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_7, L_8, NULL);
		// handle.anchorMin = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		NullCheck(L_9);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_9, L_10, NULL);
		// handle.anchorMax = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		NullCheck(L_11);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_11, L_12, NULL);
		// handle.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		NullCheck(L_13);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_13, L_14, NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// cam = null;
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___canvas_12;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		__this->___cam_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_4);
	}

IL_002b:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F(L_5, L_7, NULL);
		V_0 = L_8;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___background_9;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_10, (2.0f), NULL);
		V_1 = L_11;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___eventData0;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = __this->___canvas_12;
		NullCheck(L_17);
		float L_18;
		L_18 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_16, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline(L_15, L_19, NULL);
		__this->___input_14 = L_20;
		// FormatInput();
		Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342(__this, NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___input_14);
		float L_22;
		L_22 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_22, L_24, L_25, L_26);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_28, L_29, NULL);
		float L_31 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_30, L_31, NULL);
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_27, L_32, NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->___deadZone_5;
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// if (magnitude > 1)
		float L_3 = ___magnitude0;
		V_1 = (bool)((((float)L_3) > ((float)(1.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// input = normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___normalised1;
		__this->___input_14 = L_5;
	}

IL_0022:
	{
		goto IL_0030;
	}

IL_0025:
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_6;
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->___axisOptions_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___input_14);
		float L_3 = L_2->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_3, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_4;
		goto IL_0053;
	}

IL_002b:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_5 = __this->___axisOptions_6;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___input_14);
		float L_8 = L_7->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (0.0f), L_8, /*hidden argument*/NULL);
		__this->___input_14 = L_9;
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return value;
		float L_2 = ___value0;
		V_1 = L_2;
		goto IL_00eb;
	}

IL_0014:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_3 = __this->___axisOptions_6;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_7;
		L_7 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_5, L_6, NULL);
		V_3 = L_7;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_8 = ___snapAxis1;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_10 = V_3;
		if ((((float)L_10) < ((float)(22.5f))))
		{
			goto IL_0053;
		}
	}
	{
		float L_11 = V_3;
		G_B7_0 = ((((float)L_11) > ((float)(157.5f)))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B7_0 = 1;
	}

IL_0054:
	{
		V_5 = (bool)G_B7_0;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B12_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B12_0 = 1;
	}

IL_0071:
	{
		V_1 = ((float)G_B12_0);
		goto IL_00eb;
	}

IL_0075:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_14 = ___snapAxis1;
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00b1;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_16 = V_3;
		if ((!(((float)L_16) > ((float)(67.5f)))))
		{
			goto IL_0092;
		}
	}
	{
		float L_17 = V_3;
		G_B17_0 = ((((float)L_17) < ((float)(112.5f)))? 1 : 0);
		goto IL_0093;
	}

IL_0092:
	{
		G_B17_0 = 0;
	}

IL_0093:
	{
		V_7 = (bool)G_B17_0;
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// return 0;
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_00a1:
	{
		// return (value > 0) ? 1 : -1;
		float L_19 = ___value0;
		if ((((float)L_19) > ((float)(0.0f))))
		{
			goto IL_00ac;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B22_0 = 1;
	}

IL_00ad:
	{
		V_1 = ((float)G_B22_0);
		goto IL_00eb;
	}

IL_00b1:
	{
		// return value;
		float L_20 = ___value0;
		V_1 = L_20;
		goto IL_00eb;
	}

IL_00b5:
	{
		// if (value > 0)
		float L_21 = ___value0;
		V_8 = (bool)((((float)L_21) > ((float)(0.0f)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00cc;
		}
	}
	{
		// return 1;
		V_1 = (1.0f);
		goto IL_00eb;
	}

IL_00cc:
	{
		// if (value < 0)
		float L_23 = ___value0;
		V_9 = (bool)((((float)L_23) < ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_00e2;
		}
	}
	{
		// return -1;
		V_1 = (-1.0f);
		goto IL_00eb;
	}

IL_00e2:
	{
		// return 0;
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_00eb:
	{
		// }
		float L_25 = V_1;
		return L_25;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___screenPosition0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_1, L_2, L_3, (&V_0), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___baseRect_11;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_6, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___baseRect_11;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_7, L_9, NULL);
		V_2 = L_10;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___background_9;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_12, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___baseRect_11;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_13, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_11, L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_17, L_18, NULL);
		V_3 = L_19;
		goto IL_006e;
	}

IL_0066:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_3 = L_20;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		return L_21;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->___handleRange_4 = (1.0f);
		// [SerializeField] private float deadZone = 0;
		__this->___deadZone_5 = (0.0f);
		// [SerializeField] private AxisOptions axisOptions = AxisOptions.Both;
		__this->___axisOptions_6 = 0;
		// [SerializeField] private bool snapX = false;
		__this->___snapX_7 = (bool)0;
		// [SerializeField] private bool snapY = false;
		__this->___snapY_8 = (bool)0;
		// [SerializeField] protected RectTransform background = null;
		__this->___background_9 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___background_9), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// [SerializeField] private RectTransform handle = null;
		__this->___handle_10 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handle_10), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// private RectTransform baseRect = null;
		__this->___baseRect_11 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// private Vector2 input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->___moveThreshold_15;
		DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9(__this, L_0, NULL);
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->___moveThreshold_15;
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
	}

IL_003d:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___fixedPosition_17;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_3, L_4, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		goto IL_004a;
	}

IL_0038:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_4, NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_5, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_003a:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0020:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->___moveThreshold_15;
		G_B3_0 = ((((float)L_1) > ((float)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___normalised1;
		float L_5 = ___magnitude0;
		float L_6 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_4, ((float)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_7, L_8, NULL);
		V_1 = L_9;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_10;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_11, L_14, NULL);
	}

IL_0049:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_15 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_15, L_16, L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		// [SerializeField] private JoystickType joystickType = JoystickType.Fixed;
		__this->___joystickType_16 = 0;
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void Liza::_Liza()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Liza__Liza_m5852DE135B9CC844A221CF1F1DEC567DC2794DA5 (Liza_tA9CE07463B9859CC5685F9556827BB737C9A6F04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(11);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)11), NULL);
		// }
		return;
	}
}
// System.Void Liza::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Liza__ctor_m6A3B635ACD860E5B491B027C5C8C24C786BF1426 (Liza_tA9CE07463B9859CC5685F9556827BB737C9A6F04* __this, const RuntimeMethod* method) 
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
// System.Void AIPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIPlayer_Start_mBCA3A00673855BA944F785012F5584841057074A (AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF525511B79427965DE0A0812C55CF9FF75347DA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// board = FindObjectOfType <BoardManager> ();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_0;
		L_0 = Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC(Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var);
		__this->___board_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___board_4), (void*)L_0);
		// if (board == null)
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_1 = __this->___board_4;
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.Log ("ERROR: Could not find BoardManager script!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBF525511B79427965DE0A0812C55CF9FF75347DA, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void AIPlayer::PlayAIMove(pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIPlayer_PlayAIMove_mC7717D34F781FDDB23F955579579CEE8D7EB15EC (AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* __this, int32_t ___piece0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int move = board.GetBestMove ();
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_0 = __this->___board_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BoardManager_GetBestMove_mC2EC07AA69DD732F472A28B7A85B616934A0AEA6(L_0, NULL);
		V_0 = L_1;
		// StartCoroutine (DoMove (move, piece));    // Use a coroutine to actually play the move.
		int32_t L_2 = V_0;
		int32_t L_3 = ___piece0;
		RuntimeObject* L_4;
		L_4 = AIPlayer_DoMove_mCC5EDA9F70EDCFD697D652D3FFA57F96E2B01422(__this, L_2, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AIPlayer::DoMove(System.Int32,pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIPlayer_DoMove_mCC5EDA9F70EDCFD697D652D3FFA57F96E2B01422 (AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* __this, int32_t ___move0, int32_t ___piece1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* L_0 = (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E*)il2cpp_codegen_object_new(U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoMoveU3Ed__3__ctor_m4D92D43ABF304F8F322AC8D552DAE73DE43F349A(L_0, 0, NULL);
		U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* L_2 = L_1;
		int32_t L_3 = ___move0;
		NullCheck(L_2);
		L_2->___move_2 = L_3;
		U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* L_4 = L_2;
		int32_t L_5 = ___piece1;
		NullCheck(L_4);
		L_4->___piece_3 = L_5;
		return L_4;
	}
}
// System.Void AIPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIPlayer__ctor_mF013FBC9C5BE1B2E2169ECB26952F3918CF11FBC (AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* __this, const RuntimeMethod* method) 
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
// System.Void AIPlayer/<DoMove>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoMoveU3Ed__3__ctor_m4D92D43ABF304F8F322AC8D552DAE73DE43F349A (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AIPlayer/<DoMove>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoMoveU3Ed__3_System_IDisposable_Dispose_mD358D8B0A9099C2CEE6813A0BEC3DC7588BA1369 (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AIPlayer/<DoMove>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoMoveU3Ed__3_MoveNext_mD913A9A007C8705916D379B5428A5C31C343F084 (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds (1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// board.AIPlayMoveAt (move, piece);
		AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* L_4 = __this->___U3CU3E4__this_4;
		NullCheck(L_4);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_5 = L_4->___board_4;
		int32_t L_6 = __this->___move_2;
		int32_t L_7 = __this->___piece_3;
		NullCheck(L_5);
		BoardManager_AIPlayMoveAt_m79D0CBAC442D4A36ED7120136C0ACDABED898BF3(L_5, L_6, L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AIPlayer/<DoMove>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoMoveU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m888731FB8190142CF9DDB5F400C8CC049E7216BF (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AIPlayer/<DoMove>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoMoveU3Ed__3_System_Collections_IEnumerator_Reset_m017007E07C4C923506FC43F1BA05CA240DF30EE2 (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoMoveU3Ed__3_System_Collections_IEnumerator_Reset_m017007E07C4C923506FC43F1BA05CA240DF30EE2_RuntimeMethod_var)));
	}
}
// System.Object AIPlayer/<DoMove>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoMoveU3Ed__3_System_Collections_IEnumerator_get_Current_m7FABC37AE58A8FB6432AC1D22A2BA7E55CC1ED81 (U3CDoMoveU3Ed__3_t0AC3DE64AD087EE728F7FFF7A5C90C6E42FF1D2E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void BoardManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_Start_mA12FE9F57923857C2251FE94162437CB8CB17EA9 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_mB4B19606DC8C557B4288092660C422AD0CC4DBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C00005C6D090E3E1C8EF9DCC3B448B10F212B37);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// gHandler = FindObjectOfType<GUIHandler> ();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_0;
		L_0 = Object_FindObjectOfType_TisGUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_mB4B19606DC8C557B4288092660C422AD0CC4DBF6(Object_FindObjectOfType_TisGUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_mB4B19606DC8C557B4288092660C422AD0CC4DBF6_RuntimeMethod_var);
		__this->___gHandler_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gHandler_12), (void*)L_0);
		// if (gHandler == null)
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_1 = __this->___gHandler_12;
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.Log ("ERROR: Could not find GUIHandler script!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3C00005C6D090E3E1C8EF9DCC3B448B10F212B37, NULL);
	}

IL_0027:
	{
		// scoreBoard = new int[BOARDDIMENSIONS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->___scoreBoard_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreBoard_14), (void*)L_4);
		// InitScoreboard ();
		BoardManager_InitScoreboard_m23BCC8D814402187E67BED5ABB8D391E120511B2(__this, NULL);
		// }
		return;
	}
}
// System.Void BoardManager::InitScoreboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitScoreboard_m23BCC8D814402187E67BED5ABB8D391E120511B2 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B5_2 = NULL;
	{
		// pieceToPlayNext = EMPTYCELL;        // we don't know which piece is playing first at this stage.
		__this->___pieceToPlayNext_13 = 0;
		// for (int i = 0; i < scoreBoard.Length; ++i) {
		V_0 = 0;
		goto IL_003d;
	}

IL_000c:
	{
		// scoreBoard [i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___scoreBoard_14;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		// if (i == 4) {
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)4))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// scoreBoard [i] = (Random.value >= RANDOMFACTOR) ? 5 : 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___scoreBoard_14;
		int32_t L_5 = V_0;
		float L_6;
		L_6 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		G_B3_0 = L_5;
		G_B3_1 = L_4;
		if ((((float)L_6) >= ((float)(0.5f))))
		{
			G_B4_0 = L_5;
			G_B4_1 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 5;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0036:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (int32_t)G_B5_0);
	}

IL_0038:
	{
		// for (int i = 0; i < scoreBoard.Length; ++i) {
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < scoreBoard.Length; ++i) {
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___scoreBoard_14;
		NullCheck(L_9);
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::ClearBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_ClearBoard_mCE77812DE14FC1530673E389A5D164EEAD5371BC (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* V_0 = NULL;
	int32_t V_1 = 0;
	GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* V_2 = NULL;
	{
		// foreach (GridCellScript gcs in gridCells) {
		GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* L_0 = __this->___gridCells_11;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001f;
	}

IL_000d:
	{
		// foreach (GridCellScript gcs in gridCells) {
		GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// gcs.state = GridCellScript.CellStates.empty;
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_5 = V_2;
		NullCheck(L_5);
		GridCellScript_set_state_mE5CC25CFB2761E4D26680161F0164F7E79D1C2BD(L_5, 0, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// foreach (GridCellScript gcs in gridCells) {
		int32_t L_7 = V_1;
		GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// InitScoreboard ();
		BoardManager_InitScoreboard_m23BCC8D814402187E67BED5ABB8D391E120511B2(__this, NULL);
		// }
		return;
	}
}
// System.Int32[] BoardManager::GetBoardAsInts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BoardManager_GetBoardAsInts_m5B0F486387AB74FDCE25B3DD642EBADC6A9FA490 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* V_4 = NULL;
	int32_t V_5 = 0;
	GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* G_B11_0 = NULL;
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* G_B12_1 = NULL;
	{
		// int xCount = 0;
		V_0 = 0;
		// int oCount = 0;
		V_1 = 0;
		// int i = 0;
		V_3 = 0;
		// cells = new int[BOARDDIMENSIONS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_2 = L_0;
		// foreach (GridCellScript gcs in gridCells) {
		GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* L_1 = __this->___gridCells_11;
		V_4 = L_1;
		V_5 = 0;
		goto IL_007a;
	}

IL_001d:
	{
		// foreach (GridCellScript gcs in gridCells) {
		GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* L_2 = V_4;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_6 = L_5;
		// if (gcs.state == GridCellScript.CellStates.empty) {
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_6 = V_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9(L_6, NULL);
		V_7 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		// cells [i] = EMPTYCELL;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)0);
	}

IL_003b:
	{
		// if (gcs.state == GridCellScript.CellStates.O) {
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_11 = V_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9(L_11, NULL);
		V_8 = (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		// cells [i] = O_CELL;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)1);
		// ++oCount;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		// if (gcs.state == GridCellScript.CellStates.X) {
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_17 = V_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9(L_17, NULL);
		V_9 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		// cells [i] = X_CELL;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (int32_t)2);
		// ++xCount;
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006f:
	{
		// ++i;
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007a:
	{
		// foreach (GridCellScript gcs in gridCells) {
		int32_t L_25 = V_5;
		GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* L_26 = V_4;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// pieceToPlayNext = (gHandler.GetCurrentPlayerPieceAsInt ()) == X_CELL ? O_CELL : X_CELL;
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_27 = __this->___gHandler_12;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GUIHandler_GetCurrentPlayerPieceAsInt_m6BE07E18B43E2C53757CA6F02ABE0D39F35AFAB6(L_27, NULL);
		G_B10_0 = __this;
		if ((((int32_t)L_28) == ((int32_t)2)))
		{
			G_B11_0 = __this;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 2;
		G_B12_1 = G_B10_0;
		goto IL_0095;
	}

IL_0094:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0095:
	{
		NullCheck(G_B12_1);
		G_B12_1->___pieceToPlayNext_13 = G_B12_0;
		// return cells;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_2;
		V_10 = L_29;
		goto IL_009f;
	}

IL_009f:
	{
		// }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_10;
		return L_30;
	}
}
// System.Void BoardManager::AIPlayMoveAt(System.Int32,pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_AIPlayMoveAt_m79D0CBAC442D4A36ED7120136C0ACDABED898BF3 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___cell0, int32_t ___piece1, const RuntimeMethod* method) 
{
	GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* V_0 = NULL;
	GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* G_B2_0 = NULL;
	GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* G_B3_1 = NULL;
	{
		// GridCellScript gcs = gridCells [cell];
		GridCellScriptU5BU5D_tD4CF0BC0F7F0F8B6C7163C340BDD0962E5C5832A* L_0 = __this->___gridCells_11;
		int32_t L_1 = ___cell0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// gcs.state = (piece == pieces.X) ? GridCellScript.CellStates.X : GridCellScript.CellStates.O;
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_4 = V_0;
		int32_t L_5 = ___piece1;
		G_B1_0 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_4;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		GridCellScript_set_state_mE5CC25CFB2761E4D26680161F0164F7E79D1C2BD(G_B3_1, G_B3_0, NULL);
		// gHandler.NextTurn ();    // trigger next turn.
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_6 = __this->___gHandler_12;
		NullCheck(L_6);
		GUIHandler_NextTurn_m268CA4AFC16AA993CF46CC54E872B7D0E27E4F1C(L_6, NULL);
		// }
		return;
	}
}
// System.Int32 BoardManager::HasGameBeenWon(System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_HasGameBeenWon_mAC8112D8D047D5AE3F622136926DC527356EF84A (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___board0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CBD482FD0F16CD8337E23267B7BC55EA28FE29542EB79A68701A5527AED185EF_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	int32_t V_12 = 0;
	uint32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	{
		// int winner = EMPTYCELL;
		V_0 = 0;
		// uint [] winStates = { 448u, 56u, 7u, 292u, 146u, 73u, 273u, 84u };
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____CBD482FD0F16CD8337E23267B7BC55EA28FE29542EB79A68701A5527AED185EF_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		V_1 = L_1;
		// uint OCells = 0;    // we're going to use some basic binary arithmetic for this test:
		V_2 = 0;
		// uint XCells = 0;
		V_3 = 0;
		// int i = 8;    // this is used as a _bit_ counter, not an int counter.
		V_4 = 8;
		// foreach (int cell in board) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_3 = ___board0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_3);
		V_5 = L_4;
		V_6 = 0;
		goto IL_0070;
	}

IL_0026:
	{
		// foreach (int cell in board) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_7 = L_8;
		// if (cell == O_CELL)
		int32_t L_9 = V_7;
		V_8 = (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// OCells |= (1u << i);
		uint32_t L_11 = V_2;
		int32_t L_12 = V_4;
		V_2 = ((int32_t)((int32_t)L_11|((int32_t)(1<<((int32_t)(L_12&((int32_t)31)))))));
	}

IL_0043:
	{
		// if (cell == X_CELL)
		int32_t L_13 = V_7;
		V_9 = (bool)((((int32_t)L_13) == ((int32_t)2))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		// XCells |= (1u << i);
		uint32_t L_15 = V_3;
		int32_t L_16 = V_4;
		V_3 = ((int32_t)((int32_t)L_15|((int32_t)(1<<((int32_t)(L_16&((int32_t)31)))))));
	}

IL_0058:
	{
		// if (i > 0)    // A quick sanity-check.
		int32_t L_17 = V_4;
		V_10 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		// --i;    // The top-left corner of the board should be the left-most bit, so we're storing from bit 8 to bit 0.
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_0069:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0070:
	{
		// foreach (int cell in board) {
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_5;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// foreach (uint state in winStates) {
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_1;
		V_11 = L_23;
		V_12 = 0;
		goto IL_00b4;
	}

IL_0081:
	{
		// foreach (uint state in winStates) {
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_11;
		int32_t L_25 = V_12;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_13 = L_27;
		// if ((OCells & state) == state) {
		uint32_t L_28 = V_2;
		uint32_t L_29 = V_13;
		uint32_t L_30 = V_13;
		V_14 = (bool)((((int32_t)((int32_t)((int32_t)L_28&(int32_t)L_29))) == ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_14;
		if (!L_31)
		{
			goto IL_009b;
		}
	}
	{
		// winner = O_CELL;
		V_0 = 1;
	}

IL_009b:
	{
		// if ((XCells & state) == state) {
		uint32_t L_32 = V_3;
		uint32_t L_33 = V_13;
		uint32_t L_34 = V_13;
		V_15 = (bool)((((int32_t)((int32_t)((int32_t)L_32&(int32_t)L_33))) == ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_15;
		if (!L_35)
		{
			goto IL_00ad;
		}
	}
	{
		// winner = X_CELL;
		V_0 = 2;
	}

IL_00ad:
	{
		int32_t L_36 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b4:
	{
		// foreach (uint state in winStates) {
		int32_t L_37 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_11;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0081;
		}
	}
	{
		// return (winner);
		int32_t L_39 = V_0;
		V_16 = L_39;
		goto IL_00c1;
	}

IL_00c1:
	{
		// }
		int32_t L_40 = V_16;
		return L_40;
	}
}
// System.Void BoardManager::RefreshScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_RefreshScores_m6B7C4E9349F80BE64F433D620AD3E16C6A974875 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	{
		// int [] board = GetBoardAsInts ();        // This also works out who's turn it is now.
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = BoardManager_GetBoardAsInts_m5B0F486387AB74FDCE25B3DD642EBADC6A9FA490(__this, NULL);
		V_0 = L_0;
		// int winningPiece = HasGameBeenWon (ref board);    // returns EMPTYCELL if neither side has won yet.
		int32_t L_1;
		L_1 = BoardManager_HasGameBeenWon_mAC8112D8D047D5AE3F622136926DC527356EF84A(__this, (&V_0), NULL);
		V_1 = L_1;
		// int playableCells = 0;
		V_2 = 0;
		// foreach (int c in board) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		V_3 = L_2;
		V_4 = 0;
		goto IL_0038;
	}

IL_001b:
	{
		// foreach (int c in board) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = L_6;
		// if (c == EMPTYCELL)
		int32_t L_7 = V_5;
		V_6 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_6;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// ++playableCells;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0038:
	{
		// foreach (int c in board) {
		int32_t L_11 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// if ((playableCells <= 0) && (winningPiece == EMPTYCELL)) {    // it's a draw...
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_14 = V_1;
		G_B8_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B8_0 = 0;
	}

IL_004a:
	{
		V_7 = (bool)G_B8_0;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		// gHandler.GameDrawn ();
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_16 = __this->___gHandler_12;
		NullCheck(L_16);
		GUIHandler_GameDrawn_m1E76647339D759DA6CAB22B1DEA118F0CDCD42BF(L_16, NULL);
	}

IL_005e:
	{
		// if (winningPiece == EMPTYCELL) {
		int32_t L_17 = V_1;
		V_8 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_009e;
		}
	}
	{
		// for (int i = 0; i < BOARDDIMENSIONS; ++i) {
		V_9 = 0;
		goto IL_008f;
	}

IL_006e:
	{
		// scoreBoard [i] = GetScoreFor (pieceToPlayNext, i, ref board);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___scoreBoard_14;
		int32_t L_20 = V_9;
		int32_t L_21 = __this->___pieceToPlayNext_13;
		int32_t L_22 = V_9;
		int32_t L_23;
		L_23 = BoardManager_GetScoreFor_m4A00F5386E6F9A273D557D8DAC4439FCE2B7FEB3(__this, L_21, L_22, (&V_0), NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)L_23);
		// for (int i = 0; i < BOARDDIMENSIONS; ++i) {
		int32_t L_24 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008f:
	{
		// for (int i = 0; i < BOARDDIMENSIONS; ++i) {
		int32_t L_25 = V_9;
		V_10 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_26 = V_10;
		if (L_26)
		{
			goto IL_006e;
		}
	}
	{
		goto IL_00ac;
	}

IL_009e:
	{
		// gHandler.GameWon ();
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_27 = __this->___gHandler_12;
		NullCheck(L_27);
		GUIHandler_GameWon_mAB81B3710B2D741E3F02F1628E9CC11D80600D7F(L_27, NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Int32 BoardManager::GetBestMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_GetBestMove_mC2EC07AA69DD732F472A28B7A85B616934A0AEA6 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		// int bestScore = 0;
		V_0 = 0;
		// int i = 0, bestCell = -1;
		V_1 = 0;
		// int i = 0, bestCell = -1;
		V_2 = (-1);
		// foreach (int score in scoreBoard) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___scoreBoard_14;
		V_3 = L_0;
		V_4 = 0;
		goto IL_0059;
	}

IL_0014:
	{
		// foreach (int score in scoreBoard) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_3;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_5 = L_4;
		// if (score > bestScore) {
		int32_t L_5 = V_5;
		int32_t L_6 = V_0;
		V_6 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// bestScore = score;
		int32_t L_8 = V_5;
		V_0 = L_8;
		// bestCell = i;
		int32_t L_9 = V_1;
		V_2 = L_9;
	}

IL_002d:
	{
		// if (score == bestScore) {
		int32_t L_10 = V_5;
		int32_t L_11 = V_0;
		V_7 = (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		// if (Random.value > RANDOMFACTOR)    // Random.value always returns a random number between 0.0 and 1.0 (inclusive).
		float L_13;
		L_13 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		V_8 = (bool)((((float)L_13) > ((float)(0.5f)))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		// bestCell = i;
		int32_t L_15 = V_1;
		V_2 = L_15;
	}

IL_004d:
	{
	}

IL_004e:
	{
		// ++i;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		// foreach (int score in scoreBoard) {
		int32_t L_18 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// return (bestCell);    // note that we're returning the cell array position, not an actual score. The scoring system is completely hidden within this file.
		int32_t L_20 = V_2;
		V_9 = L_20;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		int32_t L_21 = V_9;
		return L_21;
	}
}
// System.Int32 BoardManager::GetScoreFor(System.Int32,System.Int32,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_GetScoreFor_m4A00F5386E6F9A273D557D8DAC4439FCE2B7FEB3 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___nextPlayer0, int32_t ___i1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___board2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	{
		// if (board [i] != EMPTYCELL) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_0 = ___board2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_0);
		int32_t L_2 = ___i1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		// return (-1);        // Cell is already occupied.
		V_4 = (-1);
		goto IL_00f8;
	}

IL_0015:
	{
		// if (i == 4 && board [i] == EMPTYCELL && Random.value > RANDOMFACTOR) {    // nobody has played the centre square yet, so nudge current player to play it.
		int32_t L_6 = ___i1;
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_002d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_7 = ___board2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_7);
		int32_t L_9 = ___i1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		float L_12;
		L_12 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		G_B6_0 = ((((float)L_12) > ((float)(0.5f)))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 0;
	}

IL_002e:
	{
		V_5 = (bool)G_B6_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_003d;
		}
	}
	{
		// return (5);
		V_4 = 5;
		goto IL_00f8;
	}

IL_003d:
	{
		// int score = 0;
		V_2 = 0;
		// friendCellsCount = 0;
		V_0 = 0;
		// foeCellsCount = 0;
		V_1 = 0;
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_N);
		int32_t L_14 = ___nextPlayer0;
		int32_t L_15 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_16 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_14, L_15, (&V_0), (&V_1), L_16, 0, NULL);
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_S);
		int32_t L_17 = ___nextPlayer0;
		int32_t L_18 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_19 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_17, L_18, (&V_0), (&V_1), L_19, 4, NULL);
		// score += CalcScore (friendCellsCount, foeCellsCount);
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = BoardManager_CalcScore_m01B2E1CC04A422AA5092F3ED04D534D1B4F9813D(__this, L_21, L_22, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, L_23));
		// friendCellsCount = 0;
		V_0 = 0;
		// foeCellsCount = 0;
		V_1 = 0;
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_NE);
		int32_t L_24 = ___nextPlayer0;
		int32_t L_25 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_26 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_24, L_25, (&V_0), (&V_1), L_26, 1, NULL);
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_SW);
		int32_t L_27 = ___nextPlayer0;
		int32_t L_28 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_29 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_27, L_28, (&V_0), (&V_1), L_29, 5, NULL);
		// score += CalcScore (friendCellsCount, foeCellsCount);
		int32_t L_30 = V_2;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = BoardManager_CalcScore_m01B2E1CC04A422AA5092F3ED04D534D1B4F9813D(__this, L_31, L_32, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, L_33));
		// friendCellsCount = 0;
		V_0 = 0;
		// foeCellsCount = 0;
		V_1 = 0;
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_E);
		int32_t L_34 = ___nextPlayer0;
		int32_t L_35 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_36 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_34, L_35, (&V_0), (&V_1), L_36, 2, NULL);
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_W);
		int32_t L_37 = ___nextPlayer0;
		int32_t L_38 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_39 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_37, L_38, (&V_0), (&V_1), L_39, 6, NULL);
		// score += CalcScore (friendCellsCount, foeCellsCount);
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		int32_t L_42 = V_1;
		int32_t L_43;
		L_43 = BoardManager_CalcScore_m01B2E1CC04A422AA5092F3ED04D534D1B4F9813D(__this, L_41, L_42, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, L_43));
		// friendCellsCount = 0;
		V_0 = 0;
		// foeCellsCount = 0;
		V_1 = 0;
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_SE);
		int32_t L_44 = ___nextPlayer0;
		int32_t L_45 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_46 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_44, L_45, (&V_0), (&V_1), L_46, 3, NULL);
		// SetCellsCountersFor (nextPlayer, i, ref friendCellsCount, ref foeCellsCount, ref board, Directions.D_NW);
		int32_t L_47 = ___nextPlayer0;
		int32_t L_48 = ___i1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_49 = ___board2;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_47, L_48, (&V_0), (&V_1), L_49, 7, NULL);
		// score += CalcScore (friendCellsCount, foeCellsCount);
		int32_t L_50 = V_2;
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		int32_t L_53;
		L_53 = BoardManager_CalcScore_m01B2E1CC04A422AA5092F3ED04D534D1B4F9813D(__this, L_51, L_52, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_50, L_53));
		// return score;
		int32_t L_54 = V_2;
		V_4 = L_54;
		goto IL_00f8;
	}

IL_00f8:
	{
		// }
		int32_t L_55 = V_4;
		return L_55;
	}
}
// System.Void BoardManager::SetCellsCountersFor(System.Int32,System.Int32,System.Int32&,System.Int32&,System.Int32[]&,BoardManager/Directions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___friendPiece0, int32_t ___pos1, int32_t* ___friendCounter2, int32_t* ___foeCounter3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___board4, int32_t ___dir5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABE73DE3B75DC71E00232E7C8F9C7786CB848D4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B55_0 = 0;
	{
		// int foePiece = (friendPiece == X_CELL) ? O_CELL : X_CELL;
		int32_t L_0 = ___friendPiece0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		// if (pos < 0 || pos >= BOARDDIMENSIONS) {
		int32_t L_1 = ___pos1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___pos1;
		G_B6_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B6_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B6_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.Log ("ERROR: SetCellsCountersFor() - pos out of bounds!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0ABE73DE3B75DC71E00232E7C8F9C7786CB848D4, NULL);
		// return;
		goto IL_01d9;
	}

IL_002e:
	{
		// if (board [pos] == friendPiece) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_4 = ___board4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_4);
		int32_t L_6 = ___pos1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___friendPiece0;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// ++friendCounter;
		int32_t* L_11 = ___friendCounter2;
		int32_t* L_12 = ___friendCounter2;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0042:
	{
		// if (board [pos] == foePiece) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_14 = ___board4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_14);
		int32_t L_16 = ___pos1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_0;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		// ++foeCounter;
		int32_t* L_21 = ___foeCounter3;
		int32_t* L_22 = ___foeCounter3;
		int32_t L_23 = *((int32_t*)L_22);
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0058:
	{
		// switch (dir) {
		int32_t L_24 = ___dir5;
		V_5 = L_24;
		int32_t L_25 = V_5;
		V_4 = L_25;
		int32_t L_26 = V_4;
		switch (L_26)
		{
			case 0:
			{
				goto IL_008c;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_00dc;
			}
			case 3:
			{
				goto IL_0110;
			}
			case 4:
			{
				goto IL_0139;
			}
			case 5:
			{
				goto IL_0159;
			}
			case 6:
			{
				goto IL_0180;
			}
			case 7:
			{
				goto IL_01b0;
			}
		}
	}
	{
		goto IL_01d7;
	}

IL_008c:
	{
		// if (pos >= BOARDWIDTH) {
		int32_t L_27 = ___pos1;
		V_6 = (bool)((((int32_t)((((int32_t)L_27) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00ad;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (pos - BOARDWIDTH), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_29 = ___friendPiece0;
		int32_t L_30 = ___pos1;
		int32_t* L_31 = ___friendCounter2;
		int32_t* L_32 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_33 = ___board4;
		int32_t L_34 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_29, ((int32_t)il2cpp_codegen_subtract(L_30, 3)), L_31, L_32, L_33, L_34, NULL);
	}

IL_00ad:
	{
		// break;
		goto IL_01d7;
	}

IL_00b2:
	{
		// if (pos == 4 || pos == 6) {    // checking diagonally in the 'NE' direction is pointless from the other positions
		int32_t L_35 = ___pos1;
		if ((((int32_t)L_35) == ((int32_t)4)))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_36 = ___pos1;
		G_B20_0 = ((((int32_t)L_36) == ((int32_t)6))? 1 : 0);
		goto IL_00bd;
	}

IL_00bc:
	{
		G_B20_0 = 1;
	}

IL_00bd:
	{
		V_7 = (bool)G_B20_0;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00d7;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (pos - (BOARDWIDTH - 1)), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_38 = ___friendPiece0;
		int32_t L_39 = ___pos1;
		int32_t* L_40 = ___friendCounter2;
		int32_t* L_41 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_42 = ___board4;
		int32_t L_43 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_38, ((int32_t)il2cpp_codegen_subtract(L_39, 2)), L_40, L_41, L_42, L_43, NULL);
	}

IL_00d7:
	{
		// break;
		goto IL_01d7;
	}

IL_00dc:
	{
		// if (pos != 2 && pos != 5 && pos != 8) {    // don't want to go beyond the right edge of the board.
		int32_t L_44 = ___pos1;
		if ((((int32_t)L_44) == ((int32_t)2)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_45 = ___pos1;
		if ((((int32_t)L_45) == ((int32_t)5)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_46 = ___pos1;
		G_B27_0 = ((((int32_t)((((int32_t)L_46) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B27_0 = 0;
	}

IL_00ee:
	{
		V_8 = (bool)G_B27_0;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_010b;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (++pos), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_48 = ___friendPiece0;
		int32_t L_49 = ___pos1;
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		___pos1 = L_50;
		int32_t* L_51 = ___friendCounter2;
		int32_t* L_52 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_53 = ___board4;
		int32_t L_54 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_48, L_50, L_51, L_52, L_53, L_54, NULL);
	}

IL_010b:
	{
		// break;
		goto IL_01d7;
	}

IL_0110:
	{
		// if (pos == 0 || pos == 4) {
		int32_t L_55 = ___pos1;
		if (!L_55)
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_56 = ___pos1;
		G_B33_0 = ((((int32_t)L_56) == ((int32_t)4))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B33_0 = 1;
	}

IL_011a:
	{
		V_9 = (bool)G_B33_0;
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0134;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (pos + (BOARDWIDTH + 1)), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_58 = ___friendPiece0;
		int32_t L_59 = ___pos1;
		int32_t* L_60 = ___friendCounter2;
		int32_t* L_61 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_62 = ___board4;
		int32_t L_63 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_58, ((int32_t)il2cpp_codegen_add(L_59, 4)), L_60, L_61, L_62, L_63, NULL);
	}

IL_0134:
	{
		// break;
		goto IL_01d7;
	}

IL_0139:
	{
		// if (pos < 6) {
		int32_t L_64 = ___pos1;
		V_10 = (bool)((((int32_t)L_64) < ((int32_t)6))? 1 : 0);
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_0157;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (pos + BOARDWIDTH), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_66 = ___friendPiece0;
		int32_t L_67 = ___pos1;
		int32_t* L_68 = ___friendCounter2;
		int32_t* L_69 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_70 = ___board4;
		int32_t L_71 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_66, ((int32_t)il2cpp_codegen_add(L_67, 3)), L_68, L_69, L_70, L_71, NULL);
	}

IL_0157:
	{
		// break;
		goto IL_01d7;
	}

IL_0159:
	{
		// if (pos == 2 || pos == 4) {
		int32_t L_72 = ___pos1;
		if ((((int32_t)L_72) == ((int32_t)2)))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_73 = ___pos1;
		G_B42_0 = ((((int32_t)L_73) == ((int32_t)4))? 1 : 0);
		goto IL_0164;
	}

IL_0163:
	{
		G_B42_0 = 1;
	}

IL_0164:
	{
		V_11 = (bool)G_B42_0;
		bool L_74 = V_11;
		if (!L_74)
		{
			goto IL_017e;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (pos + (BOARDWIDTH - 1)), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_75 = ___friendPiece0;
		int32_t L_76 = ___pos1;
		int32_t* L_77 = ___friendCounter2;
		int32_t* L_78 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_79 = ___board4;
		int32_t L_80 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_75, ((int32_t)il2cpp_codegen_add(L_76, 2)), L_77, L_78, L_79, L_80, NULL);
	}

IL_017e:
	{
		// break;
		goto IL_01d7;
	}

IL_0180:
	{
		// if (pos != 0 && pos != 3 && pos != 6) {    // don't want to go off the left edge of the board
		int32_t L_81 = ___pos1;
		if (!L_81)
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_82 = ___pos1;
		if ((((int32_t)L_82) == ((int32_t)3)))
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_83 = ___pos1;
		G_B49_0 = ((((int32_t)((((int32_t)L_83) == ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0191;
	}

IL_0190:
	{
		G_B49_0 = 0;
	}

IL_0191:
	{
		V_12 = (bool)G_B49_0;
		bool L_84 = V_12;
		if (!L_84)
		{
			goto IL_01ae;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (--pos), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_85 = ___friendPiece0;
		int32_t L_86 = ___pos1;
		int32_t L_87 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
		___pos1 = L_87;
		int32_t* L_88 = ___friendCounter2;
		int32_t* L_89 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_90 = ___board4;
		int32_t L_91 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_85, L_87, L_88, L_89, L_90, L_91, NULL);
	}

IL_01ae:
	{
		// break;
		goto IL_01d7;
	}

IL_01b0:
	{
		// if (pos == 4 || pos == 8) {
		int32_t L_92 = ___pos1;
		if ((((int32_t)L_92) == ((int32_t)4)))
		{
			goto IL_01ba;
		}
	}
	{
		int32_t L_93 = ___pos1;
		G_B55_0 = ((((int32_t)L_93) == ((int32_t)8))? 1 : 0);
		goto IL_01bb;
	}

IL_01ba:
	{
		G_B55_0 = 1;
	}

IL_01bb:
	{
		V_13 = (bool)G_B55_0;
		bool L_94 = V_13;
		if (!L_94)
		{
			goto IL_01d5;
		}
	}
	{
		// SetCellsCountersFor (friendPiece, (pos - (BOARDWIDTH + 1)), ref friendCounter, ref foeCounter, ref board, dir);
		int32_t L_95 = ___friendPiece0;
		int32_t L_96 = ___pos1;
		int32_t* L_97 = ___friendCounter2;
		int32_t* L_98 = ___foeCounter3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_99 = ___board4;
		int32_t L_100 = ___dir5;
		BoardManager_SetCellsCountersFor_m45C0B6EB80777D4FEF503376D4D83C4757008FCD(__this, L_95, ((int32_t)il2cpp_codegen_subtract(L_96, 4)), L_97, L_98, L_99, L_100, NULL);
	}

IL_01d5:
	{
		// break;
		goto IL_01d7;
	}

IL_01d7:
	{
		// return;
		goto IL_01d9;
	}

IL_01d9:
	{
		// }
		return;
	}
}
// System.Int32 BoardManager::CalcScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardManager_CalcScore_m01B2E1CC04A422AA5092F3ED04D534D1B4F9813D (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___friendCellsCount0, int32_t ___foeCellsCount1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int temp = 0;
		V_0 = 0;
		// if (friendCellsCount == 1) {
		int32_t L_0 = ___friendCellsCount0;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// temp += 2;        // slightly encourage playing lines, not random squares.
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 2));
	}

IL_0011:
	{
		// if (foeCellsCount == 1) {
		int32_t L_3 = ___foeCellsCount1;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// temp += 1;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001f:
	{
		// if (friendCellsCount > 1) {    // we can win by playing this square.
		int32_t L_6 = ___friendCellsCount0;
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)1))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		// temp += 20;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)20)));
	}

IL_002e:
	{
		// if (foeCellsCount > 1) {    // or we can stop our opponent from winning by playing it.
		int32_t L_9 = ___foeCellsCount1;
		V_4 = (bool)((((int32_t)L_9) > ((int32_t)1))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		// temp += 9;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)9)));
	}

IL_003f:
	{
		// return temp;
		int32_t L_12 = V_0;
		V_5 = L_12;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		int32_t L_13 = V_5;
		return L_13;
	}
}
// System.Boolean BoardManager::WasWinnerX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_WasWinnerX_m56C86EB8F18989B0344C94418070F0EA4D0559E7 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return ((pieceToPlayNext == O_CELL) ? true : false);    // translation: was "O" due to play the next turn? If so, then "X" won.
		int32_t L_0 = __this->___pieceToPlayNext_13;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_m611C494A213953B5600647FBC3585123518899E0 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
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
// GameInfo/GameStates GameInfo::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return _state;
		int32_t L_0 = __this->____state_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GameInfo::set_state(GameInfo/GameStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_set_state_m4FD5E9E5B1207E5AED74B2F96D17DCE1C229F7DE (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _state = value;
		int32_t L_0 = ___value0;
		__this->____state_2 = L_0;
		// }
		return;
	}
}
// System.Void GameInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo__ctor_m25EF2A1449134DAB68FD8DAE3AB8C5C79049937C (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7469E1FC95F4ABC182BC1214C7D249E93924E816);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1CE7FED4E991ED73EFCCCB9EFC5D7907BC58CA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameStates _state = GameStates.inGUI;
		__this->____state_2 = 0;
		// Player player1 = new Player ();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)il2cpp_codegen_object_new(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D(L_0, NULL);
		__this->___player1_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player1_3), (void*)L_0);
		// Player player2 = new Player ();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)il2cpp_codegen_object_new(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D(L_1, NULL);
		__this->___player2_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player2_4), (void*)L_1);
		// public GameInfo ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// player1.PlayerIs = beings.Human;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->___player1_3;
		NullCheck(L_2);
		Player_set_PlayerIs_mF6C7BF8DF0A53ACD825B50DD8E4F542E78EADE39(L_2, 0, NULL);
		// player2.PlayerIs = beings.AI;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->___player2_4;
		NullCheck(L_3);
		Player_set_PlayerIs_mF6C7BF8DF0A53ACD825B50DD8E4F542E78EADE39(L_3, 1, NULL);
		// player1.PlayerName = "Player One";
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player1_3;
		NullCheck(L_4);
		Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E(L_4, _stringLiteralB1CE7FED4E991ED73EFCCCB9EFC5D7907BC58CA4, NULL);
		// player2.PlayerName = "Player Two";
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player2_4;
		NullCheck(L_5);
		Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E(L_5, _stringLiteral7469E1FC95F4ABC182BC1214C7D249E93924E816, NULL);
		// player1.PlayingAs = pieces.O;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player1_3;
		NullCheck(L_6);
		Player_set_PlayingAs_mF0B993218E5E4F8BB9D62D16283E8BD9E4810F2E(L_6, 1, NULL);
		// player2.PlayingAs = pieces.X;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = __this->___player2_4;
		NullCheck(L_7);
		Player_set_PlayingAs_mF0B993218E5E4F8BB9D62D16283E8BD9E4810F2E(L_7, 0, NULL);
		// player1.score = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = __this->___player1_3;
		NullCheck(L_8);
		L_8->___score_3 = 0;
		// player1.lost = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9 = __this->___player1_3;
		NullCheck(L_9);
		L_9->___lost_5 = 0;
		// player1.won = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = __this->___player1_3;
		NullCheck(L_10);
		L_10->___won_4 = 0;
		// player1.drawn = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = __this->___player1_3;
		NullCheck(L_11);
		L_11->___drawn_6 = 0;
		// player1.totalGames = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = __this->___player1_3;
		NullCheck(L_12);
		L_12->___totalGames_7 = 0;
		// player2.score = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13 = __this->___player2_4;
		NullCheck(L_13);
		L_13->___score_3 = 0;
		// player2.lost = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = __this->___player2_4;
		NullCheck(L_14);
		L_14->___lost_5 = 0;
		// player2.won = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_15 = __this->___player2_4;
		NullCheck(L_15);
		L_15->___won_4 = 0;
		// player2.drawn = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = __this->___player2_4;
		NullCheck(L_16);
		L_16->___drawn_6 = 0;
		// player2.totalGames = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = __this->___player2_4;
		NullCheck(L_17);
		L_17->___totalGames_7 = 0;
		// }
		return;
	}
}
// Player GameInfo::GetPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameInfo_GetPlayer_m93AF763375B2405D0920A4C29786AE2700D609BF (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_2 = NULL;
	{
		// switch (playerNum) {
		int32_t L_0 = ___playerNum0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		// return player1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player1_3;
		V_2 = L_4;
		goto IL_0026;
	}

IL_0019:
	{
		// return player2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player2_4;
		V_2 = L_5;
		goto IL_0026;
	}

IL_0022:
	{
		// return null;
		V_2 = (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)NULL;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = V_2;
		return L_6;
	}
}
// System.Void GameInfo::StartPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_StartPlaying_mB64A345C086CF034B5491890B6400F52A06FD4DE (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) 
{
	{
		// state = GameStates.playing_plr1;
		GameInfo_set_state_m4FD5E9E5B1207E5AED74B2F96D17DCE1C229F7DE(__this, 1, NULL);
		// }
		return;
	}
}
// Player GameInfo::GetCurrentPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameInfo_GetCurrentPlayer_m6445982088E72A942EC5A75C538DA18037BD8978 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_1 = NULL;
	bool V_2 = false;
	{
		// if (state == GameStates.playing_plr1)
		int32_t L_0;
		L_0 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return player1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->___player1_3;
		V_1 = L_2;
		goto IL_0031;
	}

IL_0017:
	{
		// if (state == GameStates.playing_plr2)
		int32_t L_3;
		L_3 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(__this, NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return player2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player2_4;
		V_1 = L_5;
		goto IL_0031;
	}

IL_002d:
	{
		// return null;
		V_1 = (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)NULL;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = V_1;
		return L_6;
	}
}
// pieces GameInfo::GetPlayerPiece(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameInfo_GetPlayerPiece_mC43F44BFCCD8F4A87AEEC8FEA87264DFA0712E3D (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF3DE2977E205979A6ACE9D1B2BE608579FF7E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// pieces p = pieces.X;        // need to set it to something or the compiler will whinge about it being used before being assigned.
		V_0 = 0;
		// switch (playerNum) {
		int32_t L_0 = ___playerNum0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002e;
	}

IL_0012:
	{
		// p = player1.PlayingAs;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player1_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_003b;
	}

IL_0020:
	{
		// p = player2.PlayingAs;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player2_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_6, NULL);
		V_0 = L_7;
		// break;
		goto IL_003b;
	}

IL_002e:
	{
		// Debug.Log ("Invalid PlayerNum in GetPlayerPiece()");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralECF3DE2977E205979A6ACE9D1B2BE608579FF7E8, NULL);
		// break;
		goto IL_003b;
	}

IL_003b:
	{
		// return p;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		int32_t L_9 = V_3;
		return L_9;
	}
}
// System.Void GameInfo::SetPlayer(System.Int32,beings,System.String,pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, int32_t ___playeris1, String_t* ___playerName2, int32_t ___piece3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (playerNum) {
		int32_t L_0 = ___playerNum0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0064;
	}

IL_0010:
	{
		// player1.PlayerIs = playeris;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player1_3;
		int32_t L_5 = ___playeris1;
		NullCheck(L_4);
		Player_set_PlayerIs_mF6C7BF8DF0A53ACD825B50DD8E4F542E78EADE39(L_4, L_5, NULL);
		// player1.PlayerName = playerName;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player1_3;
		String_t* L_7 = ___playerName2;
		NullCheck(L_6);
		Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E(L_6, L_7, NULL);
		// player1.PlayingAs = piece;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = __this->___player1_3;
		int32_t L_9 = ___piece3;
		NullCheck(L_8);
		Player_set_PlayingAs_mF0B993218E5E4F8BB9D62D16283E8BD9E4810F2E(L_8, L_9, NULL);
		// break;
		goto IL_0084;
	}

IL_003a:
	{
		// player2.PlayerIs = playeris;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = __this->___player2_4;
		int32_t L_11 = ___playeris1;
		NullCheck(L_10);
		Player_set_PlayerIs_mF6C7BF8DF0A53ACD825B50DD8E4F542E78EADE39(L_10, L_11, NULL);
		// player2.PlayerName = playerName;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = __this->___player2_4;
		String_t* L_13 = ___playerName2;
		NullCheck(L_12);
		Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E(L_12, L_13, NULL);
		// player2.PlayingAs = piece;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = __this->___player2_4;
		int32_t L_15 = ___piece3;
		NullCheck(L_14);
		Player_set_PlayingAs_mF0B993218E5E4F8BB9D62D16283E8BD9E4810F2E(L_14, L_15, NULL);
		// break;
		goto IL_0084;
	}

IL_0064:
	{
		// string errorString = String.Concat ("ERROR: SetPlayer passed invalid player number: ".ToString (), playerNum.ToString ());
		NullCheck(_stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, _stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerNum0), NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_17, NULL);
		V_0 = L_18;
		// Debug.Log (errorString);
		String_t* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// break;
		goto IL_0084;
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void GameInfo::UpdatePlayerScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_UpdatePlayerScore_mA79B1F7D768484197BE9D5BD816488DE4B1DB540 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, int32_t ___score1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (playerNum) {
		int32_t L_0 = ___playerNum0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002c;
	}

IL_0010:
	{
		// player1.score = score;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player1_3;
		int32_t L_5 = ___score1;
		NullCheck(L_4);
		L_4->___score_3 = L_5;
		// break;
		goto IL_004c;
	}

IL_001e:
	{
		// player2.score = score;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player2_4;
		int32_t L_7 = ___score1;
		NullCheck(L_6);
		L_6->___score_3 = L_7;
		// break;
		goto IL_004c;
	}

IL_002c:
	{
		// string errorString = String.Concat ("ERROR: SetPlayer passed invalid player number: ".ToString (), playerNum.ToString ());
		NullCheck(_stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, _stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerNum0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, L_9, NULL);
		V_0 = L_10;
		// Debug.Log (errorString);
		String_t* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// break;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void GameInfo::GameWon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_GameWon_mC657B00AFAF421DC198D0C6A59EDCA10F56BD7D7 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, int32_t ___playerNum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (playerNum) {
		int32_t L_0 = ___playerNum0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_00c3;
	}

IL_0013:
	{
		// player1.won++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player1_3;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->___won_4;
		NullCheck(L_5);
		L_5->___won_4 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// player1.totalGames++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = __this->___player1_3;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___totalGames_7;
		NullCheck(L_8);
		L_8->___totalGames_7 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// UpdatePlayerScore (_PLAYER1, 10);
		GameInfo_UpdatePlayerScore_mA79B1F7D768484197BE9D5BD816488DE4B1DB540(__this, 0, ((int32_t)10), NULL);
		// player2.lost++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = __this->___player2_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12 = L_11->___lost_5;
		NullCheck(L_11);
		L_11->___lost_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// player2.totalGames++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13 = __this->___player2_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15 = L_14->___totalGames_7;
		NullCheck(L_14);
		L_14->___totalGames_7 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// break;
		goto IL_00e3;
	}

IL_006b:
	{
		// player2.won++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = __this->___player2_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->___won_4;
		NullCheck(L_17);
		L_17->___won_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// player2.totalGames++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19 = __this->___player2_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___totalGames_7;
		NullCheck(L_20);
		L_20->___totalGames_7 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// UpdatePlayerScore (_PLAYER2, 10);
		GameInfo_UpdatePlayerScore_mA79B1F7D768484197BE9D5BD816488DE4B1DB540(__this, 1, ((int32_t)10), NULL);
		// player1.lost++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_22 = __this->___player1_3;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = L_23->___lost_5;
		NullCheck(L_23);
		L_23->___lost_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		// player1.totalGames++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_25 = __this->___player1_3;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->___totalGames_7;
		NullCheck(L_26);
		L_26->___totalGames_7 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		// break;
		goto IL_00e3;
	}

IL_00c3:
	{
		// string errorString = String.Concat ("ERROR: SetPlayer passed invalid player number: ".ToString (), playerNum.ToString ());
		NullCheck(_stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, _stringLiteral1D289F7B209D0674C36D8CC80C397F00490B4F4D);
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerNum0), NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_28, L_29, NULL);
		V_0 = L_30;
		// Debug.Log (errorString);
		String_t* L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_31, NULL);
		// break;
		goto IL_00e3;
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void GameInfo::GameDrawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo_GameDrawn_m6B87BEE0AE7CF6BDD14550675958CBF73A4F55E2 (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) 
{
	{
		// player1.drawn++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player1_3;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___drawn_6;
		NullCheck(L_1);
		L_1->___drawn_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// player1.totalGames++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->___player1_3;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___totalGames_7;
		NullCheck(L_4);
		L_4->___totalGames_7 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// UpdatePlayerScore (_PLAYER1, 5);
		GameInfo_UpdatePlayerScore_mA79B1F7D768484197BE9D5BD816488DE4B1DB540(__this, 0, 5, NULL);
		// player2.drawn++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player2_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->___drawn_6;
		NullCheck(L_7);
		L_7->___drawn_6 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// player2.totalGames++;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9 = __this->___player2_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___totalGames_7;
		NullCheck(L_10);
		L_10->___totalGames_7 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// UpdatePlayerScore (_PLAYER2, 5);
		GameInfo_UpdatePlayerScore_mA79B1F7D768484197BE9D5BD816488DE4B1DB540(__this, 1, 5, NULL);
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
// GridCellScript/CellStates GridCellScript::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9 (GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return _state;
		int32_t L_0 = __this->____state_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GridCellScript::set_state(GridCellScript/CellStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCellScript_set_state_mE5CC25CFB2761E4D26680161F0164F7E79D1C2BD (GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BEDCA46343858B0AFA557FF9DAE61167A0F8B4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _state = value;
		int32_t L_0 = ___value0;
		__this->____state_4 = L_0;
		// stateHasChanged = true;
		__this->___stateHasChanged_6 = (bool)1;
		// if (value != CellStates.empty) {        // We'll only set the cell to empty if we're wiping the board, so don't refresh the scores yet.
		int32_t L_1 = ___value0;
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// SendMessageUpwards ("RefreshScores");    // notify BoardManager that it needs to update its score arrays.
		Component_SendMessageUpwards_m9562D91F1C57987B01596D0428B087B2A0F01CC0(__this, _stringLiteralC2BEDCA46343858B0AFA557FF9DAE61167A0F8B4, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GridCellScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCellScript_Start_m296C939BA04C96F9E165EC90839053C7186CB831 (GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisXOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7_mB0E5E0B9F3F8B20487C206A31B01BA95F624FEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD396246182378FA195A14D289A236DBF224DA294);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// xoScripts = gameObject.GetComponentsInChildren<XOScript> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisXOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7_mB0E5E0B9F3F8B20487C206A31B01BA95F624FEAA(L_0, GameObject_GetComponentsInChildren_TisXOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7_mB0E5E0B9F3F8B20487C206A31B01BA95F624FEAA_RuntimeMethod_var);
		__this->___xoScripts_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xoScripts_5), (void*)L_1);
		// if (xoScripts == null)
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_2 = __this->___xoScripts_5;
		V_0 = (bool)((((RuntimeObject*)(XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// Debug.Log ("XO Scripts Array is EMPTY");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD396246182378FA195A14D289A236DBF224DA294, NULL);
	}

IL_002a:
	{
		// state = CellStates.empty;    // all cells are initially empty.
		GridCellScript_set_state_mE5CC25CFB2761E4D26680161F0164F7E79D1C2BD(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void GridCellScript::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCellScript_LateUpdate_m87EF274ACE68209F11C0EF0288032FDC2E22DBF3 (GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* V_2 = NULL;
	int32_t V_3 = 0;
	XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* V_4 = NULL;
	bool V_5 = false;
	XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* V_6 = NULL;
	int32_t V_7 = 0;
	XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* V_8 = NULL;
	bool V_9 = false;
	XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* V_10 = NULL;
	int32_t V_11 = 0;
	XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* V_12 = NULL;
	{
		// if (stateHasChanged) {
		bool L_0 = __this->___stateHasChanged_6;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c8;
		}
	}
	{
		// if (state == CellStates.empty) {
		int32_t L_2;
		L_2 = GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9(__this, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// foreach (XOScript xs in xoScripts) {
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_4 = __this->___xoScripts_5;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0044;
	}

IL_0029:
	{
		// foreach (XOScript xs in xoScripts) {
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// xs.HideO ();
		XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* L_9 = V_4;
		NullCheck(L_9);
		XOScript_HideO_mAF1D654E0D2E4B37B4E2E2955EC4838AD6698BB4(L_9, NULL);
		// xs.HideX ();
		XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* L_10 = V_4;
		NullCheck(L_10);
		XOScript_HideX_m5B430F56CDD5FE3BE8EA38C1DC5BA87692956A5D(L_10, NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0044:
	{
		// foreach (XOScript xs in xoScripts) {
		int32_t L_12 = V_3;
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
	}

IL_004b:
	{
		// if (state == CellStates.O) {
		int32_t L_14;
		L_14 = GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9(__this, NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)1))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		// foreach (XOScript xs in xoScripts) {
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_16 = __this->___xoScripts_5;
		V_6 = L_16;
		V_7 = 0;
		goto IL_0080;
	}

IL_0069:
	{
		// foreach (XOScript xs in xoScripts) {
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_17 = V_6;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_8 = L_20;
		// xs.ShowO ();
		XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* L_21 = V_8;
		NullCheck(L_21);
		XOScript_ShowO_mEC3E28EBAB3BB4699665B4EB31BDFC655F2D7F5C(L_21, NULL);
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0080:
	{
		// foreach (XOScript xs in xoScripts) {
		int32_t L_23 = V_7;
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_24 = V_6;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0069;
		}
	}
	{
	}

IL_0089:
	{
		// if (state == CellStates.X) {
		int32_t L_25;
		L_25 = GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9(__this, NULL);
		V_9 = (bool)((((int32_t)L_25) == ((int32_t)2))? 1 : 0);
		bool L_26 = V_9;
		if (!L_26)
		{
			goto IL_00c7;
		}
	}
	{
		// foreach (XOScript xs in xoScripts) {
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_27 = __this->___xoScripts_5;
		V_10 = L_27;
		V_11 = 0;
		goto IL_00be;
	}

IL_00a7:
	{
		// foreach (XOScript xs in xoScripts) {
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_28 = V_10;
		int32_t L_29 = V_11;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_12 = L_31;
		// xs.ShowX ();
		XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* L_32 = V_12;
		NullCheck(L_32);
		XOScript_ShowX_m0256153261F79E538A40EAF2D7E3B5D61D6EDA67(L_32, NULL);
		int32_t L_33 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00be:
	{
		// foreach (XOScript xs in xoScripts) {
		int32_t L_34 = V_11;
		XOScriptU5BU5D_t2429E59A3F0040292F51EB13A09CDA3DE2829F6E* L_35 = V_10;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
	}

IL_00c7:
	{
	}

IL_00c8:
	{
		// stateHasChanged = false;        // don't want to keep refreshing the board every frame.
		__this->___stateHasChanged_6 = (bool)0;
		// }
		return;
	}
}
// System.Void GridCellScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCellScript__ctor_mC52C6ABE79E6ECADE43717777153EB1999685CAF (GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* __this, const RuntimeMethod* method) 
{
	{
		// private bool stateHasChanged = false;
		__this->___stateHasChanged_6 = (bool)0;
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
// System.Void GUIHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_Start_mFC0375D323E00ED197521F16220EBD01644A1940 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734_m79DE6CD3FC44FCCC932F59A2EF99DB10F3C8A1A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B5F970E290D4D8DDA85E02F1624E535D5E98E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80463A526DEAE80A3D1DEE325D631B8FF241BA78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A6184DAAE93091F8B63B45A1E617A15C427FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB98FAF367D8D8104EA150019B551036E5A7E550);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE033FC3E8BB8E73CFB1C048F77FC12186F6BE6CB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B18_0 = 0;
	{
		// gInfo = new GameInfo ();
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_0 = (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174*)il2cpp_codegen_object_new(GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameInfo__ctor_m25EF2A1449134DAB68FD8DAE3AB8C5C79049937C(L_0, NULL);
		__this->___gInfo_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gInfo_20), (void*)L_0);
		// if (gInfo == null) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_1 = __this->___gInfo_20;
		V_0 = (bool)((((RuntimeObject*)(GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log ("ERROR: Could not initialise gInfo!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral80463A526DEAE80A3D1DEE325D631B8FF241BA78, NULL);
	}

IL_0026:
	{
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCamera_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_19), (void*)L_3);
		// if (!mainCamera) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___mainCamera_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.Log ("Error: Unable to find MainCamera");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral74B5F970E290D4D8DDA85E02F1624E535D5E98E6, NULL);
	}

IL_0050:
	{
		// board = FindObjectOfType <BoardManager> ();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_7;
		L_7 = Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC(Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var);
		__this->___board_21 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___board_21), (void*)L_7);
		// aiPlayer = FindObjectOfType <AIPlayer> ();
		AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* L_8;
		L_8 = Object_FindObjectOfType_TisAIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734_m79DE6CD3FC44FCCC932F59A2EF99DB10F3C8A1A5(Object_FindObjectOfType_TisAIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734_m79DE6CD3FC44FCCC932F59A2EF99DB10F3C8A1A5_RuntimeMethod_var);
		__this->___aiPlayer_22 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aiPlayer_22), (void*)L_8);
		// gInfo.SetPlayer (GameInfo._PLAYER1, beings.Human, "Player 1", pieces.X);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_9 = __this->___gInfo_20;
		NullCheck(L_9);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_9, 0, 0, _stringLiteralAB98FAF367D8D8104EA150019B551036E5A7E550, 0, NULL);
		// gInfo.SetPlayer (GameInfo._PLAYER2, beings.AI, "Player 2", pieces.O);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_10 = __this->___gInfo_20;
		NullCheck(L_10);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_10, 1, 1, _stringLiteralE033FC3E8BB8E73CFB1C048F77FC12186F6BE6CB, 1, NULL);
		// if (!(button_PLAY && button_RESIGN && player1_Computer && player1_Human && player1_X && player1_O && player2_Computer && player2_Human && player2_X && player2_O && txt_Draw && txt_Plr1Wins && txt_Plr2Wins)) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___button_PLAY_4;
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___button_RESIGN_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_13, NULL);
		if (!L_14)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___player1_Computer_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___player1_Human_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_17, NULL);
		if (!L_18)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___player1_X_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_19, NULL);
		if (!L_20)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___player1_O_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___player2_Computer_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		if (!L_24)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___player2_Human_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_25, NULL);
		if (!L_26)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___player2_X_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_27, NULL);
		if (!L_28)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___player2_O_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_29, NULL);
		if (!L_30)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___txt_Draw_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		if (!L_32)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___txt_Plr1Wins_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		if (!L_34)
		{
			goto IL_0143;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___txt_Plr2Wins_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_35, NULL);
		G_B18_0 = ((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		goto IL_0144;
	}

IL_0143:
	{
		G_B18_0 = 1;
	}

IL_0144:
	{
		V_2 = (bool)G_B18_0;
		bool L_37 = V_2;
		if (!L_37)
		{
			goto IL_0155;
		}
	}
	{
		// Debug.Log ("GUI Transforms missing! Did you forget to add them in the Editor?");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral86A6184DAAE93091F8B63B45A1E617A15C427FE9, NULL);
	}

IL_0155:
	{
		// txt_Plr1Wins.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->___txt_Plr1Wins_17;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// txt_Plr2Wins.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___txt_Plr2Wins_18;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// txt_Draw.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___txt_Draw_16;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// }
		return;
	}
}
// System.Int32 GUIHandler::GetCurrentPlayerPieceAsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIHandler_GetCurrentPlayerPieceAsInt_m6BE07E18B43E2C53757CA6F02ABE0D39F35AFAB6 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// pieces piece = gInfo.GetCurrentPlayer ().PlayingAs;
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_0 = __this->___gInfo_20;
		NullCheck(L_0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = GameInfo_GetCurrentPlayer_m6445982088E72A942EC5A75C538DA18037BD8978(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_1, NULL);
		V_0 = L_2;
		// int result = BoardManager.EMPTYCELL;                // return this if there's an invalid value.
		V_1 = 0;
		// if (piece == pieces.O)
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// result = BoardManager.O_CELL;
		V_1 = 1;
	}

IL_001e:
	{
		// if (piece == pieces.X)
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// result = BoardManager.X_CELL;
		V_1 = 2;
	}

IL_0028:
	{
		// return result;
		int32_t L_7 = V_1;
		V_4 = L_7;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_8 = V_4;
		return L_8;
	}
}
// System.Void GUIHandler::GameWon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_GameWon_mAB81B3710B2D741E3F02F1628E9CC11D80600D7F (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB991014BC317EE99A5E92777236547ECC494D73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// int playerNum = 0;
		V_0 = 0;
		// bool didXWin = board.WasWinnerX ();
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_0 = __this->___board_21;
		NullCheck(L_0);
		bool L_1;
		L_1 = BoardManager_WasWinnerX_m56C86EB8F18989B0344C94418070F0EA4D0559E7(L_0, NULL);
		V_1 = L_1;
		// pieces p1Piece = gInfo.GetPlayerPiece (GameInfo._PLAYER1);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_2 = __this->___gInfo_20;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = GameInfo_GetPlayerPiece_mC43F44BFCCD8F4A87AEEC8FEA87264DFA0712E3D(L_2, 0, NULL);
		V_2 = L_3;
		// if (didXWin) {
		bool L_4 = V_1;
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		// playerNum = (p1Piece == pieces.X) ? GameInfo._PLAYER1 : GameInfo._PLAYER2;
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 0;
	}

IL_0029:
	{
		V_0 = G_B4_0;
		// pl1++;
		int32_t L_7 = __this->___pl1_27;
		__this->___pl1_27 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// i = pl1;
		int32_t L_8 = __this->___pl1_27;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___i_29 = L_8;
		// j = pl2;
		int32_t L_9 = __this->___pl2_28;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___j_30 = L_9;
		// counter1_text.text.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___counter1_text_25;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		// counter1.text = "????: " + pl1.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___counter1_23;
		int32_t* L_14 = (&__this->___pl1_27);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDB991014BC317EE99A5E92777236547ECC494D73, L_15, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_16);
		goto IL_00ea;
	}

IL_0083:
	{
		// playerNum = (p1Piece == pieces.O) ? GameInfo._PLAYER1 : GameInfo._PLAYER2;
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_008c;
	}

IL_008b:
	{
		G_B8_0 = 0;
	}

IL_008c:
	{
		V_0 = G_B8_0;
		// pl2++;
		int32_t L_18 = __this->___pl2_28;
		__this->___pl2_28 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// i = pl1;
		int32_t L_19 = __this->___pl1_27;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___i_29 = L_19;
		// j = pl2;
		int32_t L_20 = __this->___pl2_28;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___j_30 = L_20;
		// counter1_text.text = pl2.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___counter1_text_25;
		int32_t* L_22 = (&__this->___pl2_28);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_22, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_23);
		// counter2.text = "????: " + pl2.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___counter2_24;
		int32_t* L_25 = (&__this->___pl2_28);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDB991014BC317EE99A5E92777236547ECC494D73, L_26, NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_27);
	}

IL_00ea:
	{
		// if (playerNum == GameInfo._PLAYER1) {
		int32_t L_28 = V_0;
		V_4 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_0103;
		}
	}
	{
		// StartCoroutine (DoPlayer1WinsAnim ());
		RuntimeObject* L_30;
		L_30 = GUIHandler_DoPlayer1WinsAnim_mD296504D17A871C09813FFB53935A3CDE00ACAB8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_31;
		L_31 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_30, NULL);
	}

IL_0103:
	{
		// if (playerNum == GameInfo._PLAYER2) {
		int32_t L_32 = V_0;
		V_5 = (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_011c;
		}
	}
	{
		// StartCoroutine (DoPlayer2WinsAnim ());
		RuntimeObject* L_34;
		L_34 = GUIHandler_DoPlayer2WinsAnim_mD188D0FA4176DE8FB7CF911FCA70AC50995004D6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_35;
		L_35 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_34, NULL);
	}

IL_011c:
	{
		// gInfo.GameWon (playerNum);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_36 = __this->___gInfo_20;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		GameInfo_GameWon_mC657B00AFAF421DC198D0C6A59EDCA10F56BD7D7(L_36, L_37, NULL);
		// gInfo.state = GameInfo.GameStates.inGUI;
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_38 = __this->___gInfo_20;
		NullCheck(L_38);
		GameInfo_set_state_m4FD5E9E5B1207E5AED74B2F96D17DCE1C229F7DE(L_38, 0, NULL);
		// if (pl1 == 3)
		int32_t L_39 = __this->___pl1_27;
		V_6 = (bool)((((int32_t)L_39) == ((int32_t)3))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_0164;
		}
	}
	{
		// i = pl1;
		int32_t L_41 = __this->___pl1_27;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___i_29 = L_41;
		// j = pl2;
		int32_t L_42 = __this->___pl2_28;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___j_30 = L_42;
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
	}

IL_0164:
	{
		// }
		return;
	}
}
// System.Void GUIHandler::GameDrawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_GameDrawn_m1E76647339D759DA6CAB22B1DEA118F0CDCD42BF (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759EAA993FA42808278389EDD5B9B835166A59AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gInfo.GameDrawn ();
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_0 = __this->___gInfo_20;
		NullCheck(L_0);
		GameInfo_GameDrawn_m6B87BEE0AE7CF6BDD14550675958CBF73A4F55E2(L_0, NULL);
		// Debug.Log ("GAME DRAWN!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral759EAA993FA42808278389EDD5B9B835166A59AC, NULL);
		// StartCoroutine (DoItsADrawAnim ());
		RuntimeObject* L_1;
		L_1 = GUIHandler_DoItsADrawAnim_m2149CF28BC607855C097220959C16001DC9FAC1F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// gInfo.state = GameInfo.GameStates.inGUI;
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_3 = __this->___gInfo_20;
		NullCheck(L_3);
		GameInfo_set_state_m4FD5E9E5B1207E5AED74B2F96D17DCE1C229F7DE(L_3, 0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GUIHandler::DoPlayer1WinsAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIHandler_DoPlayer1WinsAnim_mD296504D17A871C09813FFB53935A3CDE00ACAB8 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* L_0 = (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA*)il2cpp_codegen_object_new(U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoPlayer1WinsAnimU3Ed__32__ctor_m7E395350B2341D765B431708F5E47FE0514280A2(L_0, 0, NULL);
		U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GUIHandler::DoPlayer2WinsAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIHandler_DoPlayer2WinsAnim_mD188D0FA4176DE8FB7CF911FCA70AC50995004D6 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* L_0 = (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4*)il2cpp_codegen_object_new(U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoPlayer2WinsAnimU3Ed__33__ctor_mFFE604F11730ADD63AFD35D2B2056B8B502AAE72(L_0, 0, NULL);
		U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GUIHandler::DoItsADrawAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIHandler_DoItsADrawAnim_m2149CF28BC607855C097220959C16001DC9FAC1F (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* L_0 = (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF*)il2cpp_codegen_object_new(U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoItsADrawAnimU3Ed__34__ctor_m008010F91860060796727FA845993657BF3E7C1C(L_0, 0, NULL);
		U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Int32 GUIHandler::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIHandler_get_Player_m3246AFE13F2A271240BD12D141FD176850940BA9 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return i=0; }
		int32_t L_0 = 0;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___i_29 = L_0;
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// get { return i=0; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GUIHandler::get_Teacher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIHandler_get_Teacher_mEA3C00B4BB6AD56036758A32B2FC5577BFCFA3C4 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return j=0; }
		int32_t L_0 = 0;
		((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___j_30 = L_0;
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// get { return j=0; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GUIHandler::NextTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_NextTurn_m268CA4AFC16AA993CF46CC54E872B7D0E27E4F1C (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* G_B3_0 = NULL;
	GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* G_B4_1 = NULL;
	{
		// if (gInfo.state != GameInfo.GameStates.inGUI)
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_0 = __this->___gInfo_20;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(L_0, NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// gInfo.state = (gInfo.state == GameInfo.GameStates.playing_plr1) ? GameInfo.GameStates.playing_plr2 : GameInfo.GameStates.playing_plr1;
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_3 = __this->___gInfo_20;
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_4 = __this->___gInfo_20;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(L_4, NULL);
		G_B2_0 = L_3;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B3_0 = L_3;
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 2;
		G_B4_1 = G_B3_0;
	}

IL_002b:
	{
		NullCheck(G_B4_1);
		GameInfo_set_state_m4FD5E9E5B1207E5AED74B2F96D17DCE1C229F7DE(G_B4_1, G_B4_0, NULL);
	}

IL_0031:
	{
		// CheckAndPlayAI ();
		GUIHandler_CheckAndPlayAI_mC6E57D897920F71E14AA8E431C2CFBE055436C51(__this, NULL);
		// }
		return;
	}
}
// System.Void GUIHandler::CheckAndPlayAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_CheckAndPlayAI_mC6E57D897920F71E14AA8E431C2CFBE055436C51 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (gInfo.state != GameInfo.GameStates.inGUI) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_0 = __this->___gInfo_20;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(L_0, NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		// if (gInfo.GetCurrentPlayer ().PlayerIs == beings.AI) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_3 = __this->___gInfo_20;
		NullCheck(L_3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4;
		L_4 = GameInfo_GetCurrentPlayer_m6445982088E72A942EC5A75C538DA18037BD8978(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// aiPlayer.PlayAIMove (gInfo.GetCurrentPlayer ().PlayingAs);
		AIPlayer_t08BC6DB4B8347A6550754E0EDE3CA88FE222D734* L_7 = __this->___aiPlayer_22;
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_8 = __this->___gInfo_20;
		NullCheck(L_8);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9;
		L_9 = GameInfo_GetCurrentPlayer_m6445982088E72A942EC5A75C538DA18037BD8978(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_9, NULL);
		NullCheck(L_7);
		AIPlayer_PlayAIMove_mC7717D34F781FDDB23F955579579CEE8D7EB15EC(L_7, L_10, NULL);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void GUIHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler_LateUpdate_m545B653A84E81D7E528001EF5F669C6290C3F778 (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D_m50532F26FD5DFFFC611E6FAC3CA5A7C8917C5D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFEC72748E3E1FE89698BF8DF9674DAF0857A72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E331A419A1826DBBAF4888CD9B4F1D9E1796D66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68F77B0CC98F9B21CBB4A551561F3FA9D89FAA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF68718767F1ECC2E397BC187AD2445A3355251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83ADAE6CEBBECBE7278FF10484DAD9669A442B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D70FCEFCA975C0148585632997E2DE8F1182ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABE97D5D48AAF9383A24FD0549BF70E04C7A1180);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC76D5A3C7B88DCDB729A99348BC53016B128D48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3400E82FA686B4C3C4E6D356DDE26CE566DCB33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF32DD1A37C7477ACB63A4C2B5E92699264551A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDE71CCFDD0038A86A46AB52F763801607A6B11);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	String_t* V_11 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_12 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_30 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B12_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B13_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B15_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B16_1 = NULL;
	{
		// if (!suspendInteractions) {
		bool L_0 = __this->___suspendInteractions_31;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_06c0;
		}
	}
	{
		// if (!(gInfo.state == GameInfo.GameStates.inGUI)) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_2 = __this->___gInfo_20;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(L_2, NULL);
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0189;
		}
	}
	{
		// button_RESIGN.gameObject.SetActive (true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___button_RESIGN_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// button_PLAY.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___button_PLAY_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// if (gInfo.state == GameInfo.GameStates.playing_plr1) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_9 = __this->___gInfo_20;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(L_9, NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00f7;
		}
	}
	{
		// player1_Label.gameObject.SetActive (true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___player1_Label_6;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// player1_O.gameObject.SetActive ((gInfo.GetPlayerPiece (GameInfo._PLAYER1) == pieces.O) ? true : false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___player1_O_10;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_16 = __this->___gInfo_20;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GameInfo_GetPlayerPiece_mC43F44BFCCD8F4A87AEEC8FEA87264DFA0712E3D(L_16, 0, NULL);
		G_B4_0 = L_15;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			G_B5_0 = L_15;
			goto IL_0091;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0092;
	}

IL_0091:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0092:
	{
		NullCheck(G_B6_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B6_1, (bool)G_B6_0, NULL);
		// player1_X.gameObject.SetActive ((gInfo.GetPlayerPiece (GameInfo._PLAYER1) == pieces.X) ? true : false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___player1_X_9;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_20 = __this->___gInfo_20;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GameInfo_GetPlayerPiece_mC43F44BFCCD8F4A87AEEC8FEA87264DFA0712E3D(L_20, 0, NULL);
		G_B7_0 = L_19;
		if (!L_21)
		{
			G_B8_0 = L_19;
			goto IL_00b4;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00b5:
	{
		NullCheck(G_B9_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B9_1, (bool)G_B9_0, NULL);
		// player2_Label.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___player2_Label_11;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// player2_O.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___player2_O_15;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// player2_X.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___player2_X_14;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		goto IL_0188;
	}

IL_00f7:
	{
		// player2_Label.gameObject.SetActive (true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___player2_Label_11;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
		// player2_O.gameObject.SetActive ((gInfo.GetPlayerPiece (GameInfo._PLAYER2) == pieces.O) ? true : false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___player2_O_15;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_32 = __this->___gInfo_20;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = GameInfo_GetPlayerPiece_mC43F44BFCCD8F4A87AEEC8FEA87264DFA0712E3D(L_32, 1, NULL);
		G_B11_0 = L_31;
		if ((((int32_t)L_33) == ((int32_t)1)))
		{
			G_B12_0 = L_31;
			goto IL_0127;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		goto IL_0128;
	}

IL_0127:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
	}

IL_0128:
	{
		NullCheck(G_B13_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B13_1, (bool)G_B13_0, NULL);
		// player2_X.gameObject.SetActive ((gInfo.GetPlayerPiece (GameInfo._PLAYER2) == pieces.X) ? true : false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___player2_X_14;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_36 = __this->___gInfo_20;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = GameInfo_GetPlayerPiece_mC43F44BFCCD8F4A87AEEC8FEA87264DFA0712E3D(L_36, 1, NULL);
		G_B14_0 = L_35;
		if (!L_37)
		{
			G_B15_0 = L_35;
			goto IL_014a;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_014b;
	}

IL_014a:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
	}

IL_014b:
	{
		NullCheck(G_B16_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B16_1, (bool)G_B16_0, NULL);
		// player1_Label.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->___player1_Label_6;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// player1_O.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___player1_O_10;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// player1_X.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___player1_X_9;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
	}

IL_0188:
	{
	}

IL_0189:
	{
		// if (gInfo.state == GameInfo.GameStates.inGUI) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_44 = __this->___gInfo_20;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(L_44, NULL);
		V_3 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_3;
		if (!L_46)
		{
			goto IL_02f6;
		}
	}
	{
		// player1_Label.gameObject.SetActive (true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___player1_Label_6;
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_47, NULL);
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
		// player2_Label.gameObject.SetActive (true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = __this->___player2_Label_11;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
		// Player p = gInfo.GetPlayer (GameInfo._PLAYER1);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_51 = __this->___gInfo_20;
		NullCheck(L_51);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_52;
		L_52 = GameInfo_GetPlayer_m93AF763375B2405D0920A4C29786AE2700D609BF(L_51, 0, NULL);
		V_4 = L_52;
		// if (p != null) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_53 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_5;
		if (!L_54)
		{
			goto IL_024a;
		}
	}
	{
		// player1_Computer.gameObject.SetActive (p.PlayerIs == beings.AI);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___player1_Computer_7;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_57 = V_4;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_57, NULL);
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)((((int32_t)L_58) == ((int32_t)1))? 1 : 0), NULL);
		// player1_Human.gameObject.SetActive (p.PlayerIs == beings.Human);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = __this->___player1_Human_8;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_61 = V_4;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_61, NULL);
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)((((int32_t)L_62) == ((int32_t)0))? 1 : 0), NULL);
		// player1_O.gameObject.SetActive (p.PlayingAs == pieces.O);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = __this->___player1_O_10;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_65 = V_4;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_65, NULL);
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)((((int32_t)L_66) == ((int32_t)1))? 1 : 0), NULL);
		// player1_X.gameObject.SetActive (p.PlayingAs == pieces.X);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67 = __this->___player1_X_9;
		NullCheck(L_67);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_69 = V_4;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_69, NULL);
		NullCheck(L_68);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_68, (bool)((((int32_t)L_70) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_024a:
	{
		// p = gInfo.GetPlayer (GameInfo._PLAYER2);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_71 = __this->___gInfo_20;
		NullCheck(L_71);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_72;
		L_72 = GameInfo_GetPlayer_m93AF763375B2405D0920A4C29786AE2700D609BF(L_71, 1, NULL);
		V_4 = L_72;
		// if (p != null) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_73 = V_4;
		V_6 = (bool)((!(((RuntimeObject*)(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_02d1;
		}
	}
	{
		// player2_Computer.gameObject.SetActive (p.PlayerIs == beings.AI);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = __this->___player2_Computer_12;
		NullCheck(L_75);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_75, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_77 = V_4;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_77, NULL);
		NullCheck(L_76);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_76, (bool)((((int32_t)L_78) == ((int32_t)1))? 1 : 0), NULL);
		// player2_Human.gameObject.SetActive (p.PlayerIs == beings.Human);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79 = __this->___player2_Human_13;
		NullCheck(L_79);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80;
		L_80 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_79, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_81 = V_4;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_81, NULL);
		NullCheck(L_80);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_80, (bool)((((int32_t)L_82) == ((int32_t)0))? 1 : 0), NULL);
		// player2_O.gameObject.SetActive (p.PlayingAs == pieces.O);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = __this->___player2_O_15;
		NullCheck(L_83);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84;
		L_84 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_83, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_85 = V_4;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_85, NULL);
		NullCheck(L_84);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_84, (bool)((((int32_t)L_86) == ((int32_t)1))? 1 : 0), NULL);
		// player2_X.gameObject.SetActive (p.PlayingAs == pieces.X);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = __this->___player2_X_14;
		NullCheck(L_87);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88;
		L_88 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_87, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_89 = V_4;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_89, NULL);
		NullCheck(L_88);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_88, (bool)((((int32_t)L_90) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_02d1:
	{
		// button_RESIGN.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91 = __this->___button_RESIGN_5;
		NullCheck(L_91);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_91, NULL);
		NullCheck(L_92);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_92, (bool)0, NULL);
		// button_PLAY.gameObject.SetActive (true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = __this->___button_PLAY_4;
		NullCheck(L_93);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94;
		L_94 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_93, NULL);
		NullCheck(L_94);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_94, (bool)1, NULL);
	}

IL_02f6:
	{
		// if (Input.GetButtonUp ("Fire1")) {
		bool L_95;
		L_95 = Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		V_7 = L_95;
		bool L_96 = V_7;
		if (!L_96)
		{
			goto IL_06bf;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_97;
		L_97 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_97);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_99;
		L_99 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_97, L_98, NULL);
		V_8 = L_99;
		// RaycastHit2D hit = Physics2D.GetRayIntersection (ray);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_100 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_101;
		L_101 = Physics2D_GetRayIntersection_m14FE964631FC806EC3C7D6EBCA461315961492C4(L_100, NULL);
		V_9 = L_101;
		// if (hit) {
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_102 = V_9;
		bool L_103;
		L_103 = RaycastHit2D_op_Implicit_mBEF99A746116664D68B1398D58CA247550980A11(L_102, NULL);
		V_10 = L_103;
		bool L_104 = V_10;
		if (!L_104)
		{
			goto IL_06be;
		}
	}
	{
		// string t = hit.collider.tag;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_105;
		L_105 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_9), NULL);
		NullCheck(L_105);
		String_t* L_106;
		L_106 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_105, NULL);
		V_11 = L_106;
		// Player p1 = gInfo.GetPlayer (GameInfo._PLAYER1);    // we'll need this info shortly.
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_107 = __this->___gInfo_20;
		NullCheck(L_107);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_108;
		L_108 = GameInfo_GetPlayer_m93AF763375B2405D0920A4C29786AE2700D609BF(L_107, 0, NULL);
		V_12 = L_108;
		// Player p2 = gInfo.GetPlayer (GameInfo._PLAYER2);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_109 = __this->___gInfo_20;
		NullCheck(L_109);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_110;
		L_110 = GameInfo_GetPlayer_m93AF763375B2405D0920A4C29786AE2700D609BF(L_109, 1, NULL);
		V_13 = L_110;
		// if (!(gInfo.state == GameInfo.GameStates.inGUI)) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_111 = __this->___gInfo_20;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = GameInfo_get_state_mC6EDEB23D46E4BA7A84830A635FA8073869C2727(L_111, NULL);
		V_14 = (bool)((!(((uint32_t)L_112) <= ((uint32_t)0)))? 1 : 0);
		bool L_113 = V_14;
		if (!L_113)
		{
			goto IL_042d;
		}
	}
	{
		// if (t == "btn_RESIGN") {    // this is the only working button in the GUI when playing.
		String_t* L_114 = V_11;
		bool L_115;
		L_115 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_114, _stringLiteral83D70FCEFCA975C0148585632997E2DE8F1182ED, NULL);
		V_15 = L_115;
		bool L_116 = V_15;
		if (!L_116)
		{
			goto IL_039d;
		}
	}
	{
		// gInfo.state = GameInfo.GameStates.inGUI;
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_117 = __this->___gInfo_20;
		NullCheck(L_117);
		GameInfo_set_state_m4FD5E9E5B1207E5AED74B2F96D17DCE1C229F7DE(L_117, 0, NULL);
		goto IL_0427;
	}

IL_039d:
	{
		// } else if (t == "gridCell") {    // clicked on a board cell.
		String_t* L_118 = V_11;
		bool L_119;
		L_119 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_118, _stringLiteral7DF68718767F1ECC2E397BC187AD2445A3355251, NULL);
		V_16 = L_119;
		bool L_120 = V_16;
		if (!L_120)
		{
			goto IL_0427;
		}
	}
	{
		// if (gInfo.GetCurrentPlayer ().PlayerIs == beings.Human) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_121 = __this->___gInfo_20;
		NullCheck(L_121);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_122;
		L_122 = GameInfo_GetCurrentPlayer_m6445982088E72A942EC5A75C538DA18037BD8978(L_121, NULL);
		NullCheck(L_122);
		int32_t L_123;
		L_123 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_122, NULL);
		V_17 = (bool)((((int32_t)L_123) == ((int32_t)0))? 1 : 0);
		bool L_124 = V_17;
		if (!L_124)
		{
			goto IL_0426;
		}
	}
	{
		// GridCellScript gcScript = hit.collider.gameObject.GetComponent<GridCellScript> ();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_125;
		L_125 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_9), NULL);
		NullCheck(L_125);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126;
		L_126 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_125, NULL);
		NullCheck(L_126);
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_127;
		L_127 = GameObject_GetComponent_TisGridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D_m50532F26FD5DFFFC611E6FAC3CA5A7C8917C5D2E(L_126, GameObject_GetComponent_TisGridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D_m50532F26FD5DFFFC611E6FAC3CA5A7C8917C5D2E_RuntimeMethod_var);
		V_18 = L_127;
		// if (gcScript.state == GridCellScript.CellStates.empty) {
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_128 = V_18;
		NullCheck(L_128);
		int32_t L_129;
		L_129 = GridCellScript_get_state_mBF0EA8088B3ED845185C2D44BCF8C23B94892FD9(L_128, NULL);
		V_19 = (bool)((((int32_t)L_129) == ((int32_t)0))? 1 : 0);
		bool L_130 = V_19;
		if (!L_130)
		{
			goto IL_0425;
		}
	}
	{
		// if (gInfo.GetCurrentPlayer ().PlayingAs == pieces.O) {
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_131 = __this->___gInfo_20;
		NullCheck(L_131);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_132;
		L_132 = GameInfo_GetCurrentPlayer_m6445982088E72A942EC5A75C538DA18037BD8978(L_131, NULL);
		NullCheck(L_132);
		int32_t L_133;
		L_133 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_132, NULL);
		V_20 = (bool)((((int32_t)L_133) == ((int32_t)1))? 1 : 0);
		bool L_134 = V_20;
		if (!L_134)
		{
			goto IL_0414;
		}
	}
	{
		// gcScript.state = GridCellScript.CellStates.O;
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_135 = V_18;
		NullCheck(L_135);
		GridCellScript_set_state_mE5CC25CFB2761E4D26680161F0164F7E79D1C2BD(L_135, 1, NULL);
		goto IL_041d;
	}

IL_0414:
	{
		// gcScript.state = GridCellScript.CellStates.X;
		GridCellScript_t1A379E8994E4D36A36A1F2913B30522820C4F62D* L_136 = V_18;
		NullCheck(L_136);
		GridCellScript_set_state_mE5CC25CFB2761E4D26680161F0164F7E79D1C2BD(L_136, 2, NULL);
	}

IL_041d:
	{
		// NextTurn ();    // Swap player.
		GUIHandler_NextTurn_m268CA4AFC16AA993CF46CC54E872B7D0E27E4F1C(__this, NULL);
	}

IL_0425:
	{
	}

IL_0426:
	{
	}

IL_0427:
	{
		goto IL_06bd;
	}

IL_042d:
	{
		// if (t == "player1_Computer") {
		String_t* L_137 = V_11;
		bool L_138;
		L_138 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_137, _stringLiteral3DFEC72748E3E1FE89698BF8DF9674DAF0857A72, NULL);
		V_21 = L_138;
		bool L_139 = V_21;
		if (!L_139)
		{
			goto IL_045e;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER1, beings.Human, p1.PlayerName, p1.PlayingAs);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_140 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_141 = V_12;
		NullCheck(L_141);
		String_t* L_142;
		L_142 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_141, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_143 = V_12;
		NullCheck(L_143);
		int32_t L_144;
		L_144 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_143, NULL);
		NullCheck(L_140);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_140, 0, 0, L_142, L_144, NULL);
	}

IL_045e:
	{
		// if (t == "player1_Human") {
		String_t* L_145 = V_11;
		bool L_146;
		L_146 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_145, _stringLiteral3E331A419A1826DBBAF4888CD9B4F1D9E1796D66, NULL);
		V_22 = L_146;
		bool L_147 = V_22;
		if (!L_147)
		{
			goto IL_048e;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER1, beings.AI, p1.PlayerName, p1.PlayingAs);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_148 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_149 = V_12;
		NullCheck(L_149);
		String_t* L_150;
		L_150 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_149, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_151 = V_12;
		NullCheck(L_151);
		int32_t L_152;
		L_152 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_151, NULL);
		NullCheck(L_148);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_148, 0, 1, L_150, L_152, NULL);
	}

IL_048e:
	{
		// if (t == "player1_O") {
		String_t* L_153 = V_11;
		bool L_154;
		L_154 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_153, _stringLiteralFBDE71CCFDD0038A86A46AB52F763801607A6B11, NULL);
		V_23 = L_154;
		bool L_155 = V_23;
		if (!L_155)
		{
			goto IL_04da;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER1, p1.PlayerIs, p1.PlayerName, pieces.X);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_156 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_157 = V_12;
		NullCheck(L_157);
		int32_t L_158;
		L_158 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_157, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_159 = V_12;
		NullCheck(L_159);
		String_t* L_160;
		L_160 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_159, NULL);
		NullCheck(L_156);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_156, 0, L_158, L_160, 0, NULL);
		// gInfo.SetPlayer (GameInfo._PLAYER2, p2.PlayerIs, p2.PlayerName, pieces.O);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_161 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_162 = V_13;
		NullCheck(L_162);
		int32_t L_163;
		L_163 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_162, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_164 = V_13;
		NullCheck(L_164);
		String_t* L_165;
		L_165 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_164, NULL);
		NullCheck(L_161);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_161, 1, L_163, L_165, 1, NULL);
	}

IL_04da:
	{
		// if (t == "player1_X") {
		String_t* L_166 = V_11;
		bool L_167;
		L_167 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_166, _stringLiteralEF32DD1A37C7477ACB63A4C2B5E92699264551A8, NULL);
		V_24 = L_167;
		bool L_168 = V_24;
		if (!L_168)
		{
			goto IL_0526;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER1, p1.PlayerIs, p1.PlayerName, pieces.O);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_169 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_170 = V_12;
		NullCheck(L_170);
		int32_t L_171;
		L_171 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_170, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_172 = V_12;
		NullCheck(L_172);
		String_t* L_173;
		L_173 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_172, NULL);
		NullCheck(L_169);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_169, 0, L_171, L_173, 1, NULL);
		// gInfo.SetPlayer (GameInfo._PLAYER2, p2.PlayerIs, p2.PlayerName, pieces.X);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_174 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_175 = V_13;
		NullCheck(L_175);
		int32_t L_176;
		L_176 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_175, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_177 = V_13;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_177, NULL);
		NullCheck(L_174);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_174, 1, L_176, L_178, 0, NULL);
	}

IL_0526:
	{
		// if (t == "player2_Computer") {
		String_t* L_179 = V_11;
		bool L_180;
		L_180 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_179, _stringLiteralE3400E82FA686B4C3C4E6D356DDE26CE566DCB33, NULL);
		V_25 = L_180;
		bool L_181 = V_25;
		if (!L_181)
		{
			goto IL_0556;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER2, beings.Human, p2.PlayerName, p2.PlayingAs);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_182 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_183 = V_13;
		NullCheck(L_183);
		String_t* L_184;
		L_184 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_183, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_185 = V_13;
		NullCheck(L_185);
		int32_t L_186;
		L_186 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_185, NULL);
		NullCheck(L_182);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_182, 1, 0, L_184, L_186, NULL);
	}

IL_0556:
	{
		// if (t == "player2_Human") {
		String_t* L_187 = V_11;
		bool L_188;
		L_188 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_187, _stringLiteral83ADAE6CEBBECBE7278FF10484DAD9669A442B19, NULL);
		V_26 = L_188;
		bool L_189 = V_26;
		if (!L_189)
		{
			goto IL_0586;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER2, beings.AI, p2.PlayerName, p2.PlayingAs);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_190 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_191 = V_13;
		NullCheck(L_191);
		String_t* L_192;
		L_192 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_191, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_193 = V_13;
		NullCheck(L_193);
		int32_t L_194;
		L_194 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_193, NULL);
		NullCheck(L_190);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_190, 1, 1, L_192, L_194, NULL);
	}

IL_0586:
	{
		// if (t == "player2_O") {
		String_t* L_195 = V_11;
		bool L_196;
		L_196 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_195, _stringLiteralAC76D5A3C7B88DCDB729A99348BC53016B128D48, NULL);
		V_27 = L_196;
		bool L_197 = V_27;
		if (!L_197)
		{
			goto IL_05d2;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER2, p2.PlayerIs, p2.PlayerName, pieces.X);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_198 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_199 = V_13;
		NullCheck(L_199);
		int32_t L_200;
		L_200 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_199, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_201 = V_13;
		NullCheck(L_201);
		String_t* L_202;
		L_202 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_201, NULL);
		NullCheck(L_198);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_198, 1, L_200, L_202, 0, NULL);
		// gInfo.SetPlayer (GameInfo._PLAYER1, p1.PlayerIs, p1.PlayerName, pieces.O);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_203 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_204 = V_12;
		NullCheck(L_204);
		int32_t L_205;
		L_205 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_204, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_206 = V_12;
		NullCheck(L_206);
		String_t* L_207;
		L_207 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_206, NULL);
		NullCheck(L_203);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_203, 0, L_205, L_207, 1, NULL);
	}

IL_05d2:
	{
		// if (t == "player2_X") {
		String_t* L_208 = V_11;
		bool L_209;
		L_209 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_208, _stringLiteralABE97D5D48AAF9383A24FD0549BF70E04C7A1180, NULL);
		V_28 = L_209;
		bool L_210 = V_28;
		if (!L_210)
		{
			goto IL_061e;
		}
	}
	{
		// gInfo.SetPlayer (GameInfo._PLAYER2, p2.PlayerIs, p2.PlayerName, pieces.O);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_211 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_212 = V_13;
		NullCheck(L_212);
		int32_t L_213;
		L_213 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_212, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_214 = V_13;
		NullCheck(L_214);
		String_t* L_215;
		L_215 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_214, NULL);
		NullCheck(L_211);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_211, 1, L_213, L_215, 1, NULL);
		// gInfo.SetPlayer (GameInfo._PLAYER1, p1.PlayerIs, p1.PlayerName, pieces.X);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_216 = __this->___gInfo_20;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_217 = V_12;
		NullCheck(L_217);
		int32_t L_218;
		L_218 = Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65(L_217, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_219 = V_12;
		NullCheck(L_219);
		String_t* L_220;
		L_220 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D(L_219, NULL);
		NullCheck(L_216);
		GameInfo_SetPlayer_m879F34D0D7293AE163692251C3FD69F7947E18A2(L_216, 0, L_218, L_220, 0, NULL);
	}

IL_061e:
	{
		// if (t == "btn_PLAY") {
		String_t* L_221 = V_11;
		bool L_222;
		L_222 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_221, _stringLiteral68F77B0CC98F9B21CBB4A551561F3FA9D89FAA57, NULL);
		V_29 = L_222;
		bool L_223 = V_29;
		if (!L_223)
		{
			goto IL_06bc;
		}
	}
	{
		// Player p = gInfo.GetPlayer (GameInfo._PLAYER1);
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_224 = __this->___gInfo_20;
		NullCheck(L_224);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_225;
		L_225 = GameInfo_GetPlayer_m93AF763375B2405D0920A4C29786AE2700D609BF(L_224, 0, NULL);
		V_30 = L_225;
		// player1_O.gameObject.SetActive (p.PlayingAs == pieces.O);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_226 = __this->___player1_O_10;
		NullCheck(L_226);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_227;
		L_227 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_226, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_228 = V_30;
		NullCheck(L_228);
		int32_t L_229;
		L_229 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_228, NULL);
		NullCheck(L_227);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_227, (bool)((((int32_t)L_229) == ((int32_t)1))? 1 : 0), NULL);
		// player1_X.gameObject.SetActive (p.PlayingAs == pieces.X);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_230 = __this->___player1_X_9;
		NullCheck(L_230);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_231;
		L_231 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_230, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_232 = V_30;
		NullCheck(L_232);
		int32_t L_233;
		L_233 = Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5(L_232, NULL);
		NullCheck(L_231);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_231, (bool)((((int32_t)L_233) == ((int32_t)0))? 1 : 0), NULL);
		// player2_O.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_234 = __this->___player2_O_15;
		NullCheck(L_234);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_235;
		L_235 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_234, NULL);
		NullCheck(L_235);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_235, (bool)0, NULL);
		// player2_X.gameObject.SetActive (false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_236 = __this->___player2_X_14;
		NullCheck(L_236);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_237;
		L_237 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_236, NULL);
		NullCheck(L_237);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_237, (bool)0, NULL);
		// board.ClearBoard ();
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_238 = __this->___board_21;
		NullCheck(L_238);
		BoardManager_ClearBoard_mCE77812DE14FC1530673E389A5D164EEAD5371BC(L_238, NULL);
		// gInfo.StartPlaying ();
		GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* L_239 = __this->___gInfo_20;
		NullCheck(L_239);
		GameInfo_StartPlaying_mB64A345C086CF034B5491890B6400F52A06FD4DE(L_239, NULL);
		// CheckAndPlayAI ();        // check if current player is an AI, and play his move if so.
		GUIHandler_CheckAndPlayAI_mC6E57D897920F71E14AA8E431C2CFBE055436C51(__this, NULL);
	}

IL_06bc:
	{
	}

IL_06bd:
	{
	}

IL_06be:
	{
	}

IL_06bf:
	{
	}

IL_06c0:
	{
		// }
		return;
	}
}
// System.Void GUIHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIHandler__ctor_m1433E280878D18E3543A6AB62C2762410908F5CA (GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* __this, const RuntimeMethod* method) 
{
	{
		// public int pl1 = 0;
		__this->___pl1_27 = 0;
		// public int pl2 = 0;
		__this->___pl2_28 = 0;
		// private bool suspendInteractions = false;        // set to true during game-over animations to prevent access to buttons.
		__this->___suspendInteractions_31 = (bool)0;
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
// System.Void GUIHandler/<DoPlayer1WinsAnim>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer1WinsAnimU3Ed__32__ctor_m7E395350B2341D765B431708F5E47FE0514280A2 (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GUIHandler/<DoPlayer1WinsAnim>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer1WinsAnimU3Ed__32_System_IDisposable_Dispose_m4D277DBA4E364B737614D7D72056307740E66FAB (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GUIHandler/<DoPlayer1WinsAnim>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoPlayer1WinsAnimU3Ed__32_MoveNext_mFAD269381F34E4983524C60EFF5E7386B828FC7D (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// suspendInteractions = true;        // disable all GUI activities while animation runs.
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->___suspendInteractions_31 = (bool)1;
		// txt_Plr1Wins.gameObject.SetActive (true);
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___txt_Plr1Wins_17;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// yield return new WaitForSeconds (3.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// txt_Plr1Wins.gameObject.SetActive (false);
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___txt_Plr1Wins_17;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// suspendInteractions = false;        // Animation is done; re-enable the GUI.
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		L_11->___suspendInteractions_31 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GUIHandler/<DoPlayer1WinsAnim>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoPlayer1WinsAnimU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m738458B2ABFE78A9439CA4A2FAE57141B1337015 (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GUIHandler/<DoPlayer1WinsAnim>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer1WinsAnimU3Ed__32_System_Collections_IEnumerator_Reset_m73FC75988C650EDE47F05447B5DFBB399F7AFD6F (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoPlayer1WinsAnimU3Ed__32_System_Collections_IEnumerator_Reset_m73FC75988C650EDE47F05447B5DFBB399F7AFD6F_RuntimeMethod_var)));
	}
}
// System.Object GUIHandler/<DoPlayer1WinsAnim>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoPlayer1WinsAnimU3Ed__32_System_Collections_IEnumerator_get_Current_mF3B032AD0E3B1B93E5CE3CD034F3A5768C60867B (U3CDoPlayer1WinsAnimU3Ed__32_t3BC2641275BA4D5591D8705A481F892F1D8701AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GUIHandler/<DoPlayer2WinsAnim>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer2WinsAnimU3Ed__33__ctor_mFFE604F11730ADD63AFD35D2B2056B8B502AAE72 (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GUIHandler/<DoPlayer2WinsAnim>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer2WinsAnimU3Ed__33_System_IDisposable_Dispose_mB09F756B9878530241164DA132BA2C93387E74D6 (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GUIHandler/<DoPlayer2WinsAnim>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoPlayer2WinsAnimU3Ed__33_MoveNext_mC5B040C24BB9B549AB1AFBD202B312F3E9BE714E (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// suspendInteractions = true;        // disable all GUI activities while animation runs.
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->___suspendInteractions_31 = (bool)1;
		// txt_Plr2Wins.gameObject.SetActive (true);
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___txt_Plr2Wins_18;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// yield return new WaitForSeconds (3.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// txt_Plr2Wins.gameObject.SetActive (false);
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___txt_Plr2Wins_18;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// suspendInteractions = false;        // Animation is done; re-enable the GUI.
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		L_11->___suspendInteractions_31 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GUIHandler/<DoPlayer2WinsAnim>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoPlayer2WinsAnimU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m29E84808DF8E341B04A004870DB29EC81CC328F3 (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GUIHandler/<DoPlayer2WinsAnim>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlayer2WinsAnimU3Ed__33_System_Collections_IEnumerator_Reset_mAF25B60009BA238F7C3F01E36015D301971DF03A (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoPlayer2WinsAnimU3Ed__33_System_Collections_IEnumerator_Reset_mAF25B60009BA238F7C3F01E36015D301971DF03A_RuntimeMethod_var)));
	}
}
// System.Object GUIHandler/<DoPlayer2WinsAnim>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoPlayer2WinsAnimU3Ed__33_System_Collections_IEnumerator_get_Current_mC2A01E576C97807E209ECAAC1EC95358A56DCA47 (U3CDoPlayer2WinsAnimU3Ed__33_tBC0A03D3411F5030AC8759A290C20AE30B0571D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GUIHandler/<DoItsADrawAnim>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoItsADrawAnimU3Ed__34__ctor_m008010F91860060796727FA845993657BF3E7C1C (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GUIHandler/<DoItsADrawAnim>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoItsADrawAnimU3Ed__34_System_IDisposable_Dispose_m9B2CA4CEB46C7FEF38A6D79A8CF7E92DAC3BCFC1 (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GUIHandler/<DoItsADrawAnim>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoItsADrawAnimU3Ed__34_MoveNext_mBFD8885794003B506021E359E76AD60D000EDC5B (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// suspendInteractions = true;        // disable all GUI activities while animation runs.
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->___suspendInteractions_31 = (bool)1;
		// txt_Draw.gameObject.SetActive (true);
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___txt_Draw_16;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// yield return new WaitForSeconds (3.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// txt_Draw.gameObject.SetActive (false);
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___txt_Draw_16;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// suspendInteractions = false;        // Animation is done; re-enable the GUI.
		GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		L_11->___suspendInteractions_31 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GUIHandler/<DoItsADrawAnim>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoItsADrawAnimU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C9611D1ADCCFAD3474F7AA680C70A1937AAEF2B (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GUIHandler/<DoItsADrawAnim>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoItsADrawAnimU3Ed__34_System_Collections_IEnumerator_Reset_m0A1B873492271ADEC645051FA5884B2E4B35F02E (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoItsADrawAnimU3Ed__34_System_Collections_IEnumerator_Reset_m0A1B873492271ADEC645051FA5884B2E4B35F02E_RuntimeMethod_var)));
	}
}
// System.Object GUIHandler/<DoItsADrawAnim>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoItsADrawAnimU3Ed__34_System_Collections_IEnumerator_get_Current_m0E0D093CF2AB90A5A0D657EC28AC6624098098D1 (U3CDoItsADrawAnimU3Ed__34_tF6891D5D517C8DB22CC07BB461C5E4CE8137DBFF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// pieces Player::get_PlayingAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_PlayingAs_m5D881A37E4E79E54866324DA61153769B0EF3FC5 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return _isX ? pieces.X : pieces.O;
		bool L_0 = __this->____isX_0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Player::set_PlayingAs(pieces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayingAs_mF0B993218E5E4F8BB9D62D16283E8BD9E4810F2E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == pieces.X)
		int32_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// _isX = true;
		__this->____isX_0 = (bool)1;
		goto IL_0021;
	}

IL_0012:
	{
		// else if (value == pieces.O)
		int32_t L_2 = ___value0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _isX = false;
		__this->____isX_0 = (bool)0;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.String Player::get_PlayerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return _name;
		String_t* L_0 = __this->____name_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Player::set_PlayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// _name = value;
		String_t* L_0 = ___value0;
		__this->____name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_1), (void*)L_0);
		// }
		return;
	}
}
// beings Player::get_PlayerIs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_PlayerIs_mA3551FF0321923BB78EBD38317CACE8D4BAF2B65 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return _isHuman ? beings.Human : beings.AI;
		bool L_0 = __this->____isHuman_2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Player::set_PlayerIs(beings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerIs_mF6C7BF8DF0A53ACD825B50DD8E4F542E78EADE39 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == beings.Human)
		int32_t L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// _isHuman = true;
		__this->____isHuman_2 = (bool)1;
		goto IL_0021;
	}

IL_0012:
	{
		// else if (value == beings.AI)
		int32_t L_2 = ___value0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _isHuman = false;
		__this->____isHuman_2 = (bool)0;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _isX = false;    // I prefer to prepend an underscore to denote a private member variable with accessors.
		__this->____isX_0 = (bool)0;
		// private string _name = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_1), (void*)L_0);
		// private bool _isHuman = false;
		__this->____isHuman_2 = (bool)0;
		// public int score = 0;
		__this->___score_3 = 0;
		// public int won = 0;
		__this->___won_4 = 0;
		// public int lost = 0;
		__this->___lost_5 = 0;
		// public int drawn = 0;        // in theory, we could calculate one of these three values using 'totalGames' to provide the necessary info, but code is harder to maintain than data.
		__this->___drawn_6 = 0;
		// public int totalGames = 0;
		__this->___totalGames_7 = 0;
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
// System.Void XOScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_Start_m7A3B09EF053BF783DE72565C7200375F1CA42B2A (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC775EBA4F50D375635D2A9E217EC24FF658AE2D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (gameObject.CompareTag ("cellX")) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_0, _stringLiteralAC775EBA4F50D375635D2A9E217EC24FF658AE2D, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// _isX = true;
		__this->____isX_4 = (bool)1;
		goto IL_0029;
	}

IL_0020:
	{
		// _isX = false;
		__this->____isX_4 = (bool)0;
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void XOScript::HideX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_HideX_m5B430F56CDD5FE3BE8EA38C1DC5BA87692956A5D (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_isX) {
		bool L_0 = __this->____isX_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// gameObject.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void XOScript::ShowX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_ShowX_m0256153261F79E538A40EAF2D7E3B5D61D6EDA67 (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_isX) {
		bool L_0 = __this->____isX_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// gameObject.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)1, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void XOScript::HideO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_HideO_mAF1D654E0D2E4B37B4E2E2955EC4838AD6698BB4 (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_isX) {
		bool L_0 = __this->____isX_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// gameObject.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void XOScript::ShowO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript_ShowO_mEC3E28EBAB3BB4699665B4EB31BDFC655F2D7F5C (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_isX) {
		bool L_0 = __this->____isX_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// gameObject.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)1, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void XOScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XOScript__ctor_mDB9733262BE3BF7BA726D3F84EF5A7011E0E3810 (XOScript_t2822ABDBD7B57E331D4B34AD766D8D07C8C9CCB7* __this, const RuntimeMethod* method) 
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
// System.Void minigame2_open::Open_game_food()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void minigame2_open_Open_game_food_m3515E882426B7688978587AFB2FE28700443CF5D (minigame2_open_t90ACA0867E9F328A4CB8746D6CC639CB335E140A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54AC73CED89A45F5FBCAE0BD608B80D2E98F83AB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "?? ???????, ?? ?????????? ?? ??? ??????, ??? ???, ???? ?? ?????? ?????? ? ???????, ???????! ??? ??? ????? ???????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral54AC73CED89A45F5FBCAE0BD608B80D2E98F83AB, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene(6);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(6, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void minigame2_open::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void minigame2_open__ctor_m7A98B3D799A1164A451420089AC1BAE6D106D404 (minigame2_open_t90ACA0867E9F328A4CB8746D6CC639CB335E140A* __this, const RuntimeMethod* method) 
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
// System.Void NextScene::NextScene_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextScene_NextScene_B_m8F33F926BC17B9DF81C9520DF316CEFBD7DACF3F (NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED2F964E01D6E7CB9B75362F182A3A90C3181C4D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "*???? ????????? ???????? ?????????*")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralED2F964E01D6E7CB9B75362F182A3A90C3181C4D, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void NextScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextScene__ctor_mF930690F11186753D518C23AF63B16D8CBA87419 (NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F* __this, const RuntimeMethod* method) 
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
// System.Void openmenu::Openmenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void openmenu_Openmenu_m3B7715C934F58CAEE86D6AE0B959457F20FB0B50 (openmenu_t684B1E74B1DA7FF30FCB3F88CBFD5C5BC7AF6B1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void openmenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void openmenu__ctor_m842C3DA5134693D5EF6331DECF4BE7CC7CC5990F (openmenu_t684B1E74B1DA7FF30FCB3F88CBFD5C5BC7AF6B1D* __this, const RuntimeMethod* method) 
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
// System.Void Saver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saver__ctor_m3651AE3F108C01AF5479ADCC2E2B255D38FF1C79 (Saver_t24EF218FD4AF7C68D8863C2976D40019EB79AC2D* __this, const RuntimeMethod* method) 
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
// System.Void Saver_Set::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saver_Set_Start_mB0ECCE44CADEE59B500C03A6ADEAF083A5CC8FE9 (Saver_Set_t582E4D83A59969E26606B348FCCA6FAAE06FC941* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9A169E0BE4442E883D5D8A6A050A8BEF499E51A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// number = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		V_0 = L_1;
		// PlayerPrefs.SetInt("levelScene", number);
		int32_t L_2 = V_0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralD9A169E0BE4442E883D5D8A6A050A8BEF499E51A, L_2, NULL);
		// }
		return;
	}
}
// System.Void Saver_Set::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saver_Set__ctor_mC884F6C255A2E89F9DA4B8172AD563F08A5B7F73 (Saver_Set_t582E4D83A59969E26606B348FCCA6FAAE06FC941* __this, const RuntimeMethod* method) 
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
// System.Void Scene::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_LoadScene_mDBA76952969AE512B404FE4EBD216DE40D07B5F4 (Scene_tF2B7ED0D6838C04B614A11173D235D0C06BDEFA8* __this, int32_t ___scene_id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene_id);
		int32_t L_0 = ___scene_id0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void Scene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene__ctor_mE7B2C3E3DEF1A6D8CE32686B89DC6124993DBCA2 (Scene_tF2B7ED0D6838C04B614A11173D235D0C06BDEFA8* __this, const RuntimeMethod* method) 
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
// System.Collections.IEnumerator Achievment1::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Achievment1_Wait_mE86E81481BC2174CB394EC4541DD4E82D9207FB4 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* L_0 = (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236*)il2cpp_codegen_object_new(U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitU3Ed__4__ctor_m00A9B6E8C31EB3B6F555EB5CD77F07B155B51047(L_0, 0, NULL);
		U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Achievment1::CloseAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievment1_CloseAchievment_m42E30DDC94C50CE5076B721E7D59DDA061B64FB4 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isOpen", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Achievment1::ShowAchievment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievment1_ShowAchievment_m64884AC134B9DAFCCE869793E18076388A2EFD88 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isOpen", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)1, NULL);
		// StartCoroutine(Wait());
		RuntimeObject* L_1;
		L_1 = Achievment1_Wait_mE86E81481BC2174CB394EC4541DD4E82D9207FB4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// usl = true;
		__this->___usl_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Achievment1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievment1_Update_m05234E5EF8C0AC9CD9D83678ADFE33966C34D879 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (usl == false)
		bool L_0 = __this->___usl_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// animator.SetBool("isOpen", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_5;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)0, NULL);
		// int pl1 = SavedAchievment.PLAYER;
		int32_t L_3;
		L_3 = SavedAchievment_get_PLAYER_m2AF0FDAD5E3964A12CF0E4EF2B180F3AA2D9126D(NULL);
		V_1 = L_3;
		// pl1++;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (pl1== 3 && SavedAchievment.TEACHER == 0 /*&& usl == false*/)
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_6;
		L_6 = SavedAchievment_get_TEACHER_m5AE472B403247BC99B629F26851765B3442E11FD(NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = 0;
	}

IL_003a:
	{
		V_2 = (bool)G_B4_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// ShowAchievment();
		Achievment1_ShowAchievment_m64884AC134B9DAFCCE869793E18076388A2EFD88(__this, NULL);
	}

IL_0047:
	{
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Achievment1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievment1__ctor_m173ED2E98885004FDFD0F2CDFCFF60E595A26C80 (Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* __this, const RuntimeMethod* method) 
{
	{
		// public bool usl = false;
		__this->___usl_4 = (bool)0;
		// public bool usl2 = false;
		__this->___usl2_6 = (bool)0;
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
// System.Void Achievment1/<Wait>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4__ctor_m00A9B6E8C31EB3B6F555EB5CD77F07B155B51047 (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Achievment1/<Wait>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4_System_IDisposable_Dispose_m44611B2743E659F4530CA8FCF98841D7A0432D69 (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Achievment1/<Wait>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitU3Ed__4_MoveNext_m02D24D2FD7198958B16B82C168315EBF8E93C210 (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// CloseAchievment();
		Achievment1_t224497D663F8F7E069BEABC4843700817D2F1767* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		Achievment1_CloseAchievment_m42E30DDC94C50CE5076B721E7D59DDA061B64FB4(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Achievment1/<Wait>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E720AB706BAC519B17BD4F2180434CF357F0DF1 (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Achievment1/<Wait>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__4_System_Collections_IEnumerator_Reset_m05A6F6592F0C9149A961CB377FD16BDCEB9AB5CD (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitU3Ed__4_System_Collections_IEnumerator_Reset_m05A6F6592F0C9149A961CB377FD16BDCEB9AB5CD_RuntimeMethod_var)));
	}
}
// System.Object Achievment1/<Wait>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitU3Ed__4_System_Collections_IEnumerator_get_Current_m408C3793CE7635E2F73FD243AC8B8A7DFA742508 (U3CWaitU3Ed__4_tC97DB04ADE7B2D6990FFBF0DC1EEECA4D4D7C236* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Int32 Dialogue::GetReadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dialogue_GetReadCount_mD9BFA27783675F4811CFBF13A621D25D18DD2192 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return Read.Count;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___Read_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Dialogue::GetReadStringIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dialogue_GetReadStringIndex_m060C1492C241F723404CF60FB89CA585CB53EC65 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Read[i];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___Read_4;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_0, L_1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Dialogue::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dialogue_Name_mFF3A8860F4DB3E9D5648D54803F43D205B8B26F3 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return nameCharacter;
		String_t* L_0 = __this->___nameCharacter_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Dialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue__ctor_m0FCF351AA72166AF74CE3A4F57EBD8287702FAC7 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<string> Read = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___Read_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Read_4), (void*)L_0);
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
// System.Void DownloadCount::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadCount__ctor_mB1B0E2FD8C01849112475740AFEE8DC9BF36C3DE (DownloadCount_tF5635E1E9AE29FF2E50F6DF935A0E3E0A480D967* __this, const RuntimeMethod* method) 
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
// System.Void go_stolovaya::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_stolovaya_Load_m079BDC359CD5F7E9AABB44A9AC790B34B8223187 (go_stolovaya_t6E4B8A33C8FC2DF55730E337C0274D66E042F640* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(5);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(5, NULL);
		// }
		return;
	}
}
// System.Void go_stolovaya::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void go_stolovaya__ctor_m3804F80FEF3B8CBC09E5A1650AB3206530F716EA (go_stolovaya_t6E4B8A33C8FC2DF55730E337C0274D66E042F640* __this, const RuntimeMethod* method) 
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
// System.Void trigger_stolovaya::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_stolovaya_OnTriggerExit2D_mBC3186FA6F23DE1A0E0D1260E192D6CE312668A9 (trigger_stolovaya_tEA2EE0C8A69A591BF39B61381A71B8CA4D0AB427* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startAnim.SetBool("isOpen", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___startAnim_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void trigger_stolovaya::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_stolovaya_OnTriggerEnter2D_mD53E932187D86CD92138EA810723763EE6E73516 (trigger_stolovaya_tEA2EE0C8A69A591BF39B61381A71B8CA4D0AB427* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CD5C3403DEA8A36E0009C0B5C4C11A02385F5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text.text == "???????, ? ???? ????? ???? ???.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral8CD5C3403DEA8A36E0009C0B5C4C11A02385F5C1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// startAnim.SetBool("isOpen", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___startAnim_4;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralAACE4943E442BDF1FB5DE004C127DD4FE0F7AB2C, (bool)1, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void trigger_stolovaya::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_stolovaya__ctor_m448D079DDEE7A5449FFA5065E18CEDB4D3EC6726 (trigger_stolovaya_tEA2EE0C8A69A591BF39B61381A71B8CA4D0AB427* __this, const RuntimeMethod* method) 
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
// System.Void AA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AA__ctor_m9902E24EAC1AC51F7D9CE3E9589BE4C95A2E83BA (AA_t840936959FBBBE3B4BD9DEFA5164B75559DF2FF7* __this, const RuntimeMethod* method) 
{
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
// System.Void menustart::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menustart_Play_m095ADDC4E24245DFE4A1B201AEF0A82162F252E7 (menustart_tFD51D687776FF29E403225F1741D5CF6F9D0870B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9A169E0BE4442E883D5D8A6A050A8BEF499E51A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (PlayerPrefs.GetInt("levelScene") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralD9A169E0BE4442E883D5D8A6A050A8BEF499E51A, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		goto IL_003b;
	}

IL_002b:
	{
		// SceneManager.LoadScene(PlayerPrefs.GetInt("levelScene"));
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralD9A169E0BE4442E883D5D8A6A050A8BEF499E51A, NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_4, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void menustart::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menustart_Exit_m8696D0DAAB90B4A3853DD59C032E6DC94D2BD804 (menustart_tFD51D687776FF29E403225F1741D5CF6F9D0870B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22FFFB964897545843A75ACB2C250C3F534D71C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("???? ?????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral22FFFB964897545843A75ACB2C250C3F534D71C6, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void menustart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menustart__ctor_m0A3EEF3A2FEBC3F8925AB3D99B56A98CC30D16B5 (menustart_tFD51D687776FF29E403225F1741D5CF6F9D0870B* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// moveInput = joystick.Horizontal;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0 = __this->___joystick_7;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_0, NULL);
		__this->___moveInput_5 = L_1;
		// if (moveInput < 0 && FacingRight)
		float L_2 = __this->___moveInput_5;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = __this->___FacingRight_9;
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Flip();
		PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E(__this, NULL);
		goto IL_005d;
	}

IL_0037:
	{
		// else if (moveInput > 0 && !FacingRight)
		float L_5 = __this->___moveInput_5;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		bool L_6 = __this->___FacingRight_9;
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B8_0 = 0;
	}

IL_0050:
	{
		V_1 = (bool)G_B8_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// Flip();
		PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E(__this, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3FE64651D88FF774EA13E37B9E156E441B9ACEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveInput = joystick.Horizontal;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0 = __this->___joystick_7;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_0, NULL);
		__this->___moveInput_5 = L_1;
		// animator.SetFloat("HorizontalMove", Mathf.Abs(moveInput));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_6;
		float L_3 = __this->___moveInput_5;
		float L_4;
		L_4 = fabsf(L_3);
		NullCheck(L_2);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_2, _stringLiteralA3FE64651D88FF774EA13E37B9E156E441B9ACEB, L_4, NULL);
		// rb.velocity = new Vector2(moveInput * speed, rb.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rb_8;
		float L_6 = __this->___moveInput_5;
		float L_7 = __this->___speed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = __this->___rb_8;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_8, NULL);
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(L_6, L_7)), L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_5, L_11, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// FacingRight = !FacingRight;
		bool L_0 = __this->___FacingRight_9;
		__this->___FacingRight_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// Vector3 theScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		V_0 = L_2;
		// theScale.x *= -1;
		float* L_3 = (&(&V_0)->___x_2);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply(L_5, (-1.0f)));
		// transform.localScale = theScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// private bool FacingRight = true;
		__this->___FacingRight_9 = (bool)1;
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
// System.Void rect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rect_Start_mF395B8F0DAF2CE1E3699A9F9115E7ECC17AEDCF3 (rect_t87132ADB36A371C14FD6B2FB8BB05AFF72AB1295* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void rect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rect_Update_m460A4F3EAF2E529B4293789A14F0D7DF0648EA6F (rect_t87132ADB36A371C14FD6B2FB8BB05AFF72AB1295* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void rect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rect__ctor_m45685E6477B66C7E2C80658C3CE9B47143C1AC7B (rect_t87132ADB36A371C14FD6B2FB8BB05AFF72AB1295* __this, const RuntimeMethod* method) 
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
// System.Void SavedAchievment::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedAchievment_Update_mD3F68C3DB64647BFA06A8BA301C92ADB8A56EE15 (SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// i = GUIHandler.i;
		int32_t L_0 = ((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___i_29;
		((SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_StaticFields*)il2cpp_codegen_static_fields_for(SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var))->___i_4 = L_0;
		// teacher = GUIHandler.j;
		int32_t L_1 = ((GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_StaticFields*)il2cpp_codegen_static_fields_for(GUIHandler_t487D824DD857DEA562ED3A7BDB493A91E7C24970_il2cpp_TypeInfo_var))->___j_30;
		((SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_StaticFields*)il2cpp_codegen_static_fields_for(SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var))->___teacher_5 = L_1;
		// }
		return;
	}
}
// System.Int32 SavedAchievment::get_PLAYER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SavedAchievment_get_PLAYER_m2AF0FDAD5E3964A12CF0E4EF2B180F3AA2D9126D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return i; }
		int32_t L_0 = ((SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_StaticFields*)il2cpp_codegen_static_fields_for(SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var))->___i_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// return i; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 SavedAchievment::get_TEACHER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SavedAchievment_get_TEACHER_m5AE472B403247BC99B629F26851765B3442E11FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return teacher; }
		int32_t L_0 = ((SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_StaticFields*)il2cpp_codegen_static_fields_for(SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9_il2cpp_TypeInfo_var))->___teacher_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return teacher; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SavedAchievment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedAchievment__ctor_mFEFDA131086B18F941F3B6FFDB82662FC8BACDAA (SavedAchievment_t6A71C7EAED3C919DBB251209D47265028C2B2DD9* __this, const RuntimeMethod* method) 
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
// System.Void ScoreController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_Start_m1D6585F7BBBC730961CFB8BACC546A124F0D9646 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_Update_m174CEFD460EEF67207D0964905974F9468CD08A2 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB991014BC317EE99A5E92777236547ECC494D73);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// timeLeft -= Time.deltaTime;
		float L_0 = __this->___timeLeft_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeLeft_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// scoreText.text = "????: " + score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___scoreText_4;
		int32_t* L_3 = (&__this->___score_6);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDB991014BC317EE99A5E92777236547ECC494D73, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// time.text = timeLeft.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___time_5;
		float* L_7 = (&__this->___timeLeft_7);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// if (timeLeft <= 0)
		float L_9 = __this->___timeLeft_7;
		V_0 = (bool)((((int32_t)((!(((float)L_9) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		// SceneManager.LoadScene(7);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(7, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void ScoreController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_OnTriggerEnter2D_mE4BD1A7BC9CB1E85F17DFBD1AB96ECAD487DE218 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8224EB348914F18B459158B0498D27694A7CD12);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (target.tag == "bomb")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___target0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralD8224EB348914F18B459158B0498D27694A7CD12, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_5, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void ScoreController::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_OnTriggerExit2D_mEEC2CE676FD42D78B5236A007C7E8FD48D13F548 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7199DC4D518631B6B363364577E0CD199012D943);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (target.tag == "food")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___target0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral7199DC4D518631B6B363364577E0CD199012D943, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Destroy(target.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___target0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// score++;
		int32_t L_6 = __this->___score_6;
		__this->___score_6 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void ScoreController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController__ctor_m161DBF9A2ED8098CD117A438518B3C716F0BC5F7 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	{
		// private float timeLeft = 60;
		__this->___timeLeft_7 = (60.0f);
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
// SoundManager SoundManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SoundManager::set_instance(SoundManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ___value0;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D_inline(__this, NULL);
		// source = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___source_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound0, const RuntimeMethod* method) 
{
	{
		// source.PlayOneShot(sound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___source_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___sound0;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
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
// System.Void Spawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Start_m8BB68F2141CF386C08091E93308438F56B08EE73 (Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(SpawnRandomGameObject());
		RuntimeObject* L_0;
		L_0 = Spawner_SpawnRandomGameObject_m4F5CA0FD228C0AAAB00741C8BFA821511F4C01D9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Spawner::SpawnRandomGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawner_SpawnRandomGameObject_m4F5CA0FD228C0AAAB00741C8BFA821511F4C01D9 (Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* L_0 = (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2*)il2cpp_codegen_object_new(U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnRandomGameObjectU3Ed__5__ctor_mE43791233DC34CDD9C27BF5E7FCE28C03729AC00(L_0, 0, NULL);
		U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_mBF592E8E9B5682687D8C28E73A64BF29B6BF2088 (Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* __this, const RuntimeMethod* method) 
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
// System.Void Spawner/<SpawnRandomGameObject>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomGameObjectU3Ed__5__ctor_mE43791233DC34CDD9C27BF5E7FCE28C03729AC00 (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spawner/<SpawnRandomGameObject>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomGameObjectU3Ed__5_System_IDisposable_Dispose_mA64040DBF2CC770602616DFDE8CBD98BA83A7E1B (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spawner/<SpawnRandomGameObject>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnRandomGameObjectU3Ed__5_MoveNext_m70B5BFEEDB4A63C95CA26722019C8EA4AC36E4A0 (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(Random.Range(2, 4));
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(2, 4, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, ((float)L_3), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int randomFood = Random.Range(0, foods.Length);
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = L_5->___foods_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		__this->___U3CrandomFoodU3E5__1_3 = L_7;
		// if (Random.value <= .6f)
		float L_8;
		L_8 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		V_1 = (bool)((((int32_t)((!(((float)L_8) <= ((float)(0.600000024f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00c1;
		}
	}
	{
		// Instantiate(foods[randomFood],
		//     new Vector2(Random.Range(-xBounds, xBounds), yBounds), Quaternion.identity);
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = L_10->___foods_4;
		int32_t L_12 = __this->___U3CrandomFoodU3E5__1_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		float L_16 = L_15->___xBounds_6;
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		float L_18 = L_17->___xBounds_6;
		float L_19;
		L_19 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_16)), L_18, NULL);
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		float L_21 = L_20->___yBounds_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), L_19, L_21, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_23, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		goto IL_010a;
	}

IL_00c1:
	{
		// Instantiate(bomb,
		//     new Vector2(Random.Range(-xBounds, xBounds), yBounds), Quaternion.identity);
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___bomb_5;
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_28 = __this->___U3CU3E4__this_2;
		NullCheck(L_28);
		float L_29 = L_28->___xBounds_6;
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_30 = __this->___U3CU3E4__this_2;
		NullCheck(L_30);
		float L_31 = L_30->___xBounds_6;
		float L_32;
		L_32 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_29)), L_31, NULL);
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_33 = __this->___U3CU3E4__this_2;
		NullCheck(L_33);
		float L_34 = L_33->___yBounds_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), L_32, L_34, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_27, L_36, L_37, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_010a:
	{
		// StartCoroutine(SpawnRandomGameObject());
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_39 = __this->___U3CU3E4__this_2;
		Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* L_40 = __this->___U3CU3E4__this_2;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = Spawner_SpawnRandomGameObject_m4F5CA0FD228C0AAAB00741C8BFA821511F4C01D9(L_40, NULL);
		NullCheck(L_39);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_42;
		L_42 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_39, L_41, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Spawner/<SpawnRandomGameObject>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnRandomGameObjectU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC613F46B6CD1CFC9805CAEA28EF1B26B3C8851BB (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spawner/<SpawnRandomGameObject>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomGameObjectU3Ed__5_System_Collections_IEnumerator_Reset_m7460CBEC8CB440583F6FA18F405E6620ADAA5551 (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnRandomGameObjectU3Ed__5_System_Collections_IEnumerator_Reset_m7460CBEC8CB440583F6FA18F405E6620ADAA5551_RuntimeMethod_var)));
	}
}
// System.Object Spawner/<SpawnRandomGameObject>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnRandomGameObjectU3Ed__5_System_Collections_IEnumerator_get_Current_mD0D8EDA5DBFC28B6AA8B577AB7096E12BCA13B58 (U3CSpawnRandomGameObjectU3Ed__5_t8858442568D2D25D8CFE772FB17ED56DC3715CE2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void trigger_food_empty::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_food_empty_Update_m26235DA4CEFD197C6BBFE693D5F91E39A75C731B (trigger_food_empty_t2528BE39F13183B584DF4DE562CFF02F34699BE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (time.text == "0")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___time_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SceneManager.LoadScene(7);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(7, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void trigger_food_empty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_food_empty__ctor_m6A266C7390D19EA374B12670B28984E335C28E11 (trigger_food_empty_t2528BE39F13183B584DF4DE562CFF02F34699BE2* __this, const RuntimeMethod* method) 
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
// System.Void dialAnimator::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialAnimator_OnTriggerExit2D_mEFFC1D4E7FF0C147567329C41DB0D097C2F438C6 (dialAnimator_t60790F18D2A12C7FF7968187CE5B892B3CF142D1* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startAnim.SetBool("openStart", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___startAnim_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880, (bool)0, NULL);
		// dm.EndDialog();
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_1 = __this->___dm_5;
		NullCheck(L_1);
		dialogManager_EndDialog_m5E80430993260D9F1A46BBF6E958102431E94A33(L_1, NULL);
		// }
		return;
	}
}
// System.Void dialAnimator::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialAnimator_OnTriggerEnter2D_mF4506C7888F376D3888A65A94ED83B3DA15B58DA (dialAnimator_t60790F18D2A12C7FF7968187CE5B892B3CF142D1* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startAnim.SetBool("openStart", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___startAnim_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void dialAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialAnimator__ctor_m66588D9C107F43A8FA15D0CDD9E187C4878C8CFB (dialAnimator_t60790F18D2A12C7FF7968187CE5B892B3CF142D1* __this, const RuntimeMethod* method) 
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
// System.Collections.IEnumerator dialogManager::WaitSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dialogManager_WaitSeconds_m11780570D236D25B5870E2ADD24218D200CB4E29 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* L_0 = (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5*)il2cpp_codegen_object_new(U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitSecondsU3Ed__12__ctor_mFCFB44968BFA9E40D3643A4545B08594A8368235(L_0, 0, NULL);
		U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* L_2 = L_1;
		float L_3 = ___x0;
		NullCheck(L_2);
		L_2->___x_2 = L_3;
		return L_2;
	}
}
// System.Void dialogManager::StartDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_StartDialogue_m56FB9CDBED4A905A49F09BA7FA5A20802573928F (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13B9B474A20652C610BFE6465CB5F1CB1A89DC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxAnim.SetBool("boxOpen", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___boxAnim_13;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralE13B9B474A20652C610BFE6465CB5F1CB1A89DC4, (bool)1, NULL);
		// startAnim.SetBool("openStart", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___startAnim_14;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void dialogManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_Start_mE64136E2A435B453D5CF0C1597715C4747051973 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) 
{
	{
		// WriteDialogue();
		dialogManager_WriteDialogue_m4BBBD169E738787EC46BE3890AE1770C90FFDB15(__this, NULL);
		// IndexCharacter++;
		int32_t L_0 = __this->___IndexCharacter_10;
		__this->___IndexCharacter_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void dialogManager::WriteDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_WriteDialogue_m4BBBD169E738787EC46BE3890AE1770C90FFDB15 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCD7D8E98229C1B56E0515344B40709B99E1FAE0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// if (Character.Count > IndexCharacter)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___Character_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_2 = __this->___IndexCharacter_10;
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00c3;
		}
	}
	{
		// if (Character[IndexCharacter].GetComponent<Dialogue>() != null)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___Character_4;
		int32_t L_5 = __this->___IndexCharacter_10;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_7;
		L_7 = GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C(L_6, GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00c0;
		}
	}
	{
		// dialogueCharacter = Character[IndexCharacter].GetComponent<Dialogue>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___Character_4;
		int32_t L_11 = __this->___IndexCharacter_10;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_13;
		L_13 = GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C(L_12, GameObject_GetComponent_TisDialogue_tD1682404890757CDB2A7139EA303E9C424D2B455_mEE17D8DD225415A6382FF9C0DB09976266D39B0C_RuntimeMethod_var);
		__this->___dialogueCharacter_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dialogueCharacter_12), (void*)L_13);
		// if (IndexText >= dialogueCharacter.GetReadCount())
		int32_t L_14 = __this->___IndexText_11;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_15 = __this->___dialogueCharacter_12;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Dialogue_GetReadCount_mD9BFA27783675F4811CFBF13A621D25D18DD2192(L_15, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		// System.Console.WriteLine("end dialogue");
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteralFCD7D8E98229C1B56E0515344B40709B99E1FAE0, NULL);
		goto IL_00bf;
	}

IL_0085:
	{
		// string name = dialogueCharacter.Name();
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_18 = __this->___dialogueCharacter_12;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Dialogue_Name_mFF3A8860F4DB3E9D5648D54803F43D205B8B26F3(L_18, NULL);
		V_3 = L_19;
		// Sprite image = dialogueCharacter.image_C;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_20 = __this->___dialogueCharacter_12;
		NullCheck(L_20);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = L_20->___image_C_6;
		V_4 = L_21;
		// string text = dialogueCharacter.GetReadStringIndex(IndexText);
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_22 = __this->___dialogueCharacter_12;
		int32_t L_23 = __this->___IndexText_11;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = Dialogue_GetReadStringIndex_m060C1492C241F723404CF60FB89CA585CB53EC65(L_22, L_23, NULL);
		V_5 = L_24;
		// TextDialog(text, name, image);
		String_t* L_25 = V_5;
		String_t* L_26 = V_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27 = V_4;
		dialogManager_TextDialog_m584E5846C44006FC4A7F327BFB69C8059CFEDB93(__this, L_25, L_26, L_27, NULL);
	}

IL_00bf:
	{
	}

IL_00c0:
	{
		goto IL_00ce;
	}

IL_00c3:
	{
		// Debug.Log("end dialogue");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFCD7D8E98229C1B56E0515344B40709B99E1FAE0, NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void dialogManager::TextDialog(System.String,System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_TextDialog_m584E5846C44006FC4A7F327BFB69C8059CFEDB93 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, String_t* ___text0, String_t* ___name1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image2, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(TypeSentence(text, TextOut, sound));
		String_t* L_0 = ___text0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___TextOut_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___sound_15;
		RuntimeObject* L_3;
		L_3 = dialogManager_TypeSentence_m3762017B713E2FF45763E66FFEABC3F53C9A0089(__this, L_0, L_1, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// nameText.text = name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___nameText_6;
		String_t* L_6 = ___name1;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// imageCharacter.sprite = image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___imageCharacter_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = ___image2;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator dialogManager::TypeSentence(System.String,UnityEngine.UI.Text,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dialogManager_TypeSentence_m3762017B713E2FF45763E66FFEABC3F53C9A0089 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, String_t* ___sentence0, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textBox1, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* L_0 = (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56*)il2cpp_codegen_object_new(U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTypeSentenceU3Ed__17__ctor_m3626BBBDBA24B6AA63237773D6DAB25A22DD55B2(L_0, 0, NULL);
		U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* L_2 = L_1;
		String_t* L_3 = ___sentence0;
		NullCheck(L_2);
		L_2->___sentence_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sentence_2), (void*)L_3);
		U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* L_4 = L_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = ___textBox1;
		NullCheck(L_4);
		L_4->___textBox_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___textBox_3), (void*)L_5);
		U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* L_6 = L_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = ___sound2;
		NullCheck(L_6);
		L_6->___sound_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___sound_4), (void*)L_7);
		return L_6;
	}
}
// System.Void dialogManager::NextIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_NextIndex_m4F9388DA8DCFC08FAF9E67CEB4120A740F8103CF (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AF924A0B3A74B67768C9567B6CFBA2FA83EBE6D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = IndexCharacter; i < Character.Count; i++)
		int32_t L_0 = __this->___IndexCharacter_10;
		V_0 = L_0;
		goto IL_0014;
	}

IL_000a:
	{
		// WriteDialogue();
		dialogManager_WriteDialogue_m4BBBD169E738787EC46BE3890AE1770C90FFDB15(__this, NULL);
		// return;
		goto IL_0080;
	}

IL_0014:
	{
		// for (int i = IndexCharacter; i < Character.Count; i++)
		int32_t L_1 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___Character_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_000a;
		}
	}
	{
		// if (IndexCharacter >= Character.Count)
		int32_t L_5 = __this->___IndexCharacter_10;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___Character_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// IndexCharacter = 0;
		__this->___IndexCharacter_10 = 0;
		// IndexText++;
		int32_t L_9 = __this->___IndexText_11;
		__this->___IndexText_11 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// WriteDialogue();
		dialogManager_WriteDialogue_m4BBBD169E738787EC46BE3890AE1770C90FFDB15(__this, NULL);
	}

IL_005e:
	{
		// if (TextOut.text == "????, ??? ??????? ???????, ?? ?????. ???????? ? ????????.")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___TextOut_5;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral4AF924A0B3A74B67768C9567B6CFBA2FA83EBE6D, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// EndDialog();
		dialogManager_EndDialog_m5E80430993260D9F1A46BBF6E958102431E94A33(__this, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void dialogManager::EndDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_EndDialog_m5E80430993260D9F1A46BBF6E958102431E94A33 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13B9B474A20652C610BFE6465CB5F1CB1A89DC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxAnim.SetBool("boxOpen", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___boxAnim_13;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralE13B9B474A20652C610BFE6465CB5F1CB1A89DC4, (bool)0, NULL);
		// startAnim.SetBool("openStart", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___startAnim_14;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral3A428C3D8EAE604AFCE67F11C17021B10224B880, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void dialogManager::NextDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager_NextDialog_m9C4DCBB4868400F6569B6C0F0651306CEFF88B77 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) 
{
	{
		// NextIndex();
		dialogManager_NextIndex_m4F9388DA8DCFC08FAF9E67CEB4120A740F8103CF(__this, NULL);
		// IndexCharacter++;
		int32_t L_0 = __this->___IndexCharacter_10;
		__this->___IndexCharacter_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void dialogManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dialogManager__ctor_mC406DF7187E7DD2616A4B721E813DCA91B1C2CF9 (dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> Character = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___Character_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Character_4), (void*)L_0);
		// private bool _IsStart = true;
		__this->____IsStart_9 = (bool)1;
		// int IndexCharacter = 0;
		__this->___IndexCharacter_10 = 0;
		// int IndexText = 0;
		__this->___IndexText_11 = 0;
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
// System.Void dialogManager/<WaitSeconds>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__12__ctor_mFCFB44968BFA9E40D3643A4545B08594A8368235 (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void dialogManager/<WaitSeconds>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__12_System_IDisposable_Dispose_m438AD0AB8C390A7A50A63CCE82FE4B412495BED1 (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean dialogManager/<WaitSeconds>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitSecondsU3Ed__12_MoveNext_m1A45A71D947BC70EEF069ADBCD1DC150E3DA4DC7 (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(x);
		float L_3 = __this->___x_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object dialogManager/<WaitSeconds>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSecondsU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC8F0D1E87706FB18778502FEDB7B2D8A412A893F (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void dialogManager/<WaitSeconds>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSecondsU3Ed__12_System_Collections_IEnumerator_Reset_m69925BF9725359A877FE133FE7810553F9FC4392 (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitSecondsU3Ed__12_System_Collections_IEnumerator_Reset_m69925BF9725359A877FE133FE7810553F9FC4392_RuntimeMethod_var)));
	}
}
// System.Object dialogManager/<WaitSeconds>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSecondsU3Ed__12_System_Collections_IEnumerator_get_Current_mDB8A00AF575CD76CBB2717E724F15B00DD74CD10 (U3CWaitSecondsU3Ed__12_tDD160689E45AEC018A46D92E0D2BD71BDD38F7C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void dialogManager/<TypeSentence>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__17__ctor_m3626BBBDBA24B6AA63237773D6DAB25A22DD55B2 (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void dialogManager/<TypeSentence>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__17_System_IDisposable_Dispose_mD0BD451B0E8D04DA17E4F4315E5F6B363C6348E4 (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean dialogManager/<TypeSentence>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTypeSentenceU3Ed__17_MoveNext_mBF5BFE98D86AECF4A6766140BF52788834A733A1 (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B15_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0035;
			}
			case 5:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0027:
	{
		goto IL_0041;
	}

IL_0029:
	{
		goto IL_009a;
	}

IL_002b:
	{
		goto IL_0197;
	}

IL_0030:
	{
		goto IL_0291;
	}

IL_0035:
	{
		goto IL_02fd;
	}

IL_003a:
	{
		goto IL_0355;
	}

IL_003f:
	{
		return (bool)0;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// TextOut.text = "";
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_2 = __this->___U3CU3E4__this_5;
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = L_2->___TextOut_5;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// buttonDialogSkip.enabled = false;
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_4 = __this->___U3CU3E4__this_5;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->___buttonDialogSkip_8;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// if (_IsStart)
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_6 = __this->___U3CU3E4__this_5;
		NullCheck(L_6);
		bool L_7 = L_6->____IsStart_9;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00ae;
		}
	}
	{
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _IsStart = false;
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_10 = __this->___U3CU3E4__this_5;
		NullCheck(L_10);
		L_10->____IsStart_9 = (bool)0;
	}

IL_00ae:
	{
		// if (sentence.Split(" ").Length < 4 && sentence.Split(" ").Length > 0)
		String_t* L_11 = __this->___sentence_2;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_11, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) >= ((int32_t)4)))
		{
			goto IL_00db;
		}
	}
	{
		String_t* L_13 = __this->___sentence_2;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14;
		L_14 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_13, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
		NullCheck(L_14);
		G_B15_0 = ((!(((uint32_t)(((RuntimeArray*)L_14)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00dc;
	}

IL_00db:
	{
		G_B15_0 = 0;
	}

IL_00dc:
	{
		V_2 = (bool)G_B15_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_01cd;
		}
	}
	{
		// foreach (char letter in sentence.ToCharArray())
		String_t* L_16 = __this->___sentence_2;
		NullCheck(L_16);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17;
		L_17 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_16, NULL);
		__this->___U3CU3Es__1_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_6), (void*)L_17);
		__this->___U3CU3Es__2_7 = 0;
		goto IL_01ad;
	}

IL_0102:
	{
		// foreach (char letter in sentence.ToCharArray())
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = __this->___U3CU3Es__1_6;
		int32_t L_19 = __this->___U3CU3Es__2_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint16_t L_21 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->___U3CletterU3E5__3_8 = L_21;
		// textBox.text += letter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___textBox_3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = L_22;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_23);
		Il2CppChar* L_25 = (&__this->___U3CletterU3E5__3_8);
		String_t* L_26;
		L_26 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, L_26, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_27);
		// SoundManager.instance.PlaySound(sound);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_28;
		L_28 = SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_29 = __this->___sound_4;
		NullCheck(L_28);
		SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400(L_28, L_29, NULL);
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___textBox_3;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_30);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		String_t* L_33 = __this->___sentence_2;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		V_3 = (bool)((((int32_t)L_32) == ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_017e;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_36 = __this->___U3CU3E4__this_5;
		NullCheck(L_36);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = L_36->___buttonDialogSkip_8;
		NullCheck(L_37);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_37, (bool)1, NULL);
	}

IL_017e:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_38 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_38, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0197:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_39 = __this->___U3CU3Es__2_7;
		__this->___U3CU3Es__2_7 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_01ad:
	{
		// foreach (char letter in sentence.ToCharArray())
		int32_t L_40 = __this->___U3CU3Es__2_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = __this->___U3CU3Es__1_6;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0102;
		}
	}
	{
		__this->___U3CU3Es__1_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_6), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		goto IL_0385;
	}

IL_01cd:
	{
		// foreach (char letter in sentence.ToCharArray())
		String_t* L_42 = __this->___sentence_2;
		NullCheck(L_42);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43;
		L_43 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_42, NULL);
		__this->___U3CU3Es__4_9 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_9), (void*)L_43);
		__this->___U3CU3Es__5_10 = 0;
		goto IL_036b;
	}

IL_01eb:
	{
		// foreach (char letter in sentence.ToCharArray())
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = __this->___U3CU3Es__4_9;
		int32_t L_45 = __this->___U3CU3Es__5_10;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint16_t L_47 = (uint16_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		__this->___U3CletterU3E5__6_11 = L_47;
		// textBox.text += letter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_48 = __this->___textBox_3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = L_48;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_49);
		Il2CppChar* L_51 = (&__this->___U3CletterU3E5__6_11);
		String_t* L_52;
		L_52 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_51, NULL);
		String_t* L_53;
		L_53 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_50, L_52, NULL);
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_53);
		// SoundManager.instance.PlaySound(sound);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_54;
		L_54 = SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_55 = __this->___sound_4;
		NullCheck(L_54);
		SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400(L_54, L_55, NULL);
		// if (letter == '.')
		Il2CppChar L_56 = __this->___U3CletterU3E5__6_11;
		V_4 = (bool)((((int32_t)L_56) == ((int32_t)((int32_t)46)))? 1 : 0);
		bool L_57 = V_4;
		if (!L_57)
		{
			goto IL_029e;
		}
	}
	{
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_58 = __this->___textBox_3;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_58);
		NullCheck(L_59);
		int32_t L_60;
		L_60 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_59, NULL);
		String_t* L_61 = __this->___sentence_2;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_61, NULL);
		V_5 = (bool)((((int32_t)L_60) == ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_5;
		if (!L_63)
		{
			goto IL_0278;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_64 = __this->___U3CU3E4__this_5;
		NullCheck(L_64);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_65 = L_64->___buttonDialogSkip_8;
		NullCheck(L_65);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_65, (bool)1, NULL);
	}

IL_0278:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_66 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_66, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_66);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0291:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_033c;
	}

IL_029e:
	{
		// else if (letter == ',')
		Il2CppChar L_67 = __this->___U3CletterU3E5__6_11;
		V_6 = (bool)((((int32_t)L_67) == ((int32_t)((int32_t)44)))? 1 : 0);
		bool L_68 = V_6;
		if (!L_68)
		{
			goto IL_0307;
		}
	}
	{
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_69 = __this->___textBox_3;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_69);
		NullCheck(L_70);
		int32_t L_71;
		L_71 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_70, NULL);
		String_t* L_72 = __this->___sentence_2;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_72, NULL);
		V_7 = (bool)((((int32_t)L_71) == ((int32_t)L_73))? 1 : 0);
		bool L_74 = V_7;
		if (!L_74)
		{
			goto IL_02e4;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_75 = __this->___U3CU3E4__this_5;
		NullCheck(L_75);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_76 = L_75->___buttonDialogSkip_8;
		NullCheck(L_76);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_76, (bool)1, NULL);
	}

IL_02e4:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_77 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_77, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_77);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_02fd:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_033c;
	}

IL_0307:
	{
		// if (textBox.text.Length == sentence.Length)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78 = __this->___textBox_3;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_78);
		NullCheck(L_79);
		int32_t L_80;
		L_80 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_79, NULL);
		String_t* L_81 = __this->___sentence_2;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_81, NULL);
		V_8 = (bool)((((int32_t)L_80) == ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_8;
		if (!L_83)
		{
			goto IL_033c;
		}
	}
	{
		// buttonDialogSkip.enabled = true;
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_84 = __this->___U3CU3E4__this_5;
		NullCheck(L_84);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_85 = L_84->___buttonDialogSkip_8;
		NullCheck(L_85);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_85, (bool)1, NULL);
	}

IL_033c:
	{
		// yield return new WaitForSeconds(0.03f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_86 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_86, (0.0299999993f), NULL);
		__this->___U3CU3E2__current_1 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_86);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_0355:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_87 = __this->___U3CU3Es__5_10;
		__this->___U3CU3Es__5_10 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_036b:
	{
		// foreach (char letter in sentence.ToCharArray())
		int32_t L_88 = __this->___U3CU3Es__5_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_89 = __this->___U3CU3Es__4_9;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CU3Es__4_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_9), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
	}

IL_0385:
	{
		// }
		return (bool)0;
	}
}
// System.Object dialogManager/<TypeSentence>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeSentenceU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0A03C5F564F5685B1C51FA00C137EB3E38AB1CB8 (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void dialogManager/<TypeSentence>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__17_System_Collections_IEnumerator_Reset_mEFA6332776D5464818E45C23D346110EACFF82C9 (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTypeSentenceU3Ed__17_System_Collections_IEnumerator_Reset_mEFA6332776D5464818E45C23D346110EACFF82C9_RuntimeMethod_var)));
	}
}
// System.Object dialogManager/<TypeSentence>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeSentenceU3Ed__17_System_Collections_IEnumerator_get_Current_mA668BB57208BDA43B4B2BEA15C6B79B6F99EE922 (U3CTypeSentenceU3Ed__17_t599DDB50A0E547ADB71AE929CC5A837C3DCA7A56* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void trigger_glass::Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_glass_Trigger_m3EB9663A7EF244BE4F3DC0ACA36F538D47A20725 (trigger_glass_t00E115D96A800FF2028788ECFB27EA85D87F9EC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<dialogManager>().StartDialogue();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_0;
		L_0 = Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29(Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29_RuntimeMethod_var);
		NullCheck(L_0);
		dialogManager_StartDialogue_m56FB9CDBED4A905A49F09BA7FA5A20802573928F(L_0, NULL);
		// }
		return;
	}
}
// System.Void trigger_glass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_glass__ctor_m9067E346ED4BF9F1209DD60724605680036BC4F0 (trigger_glass_t00E115D96A800FF2028788ECFB27EA85D87F9EC3* __this, const RuntimeMethod* method) 
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
// System.Void trigger_room::Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_room_Trigger_m6564FC709954EA6AB8B765FA64ACA88B4385ABA4 (trigger_room_t7B472F3CD0C41D76E2CAD8040818D36899634873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<dialogManager>().StartDialogue();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		dialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F* L_0;
		L_0 = Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29(Object_FindObjectOfType_TisdialogManager_t12A2CFD88B37F5DDF7E5B8D69F5C84A55CB3EE0F_m0D6FBF6BF2767C80FAB88AAD4226B4849E382E29_RuntimeMethod_var);
		NullCheck(L_0);
		dialogManager_StartDialogue_m56FB9CDBED4A905A49F09BA7FA5A20802573928F(L_0, NULL);
		// }
		return;
	}
}
// System.Void trigger_room::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigger_room__ctor_mB582045C0607FD6A3242B728D540771C4AF7F916 (trigger_room_t7B472F3CD0C41D76E2CAD8040818D36899634873* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D_inline (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ___value0;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
