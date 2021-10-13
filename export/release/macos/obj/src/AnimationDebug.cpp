#include <hxcpp.h>

#ifndef INCLUDED_AnimationDebug
#include <AnimationDebug.h>
#endif
#ifndef INCLUDED_Boyfriend
#include <Boyfriend.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxGridOverlay
#include <flixel/addons/display/FlxGridOverlay.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5489bc77b33b3e4d_15_new,"AnimationDebug","new",0xa1e22d41,"AnimationDebug.new","AnimationDebug.hx",15,0x57f8f54f)
HX_LOCAL_STACK_FRAME(_hx_pos_5489bc77b33b3e4d_35_create,"AnimationDebug","create",0x2b9b8cbb,"AnimationDebug.create","AnimationDebug.hx",35,0x57f8f54f)
HX_LOCAL_STACK_FRAME(_hx_pos_5489bc77b33b3e4d_86_genBoyOffsets,"AnimationDebug","genBoyOffsets",0xa90e05a5,"AnimationDebug.genBoyOffsets","AnimationDebug.hx",86,0x57f8f54f)
HX_LOCAL_STACK_FRAME(_hx_pos_5489bc77b33b3e4d_106_updateTexts,"AnimationDebug","updateTexts",0xfaa95a3e,"AnimationDebug.updateTexts","AnimationDebug.hx",106,0x57f8f54f)
HX_LOCAL_STACK_FRAME(_hx_pos_5489bc77b33b3e4d_104_updateTexts,"AnimationDebug","updateTexts",0xfaa95a3e,"AnimationDebug.updateTexts","AnimationDebug.hx",104,0x57f8f54f)
HX_LOCAL_STACK_FRAME(_hx_pos_5489bc77b33b3e4d_113_update,"AnimationDebug","update",0x3691abc8,"AnimationDebug.update","AnimationDebug.hx",113,0x57f8f54f)
static const int _hx_array_data_919878cf_7[] = {
	(int)38,
};
static const int _hx_array_data_919878cf_8[] = {
	(int)39,
};
static const int _hx_array_data_919878cf_9[] = {
	(int)40,
};
static const int _hx_array_data_919878cf_10[] = {
	(int)37,
};

void AnimationDebug_obj::__construct(::String __o_daAnim){
            		::String daAnim = __o_daAnim;
            		if (::hx::IsNull(__o_daAnim)) daAnim = HX_("spooky",eb,bd,9e,c1);
            	HX_STACKFRAME(&_hx_pos_5489bc77b33b3e4d_15_new)
HXLINE(  25)		this->daAnim = HX_("spooky",eb,bd,9e,c1);
HXLINE(  24)		this->isDad = true;
HXLINE(  23)		this->curAnim = 0;
HXLINE(  22)		this->animList = ::Array_obj< ::String >::__new(0);
HXLINE(  30)		super::__construct(null());
HXLINE(  31)		this->daAnim = daAnim;
            	}

Dynamic AnimationDebug_obj::__CreateEmpty() { return new AnimationDebug_obj; }

void *AnimationDebug_obj::_hx_vtable = 0;

Dynamic AnimationDebug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationDebug_obj > _hx_result = new AnimationDebug_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnimationDebug_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7383fb8f) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7383fb8f;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void AnimationDebug_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_5489bc77b33b3e4d_35_create)
HXLINE(  36)		{
HXLINE(  36)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  36)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE(  38)		 ::flixel::FlxSprite gridBG = ::flixel::addons::display::FlxGridOverlay_obj::create(10,10,null(),null(),null(),null(),null());
HXLINE(  39)		gridBG->scrollFactor->set(((Float)0.5),((Float)0.5));
HXLINE(  40)		this->add(gridBG);
HXLINE(  42)		if ((this->daAnim == HX_("bf",c4,55,00,00))) {
HXLINE(  43)			this->isDad = false;
            		}
