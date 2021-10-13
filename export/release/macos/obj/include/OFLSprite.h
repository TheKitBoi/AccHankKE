#ifndef INCLUDED_OFLSprite
#define INCLUDED_OFLSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(OFLSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES OFLSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef OFLSprite_obj OBJ_;
		OFLSprite_obj();

	public:
		enum { _hx_ClassId = 0x7ede7496 };

		void __construct( ::Dynamic x, ::Dynamic y,int width,int height, ::openfl::display::Sprite Sprite);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="OFLSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"OFLSprite"); }
		static ::hx::ObjectPtr< OFLSprite_obj > __new( ::Dynamic x, ::Dynamic y,int width,int height, ::openfl::display::Sprite Sprite);
		static ::hx::ObjectPtr< OFLSprite_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic x, ::Dynamic y,int width,int height, ::openfl::display::Sprite Sprite);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OFLSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OFLSprite",3a,2d,d4,0c); }

		 ::openfl::display::Sprite flSprite;
		int _frameCount;
		void update(Float elapsed);

		void updateDisplay();
		::Dynamic updateDisplay_dyn();

};


#endif /* INCLUDED_OFLSprite */ 
