#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MotionPathActuator
#include <motion/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyPathDetails
#include <motion/actuators/PropertyPathDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_91b3767a2d76c900_12_new,"motion.actuators.MotionPathActuator","new",0x45f2d072,"motion.actuators.MotionPathActuator.new","motion/actuators/MotionPathActuator.hx",12,0x51ab64bc)
HX_LOCAL_STACK_FRAME(_hx_pos_91b3767a2d76c900_19_apply,"motion.actuators.MotionPathActuator","apply",0x4fa82e00,"motion.actuators.MotionPathActuator.apply","motion/actuators/MotionPathActuator.hx",19,0x51ab64bc)
HX_LOCAL_STACK_FRAME(_hx_pos_91b3767a2d76c900_44_initialize,"motion.actuators.MotionPathActuator","initialize",0x2e88377e,"motion.actuators.MotionPathActuator.initialize","motion/actuators/MotionPathActuator.hx",44,0x51ab64bc)
HX_LOCAL_STACK_FRAME(_hx_pos_91b3767a2d76c900_91_update,"motion.actuators.MotionPathActuator","update",0x5aac5d37,"motion.actuators.MotionPathActuator.update","motion/actuators/MotionPathActuator.hx",91,0x51ab64bc)
namespace motion{
namespace actuators{

void MotionPathActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_91b3767a2d76c900_12_new)
HXDLIN(  12)		super::__construct(target,duration,properties);
            	}

Dynamic MotionPathActuator_obj::__CreateEmpty() { return new MotionPathActuator_obj; }

void *MotionPathActuator_obj::_hx_vtable = 0;

Dynamic MotionPathActuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MotionPathActuator_obj > _hx_result = new MotionPathActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MotionPathActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e532574) {
		if (inClassId<=(int)0x05603dab) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x05603dab;
		} else {
			return inClassId==(int)0x0e532574;
		}
	} else {
		return inClassId==(int)0x172f0ab4;
	}
}

void MotionPathActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_91b3767a2d76c900_19_apply)
HXDLIN(  19)		int _g = 0;
HXDLIN(  19)		::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  19)		while((_g < _g1->length)){
HXDLIN(  19)			::String propertyName = _g1->__get(_g);
HXDLIN(  19)			_g = (_g + 1);
HXLINE(  23)			if (::Reflect_obj::hasField(this->target,propertyName)) {
HXLINE(  25)				 ::Dynamic _hx_tmp = this->target;
HXDLIN(  25)				::Reflect_obj::setField(_hx_tmp,propertyName,::motion::IComponentPath_obj::get_end( ::hx::interface_check(::Reflect_obj::field(this->properties,propertyName),0xe9f30fef)));
            			}
            			else {
HXLINE(  29)				 ::Dynamic _hx_tmp = this->target;
HXDLIN(  29)				::Reflect_obj::setProperty(_hx_tmp,propertyName,::motion::IComponentPath_obj::get_end( ::hx::interface_check(::Reflect_obj::field(this->properties,propertyName),0xe9f30fef)));
            			}
            		}
            	}


void MotionPathActuator_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_91b3767a2d76c900_44_initialize)
HXLINE(  46)		 ::motion::actuators::PropertyPathDetails details;
HXLINE(  47)		::Dynamic path;
HXLINE(  49)		{
HXLINE(  49)			int _g = 0;
HXDLIN(  49)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  49)			while((_g < _g1->length)){
HXLINE(  49)				::String propertyName = _g1->__get(_g);
HXDLIN(  49)				_g = (_g + 1);
HXLINE(  51)				path =  ::hx::interface_check(::Reflect_obj::field(this->properties,propertyName),0xe9f30fef);
HXLINE(  53)				if (::hx::IsNotNull( path )) {
HXLINE(  55)					bool isField = true;
HXLINE(  59)					if (::Reflect_obj::hasField(this->target,propertyName)) {
HXLINE(  61)						::motion::IComponentPath_obj::set_start(path,::Reflect_obj::field(this->target,propertyName));
            					}
            					else {
HXLINE(  65)						isField = false;
HXLINE(  66)						::motion::IComponentPath_obj::set_start(path,::Reflect_obj::getProperty(this->target,propertyName));
            					}
HXLINE(  76)					details =  ::motion::actuators::PropertyPathDetails_obj::__alloc( HX_CTX ,this->target,propertyName,path,isField);
HXLINE(  77)					this->propertyDetails->push(details);
            				}
            			}
            		}
