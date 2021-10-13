#ifndef INCLUDED_flixel_addons_ui_BorderDef
#define INCLUDED_flixel_addons_ui_BorderDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,text,FlxTextBorderStyle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES BorderDef_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BorderDef_obj OBJ_;
		BorderDef_obj();

	public:
		enum { _hx_ClassId = 0x7fa6170e };

		void __construct( ::flixel::text::FlxTextBorderStyle Style,int Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.BorderDef")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.BorderDef"); }
		static ::hx::ObjectPtr< BorderDef_obj > __new( ::flixel::text::FlxTextBorderStyle Style,int Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality);
		static ::hx::ObjectPtr< BorderDef_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::text::FlxTextBorderStyle Style,int Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BorderDef_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BorderDef",19,60,62,22); }

		static  ::flixel::addons::ui::BorderDef fromXML( ::Xml data);
		static ::Dynamic fromXML_dyn();

		 ::flixel::text::FlxTextBorderStyle style;
		int color;
		Float size;
		Float quality;
		 ::flixel::addons::ui::BorderDef clone();
		::Dynamic clone_dyn();

		 ::flixel::text::FlxText apply( ::flixel::text::FlxText f);
		::Dynamic apply_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_BorderDef */ 
