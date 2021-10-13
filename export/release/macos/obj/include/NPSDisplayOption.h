#ifndef INCLUDED_NPSDisplayOption
#define INCLUDED_NPSDisplayOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(NPSDisplayOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES NPSDisplayOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef NPSDisplayOption_obj OBJ_;
		NPSDisplayOption_obj();

	public:
		enum { _hx_ClassId = 0x68300d86 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NPSDisplayOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NPSDisplayOption"); }
		static ::hx::ObjectPtr< NPSDisplayOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< NPSDisplayOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NPSDisplayOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NPSDisplayOption",c6,5a,4e,92); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_NPSDisplayOption */ 
