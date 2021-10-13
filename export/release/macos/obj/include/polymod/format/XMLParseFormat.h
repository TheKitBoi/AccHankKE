#ifndef INCLUDED_polymod_format_XMLParseFormat
#define INCLUDED_polymod_format_XMLParseFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,TextFileFormat)
HX_DECLARE_CLASS2(polymod,format,XMLParseFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES XMLParseFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef XMLParseFormat_obj OBJ_;
		XMLParseFormat_obj();

	public:
		enum { _hx_ClassId = 0x7a35e140 };

		void __construct(::hx::Null< bool >  __o_prettyPrint,::Array< ::String > headers,::Array< ::String > footers);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.XMLParseFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.XMLParseFormat"); }
		static ::hx::ObjectPtr< XMLParseFormat_obj > __new(::hx::Null< bool >  __o_prettyPrint,::Array< ::String > headers,::Array< ::String > footers);
		static ::hx::ObjectPtr< XMLParseFormat_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_prettyPrint,::Array< ::String > headers,::Array< ::String > footers);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~XMLParseFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("XMLParseFormat",53,c7,4c,c8); }

		 ::polymod::format::TextFileFormat format;
		bool prettyPrint;
		::Array< ::String > stripHeaders;
		::Array< ::String > stripFooters;
		 ::Xml parse(::String str);
		::Dynamic parse_dyn();

		::String append(::String baseText,::String appendText,::String id);
		::Dynamic append_dyn();

		::String merge(::String baseText,::String mergeText,::String id);
		::Dynamic merge_dyn();

		::String print( ::Xml xml);
		::Dynamic print_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_XMLParseFormat */ 