HXLINE(  83)		this->detailsLength = this->propertyDetails->length;
HXLINE(  84)		this->initialized = true;
            	}


void MotionPathActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_91b3767a2d76c900_91_update)
HXDLIN(  91)		if (!(this->paused)) {
HXLINE(  93)			 ::motion::actuators::PropertyPathDetails details;
HXLINE(  94)			Float easing;
HXLINE(  96)			Float tweenPosition = ((currentTime - this->timeOffset) / this->duration);
HXLINE(  98)			if ((tweenPosition > 1)) {
HXLINE( 100)				tweenPosition = ( (Float)(1) );
            			}
HXLINE( 104)			if (!(this->initialized)) {
HXLINE( 106)				this->initialize();
            			}
HXLINE( 110)			if (!(this->special)) {
HXLINE( 112)				easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
HXLINE( 114)				{
HXLINE( 114)					int _g = 0;
HXDLIN( 114)					::Array< ::Dynamic> _g1 = this->propertyDetails;
HXDLIN( 114)					while((_g < _g1->length)){
HXLINE( 114)						 ::motion::actuators::PropertyDetails details = _g1->__get(_g).StaticCast<  ::motion::actuators::PropertyDetails >();
HXDLIN( 114)						_g = (_g + 1);
HXLINE( 116)						if (details->isField) {
HXLINE( 118)							 ::Dynamic details1 = details->target;
HXDLIN( 118)							::String details2 = details->propertyName;
HXDLIN( 118)							::Reflect_obj::setField(details1,details2,::motion::IComponentPath_obj::calculate(::hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing));
            						}
            						else {
HXLINE( 123)							 ::Dynamic details1 = details->target;
HXDLIN( 123)							::String details2 = details->propertyName;
HXDLIN( 123)							::Reflect_obj::setProperty(details1,details2,::motion::IComponentPath_obj::calculate(::hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing));
            						}
            					}
            				}
            			}
            			else {
HXLINE( 132)				if (!(this->_reverse)) {
HXLINE( 134)					easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
            				}
            				else {
HXLINE( 138)					easing = ::motion::easing::IEasing_obj::calculate(this->_ease,(( (Float)(1) ) - tweenPosition));
            				}
HXLINE( 142)				Float endValue;
HXLINE( 144)				{
HXLINE( 144)					int _g = 0;
HXDLIN( 144)					::Array< ::Dynamic> _g1 = this->propertyDetails;
HXDLIN( 144)					while((_g < _g1->length)){
HXLINE( 144)						 ::motion::actuators::PropertyDetails details = _g1->__get(_g).StaticCast<  ::motion::actuators::PropertyDetails >();
HXDLIN( 144)						_g = (_g + 1);
HXLINE( 146)						if (!(this->_snapping)) {
HXLINE( 148)							if (details->isField) {
HXLINE( 150)								 ::Dynamic details1 = details->target;
HXDLIN( 150)								::String details2 = details->propertyName;
HXDLIN( 150)								::Reflect_obj::setField(details1,details2,::motion::IComponentPath_obj::calculate(::hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing));
            							}
            							else {
HXLINE( 155)								 ::Dynamic details1 = details->target;
HXDLIN( 155)								::String details2 = details->propertyName;
HXDLIN( 155)								::Reflect_obj::setProperty(details1,details2,::motion::IComponentPath_obj::calculate(::hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing));
            							}
            						}
            						else {
HXLINE( 162)							if (details->isField) {
HXLINE( 164)								 ::Dynamic details1 = details->target;
HXDLIN( 164)								::String details2 = details->propertyName;
HXDLIN( 164)								::Reflect_obj::setField(details1,details2,::Math_obj::round(::motion::IComponentPath_obj::calculate(::hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing)));
            							}
            							else {
HXLINE( 169)								 ::Dynamic details1 = details->target;
HXDLIN( 169)								::String details2 = details->propertyName;
HXDLIN( 169)								::Reflect_obj::setProperty(details1,details2,::Math_obj::round(::motion::IComponentPath_obj::calculate(::hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing)));
            							}
            						}
            					}
            				}
            			}
HXLINE( 181)			if ((tweenPosition == 1)) {
HXLINE( 183)				if ((this->_repeat == 0)) {
HXLINE( 185)					this->active = false;
HXLINE( 187)					bool _hx_tmp;
HXDLIN( 187)					if (this->toggleVisible) {
HXLINE( 187)						 ::Dynamic target = this->target;
HXDLIN( 187)						 ::Dynamic value = null();
HXDLIN( 187)						if (::Reflect_obj::hasField(target,HX_("alpha",5e,a7,96,21))) {
HXLINE( 187)							value = ::Reflect_obj::field(target,HX_("alpha",5e,a7,96,21));
            						}
            						else {
HXLINE( 187)							value = ::Reflect_obj::getProperty(target,HX_("alpha",5e,a7,96,21));
            						}
HXDLIN( 187)						_hx_tmp = ::hx::IsEq( value,0 );
            					}
            					else {
HXLINE( 187)						_hx_tmp = false;
            					}
HXDLIN( 187)					if (_hx_tmp) {
HXLINE( 189)						 ::Dynamic target = this->target;
HXDLIN( 189)						 ::Dynamic value = false;
HXDLIN( 189)						if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 189)							::Reflect_obj::setField(target,HX_("visible",72,78,24,a3),value);
            						}
            						else {
HXLINE( 189)							::Reflect_obj::setProperty(target,HX_("visible",72,78,24,a3),value);
            						}
            					}
HXLINE( 193)					this->complete(true);
HXLINE( 194)					return;
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( this->_onRepeat )) {
HXLINE( 200)						 ::Dynamic method = this->_onRepeat;
HXDLIN( 200)						::cpp::VirtualArray params = this->_onRepeatParams;
HXDLIN( 200)						if (::hx::IsNull( params )) {
HXLINE( 200)							params = ::cpp::VirtualArray_obj::__new(0);
            						}
HXDLIN( 200)						::Reflect_obj::callMethod(method,method,params);
            					}
