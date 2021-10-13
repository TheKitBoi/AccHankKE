#ifndef INCLUDED_flixel_addons_ui_FontDef
#define INCLUDED_flixel_addons_ui_FontDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FontDef_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontDef_obj OBJ_;
		FontDef_obj();

	public:
		enum { _hx_ClassId = 0x19e19493 };

		void __construct(::String Name,::String __o_Extension,::String __o_File, ::openfl::text::TextFormat Format, ::flixel::addons::ui::BorderDef Border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FontDef")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FontDef"); }
		static ::hx::ObjectPtr< FontDef_obj > __new(::String Name,::String __o_Extension,::String __o_File, ::openfl::text::TextFormat Format, ::flixel::addons::ui::BorderDef Border);
		static ::hx::ObjectPtr< FontDef_obj > __alloc(::hx::Ctx *_hx_ctx,::String Name,::String __o_Extension,::String __o_File, ::openfl::text::TextFormat Format, ::flixel::addons::ui::BorderDef Border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontDef_obj();

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
		::String __ToString() const { return HX_("FontDef",16,07,70,63); }

		static void __boot();
		static ::Array< ::String > EXTENSIONS;
		static  ::flixel::addons::ui::FontDef copyFromTextField( ::openfl::text::TextField t);
		static ::Dynamic copyFromTextField_dyn();

		static  ::flixel::addons::ui::FontDef copyFromFlxText( ::flixel::text::FlxText t);
		static ::Dynamic copyFromFlxText_dyn();

		static  ::flixel::addons::ui::FontDef fromXML( ::Xml data);
		static ::Dynamic fromXML_dyn();

		::String name;
		::String extension;
		::String file;
		 ::openfl::text::TextFormat format;
		 ::flixel::addons::ui::BorderDef border;
		int get_size();
		::Dynamic get_size_dyn();

		int set_size(int i);
		::Dynamic set_size_dyn();

		 ::flixel::addons::ui::FontDef clone();
		::Dynamic clone_dyn();

		 ::openfl::text::TextField applyTxt( ::openfl::text::TextField textField);
		::Dynamic applyTxt_dyn();

		 ::flixel::text::FlxText applyFlx( ::flixel::text::FlxText flxText);
		::Dynamic applyFlx_dyn();

		void apply( ::openfl::text::TextField textField, ::flixel::text::FlxText flxText);
		::Dynamic apply_dyn();

		void fromStr(::String str,::hx::Null< int >  recursion);
		::Dynamic fromStr_dyn();

		int _size;
		::String stripFontExtensions(::String str);
		::Dynamic stripFontExtensions_dyn();

		::String getFontExtension(::String str);
		::Dynamic getFontExtension_dyn();

		void fixFontName();
		::Dynamic fixFontName_dyn();

		::String getFontStyle(::String str);
		::Dynamic getFontStyle_dyn();

		void setFontStyle(::String str);
		::Dynamic setFontStyle_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FontDef */ 
