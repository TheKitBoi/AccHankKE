#include <hxcpp.h>

#ifndef INCLUDED_Ana
#include <Ana.h>
#endif
#ifndef INCLUDED_Analysis
#include <Analysis.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dbffcb84bdf4127a_35_new,"Analysis","new",0xf382266e,"Analysis.new","Replay.hx",35,0xac25edd7)

void Analysis_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dbffcb84bdf4127a_35_new)
HXDLIN(  35)		this->anaArray = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic Analysis_obj::__CreateEmpty() { return new Analysis_obj; }

void *Analysis_obj::_hx_vtable = 0;

Dynamic Analysis_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Analysis_obj > _hx_result = new Analysis_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Analysis_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07d00a3c;
}


::hx::ObjectPtr< Analysis_obj > Analysis_obj::__new() {
	::hx::ObjectPtr< Analysis_obj > __this = new Analysis_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Analysis_obj > Analysis_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Analysis_obj *__this = (Analysis_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Analysis_obj), true, "Analysis"));
	*(void **)__this = Analysis_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Analysis_obj::Analysis_obj()
{
}

void Analysis_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Analysis);
	HX_MARK_MEMBER_NAME(anaArray,"anaArray");
	HX_MARK_END_CLASS();
}

void Analysis_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(anaArray,"anaArray");
}

::hx::Val Analysis_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"anaArray") ) { return ::hx::Val( anaArray ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Analysis_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"anaArray") ) { anaArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Analysis_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("anaArray",25,22,b1,0b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Analysis_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Analysis_obj,anaArray),HX_("anaArray",25,22,b1,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Analysis_obj_sStaticStorageInfo = 0;
#endif

static ::String Analysis_obj_sMemberFields[] = {
	HX_("anaArray",25,22,b1,0b),
	::String(null()) };

::hx::Class Analysis_obj::__mClass;

void Analysis_obj::__register()
{
	Analysis_obj _hx_dummy;
	Analysis_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Analysis",7c,17,3f,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Analysis_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Analysis_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Analysis_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Analysis_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