HXLINE( 204)					if (this->_reflect) {
HXLINE( 206)						this->_reverse = !(this->_reverse);
            					}
HXLINE( 210)					this->startTime = currentTime;
HXLINE( 211)					this->timeOffset = (this->startTime + this->_delay);
HXLINE( 213)					if ((this->_repeat > 0)) {
HXLINE( 215)						this->_repeat--;
            					}
            				}
            			}
HXLINE( 223)			if (this->sendChange) {
HXLINE( 225)				this->change();
            			}
            		}
            	}



::hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	::hx::ObjectPtr< MotionPathActuator_obj > __this = new MotionPathActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

::hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	MotionPathActuator_obj *__this = (MotionPathActuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MotionPathActuator_obj), true, "motion.actuators.MotionPathActuator"));
	*(void **)__this = MotionPathActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

MotionPathActuator_obj::MotionPathActuator_obj()
{
}

::hx::Val MotionPathActuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MotionPathActuator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MotionPathActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String MotionPathActuator_obj_sMemberFields[] = {
	HX_("apply",6e,85,3b,24),
	HX_("initialize",50,31,bb,ec),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MotionPathActuator_obj::__mClass;

void MotionPathActuator_obj::__register()
{
	MotionPathActuator_obj _hx_dummy;
	MotionPathActuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.MotionPathActuator",80,6f,09,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MotionPathActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MotionPathActuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MotionPathActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MotionPathActuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
