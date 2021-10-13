#ifndef INCLUDED_motion__Actuate_TransformOptions
#define INCLUDED_motion__Actuate_TransformOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,_Actuate,TransformOptions)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)

namespace motion{
namespace _Actuate{


class HXCPP_CLASS_ATTRIBUTES TransformOptions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TransformOptions_obj OBJ_;
		TransformOptions_obj();

	public:
		enum { _hx_ClassId = 0x1cdaa958 };

		void __construct( ::Dynamic target,Float duration,bool overwrite);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion._Actuate.TransformOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion._Actuate.TransformOptions"); }
		static ::hx::ObjectPtr< TransformOptions_obj > __new( ::Dynamic target,Float duration,bool overwrite);
		static ::hx::ObjectPtr< TransformOptions_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration,bool overwrite);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TransformOptions_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TransformOptions",72,cf,6e,a9); }

		Float duration;
		bool overwrite;
		 ::Dynamic target;
		::Dynamic color(::hx::Null< int >  value,::hx::Null< Float >  strength, ::Dynamic alpha);
		::Dynamic color_dyn();

		::Dynamic sound( ::Dynamic volume, ::Dynamic pan);
		::Dynamic sound_dyn();

};

} // end namespace motion
} // end namespace _Actuate

#endif /* INCLUDED_motion__Actuate_TransformOptions */ 
