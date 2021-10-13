#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
namespace openfl{
namespace display{
namespace _internal{

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::BEGIN_BITMAP_FILL;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::BEGIN_FILL;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::BEGIN_GRADIENT_FILL;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::BEGIN_SHADER_FILL;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::CUBIC_CURVE_TO;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::CURVE_TO;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::DRAW_CIRCLE;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::DRAW_ELLIPSE;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::DRAW_QUADS;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::DRAW_RECT;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::DRAW_ROUND_RECT;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::DRAW_TILES;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::DRAW_TRIANGLES;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::END_FILL;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::LINE_BITMAP_STYLE;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::LINE_GRADIENT_STYLE;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::LINE_STYLE;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::LINE_TO;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::MOVE_TO;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::OVERRIDE_BLEND_MODE;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::OVERRIDE_MATRIX;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::UNKNOWN;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::WINDING_EVEN_ODD;

::openfl::display::_internal::DrawCommandType DrawCommandType_obj::WINDING_NON_ZERO;

bool DrawCommandType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) { outValue = DrawCommandType_obj::BEGIN_BITMAP_FILL; return true; }
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) { outValue = DrawCommandType_obj::BEGIN_FILL; return true; }
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) { outValue = DrawCommandType_obj::BEGIN_GRADIENT_FILL; return true; }
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) { outValue = DrawCommandType_obj::BEGIN_SHADER_FILL; return true; }
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) { outValue = DrawCommandType_obj::CUBIC_CURVE_TO; return true; }
	if (inName==HX_("CURVE_TO",6b,de,71,42)) { outValue = DrawCommandType_obj::CURVE_TO; return true; }
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) { outValue = DrawCommandType_obj::DRAW_CIRCLE; return true; }
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) { outValue = DrawCommandType_obj::DRAW_ELLIPSE; return true; }
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) { outValue = DrawCommandType_obj::DRAW_QUADS; return true; }
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) { outValue = DrawCommandType_obj::DRAW_RECT; return true; }
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) { outValue = DrawCommandType_obj::DRAW_ROUND_RECT; return true; }
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) { outValue = DrawCommandType_obj::DRAW_TILES; return true; }
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) { outValue = DrawCommandType_obj::DRAW_TRIANGLES; return true; }
	if (inName==HX_("END_FILL",c7,2c,f5,27)) { outValue = DrawCommandType_obj::END_FILL; return true; }
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) { outValue = DrawCommandType_obj::LINE_BITMAP_STYLE; return true; }
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) { outValue = DrawCommandType_obj::LINE_GRADIENT_STYLE; return true; }
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) { outValue = DrawCommandType_obj::LINE_STYLE; return true; }
	if (inName==HX_("LINE_TO",26,f0,91,9f)) { outValue = DrawCommandType_obj::LINE_TO; return true; }
	if (inName==HX_("MOVE_TO",29,35,80,ca)) { outValue = DrawCommandType_obj::MOVE_TO; return true; }
	if (inName==HX_("OVERRIDE_BLEND_MODE",c4,2b,82,83)) { outValue = DrawCommandType_obj::OVERRIDE_BLEND_MODE; return true; }
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) { outValue = DrawCommandType_obj::OVERRIDE_MATRIX; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = DrawCommandType_obj::UNKNOWN; return true; }
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) { outValue = DrawCommandType_obj::WINDING_EVEN_ODD; return true; }
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) { outValue = DrawCommandType_obj::WINDING_NON_ZERO; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DrawCommandType_obj)

int DrawCommandType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) return 0;
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) return 1;
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) return 2;
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) return 3;
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) return 4;
	if (inName==HX_("CURVE_TO",6b,de,71,42)) return 5;
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) return 6;
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) return 7;
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) return 8;
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) return 9;
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) return 10;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return 11;
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) return 12;
	if (inName==HX_("END_FILL",c7,2c,f5,27)) return 13;
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) return 14;
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) return 15;
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) return 16;
	if (inName==HX_("LINE_TO",26,f0,91,9f)) return 17;
	if (inName==HX_("MOVE_TO",29,35,80,ca)) return 18;
	if (inName==HX_("OVERRIDE_BLEND_MODE",c4,2b,82,83)) return 19;
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) return 20;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 23;
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) return 21;
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) return 22;
	return super::__FindIndex(inName);
}

int DrawCommandType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) return 0;
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) return 0;
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) return 0;
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) return 0;
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) return 0;
	if (inName==HX_("CURVE_TO",6b,de,71,42)) return 0;
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) return 0;
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) return 0;
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) return 0;
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) return 0;
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) return 0;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return 0;
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) return 0;
	if (inName==HX_("END_FILL",c7,2c,f5,27)) return 0;
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) return 0;
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) return 0;
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) return 0;
	if (inName==HX_("LINE_TO",26,f0,91,9f)) return 0;
	if (inName==HX_("MOVE_TO",29,35,80,ca)) return 0;
	if (inName==HX_("OVERRIDE_BLEND_MODE",c4,2b,82,83)) return 0;
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) return 0;
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DrawCommandType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) return BEGIN_BITMAP_FILL;
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) return BEGIN_FILL;
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) return BEGIN_GRADIENT_FILL;
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) return BEGIN_SHADER_FILL;
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) return CUBIC_CURVE_TO;
	if (inName==HX_("CURVE_TO",6b,de,71,42)) return CURVE_TO;
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) return DRAW_CIRCLE;
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) return DRAW_ELLIPSE;
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) return DRAW_QUADS;
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) return DRAW_RECT;
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) return DRAW_ROUND_RECT;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return DRAW_TILES;
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) return DRAW_TRIANGLES;
	if (inName==HX_("END_FILL",c7,2c,f5,27)) return END_FILL;
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) return LINE_BITMAP_STYLE;
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) return LINE_GRADIENT_STYLE;
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) return LINE_STYLE;
	if (inName==HX_("LINE_TO",26,f0,91,9f)) return LINE_TO;
	if (inName==HX_("MOVE_TO",29,35,80,ca)) return MOVE_TO;
	if (inName==HX_("OVERRIDE_BLEND_MODE",c4,2b,82,83)) return OVERRIDE_BLEND_MODE;
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) return OVERRIDE_MATRIX;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) return WINDING_EVEN_ODD;
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) return WINDING_NON_ZERO;
	return super::__Field(inName,inCallProp);
}

