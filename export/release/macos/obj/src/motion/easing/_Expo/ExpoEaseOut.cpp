#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Expo_ExpoEaseOut
#include <motion/easing/_Expo/ExpoEaseOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3481abc79b16a249_89_new,"motion.easing._Expo.ExpoEaseOut","new",0xa9594bf8,"motion.easing._Expo.ExpoEaseOut.new","motion/easing/Expo.hx",89,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_3481abc79b16a249_98_calculate,"motion.easing._Expo.ExpoEaseOut","calculate",0x40fcd2fe,"motion.easing._Expo.ExpoEaseOut.calculate","motion/easing/Expo.hx",98,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_3481abc79b16a249_105_ease,"motion.easing._Expo.ExpoEaseOut","ease",0x7ed33556,"motion.easing._Expo.ExpoEaseOut.ease","motion/easing/Expo.hx",105,0xaf90d701)
namespace motion{
namespace easing{
namespace _Expo{

void ExpoEaseOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3481abc79b16a249_89_new)
            	}

Dynamic ExpoEaseOut_obj::__CreateEmpty() { return new ExpoEaseOut_obj; }

void *ExpoEaseOut_obj::_hx_vtable = 0;

Dynamic ExpoEaseOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExpoEaseOut_obj > _hx_result = new ExpoEaseOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExpoEaseOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d7413e6;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Expo_ExpoEaseOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Expo::ExpoEaseOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Expo::ExpoEaseOut_obj::ease,
};

void *ExpoEaseOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Expo_ExpoEaseOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float ExpoEaseOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_3481abc79b16a249_98_calculate)
HXDLIN(  98)		if ((k == 1)) {
HXDLIN(  98)			return ( (Float)(1) );
            		}
            		else {
HXDLIN(  98)			return (( (Float)(1) ) - ::Math_obj::exp((((Float)-6.931471805599453) * k)));
            		}
HXDLIN(  98)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseOut_obj,calculate,return )

Float ExpoEaseOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_3481abc79b16a249_105_ease)
HXDLIN( 105)		if ((t == d)) {
HXDLIN( 105)			return (b + c);
            		}
            		else {
HXDLIN( 105)			return ((c * (( (Float)(1) ) - ::Math_obj::exp(((((Float)-6.931471805599453) * t) / d)))) + b);
            		}
HXDLIN( 105)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseOut_obj,ease,return )


::hx::ObjectPtr< ExpoEaseOut_obj > ExpoEaseOut_obj::__new() {
	::hx::ObjectPtr< ExpoEaseOut_obj > __this = new ExpoEaseOut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ExpoEaseOut_obj > ExpoEaseOut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ExpoEaseOut_obj *__this = (ExpoEaseOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExpoEaseOut_obj), false, "motion.easing._Expo.ExpoEaseOut"));
	*(void **)__this = ExpoEaseOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ExpoEaseOut_obj::ExpoEaseOut_obj()
{
}

::hx::Val ExpoEaseOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ExpoEaseOut_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ExpoEaseOut_obj_sStaticStorageInfo = 0;
#endif

static ::String ExpoEaseOut_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class ExpoEaseOut_obj::__mClass;

void ExpoEaseOut_obj::__register()
{
	ExpoEaseOut_obj _hx_dummy;
	ExpoEaseOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Expo.ExpoEaseOut",06,30,5e,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ExpoEaseOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ExpoEaseOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExpoEaseOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExpoEaseOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Expo
