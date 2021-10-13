#ifndef INCLUDED_polymod_format_EndLineType
#define INCLUDED_polymod_format_EndLineType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(polymod,format,EndLineType)
namespace polymod{
namespace format{


class EndLineType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef EndLineType_obj OBJ_;

	public:
		EndLineType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("polymod.format.EndLineType",6a,c9,1c,17); }
		::String __ToString() const { return HX_("EndLineType.",65,c8,da,38) + _hx_tag; }

		static ::polymod::format::EndLineType ANY;
		static inline ::polymod::format::EndLineType ANY_dyn() { return ANY; }
		static ::polymod::format::EndLineType CR;
		static inline ::polymod::format::EndLineType CR_dyn() { return CR; }
		static ::polymod::format::EndLineType CRLF;
		static inline ::polymod::format::EndLineType CRLF_dyn() { return CRLF; }
		static ::polymod::format::EndLineType LF;
		static inline ::polymod::format::EndLineType LF_dyn() { return LF; }
};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_EndLineType */ 
