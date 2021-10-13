#ifndef INCLUDED_CamZoomOption
#define INCLUDED_CamZoomOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(CamZoomOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES CamZoomOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef CamZoomOption_obj OBJ_;
		CamZoomOption_obj();

	public:
		enum { _hx_ClassId = 0x75f1412f };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CamZoomOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CamZoomOption"); }
		static ::hx::ObjectPtr< CamZoomOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< CamZoomOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CamZoomOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CamZoomOption",b7,0b,0a,fc); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_CamZoomOption */ 
