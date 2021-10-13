#ifndef INCLUDED_haxe_crypto_BaseCode
#define INCLUDED_haxe_crypto_BaseCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,BaseCode)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES BaseCode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BaseCode_obj OBJ_;
		BaseCode_obj();

	public:
		enum { _hx_ClassId = 0x34980465 };

		void __construct( ::haxe::io::Bytes base);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.crypto.BaseCode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.crypto.BaseCode"); }
		static ::hx::ObjectPtr< BaseCode_obj > __new( ::haxe::io::Bytes base);
		static ::hx::ObjectPtr< BaseCode_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes base);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseCode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseCode",fe,5d,c4,cf); }

		 ::haxe::io::Bytes base;
		int nbits;
		::Array< int > tbl;
		 ::haxe::io::Bytes encodeBytes( ::haxe::io::Bytes b);
		::Dynamic encodeBytes_dyn();

		void initTable();
		::Dynamic initTable_dyn();

		 ::haxe::io::Bytes decodeBytes( ::haxe::io::Bytes b);
		::Dynamic decodeBytes_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_BaseCode */ 
