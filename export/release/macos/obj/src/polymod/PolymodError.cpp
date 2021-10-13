#include <hxcpp.h>

#ifndef INCLUDED_polymod_PolymodError
#include <polymod/PolymodError.h>
#endif
#ifndef INCLUDED_polymod_PolymodErrorType
#include <polymod/PolymodErrorType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfb78df8014a2c60_542_new,"polymod.PolymodError","new",0xa579457c,"polymod.PolymodError.new","polymod/Polymod.hx",542,0xd80c6d61)
namespace polymod{

void PolymodError_obj::__construct( ::polymod::PolymodErrorType severity,::String code,::String message,::String origin){
            	HX_STACKFRAME(&_hx_pos_bfb78df8014a2c60_542_new)
HXLINE( 543)		this->severity = severity;
HXLINE( 544)		this->code = code;
HXLINE( 545)		this->message = message;
HXLINE( 546)		this->origin = origin;
            	}

Dynamic PolymodError_obj::__CreateEmpty() { return new PolymodError_obj; }

void *PolymodError_obj::_hx_vtable = 0;

Dynamic PolymodError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolymodError_obj > _hx_result = new PolymodError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool PolymodError_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57955688;
}


::hx::ObjectPtr< PolymodError_obj > PolymodError_obj::__new( ::polymod::PolymodErrorType severity,::String code,::String message,::String origin) {
	::hx::ObjectPtr< PolymodError_obj > __this = new PolymodError_obj();
	__this->__construct(severity,code,message,origin);
	return __this;
}

::hx::ObjectPtr< PolymodError_obj > PolymodError_obj::__alloc(::hx::Ctx *_hx_ctx, ::polymod::PolymodErrorType severity,::String code,::String message,::String origin) {
	PolymodError_obj *__this = (PolymodError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolymodError_obj), true, "polymod.PolymodError"));
	*(void **)__this = PolymodError_obj::_hx_vtable;
	__this->__construct(severity,code,message,origin);
	return __this;
}

PolymodError_obj::PolymodError_obj()
{
}

void PolymodError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolymodError);
	HX_MARK_MEMBER_NAME(severity,"severity");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_END_CLASS();
}

void PolymodError_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(severity,"severity");
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(origin,"origin");
}

::hx::Val PolymodError_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return ::hx::Val( code ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return ::hx::Val( message ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"severity") ) { return ::hx::Val( severity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolymodError_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"severity") ) { severity=inValue.Cast<  ::polymod::PolymodErrorType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolymodError_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("severity",bd,ad,e0,ba));
	outFields->push(HX_("code",2d,b1,c4,41));
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("origin",e6,19,01,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolymodError_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::PolymodErrorType */ ,(int)offsetof(PolymodError_obj,severity),HX_("severity",bd,ad,e0,ba)},
	{::hx::fsString,(int)offsetof(PolymodError_obj,code),HX_("code",2d,b1,c4,41)},
	{::hx::fsString,(int)offsetof(PolymodError_obj,message),HX_("message",c7,35,11,9a)},
	{::hx::fsString,(int)offsetof(PolymodError_obj,origin),HX_("origin",e6,19,01,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolymodError_obj_sStaticStorageInfo = 0;
#endif

static ::String PolymodError_obj_sMemberFields[] = {
	HX_("severity",bd,ad,e0,ba),
	HX_("code",2d,b1,c4,41),
	HX_("message",c7,35,11,9a),
	HX_("origin",e6,19,01,4b),
	::String(null()) };

::hx::Class PolymodError_obj::__mClass;

void PolymodError_obj::__register()
{
	PolymodError_obj _hx_dummy;
	PolymodError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.PolymodError",8a,17,1a,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolymodError_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolymodError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolymodError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolymodError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
