#ifndef INCLUDED_CpuStrums
#define INCLUDED_CpuStrums

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(CpuStrums)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES CpuStrums_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef CpuStrums_obj OBJ_;
		CpuStrums_obj();

	public:
		enum { _hx_ClassId = 0x45a0db72 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CpuStrums")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CpuStrums"); }
		static ::hx::ObjectPtr< CpuStrums_obj > __new(::String desc);
		static ::hx::ObjectPtr< CpuStrums_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CpuStrums_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CpuStrums",32,66,5d,82); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_CpuStrums */ 