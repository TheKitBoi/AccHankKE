#ifndef INCLUDED_smTools_SMMeasure
#define INCLUDED_smTools_SMMeasure

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(smTools,SMMeasure)
HX_DECLARE_CLASS1(smTools,SMNote)

namespace smTools{


class HXCPP_CLASS_ATTRIBUTES SMMeasure_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SMMeasure_obj OBJ_;
		SMMeasure_obj();

	public:
		enum { _hx_ClassId = 0x16aaac63 };

		void __construct(::Array< ::String > measureData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="smTools.SMMeasure")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"smTools.SMMeasure"); }
		static ::hx::ObjectPtr< SMMeasure_obj > __new(::Array< ::String > measureData);
		static ::hx::ObjectPtr< SMMeasure_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::String > measureData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SMMeasure_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SMMeasure",e4,81,ac,a2); }

		::Array< ::Dynamic> notes;
		::Array< ::String > _measure;
};

} // end namespace smTools

#endif /* INCLUDED_smTools_SMMeasure */ 
