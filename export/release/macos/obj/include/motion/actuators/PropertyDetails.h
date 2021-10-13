#ifndef INCLUDED_motion_actuators_PropertyDetails
#define INCLUDED_motion_actuators_PropertyDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f17cd0c0b4409b77_14_new)
HX_DECLARE_CLASS2(motion,actuators,PropertyDetails)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES PropertyDetails_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PropertyDetails_obj OBJ_;
		PropertyDetails_obj();

	public:
		enum { _hx_ClassId = 0x33e9fecd };

		void __construct( ::Dynamic target,::String propertyName,Float start,Float change,::hx::Null< bool >  __o_isField);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.actuators.PropertyDetails")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion.actuators.PropertyDetails"); }

		inline static ::hx::ObjectPtr< PropertyDetails_obj > __new( ::Dynamic target,::String propertyName,Float start,Float change,::hx::Null< bool >  __o_isField) {
			::hx::ObjectPtr< PropertyDetails_obj > __this = new PropertyDetails_obj();
			__this->__construct(target,propertyName,start,change,__o_isField);
			return __this;
		}

		inline static ::hx::ObjectPtr< PropertyDetails_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,::String propertyName,Float start,Float change,::hx::Null< bool >  __o_isField) {
			PropertyDetails_obj *__this = (PropertyDetails_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyDetails_obj), true, "motion.actuators.PropertyDetails"));
			*(void **)__this = PropertyDetails_obj::_hx_vtable;
{
            		bool isField = __o_isField.Default(true);
            	HX_STACKFRAME(&_hx_pos_f17cd0c0b4409b77_14_new)
HXLINE(  16)		( ( ::motion::actuators::PropertyDetails)(__this) )->target = target;
HXLINE(  17)		( ( ::motion::actuators::PropertyDetails)(__this) )->propertyName = propertyName;
HXLINE(  18)		( ( ::motion::actuators::PropertyDetails)(__this) )->start = start;
HXLINE(  19)		( ( ::motion::actuators::PropertyDetails)(__this) )->change = change;
HXLINE(  20)		( ( ::motion::actuators::PropertyDetails)(__this) )->isField = isField;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyDetails_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyDetails",cd,a8,d4,d1); }

		Float change;
		bool isField;
		::String propertyName;
		Float start;
		 ::Dynamic target;
};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_PropertyDetails */ 
