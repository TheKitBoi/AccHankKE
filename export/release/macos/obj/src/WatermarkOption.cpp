#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_WatermarkOption
#include <WatermarkOption.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_24a6120f5d880dfd_615_new,"WatermarkOption","new",0xd9f8738b,"WatermarkOption.new","Options.hx",615,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_24a6120f5d880dfd_621_press,"WatermarkOption","press",0xcefc576e,"WatermarkOption.press","Options.hx",621,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_24a6120f5d880dfd_630_updateDisplay,"WatermarkOption","updateDisplay",0x9902f624,"WatermarkOption.updateDisplay","Options.hx",630,0x9d9a0240)

void WatermarkOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_24a6120f5d880dfd_615_new)
HXLINE( 616)		super::__construct();
HXLINE( 617)		this->description = desc;
            	}

Dynamic WatermarkOption_obj::__CreateEmpty() { return new WatermarkOption_obj; }

void *WatermarkOption_obj::_hx_vtable = 0;

Dynamic WatermarkOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WatermarkOption_obj > _hx_result = new WatermarkOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WatermarkOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x274e3759) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x274e3759;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool WatermarkOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_24a6120f5d880dfd_621_press)
HXLINE( 622)		::Main_obj::watermarks = !(::Main_obj::watermarks);
HXLINE( 623)		::flixel::FlxG_obj::save->data->__SetField(HX_("watermark",a4,af,1e,e0),::Main_obj::watermarks,::hx::paccDynamic);
HXLINE( 624)		this->display = this->updateDisplay();
HXLINE( 625)		return true;
            	}


::String WatermarkOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_24a6120f5d880dfd_630_updateDisplay)
HXDLIN( 630)		::String _hx_tmp;
HXDLIN( 630)		if (::Main_obj::watermarks) {
HXDLIN( 630)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
            		else {
HXDLIN( 630)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
HXDLIN( 630)		return (HX_("Watermarks ",d1,dc,17,0d) + _hx_tmp);
            	}



::hx::ObjectPtr< WatermarkOption_obj > WatermarkOption_obj::__new(::String desc) {
	::hx::ObjectPtr< WatermarkOption_obj > __this = new WatermarkOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< WatermarkOption_obj > WatermarkOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	WatermarkOption_obj *__this = (WatermarkOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WatermarkOption_obj), true, "WatermarkOption"));
	*(void **)__this = WatermarkOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

WatermarkOption_obj::WatermarkOption_obj()
{
}

::hx::Val WatermarkOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WatermarkOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *WatermarkOption_obj_sStaticStorageInfo = 0;
#endif

static ::String WatermarkOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class WatermarkOption_obj::__mClass;

void WatermarkOption_obj::__register()
{
	WatermarkOption_obj _hx_dummy;
	WatermarkOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WatermarkOption",19,52,27,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WatermarkOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WatermarkOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WatermarkOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WatermarkOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

