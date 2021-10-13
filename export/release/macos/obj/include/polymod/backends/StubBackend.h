#ifndef INCLUDED_polymod_backends_StubBackend
#define INCLUDED_polymod_backends_StubBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,PolymodAssetLibrary)
HX_DECLARE_CLASS2(polymod,backends,StubBackend)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES StubBackend_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StubBackend_obj OBJ_;
		StubBackend_obj();

	public:
		enum { _hx_ClassId = 0x66589f31 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.StubBackend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.StubBackend"); }
		static ::hx::ObjectPtr< StubBackend_obj > __new();
		static ::hx::ObjectPtr< StubBackend_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StubBackend_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("StubBackend",66,a8,58,00); }

		 ::polymod::backends::PolymodAssetLibrary polymodLibrary;
		void init( ::Dynamic params);
		::Dynamic init_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void clearCache();
		::Dynamic clearCache_dyn();

		bool exists(::String id);
		::Dynamic exists_dyn();

		 ::haxe::io::Bytes getBytes(::String id);
		::Dynamic getBytes_dyn();

		::String getText(::String id);
		::Dynamic getText_dyn();

		::String getPath(::String id);
		::Dynamic getPath_dyn();

		::Array< ::String > list(::String type);
		::Dynamic list_dyn();

		::String stripAssetsPrefix(::String id);
		::Dynamic stripAssetsPrefix_dyn();

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_StubBackend */ 
