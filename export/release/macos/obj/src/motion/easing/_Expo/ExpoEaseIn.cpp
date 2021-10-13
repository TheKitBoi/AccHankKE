#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Expo_ExpoEaseIn
#include <motion/easing/_Expo/ExpoEaseIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_145eafa1b30d1a47_22_new,"motion.easing._Expo.ExpoEaseIn","new",0x3db3bedf,"motion.easing._Expo.ExpoEaseIn.new","motion/easing/Expo.hx",22,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_145eafa1b30d1a47_31_calculate,"motion.easing._Expo.ExpoEaseIn","calculate",0xa996ed25,"motion.easing._Expo.ExpoEaseIn.calculate","motion/easing/Expo.hx",31,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_145eafa1b30d1a47_37_ease,"motion.easing._Expo.ExpoEaseIn","ease",0xb99d4c8f,"motion.easing._Expo.ExpoEaseIn.ease","motion/easing/Expo.hx",37,0xaf90d701)
namespace motion{
namespace easing{
namespace _Expo{

void ExpoEaseIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_145eafa1b30d1a47_22_new)
            	}

Dynamic ExpoEaseIn_obj::__CreateEmpty() { return new ExpoEaseIn_obj; }

void *ExpoEaseIn_obj::_hx_vtable = 0;

Dynamic ExpoEaseIn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExpoEaseIn_obj > _hx_result = new ExpoEaseIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExpoEaseIn_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x340fe1a9;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Expo_ExpoEaseIn__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Expo::ExpoEaseIn_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Expo::ExpoEaseIn_obj::ease,
};

void *ExpoEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Expo_ExpoEaseIn__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float ExpoEaseIn_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_145eafa1b30d1a47_31_calculate)
HXDLIN(  31)		if ((k == 0)) {
HXDLIN(  31)			return ( (Float)(0) );
            		}
            		else {
HXDLIN(  31)			return ::Math_obj::exp((((Float)6.931471805599453) * (k - ( (Float)(1) ))));
            		}
HXDLIN(  31)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseIn_obj,calculate,return )

Float ExpoEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_145eafa1b30d1a47_37_ease)
HXDLIN(  37)		if ((t == 0)) {
HXDLIN(  37)			return b;
            		}
            		else {
HXDLIN(  37)			return ((c * ::Math_obj::exp((((Float)6.931471805599453) * ((t / d) - ( (Float)(1) ))))) + b);
            		}
HXDLIN(  37)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseIn_obj,ease,return )


::hx::ObjectPtr< ExpoEaseIn_obj > ExpoEaseIn_obj::__new() {
	::hx::ObjectPtr< ExpoEaseIn_obj > __this = new ExpoEaseIn_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ExpoEaseIn_obj > ExpoEaseIn_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ExpoEaseIn_obj *__this = (ExpoEaseIn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExpoEaseIn_obj), false, "motion.easing._Expo.ExpoEaseIn"));
	*(void **)__this = ExpoEaseIn_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ExpoEaseIn_obj::ExpoEaseIn_obj()
{
}

::hx::Val ExpoEaseIn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ExpoEaseIn_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ExpoEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String ExpoEaseIn_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class ExpoEaseIn_obj::__mClass;

void ExpoEaseIn_obj::__register()
{
	ExpoEaseIn_obj _hx_dummy;
	ExpoEaseIn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Expo.ExpoEaseIn",6d,63,5d,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ExpoEaseIn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ExpoEaseIn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExpoEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExpoEaseIn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Expo