HXLINE(  45)		if (this->isDad) {
HXLINE(  47)			this->dad =  ::Character_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->daAnim,null());
HXLINE(  48)			this->dad->screenCenter(null());
HXLINE(  49)			this->dad->debugMode = true;
HXLINE(  50)			this->add(this->dad);
HXLINE(  52)			this->_hx_char = this->dad;
HXLINE(  53)			this->dad->set_flipX(false);
            		}
            		else {
HXLINE(  57)			this->bf =  ::Boyfriend_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),null());
HXLINE(  58)			this->bf->screenCenter(null());
HXLINE(  59)			this->bf->debugMode = true;
HXLINE(  60)			this->add(this->bf);
HXLINE(  62)			this->_hx_char = this->bf;
HXLINE(  63)			this->bf->set_flipX(false);
            		}
HXLINE(  66)		this->dumbTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  67)		this->add(this->dumbTexts);
HXLINE(  69)		this->textAnim =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,300,16,null(),null(),null(),null());
HXLINE(  70)		this->textAnim->set_size(26);
HXLINE(  71)		this->textAnim->scrollFactor->set(null(),null());
HXLINE(  72)		this->add(this->textAnim);
HXLINE(  74)		this->genBoyOffsets(null());
HXLINE(  76)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,2,2);
HXLINE(  77)		this->camFollow->screenCenter(null());
HXLINE(  78)		this->add(this->camFollow);
HXLINE(  80)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),null());
HXLINE(  82)		this->super::create();
            	}


void AnimationDebug_obj::genBoyOffsets(::hx::Null< bool >  __o_pushList){
            		bool pushList = __o_pushList.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5489bc77b33b3e4d_86_genBoyOffsets)
HXLINE(  87)		int daLoop = 0;
HXLINE(  89)		{
HXLINE(  89)			::Dynamic map = this->_hx_char->animOffsets;
HXDLIN(  89)			::Dynamic _g_map = map;
HXDLIN(  89)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN(  89)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  89)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  89)				::cpp::VirtualArray _g1_value = ( (::cpp::VirtualArray)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN(  89)				::String _g1_key = key;
HXDLIN(  89)				::String anim = _g1_key;
HXDLIN(  89)				::cpp::VirtualArray offsets = _g1_value;
HXLINE(  90)				{
HXLINE(  91)					 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,(20 + (18 * daLoop)),0,((anim + HX_(": ",a6,32,00,00)) + ::Std_obj::string(offsets)),15,null());
HXLINE(  92)					text->scrollFactor->set(null(),null());
HXLINE(  93)					text->set_color(-16776961);
HXLINE(  94)					this->dumbTexts->add(text).StaticCast<  ::flixel::text::FlxText >();
HXLINE(  96)					if (pushList) {
HXLINE(  97)						this->animList->push(anim);
            					}
HXLINE(  99)					daLoop = (daLoop + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimationDebug_obj,genBoyOffsets,(void))

void AnimationDebug_obj::updateTexts(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::AnimationDebug,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::text::FlxText text){
            			HX_STACKFRAME(&_hx_pos_5489bc77b33b3e4d_106_updateTexts)
HXLINE( 107)			text->kill();
HXLINE( 108)			_gthis->dumbTexts->remove(text,true).StaticCast<  ::flixel::text::FlxText >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_5489bc77b33b3e4d_104_updateTexts)
HXDLIN( 104)		 ::AnimationDebug _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 105)		this->dumbTexts->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationDebug_obj,updateTexts,(void))

void AnimationDebug_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_5489bc77b33b3e4d_113_update)
HXLINE( 114)		this->textAnim->set_text(this->_hx_char->animation->_curAnim->name);
HXLINE( 116)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 116)		if (_this->keyManager->checkStatus(69,_this->status)) {
HXLINE( 117)			 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN( 117)			fh->set_zoom((fh->zoom + ((Float)0.25)));
            		}
HXLINE( 118)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 118)		if (_this1->keyManager->checkStatus(81,_this1->status)) {
HXLINE( 119)			 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN( 119)			fh->set_zoom((fh->zoom - ((Float)0.25)));
            		}
