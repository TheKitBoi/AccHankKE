#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MethodActuator
#include <motion/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6897cb52bd0f68b1_11_new,"motion.actuators.MethodActuator","new",0xc04e9758,"motion.actuators.MethodActuator.new","motion/actuators/MethodActuator.hx",11,0xd19a6596)
HX_LOCAL_STACK_FRAME(_hx_pos_6897cb52bd0f68b1_40_apply,"motion.actuators.MethodActuator","apply",0xedaffa66,"motion.actuators.MethodActuator.apply","motion/actuators/MethodActuator.hx",40,0xd19a6596)
HX_LOCAL_STACK_FRAME(_hx_pos_6897cb52bd0f68b1_45_complete,"motion.actuators.MethodActuator","complete",0x6780f6c1,"motion.actuators.MethodActuator.complete","motion/actuators/MethodActuator.hx",45,0xd19a6596)
HX_LOCAL_STACK_FRAME(_hx_pos_6897cb52bd0f68b1_60_initialize,"motion.actuators.MethodActuator","initialize",0xed23b958,"motion.actuators.MethodActuator.initialize","motion/actuators/MethodActuator.hx",60,0xd19a6596)
HX_LOCAL_STACK_FRAME(_hx_pos_6897cb52bd0f68b1_88_update,"motion.actuators.MethodActuator","update",0x03776a11,"motion.actuators.MethodActuator.update","motion/actuators/MethodActuator.hx",88,0xd19a6596)
namespace motion{
namespace actuators{

void MethodActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_6897cb52bd0f68b1_11_new)
HXLINE(  13)		this->currentParameters = ::cpp::VirtualArray_obj::__new();
HXLINE(  14)		this->tweenProperties =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  16)		super::__construct(target,duration,properties);
HXLINE(  18)		if (!(::Reflect_obj::hasField(properties,HX_("start",62,74,0b,84)))) {
HXLINE(  20)			this->properties->__SetField(HX_("start",62,74,0b,84),::cpp::VirtualArray_obj::__new(),::hx::paccDynamic);
            		}
HXLINE(  24)		if (!(::Reflect_obj::hasField(properties,HX_("end",db,03,4d,00)))) {
HXLINE(  26)			this->properties->__SetField(HX_("end",db,03,4d,00),this->properties->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic),::hx::paccDynamic);
            		}
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			int _g1 = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXDLIN(  30)			while((_g < _g1)){
HXLINE(  30)				_g = (_g + 1);
HXDLIN(  30)				int i = (_g - 1);
HXLINE(  32)				this->currentParameters->push( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic))->__GetItem(i));
            			}
            		}
            	}

Dynamic MethodActuator_obj::__CreateEmpty() { return new MethodActuator_obj; }

void *MethodActuator_obj::_hx_vtable = 0;

Dynamic MethodActuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MethodActuator_obj > _hx_result = new MethodActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MethodActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x172f0ab4) {
		if (inClassId<=(int)0x05603dab) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x05603dab;
		} else {
			return inClassId==(int)0x172f0ab4;
		}
	} else {
		return inClassId==(int)0x558db13e;
	}
}

void MethodActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_6897cb52bd0f68b1_40_apply)
HXDLIN(  40)		 ::Dynamic method = this->target;
HXDLIN(  40)		::cpp::VirtualArray params = ( (::cpp::VirtualArray)(this->properties->__Field(HX_("end",db,03,4d,00),::hx::paccDynamic)) );
HXDLIN(  40)		if (::hx::IsNull( params )) {
HXDLIN(  40)			params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXDLIN(  40)		::Reflect_obj::callMethod(method,method,params);
            	}


void MethodActuator_obj::complete(::hx::Null< bool >  __o_sendEvent){
            		bool sendEvent = __o_sendEvent.Default(true);
            	HX_STACKFRAME(&_hx_pos_6897cb52bd0f68b1_45_complete)
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			int _g1 = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXDLIN(  47)			while((_g < _g1)){
HXLINE(  47)				_g = (_g + 1);
HXDLIN(  47)				int i = (_g - 1);
HXLINE(  49)				this->currentParameters->set(i,::Reflect_obj::field(this->tweenProperties,(HX_("param",8d,80,55,bd) + i)));
            			}
            		}
HXLINE(  53)		{
HXLINE(  53)			 ::Dynamic method = this->target;
HXDLIN(  53)			::cpp::VirtualArray params = this->currentParameters;
HXDLIN(  53)			if (::hx::IsNull( params )) {
HXLINE(  53)				params = ::cpp::VirtualArray_obj::__new(0);
            			}
HXDLIN(  53)			::Reflect_obj::callMethod(method,method,params);
            		}
HXLINE(  55)		this->super::complete(sendEvent);
            	}


