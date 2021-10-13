#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#define INCLUDED_flixel_graphics_frames_FlxTileFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace graphics{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES FlxTileFrames_obj : public  ::flixel::graphics::frames::FlxFramesCollection_obj
{
	public:
		typedef  ::flixel::graphics::frames::FlxFramesCollection_obj super;
		typedef FlxTileFrames_obj OBJ_;
		FlxTileFrames_obj();

	public:
		enum { _hx_ClassId = 0x05e81255 };

		void __construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.FlxTileFrames")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.FlxTileFrames"); }
		static ::hx::ObjectPtr< FlxTileFrames_obj > __new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border);
		static ::hx::ObjectPtr< FlxTileFrames_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTileFrames_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTileFrames",66,60,74,3f); }

		static  ::flixel::graphics::frames::FlxTileFrames fromBitmapAddSpacesAndBorders( ::Dynamic source, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder, ::flixel::math::FlxRect region);
		static ::Dynamic fromBitmapAddSpacesAndBorders_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder);
		static ::Dynamic fromFrameAddSpacesAndBorders_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames fromFrame( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing);
		static ::Dynamic fromFrame_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames fromFrames(::Array< ::Dynamic> Frames);
		static ::Dynamic fromFrames_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames fromAtlasByPrefix( ::flixel::graphics::frames::FlxAtlasFrames Frames,::String Prefix);
		static ::Dynamic fromAtlasByPrefix_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames fromGraphic( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::math::FlxPoint tileSpacing);
		static ::Dynamic fromGraphic_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames fromRectangle( ::Dynamic source, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::math::FlxPoint tileSpacing);
		static ::Dynamic fromRectangle_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames combineTileSets(::Array< ::Dynamic> bitmaps, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint spacing, ::flixel::math::FlxPoint border);
		static ::Dynamic combineTileSets_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames combineTileFrames(::Array< ::Dynamic> tileframes, ::flixel::math::FlxPoint spacing, ::flixel::math::FlxPoint border);
		static ::Dynamic combineTileFrames_dyn();

		static  ::flixel::graphics::frames::FlxTileFrames findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::graphics::frames::FlxFrame atlasFrame, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint border);
		static ::Dynamic findFrame_dyn();

		 ::flixel::graphics::frames::FlxFrame atlasFrame;
		 ::flixel::math::FlxRect region;
		 ::flixel::math::FlxPoint tileSize;
		 ::flixel::math::FlxPoint tileSpacing;
		int numRows;
		int numCols;
		 ::flixel::graphics::frames::FlxFrame getByTilePosition(int column,int row);
		::Dynamic getByTilePosition_dyn();

		bool equals( ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxRect region, ::flixel::graphics::frames::FlxFrame atlasFrame, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint border);
		::Dynamic equals_dyn();

		 ::flixel::graphics::frames::FlxFramesCollection addBorder( ::flixel::math::FlxPoint border);

		void destroy();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

#endif /* INCLUDED_flixel_graphics_frames_FlxTileFrames */ 
