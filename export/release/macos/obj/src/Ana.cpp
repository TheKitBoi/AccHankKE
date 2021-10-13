#include <hxcpp.h>

#ifndef INCLUDED_Ana
#include <Ana.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_577ed644f4027e0c_21_new,"Ana","new",0x82cebda6,"Ana.new","Replay.hx",21,0xac25edd7)

void Ana_obj::__construct(Float _hitTime,::cpp::VirtualArray _nearestNote,bool _hit,::String _hitJudge,int _key){
            	HX_STACKFRAME(&_hx_pos_577ed644f4027e0c_21_new)
HXLINE(  22)		this->hitTime = _hitTime;
HXLINE(  23)		this->nearestNote = _nearestNote;
HXLINE(  24)		this->hit = _hit;
HXLINE(  25)		this->hitJudge = _hitJudge;
HXLINE(  26)		this->key = _key;
            	}

Dynamic Ana_obj::__CreateEmpty() { return new Ana_obj; }

void *Ana_obj::_hx_vtable = 0;

Dynamic Ana_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ana_obj > _hx_result = new Ana_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Ana_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ed5f748;
}


Ana_obj::Ana_obj()
{
}

void Ana_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ana);
	HX_MARK_MEMBER_NAME(hitTime,"hitTime");
	HX_MARK_MEMBER_NAME(nearestNote,"nearestNote");
	HX_MARK_MEMBER_NAME(hit,"hit");
	HX_MARK_MEMBER_NAME(hitJudge,"hitJudge");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void Ana_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hitTime,"hitTime");
	HX_VISIT_MEMBER_NAME(nearestNote,"nearestNote");
	HX_VISIT_MEMBER_NAME(hit,"hit");
	HX_VISIT_MEMBER_NAME(hitJudge,"hitJudge");
	HX_VISIT_MEMBER_NAME(key,"key");
}

::hx::Val Ana_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return ::hx::Val( hit ); }
		if (HX_FIELD_EQ(inName,"key") ) { return ::hx::Val( key ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitTime") ) { return ::hx::Val( hitTime ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitJudge") ) { return ::hx::Val( hitJudge ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nearestNote") ) { return ::hx::Val( nearestNote ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Ana_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { hit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitTime") ) { hitTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitJudge") ) { hitJudge=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nearestNote") ) { nearestNote=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ana_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("hitTime",00,64,82,e2));
	outFields->push(HX_("nearestNote",70,e3,43,04));
	outFields->push(HX_("hit",53,46,4f,00));
	outFields->push(HX_("hitJudge",44,0c,7b,95));
	outFields->push(HX_("key",9f,89,51,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Ana_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Ana_obj,hitTime),HX_("hitTime",00,64,82,e2)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Ana_obj,nearestNote),HX_("nearestNote",70,e3,43,04)},
	{::hx::fsBool,(int)offsetof(Ana_obj,hit),HX_("hit",53,46,4f,00)},
	{::hx::fsString,(int)offsetof(Ana_obj,hitJudge),HX_("hitJudge",44,0c,7b,95)},
	{::hx::fsInt,(int)offsetof(Ana_obj,key),HX_("key",9f,89,51,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Ana_obj_sStaticStorageInfo = 0;
#endif

static ::String Ana_obj_sMemberFields[] = {
	HX_("hitTime",00,64,82,e2),
	HX_("nearestNote",70,e3,43,04),
	HX_("hit",53,46,4f,00),
	HX_("hitJudge",44,0c,7b,95),
	HX_("key",9f,89,51,00),
	::String(null()) };

::hx::Class Ana_obj::__mClass;

void Ana_obj::__register()
{
	Ana_obj _hx_dummy;
	Ana_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Ana",b4,b2,31,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Ana_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Ana_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ana_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ana_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