static ::String DrawCommandType_obj_sStaticFields[] = {
	HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5),
	HX_("BEGIN_FILL",b9,8f,44,38),
	HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec),
	HX_("BEGIN_SHADER_FILL",a7,fa,97,6c),
	HX_("CUBIC_CURVE_TO",60,8b,92,ac),
	HX_("CURVE_TO",6b,de,71,42),
	HX_("DRAW_CIRCLE",2b,84,66,49),
	HX_("DRAW_ELLIPSE",43,06,1d,06),
	HX_("DRAW_QUADS",f1,c3,72,24),
	HX_("DRAW_RECT",7f,2e,c1,9b),
	HX_("DRAW_ROUND_RECT",b0,a9,34,42),
	HX_("DRAW_TILES",aa,4b,c0,d6),
	HX_("DRAW_TRIANGLES",50,bd,1f,61),
	HX_("END_FILL",c7,2c,f5,27),
	HX_("LINE_BITMAP_STYLE",ec,c7,38,2d),
	HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1),
	HX_("LINE_STYLE",46,73,8d,dd),
	HX_("LINE_TO",26,f0,91,9f),
	HX_("MOVE_TO",29,35,80,ca),
	HX_("OVERRIDE_BLEND_MODE",c4,2b,82,83),
	HX_("OVERRIDE_MATRIX",14,63,08,a8),
	HX_("WINDING_EVEN_ODD",cf,a9,5e,c6),
	HX_("WINDING_NON_ZERO",1f,ee,be,05),
	HX_("UNKNOWN",6a,f7,4e,61),
	::String(null())
};

::hx::Class DrawCommandType_obj::__mClass;

Dynamic __Create_DrawCommandType_obj() { return new DrawCommandType_obj; }

void DrawCommandType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("openfl.display._internal.DrawCommandType",85,10,25,e2), ::hx::TCanCast< DrawCommandType_obj >,DrawCommandType_obj_sStaticFields,0,
	&__Create_DrawCommandType_obj, &__Create,
	&super::__SGetClass(), &CreateDrawCommandType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DrawCommandType_obj::__GetStatic;
}

void DrawCommandType_obj::__boot()
{
BEGIN_BITMAP_FILL = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5),0);
BEGIN_FILL = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("BEGIN_FILL",b9,8f,44,38),1);
BEGIN_GRADIENT_FILL = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec),2);
BEGIN_SHADER_FILL = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("BEGIN_SHADER_FILL",a7,fa,97,6c),3);
CUBIC_CURVE_TO = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("CUBIC_CURVE_TO",60,8b,92,ac),4);
CURVE_TO = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("CURVE_TO",6b,de,71,42),5);
DRAW_CIRCLE = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("DRAW_CIRCLE",2b,84,66,49),6);
DRAW_ELLIPSE = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("DRAW_ELLIPSE",43,06,1d,06),7);
DRAW_QUADS = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("DRAW_QUADS",f1,c3,72,24),8);
DRAW_RECT = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("DRAW_RECT",7f,2e,c1,9b),9);
DRAW_ROUND_RECT = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("DRAW_ROUND_RECT",b0,a9,34,42),10);
DRAW_TILES = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("DRAW_TILES",aa,4b,c0,d6),11);
DRAW_TRIANGLES = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("DRAW_TRIANGLES",50,bd,1f,61),12);
END_FILL = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("END_FILL",c7,2c,f5,27),13);
LINE_BITMAP_STYLE = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("LINE_BITMAP_STYLE",ec,c7,38,2d),14);
LINE_GRADIENT_STYLE = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1),15);
LINE_STYLE = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("LINE_STYLE",46,73,8d,dd),16);
LINE_TO = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("LINE_TO",26,f0,91,9f),17);
MOVE_TO = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("MOVE_TO",29,35,80,ca),18);
OVERRIDE_BLEND_MODE = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("OVERRIDE_BLEND_MODE",c4,2b,82,83),19);
OVERRIDE_MATRIX = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("OVERRIDE_MATRIX",14,63,08,a8),20);
UNKNOWN = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("UNKNOWN",6a,f7,4e,61),23);
WINDING_EVEN_ODD = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("WINDING_EVEN_ODD",cf,a9,5e,c6),21);
WINDING_NON_ZERO = ::hx::CreateConstEnum< DrawCommandType_obj >(HX_("WINDING_NON_ZERO",1f,ee,be,05),22);
}


} // end namespace openfl
} // end namespace display
} // end namespace _internal
