#ifndef INCLUDED_ResultsScreen
#define INCLUDED_ResultsScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS0(HitGraph)
HX_DECLARE_CLASS0(OFLSprite)
HX_DECLARE_CLASS0(ResultsScreen)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES ResultsScreen_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef ResultsScreen_obj OBJ_;
		ResultsScreen_obj();

	public:
		enum { _hx_ClassId = 0x69a2ba76 };

		void __construct( ::Dynamic BGColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ResultsScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ResultsScreen"); }
		static ::hx::ObjectPtr< ResultsScreen_obj > __new( ::Dynamic BGColor);
		static ::hx::ObjectPtr< ResultsScreen_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ResultsScreen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ResultsScreen",e2,74,eb,20); }

		 ::flixel::FlxSprite background;
		 ::flixel::text::FlxText text;
		 ::flixel::FlxSprite anotherBackground;
		 ::HitGraph graph;
		 ::OFLSprite graphSprite;
		 ::flixel::text::FlxText comboText;
		 ::flixel::text::FlxText contText;
		 ::flixel::text::FlxText settingsText;
		 ::flixel::_hx_system::FlxSound music;
		 ::openfl::display::BitmapData graphData;
		::String ranking;
		::String accuracy;
		void create();

		int frames;
		void update(Float elapsed);

};


#endif /* INCLUDED_ResultsScreen */ 