HXLINE( 121)		bool _hx_tmp;
HXDLIN( 121)		bool _hx_tmp1;
HXDLIN( 121)		bool _hx_tmp2;
HXDLIN( 121)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 121)		if (!(_this2->keyManager->checkStatus(73,_this2->status))) {
HXLINE( 121)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 121)			_hx_tmp2 = _this->keyManager->checkStatus(74,_this->status);
            		}
            		else {
HXLINE( 121)			_hx_tmp2 = true;
            		}
HXDLIN( 121)		if (!(_hx_tmp2)) {
HXLINE( 121)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 121)			_hx_tmp1 = _this->keyManager->checkStatus(75,_this->status);
            		}
            		else {
HXLINE( 121)			_hx_tmp1 = true;
            		}
HXDLIN( 121)		if (!(_hx_tmp1)) {
HXLINE( 121)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 121)			_hx_tmp = _this->keyManager->checkStatus(76,_this->status);
            		}
            		else {
HXLINE( 121)			_hx_tmp = true;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 123)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 123)			if (_this->keyManager->checkStatus(73,_this->status)) {
HXLINE( 124)				this->camFollow->velocity->set_y(( (Float)(-90) ));
            			}
            			else {
HXLINE( 125)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 125)				if (_this->keyManager->checkStatus(75,_this->status)) {
HXLINE( 126)					this->camFollow->velocity->set_y(( (Float)(90) ));
            				}
            				else {
HXLINE( 128)					this->camFollow->velocity->set_y(( (Float)(0) ));
            				}
            			}
HXLINE( 130)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 130)			if (_this1->keyManager->checkStatus(74,_this1->status)) {
HXLINE( 131)				this->camFollow->velocity->set_x(( (Float)(-90) ));
            			}
            			else {
HXLINE( 132)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 132)				if (_this->keyManager->checkStatus(76,_this->status)) {
HXLINE( 133)					this->camFollow->velocity->set_x(( (Float)(90) ));
            				}
            				else {
HXLINE( 135)					this->camFollow->velocity->set_x(( (Float)(0) ));
            				}
            			}
            		}
            		else {
HXLINE( 139)			this->camFollow->velocity->set(null(),null());
            		}
HXLINE( 142)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 142)		if (_this3->keyManager->checkStatus(87,_this3->status)) {
HXLINE( 144)			 ::AnimationDebug _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 144)			_hx_tmp->curAnim = (_hx_tmp->curAnim - 1);
            		}
HXLINE( 147)		 ::flixel::input::keyboard::FlxKeyList _this4 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 147)		if (_this4->keyManager->checkStatus(83,_this4->status)) {
HXLINE( 149)			 ::AnimationDebug _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 149)			_hx_tmp->curAnim = (_hx_tmp->curAnim + 1);
            		}
HXLINE( 152)		 ::flixel::input::keyboard::FlxKeyList _this5 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 152)		if (_this5->keyManager->checkStatus(27,_this5->status)) {
HXLINE( 154)			 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 154)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 154)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 157)		if ((this->curAnim < 0)) {
HXLINE( 158)			this->curAnim = (this->animList->length - 1);
            		}
HXLINE( 160)		if ((this->curAnim >= this->animList->length)) {
HXLINE( 161)			this->curAnim = 0;
            		}
HXLINE( 163)		bool _hx_tmp3;
HXDLIN( 163)		bool _hx_tmp4;
HXDLIN( 163)		 ::flixel::input::keyboard::FlxKeyList _this6 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 163)		if (!(_this6->keyManager->checkStatus(83,_this6->status))) {
HXLINE( 163)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 163)			_hx_tmp4 = _this->keyManager->checkStatus(87,_this->status);
            		}
            		else {
HXLINE( 163)			_hx_tmp4 = true;
            		}
HXDLIN( 163)		if (!(_hx_tmp4)) {
HXLINE( 163)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 163)			_hx_tmp3 = _this->keyManager->checkStatus(32,_this->status);
            		}
            		else {
HXLINE( 163)			_hx_tmp3 = true;
            		}
HXDLIN( 163)		if (_hx_tmp3) {
HXLINE( 165)			this->_hx_char->playAnim(this->animList->__get(this->curAnim),null(),null(),null());
HXLINE( 167)			this->updateTexts();
HXLINE( 168)			this->genBoyOffsets(false);
            		}
