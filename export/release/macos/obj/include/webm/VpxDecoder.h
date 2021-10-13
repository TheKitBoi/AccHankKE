#ifndef INCLUDED_webm_VpxDecoder
#define INCLUDED_webm_VpxDecoder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS1(webm,VpxDecoder)

namespace webm{


class HXCPP_CLASS_ATTRIBUTES VpxDecoder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VpxDecoder_obj OBJ_;
		VpxDecoder_obj();

	public:
		enum { _hx_ClassId = 0x7ad4db43 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="webm.VpxDecoder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"webm.VpxDecoder"); }
		static ::hx::ObjectPtr< VpxDecoder_obj > __new();
		static ::hx::ObjectPtr< VpxDecoder_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VpxDecoder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VpxDecoder",46,07,5d,6a); }

		static void __boot();
		static ::String version;
		static ::String get_version();
		static ::Dynamic get_version_dyn();

		static  ::Dynamic hx_vpx_codec_iface_name;
		static Dynamic hx_vpx_codec_iface_name_dyn() { return hx_vpx_codec_iface_name;}
		static  ::Dynamic hx_vpx_codec_dec_init;
		static Dynamic hx_vpx_codec_dec_init_dyn() { return hx_vpx_codec_dec_init;}
		static  ::Dynamic hx_vpx_codec_decode;
		static Dynamic hx_vpx_codec_decode_dyn() { return hx_vpx_codec_decode;}
		static  ::Dynamic hx_vpx_codec_get_frame;
		static Dynamic hx_vpx_codec_get_frame_dyn() { return hx_vpx_codec_get_frame;}
		 ::Dynamic context;
		void decode(::Array< unsigned char > data);
		::Dynamic decode_dyn();

		void getAndRenderFrame( ::openfl::display::BitmapData bitmapData);
		::Dynamic getAndRenderFrame_dyn();

};

} // end namespace webm

#endif /* INCLUDED_webm_VpxDecoder */ 
