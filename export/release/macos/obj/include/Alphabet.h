#ifndef INCLUDED_Alphabet
#define INCLUDED_Alphabet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(AlphaCharacter)
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(haxe,ds,List)



class HXCPP_CLASS_ATTRIBUTES Alphabet_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef Alphabet_obj OBJ_;
		Alphabet_obj();

	public:
		enum { _hx_ClassId = 0x567b2b93 };

		void __construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed,::hx::Null< bool >  __o_shouldMove);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Alphabet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Alphabet"); }
		static ::hx::ObjectPtr< Alphabet_obj > __new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed,::hx::Null< bool >  __o_shouldMove);
		static ::hx::ObjectPtr< Alphabet_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed,::hx::Null< bool >  __o_shouldMove);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Alphabet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Alphabet",d3,38,ea,fa); }

		Float delay;
		bool paused;
		Float targetY;
		bool isMenuItem;
		::String text;
		::String _finalText;
		::String _curText;
		Float widthOfWords;
		Float yMulti;
		 ::AlphaCharacter lastSprite;
		bool xPosResetted;
		bool lastWasSpace;
		 ::haxe::ds::List listOAlphabets;
		::Array< ::String > splitWords;
		bool isBold;
		Float pastX;
		Float pastY;
		void reType(::String text);
		::Dynamic reType_dyn();

		void addText();
		::Dynamic addText_dyn();

		void doSplitWords();
		::Dynamic doSplitWords_dyn();

		::String personTalking;
		void startTypedText();
		::Dynamic startTypedText_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_Alphabet */ 