HXLINE( 171)		bool upP = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_919878cf_7,1),2);
HXLINE( 172)		bool rightP = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_919878cf_8,1),2);
HXLINE( 173)		bool downP = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_919878cf_9,1),2);
HXLINE( 174)		bool leftP = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_919878cf_10,1),2);
HXLINE( 176)		 ::flixel::input::keyboard::FlxKeyList _this7 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 176)		bool holdShift = _this7->keyManager->checkStatus(16,_this7->status);
HXLINE( 177)		int multiplier = 1;
HXLINE( 178)		if (holdShift) {
HXLINE( 179)			multiplier = 10;
            		}
HXLINE( 181)		bool _hx_tmp5;
HXDLIN( 181)		bool _hx_tmp6;
HXDLIN( 181)		bool _hx_tmp7;
HXDLIN( 181)		if (!(upP)) {
HXLINE( 181)			_hx_tmp7 = rightP;
            		}
            		else {
HXLINE( 181)			_hx_tmp7 = true;
            		}
HXDLIN( 181)		if (!(_hx_tmp7)) {
HXLINE( 181)			_hx_tmp6 = downP;
            		}
            		else {
HXLINE( 181)			_hx_tmp6 = true;
            		}
HXDLIN( 181)		if (!(_hx_tmp6)) {
HXLINE( 181)			_hx_tmp5 = leftP;
            		}
            		else {
HXLINE( 181)			_hx_tmp5 = true;
            		}
HXDLIN( 181)		if (_hx_tmp5) {
HXLINE( 183)			this->updateTexts();
HXLINE( 184)			if (upP) {
HXLINE( 185)				::cpp::VirtualArray base = ( (::cpp::VirtualArray)(this->_hx_char->animOffsets->get(this->animList->__get(this->curAnim))) );
HXDLIN( 185)				int _hx_tmp = 1;
HXDLIN( 185)				base->set(_hx_tmp,(base->__get(_hx_tmp) + multiplier));
            			}
HXLINE( 186)			if (downP) {
HXLINE( 187)				::cpp::VirtualArray base = ( (::cpp::VirtualArray)(this->_hx_char->animOffsets->get(this->animList->__get(this->curAnim))) );
HXDLIN( 187)				int _hx_tmp = 1;
HXDLIN( 187)				base->set(_hx_tmp,(base->__get(_hx_tmp) - multiplier));
            			}
HXLINE( 188)			if (leftP) {
HXLINE( 189)				::cpp::VirtualArray base = ( (::cpp::VirtualArray)(this->_hx_char->animOffsets->get(this->animList->__get(this->curAnim))) );
HXDLIN( 189)				int _hx_tmp = 0;
HXDLIN( 189)				base->set(_hx_tmp,(base->__get(_hx_tmp) + multiplier));
            			}
HXLINE( 190)			if (rightP) {
HXLINE( 191)				::cpp::VirtualArray base = ( (::cpp::VirtualArray)(this->_hx_char->animOffsets->get(this->animList->__get(this->curAnim))) );
HXDLIN( 191)				int _hx_tmp = 0;
HXDLIN( 191)				base->set(_hx_tmp,(base->__get(_hx_tmp) - multiplier));
            			}
HXLINE( 193)			this->updateTexts();
HXLINE( 194)			this->genBoyOffsets(false);
HXLINE( 195)			this->_hx_char->playAnim(this->animList->__get(this->curAnim),null(),null(),null());
            		}
HXLINE( 198)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< AnimationDebug_obj > AnimationDebug_obj::__new(::String __o_daAnim) {
	::hx::ObjectPtr< AnimationDebug_obj > __this = new AnimationDebug_obj();
	__this->__construct(__o_daAnim);
	return __this;
}

::hx::ObjectPtr< AnimationDebug_obj > AnimationDebug_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_daAnim) {
	AnimationDebug_obj *__this = (AnimationDebug_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationDebug_obj), true, "AnimationDebug"));
	*(void **)__this = AnimationDebug_obj::_hx_vtable;
	__this->__construct(__o_daAnim);
	return __this;
}

AnimationDebug_obj::AnimationDebug_obj()
{
}

void AnimationDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationDebug);
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(dad,"dad");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(textAnim,"textAnim");
	HX_MARK_MEMBER_NAME(dumbTexts,"dumbTexts");
	HX_MARK_MEMBER_NAME(animList,"animList");
	HX_MARK_MEMBER_NAME(curAnim,"curAnim");
	HX_MARK_MEMBER_NAME(isDad,"isDad");
	HX_MARK_MEMBER_NAME(daAnim,"daAnim");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimationDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(dad,"dad");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(textAnim,"textAnim");
	HX_VISIT_MEMBER_NAME(dumbTexts,"dumbTexts");
	HX_VISIT_MEMBER_NAME(animList,"animList");
	HX_VISIT_MEMBER_NAME(curAnim,"curAnim");
	HX_VISIT_MEMBER_NAME(isDad,"isDad");
	HX_VISIT_MEMBER_NAME(daAnim,"daAnim");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimationDebug_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { return ::hx::Val( dad ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isDad") ) { return ::hx::Val( isDad ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"daAnim") ) { return ::hx::Val( daAnim ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { return ::hx::Val( curAnim ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textAnim") ) { return ::hx::Val( textAnim ); }
		if (HX_FIELD_EQ(inName,"animList") ) { return ::hx::Val( animList ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dumbTexts") ) { return ::hx::Val( dumbTexts ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateTexts") ) { return ::hx::Val( updateTexts_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"genBoyOffsets") ) { return ::hx::Val( genBoyOffsets_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationDebug_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::Boyfriend >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { dad=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isDad") ) { isDad=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"daAnim") ) { daAnim=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { curAnim=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textAnim") ) { textAnim=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animList") ) { animList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dumbTexts") ) { dumbTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("dad",47,36,4c,00));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("textAnim",5e,d9,6c,43));
	outFields->push(HX_("dumbTexts",20,d4,be,0e));
	outFields->push(HX_("animList",0f,ab,08,7b));
	outFields->push(HX_("curAnim",b1,f7,86,ab));
	outFields->push(HX_("isDad",7d,60,4a,c1));
	outFields->push(HX_("daAnim",2e,0c,d9,00));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationDebug_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Boyfriend */ ,(int)offsetof(AnimationDebug_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(AnimationDebug_obj,dad),HX_("dad",47,36,4c,00)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(AnimationDebug_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(AnimationDebug_obj,textAnim),HX_("textAnim",5e,d9,6c,43)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(AnimationDebug_obj,dumbTexts),HX_("dumbTexts",20,d4,be,0e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AnimationDebug_obj,animList),HX_("animList",0f,ab,08,7b)},
	{::hx::fsInt,(int)offsetof(AnimationDebug_obj,curAnim),HX_("curAnim",b1,f7,86,ab)},
	{::hx::fsBool,(int)offsetof(AnimationDebug_obj,isDad),HX_("isDad",7d,60,4a,c1)},
	{::hx::fsString,(int)offsetof(AnimationDebug_obj,daAnim),HX_("daAnim",2e,0c,d9,00)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(AnimationDebug_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimationDebug_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationDebug_obj_sMemberFields[] = {
	HX_("bf",c4,55,00,00),
	HX_("dad",47,36,4c,00),
	HX_("char",d6,5e,bf,41),
	HX_("textAnim",5e,d9,6c,43),
	HX_("dumbTexts",20,d4,be,0e),
	HX_("animList",0f,ab,08,7b),
	HX_("curAnim",b1,f7,86,ab),
	HX_("isDad",7d,60,4a,c1),
	HX_("daAnim",2e,0c,d9,00),
	HX_("camFollow",e0,6e,47,22),
	HX_("create",fc,66,0f,7c),
	HX_("genBoyOffsets",84,65,f8,17),
	HX_("updateTexts",5d,b4,31,f3),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AnimationDebug_obj::__mClass;

void AnimationDebug_obj::__register()
{
	AnimationDebug_obj _hx_dummy;
	AnimationDebug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AnimationDebug",cf,78,98,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationDebug_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationDebug_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationDebug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationDebug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