void MethodActuator_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_6897cb52bd0f68b1_60_initialize)
HXLINE(  62)		 ::motion::actuators::PropertyDetails details;
HXLINE(  63)		::String propertyName;
HXLINE(  64)		 ::Dynamic start;
HXLINE(  66)		{
HXLINE(  66)			int _g = 0;
HXDLIN(  66)			int _g1 = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXDLIN(  66)			while((_g < _g1)){
HXLINE(  66)				_g = (_g + 1);
HXDLIN(  66)				int i = (_g - 1);
HXLINE(  68)				propertyName = (HX_("param",8d,80,55,bd) + i);
HXLINE(  69)				start =  ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic))->__GetItem(i);
HXLINE(  71)				::Reflect_obj::setField(this->tweenProperties,propertyName,start);
HXLINE(  73)				bool _hx_tmp;
HXDLIN(  73)				if (!(::Std_obj::isOfType(start,( ( ::Dynamic)(::hx::ClassOf< ::Float >()) )))) {
HXLINE(  73)					_hx_tmp = ::Std_obj::isOfType(start,( ( ::Dynamic)(::hx::ClassOf< int >()) ));
            				}
            				else {
HXLINE(  73)					_hx_tmp = true;
            				}
HXDLIN(  73)				if (_hx_tmp) {
HXLINE(  75)					details =  ::motion::actuators::PropertyDetails_obj::__alloc( HX_CTX ,this->tweenProperties,propertyName,( (Float)(start) ),(( (Float)( ::Dynamic(this->properties->__Field(HX_("end",db,03,4d,00),::hx::paccDynamic))->__GetItem(i)) ) - ( (Float)(start) )),null());
HXLINE(  76)					this->propertyDetails->push(details);
            				}
            			}
            		}
HXLINE(  82)		this->detailsLength = this->propertyDetails->length;
HXLINE(  83)		this->initialized = true;
            	}


void MethodActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_6897cb52bd0f68b1_88_update)
HXLINE(  90)		this->super::update(currentTime);
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (this->active) {
HXLINE(  92)			_hx_tmp = !(this->paused);
            		}
            		else {
HXLINE(  92)			_hx_tmp = false;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  94)			{
HXLINE(  94)				int _g = 0;
HXDLIN(  94)				int _g1 = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) );
HXDLIN(  94)				while((_g < _g1)){
HXLINE(  94)					_g = (_g + 1);
HXDLIN(  94)					int i = (_g - 1);
HXLINE(  96)					this->currentParameters->set(i,::Reflect_obj::field(this->tweenProperties,(HX_("param",8d,80,55,bd) + i)));
            				}
            			}
HXLINE( 100)			{
HXLINE( 100)				 ::Dynamic method = this->target;
HXDLIN( 100)				::cpp::VirtualArray params = this->currentParameters;
HXDLIN( 100)				if (::hx::IsNull( params )) {
HXLINE( 100)					params = ::cpp::VirtualArray_obj::__new(0);
            				}
HXDLIN( 100)				::Reflect_obj::callMethod(method,method,params);
            			}
            		}
            	}



::hx::ObjectPtr< MethodActuator_obj > MethodActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	::hx::ObjectPtr< MethodActuator_obj > __this = new MethodActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

::hx::ObjectPtr< MethodActuator_obj > MethodActuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	MethodActuator_obj *__this = (MethodActuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MethodActuator_obj), true, "motion.actuators.MethodActuator"));
	*(void **)__this = MethodActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

MethodActuator_obj::MethodActuator_obj()
{
}

void MethodActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodActuator);
	HX_MARK_MEMBER_NAME(currentParameters,"currentParameters");
	HX_MARK_MEMBER_NAME(tweenProperties,"tweenProperties");
	 ::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MethodActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentParameters,"currentParameters");
	HX_VISIT_MEMBER_NAME(tweenProperties,"tweenProperties");
	 ::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MethodActuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return ::hx::Val( complete_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { return ::hx::Val( tweenProperties ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { return ::hx::Val( currentParameters ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MethodActuator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { tweenProperties=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { currentParameters=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentParameters",43,40,b4,28));
	outFields->push(HX_("tweenProperties",3e,fe,5f,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MethodActuator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(MethodActuator_obj,currentParameters),HX_("currentParameters",43,40,b4,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MethodActuator_obj,tweenProperties),HX_("tweenProperties",3e,fe,5f,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MethodActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String MethodActuator_obj_sMemberFields[] = {
	HX_("currentParameters",43,40,b4,28),
	HX_("tweenProperties",3e,fe,5f,2d),
	HX_("apply",6e,85,3b,24),
	HX_("complete",b9,00,c8,7f),
	HX_("initialize",50,31,bb,ec),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MethodActuator_obj::__mClass;

void MethodActuator_obj::__register()
{
	MethodActuator_obj _hx_dummy;
	MethodActuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.MethodActuator",66,4b,32,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MethodActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MethodActuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MethodActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MethodActuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
