#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Expo_ExpoEaseInOut
#include <motion/easing/_Expo/ExpoEaseInOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_678575ce369899ee_48_new,"motion.easing._Expo.ExpoEaseInOut","new",0xd9f75c93,"motion.easing._Expo.ExpoEaseInOut.new","motion/easing/Expo.hx",48,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_678575ce369899ee_55_calculate,"motion.easing._Expo.ExpoEaseInOut","calculate",0x4105c9d9,"motion.easing._Expo.ExpoEaseInOut.calculate","motion/easing/Expo.hx",55,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_678575ce369899ee_67_ease,"motion.easing._Expo.ExpoEaseInOut","ease",0xd883ac5b,"motion.easing._Expo.ExpoEaseInOut.ease","motion/easing/Expo.hx",67,0xaf90d701)
namespace motion{
namespace easing{
namespace _Expo{

void ExpoEaseInOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_678575ce369899ee_48_new)
            	}

Dynamic ExpoEaseInOut_obj::__CreateEmpty() { return new ExpoEaseInOut_obj; }

void *ExpoEaseInOut_obj::_hx_vtable = 0;

Dynamic ExpoEaseInOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExpoEaseInOut_obj > _hx_result = new ExpoEaseInOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExpoEaseInOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x488f3f9d;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Expo_ExpoEaseInOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Expo::ExpoEaseInOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Expo::ExpoEaseInOut_obj::ease,
};

void *ExpoEaseInOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Expo_ExpoEaseInOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float ExpoEaseInOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_678575ce369899ee_55_calculate)
HXLINE(  57)		if ((k == 0)) {
HXLINE(  57)			return ( (Float)(0) );
            		}
HXLINE(  58)		if ((k == 1)) {
HXLINE(  58)			return ( (Float)(1) );
            		}
HXLINE(  59)		k = (k / ((Float)0.5));
HXDLIN(  59)		if ((k < ((Float)1.0))) {
HXLINE(  60)			return (((Float)0.5) * ::Math_obj::exp((((Float)6.931471805599453) * (k - ( (Float)(1) )))));
            		}
HXLINE(  62)		k = (k - ( (Float)(1) ));
HXDLIN(  62)		return (((Float)0.5) * (( (Float)(2) ) - ::Math_obj::exp((((Float)-6.931471805599453) * k))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseInOut_obj,calculate,return )

Float ExpoEaseInOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_678575ce369899ee_67_ease)
HXLINE(  69)		if ((t == 0)) {
HXLINE(  70)			return b;
            		}
HXLINE(  72)		if ((t == d)) {
HXLINE(  73)			return (b + c);
            		}
HXLINE(  75)		t = (t / (d / ((Float)2.0)));
HXDLIN(  75)		if ((t < ((Float)1.0))) {
HXLINE(  76)			return (((c / ( (Float)(2) )) * ::Math_obj::exp((((Float)6.931471805599453) * (t - ( (Float)(1) ))))) + b);
            		}
HXLINE(  78)		t = (t - ( (Float)(1) ));
HXDLIN(  78)		return (((c / ( (Float)(2) )) * (( (Float)(2) ) - ::Math_obj::exp((((Float)-6.931471805599453) * t)))) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseInOut_obj,ease,return )


::hx::ObjectPtr< ExpoEaseInOut_obj > ExpoEaseInOut_obj::__new() {
	::hx::ObjectPtr< ExpoEaseInOut_obj > __this = new ExpoEaseInOut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ExpoEaseInOut_obj > ExpoEaseInOut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ExpoEaseInOut_obj *__this = (ExpoEaseInOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExpoEaseInOut_obj), false, "motion.easing._Expo.ExpoEaseInOut"));
	*(void **)__this = ExpoEaseInOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ExpoEaseInOut_obj::ExpoEaseInOut_obj()
{
}

::hx::Val ExpoEaseInOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ExpoEaseInOut_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ExpoEaseInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String ExpoEaseInOut_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class ExpoEaseInOut_obj::__mClass;

void ExpoEaseInOut_obj::__register()
{
	ExpoEaseInOut_obj _hx_dummy;
	ExpoEaseInOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Expo.ExpoEaseInOut",21,17,2b,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ExpoEaseInOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ExpoEaseInOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExpoEaseInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExpoEaseInOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Expo
