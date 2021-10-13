#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_22_new,"flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",22,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_51_onAssetsReload,"flixel.system.frontEnds.BitmapFrontEnd","onAssetsReload",0x7811d38e,"flixel.system.frontEnds.BitmapFrontEnd.onAssetsReload","flixel/system/frontEnds/BitmapFrontEnd.hx",51,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_67_onContext,"flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",67,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_84_dumpCache,"flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",84,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_101_undumpCache,"flixel.system.frontEnds.BitmapFrontEnd","undumpCache",0xfe6eed82,"flixel.system.frontEnds.BitmapFrontEnd.undumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",101,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_120_checkCache,"flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",120,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_135_create,"flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",135,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_150_add,"flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",150,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_171_addGraphic,"flixel.system.frontEnds.BitmapFrontEnd","addGraphic",0x72a9209a,"flixel.system.frontEnds.BitmapFrontEnd.addGraphic","flixel/system/frontEnds/BitmapFrontEnd.hx",171,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_183_get,"flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",183,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_193_findKeyForBitmap,"flixel.system.frontEnds.BitmapFrontEnd","findKeyForBitmap",0x03085a65,"flixel.system.frontEnds.BitmapFrontEnd.findKeyForBitmap","flixel/system/frontEnds/BitmapFrontEnd.hx",193,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_211_getKeyForClass,"flixel.system.frontEnds.BitmapFrontEnd","getKeyForClass",0x26696fcb,"flixel.system.frontEnds.BitmapFrontEnd.getKeyForClass","flixel/system/frontEnds/BitmapFrontEnd.hx",211,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_223_generateKey,"flixel.system.frontEnds.BitmapFrontEnd","generateKey",0xe3b3c7f7,"flixel.system.frontEnds.BitmapFrontEnd.generateKey","flixel/system/frontEnds/BitmapFrontEnd.hx",223,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_241_getUniqueKey,"flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",241,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_272_getKeyWithSpacesAndBorders,"flixel.system.frontEnds.BitmapFrontEnd","getKeyWithSpacesAndBorders",0x04327ebf,"flixel.system.frontEnds.BitmapFrontEnd.getKeyWithSpacesAndBorders","flixel/system/frontEnds/BitmapFrontEnd.hx",272,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_296_remove,"flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",296,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_309_removeByKey,"flixel.system.frontEnds.BitmapFrontEnd","removeByKey",0x593bffb1,"flixel.system.frontEnds.BitmapFrontEnd.removeByKey","flixel/system/frontEnds/BitmapFrontEnd.hx",309,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_321_removeIfNoUse,"flixel.system.frontEnds.BitmapFrontEnd","removeIfNoUse",0x6b036552,"flixel.system.frontEnds.BitmapFrontEnd.removeIfNoUse","flixel/system/frontEnds/BitmapFrontEnd.hx",321,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_330_clearCache,"flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",330,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_350_removeKey,"flixel.system.frontEnds.BitmapFrontEnd","removeKey",0xe84d3108,"flixel.system.frontEnds.BitmapFrontEnd.removeKey","flixel/system/frontEnds/BitmapFrontEnd.hx",350,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_361_reset,"flixel.system.frontEnds.BitmapFrontEnd","reset",0xd15ce89c,"flixel.system.frontEnds.BitmapFrontEnd.reset","flixel/system/frontEnds/BitmapFrontEnd.hx",361,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_384_clearUnused,"flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",384,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_397_get_maxTextureSize,"flixel.system.frontEnds.BitmapFrontEnd","get_maxTextureSize",0x8d42ecd4,"flixel.system.frontEnds.BitmapFrontEnd.get_maxTextureSize","flixel/system/frontEnds/BitmapFrontEnd.hx",397,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_402_get_whitePixel,"flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",402,0x91a05ae2)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void BitmapFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_22_new)
HXLINE(  42)		this->_lastUniqueKeyIndex = 0;
HXLINE(  46)		this->reset();
            	}

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return new BitmapFrontEnd_obj; }

void *BitmapFrontEnd_obj::_hx_vtable = 0;

Dynamic BitmapFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapFrontEnd_obj > _hx_result = new BitmapFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3df39a77;
}

void BitmapFrontEnd_obj::onAssetsReload( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_51_onAssetsReload)
HXDLIN(  51)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  51)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  51)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  53)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  54)			bool _hx_tmp;
HXDLIN(  54)			if (::hx::IsNotNull( obj )) {
HXLINE(  54)				if (::hx::IsNull( obj->assetsClass )) {
HXLINE(  54)					_hx_tmp = ::hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  54)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  54)				_hx_tmp = false;
            			}
HXDLIN(  54)			if (_hx_tmp) {
HXLINE(  56)				obj->onAssetsReload();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,onAssetsReload,(void))

void BitmapFrontEnd_obj::onContext(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_67_onContext)
HXDLIN(  67)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  67)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  67)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  69)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  70)			bool _hx_tmp;
HXDLIN(  70)			if (::hx::IsNotNull( obj )) {
HXLINE(  70)				_hx_tmp = obj->isDumped;
            			}
            			else {
HXLINE(  70)				_hx_tmp = false;
            			}
HXDLIN(  70)			if (_hx_tmp) {
HXLINE(  72)				obj->onContext();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

void BitmapFrontEnd_obj::dumpCache(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_84_dumpCache)
HXDLIN(  84)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  84)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  84)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  86)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  87)			bool _hx_tmp;
HXDLIN(  87)			if (::hx::IsNotNull( obj )) {
HXLINE(  87)				if (::hx::IsNull( obj->assetsClass )) {
HXLINE(  87)					_hx_tmp = ::hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  87)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  87)				_hx_tmp = false;
            			}
HXDLIN(  87)			if (_hx_tmp) {
HXLINE(  89)				obj->dump();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

void BitmapFrontEnd_obj::undumpCache(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_101_undumpCache)
HXDLIN( 101)		 ::Dynamic key = this->_cache->keys();
HXDLIN( 101)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 101)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 103)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 104)			bool _hx_tmp;
HXDLIN( 104)			if (::hx::IsNotNull( obj )) {
HXLINE( 104)				_hx_tmp = obj->isDumped;
            			}
            			else {
HXLINE( 104)				_hx_tmp = false;
            			}
HXDLIN( 104)			if (_hx_tmp) {
HXLINE( 106)				obj->undump();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,undumpCache,(void))

bool BitmapFrontEnd_obj::checkCache(::String Key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_120_checkCache)
HXDLIN( 120)		return ::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(Key)) ) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::create(int Width,int Height,int Color,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_135_create)
HXDLIN( 135)		return ::flixel::graphics::FlxGraphic_obj::fromRectangle(Width,Height,Color,Unique,Key);
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::add( ::Dynamic Graphic,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_150_add)
HXLINE( 151)		if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::flixel::graphics::FlxGraphic >())) {
HXLINE( 153)			return ::flixel::graphics::FlxGraphic_obj::fromGraphic(( ( ::flixel::graphics::FlxGraphic)(Graphic) ),Unique,Key);
            		}
            		else {
HXLINE( 155)			if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 157)				return ::flixel::graphics::FlxGraphic_obj::fromBitmapData(( ( ::openfl::display::BitmapData)(Graphic) ),Unique,Key,null());
            			}
            		}
HXLINE( 161)		return ::flixel::graphics::FlxGraphic_obj::fromAssetKey(::Std_obj::string(Graphic),Unique,Key,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::addGraphic( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_171_addGraphic)
HXLINE( 172)		this->_cache->set(graphic->key,graphic);
HXLINE( 173)		return graphic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,addGraphic,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_183_get)
HXDLIN( 183)		return ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::findKeyForBitmap( ::openfl::display::BitmapData bmd){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_193_findKeyForBitmap)
HXLINE( 194)		{
HXLINE( 194)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 194)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 194)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 196)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 197)				bool _hx_tmp;
HXDLIN( 197)				if (::hx::IsNotNull( obj )) {
HXLINE( 197)					_hx_tmp = ::hx::IsInstanceEq( obj->bitmap,bmd );
            				}
            				else {
HXLINE( 197)					_hx_tmp = false;
            				}
HXDLIN( 197)				if (_hx_tmp) {
HXLINE( 198)					return key1;
            				}
            			}
            		}
HXLINE( 200)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,findKeyForBitmap,return )

::String BitmapFrontEnd_obj::getKeyForClass(::hx::Class source){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_211_getKeyForClass)
HXDLIN( 211)		return ::Type_obj::getClassName(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getKeyForClass,return )

::String BitmapFrontEnd_obj::generateKey(::String systemKey,::String userKey,::hx::Null< bool >  __o_unique){
            		bool unique = __o_unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_223_generateKey)
HXLINE( 224)		::String key = userKey;
HXLINE( 225)		if (::hx::IsNull( key )) {
HXLINE( 226)			key = systemKey;
            		}
HXLINE( 228)		bool _hx_tmp;
HXDLIN( 228)		if (!(unique)) {
HXLINE( 228)			_hx_tmp = ::hx::IsNull( key );
            		}
            		else {
HXLINE( 228)			_hx_tmp = true;
            		}
HXDLIN( 228)		if (_hx_tmp) {
HXLINE( 229)			key = this->getUniqueKey(key);
            		}
HXLINE( 231)		return key;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,generateKey,return )

::String BitmapFrontEnd_obj::getUniqueKey(::String baseKey){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_241_getUniqueKey)
HXLINE( 242)		if (::hx::IsNull( baseKey )) {
HXLINE( 243)			baseKey = HX_("pixels",2d,ef,a9,8c);
            		}
HXLINE( 245)		if (::hx::IsNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(baseKey)) ) )) {
HXLINE( 246)			return baseKey;
            		}
HXLINE( 248)		int i = this->_lastUniqueKeyIndex;
HXLINE( 249)		::String uniqueKey;
HXLINE( 250)		while(true){
HXLINE( 252)			i = (i + 1);
HXLINE( 253)			uniqueKey = (baseKey + i);
HXLINE( 250)			if (!(::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(uniqueKey)) ) ))) {
HXLINE( 250)				goto _hx_goto_18;
            			}
            		}
            		_hx_goto_18:;
HXLINE( 257)		this->_lastUniqueKeyIndex = i;
HXLINE( 258)		return uniqueKey;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getKeyWithSpacesAndBorders(::String baseKey, ::flixel::math::FlxPoint frameSize, ::flixel::math::FlxPoint frameSpacing, ::flixel::math::FlxPoint frameBorder, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_272_getKeyWithSpacesAndBorders)
HXLINE( 273)		::String result = baseKey;
HXLINE( 275)		if (::hx::IsNotNull( region )) {
HXLINE( 276)			result = (result + (((((((HX_("_Region:",27,96,a5,81) + region->x) + HX_("_",5f,00,00,00)) + region->y) + HX_("_",5f,00,00,00)) + region->width) + HX_("_",5f,00,00,00)) + region->height));
            		}
HXLINE( 278)		if (::hx::IsNotNull( frameSize )) {
HXLINE( 279)			result = (result + (((HX_("_FrameSize:",2b,0e,3a,29) + frameSize->x) + HX_("_",5f,00,00,00)) + frameSize->y));
            		}
HXLINE( 281)		if (::hx::IsNotNull( frameSpacing )) {
HXLINE( 282)			result = (result + (((HX_("_Spaces:",0e,b0,c1,98) + frameSpacing->x) + HX_("_",5f,00,00,00)) + frameSpacing->y));
            		}
HXLINE( 284)		if (::hx::IsNotNull( frameBorder )) {
HXLINE( 285)			result = (result + (((HX_("_Border:",2f,83,f2,39) + frameBorder->x) + HX_("_",5f,00,00,00)) + frameBorder->y));
            		}
HXLINE( 287)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,getKeyWithSpacesAndBorders,return )

void BitmapFrontEnd_obj::remove( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_296_remove)
HXDLIN( 296)		if (::hx::IsNotNull( graphic )) {
HXLINE( 298)			{
HXLINE( 298)				::String key = graphic->key;
HXDLIN( 298)				if (::hx::IsNotNull( key )) {
HXLINE( 298)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXDLIN( 298)					this->_cache->remove(key);
            				}
            			}
HXLINE( 299)			graphic->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

void BitmapFrontEnd_obj::removeByKey(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_309_removeByKey)
HXDLIN( 309)		if (::hx::IsNotNull( key )) {
HXLINE( 311)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key)) );
HXLINE( 312)			if (::hx::IsNotNull( key )) {
HXLINE( 312)				::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXDLIN( 312)				this->_cache->remove(key);
            			}
HXLINE( 314)			if (::hx::IsNotNull( obj )) {
HXLINE( 315)				obj->destroy();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeByKey,(void))

void BitmapFrontEnd_obj::removeIfNoUse( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_321_removeIfNoUse)
HXDLIN( 321)		bool _hx_tmp;
HXDLIN( 321)		bool _hx_tmp1;
HXDLIN( 321)		if (::hx::IsNotNull( graphic )) {
HXDLIN( 321)			_hx_tmp1 = (graphic->get_useCount() == 0);
            		}
            		else {
HXDLIN( 321)			_hx_tmp1 = false;
            		}
HXDLIN( 321)		if (_hx_tmp1) {
HXDLIN( 321)			_hx_tmp = !(graphic->persist);
            		}
            		else {
HXDLIN( 321)			_hx_tmp = false;
            		}
HXDLIN( 321)		if (_hx_tmp) {
HXLINE( 322)			this->remove(graphic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeIfNoUse,(void))

void BitmapFrontEnd_obj::clearCache(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_330_clearCache)
HXLINE( 331)		if (::hx::IsNull( this->_cache )) {
HXLINE( 333)			this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 334)			return;
            		}
HXLINE( 337)		{
HXLINE( 337)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 337)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 337)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 339)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 340)				bool _hx_tmp;
HXDLIN( 340)				bool _hx_tmp1;
HXDLIN( 340)				if (::hx::IsNotNull( obj )) {
HXLINE( 340)					_hx_tmp1 = !(obj->persist);
            				}
            				else {
HXLINE( 340)					_hx_tmp1 = false;
            				}
HXDLIN( 340)				if (_hx_tmp1) {
HXLINE( 340)					_hx_tmp = (obj->get_useCount() <= 0);
            				}
            				else {
HXLINE( 340)					_hx_tmp = false;
            				}
HXDLIN( 340)				if (_hx_tmp) {
HXLINE( 342)					if (::hx::IsNotNull( key1 )) {
HXLINE( 342)						::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXDLIN( 342)						this->_cache->remove(key1);
            					}
HXLINE( 343)					obj->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

void BitmapFrontEnd_obj::removeKey(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_350_removeKey)
HXDLIN( 350)		if (::hx::IsNotNull( key )) {
HXLINE( 352)			::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXLINE( 353)			this->_cache->remove(key);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeKey,(void))

void BitmapFrontEnd_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_361_reset)
HXLINE( 362)		if (::hx::IsNull( this->_cache )) {
HXLINE( 364)			this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 365)			return;
            		}
HXLINE( 368)		{
HXLINE( 368)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 368)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 368)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 370)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 371)				if (::hx::IsNotNull( key1 )) {
HXLINE( 371)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXDLIN( 371)					this->_cache->remove(key1);
            				}
HXLINE( 373)				if (::hx::IsNotNull( obj )) {
HXLINE( 374)					obj->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,reset,(void))

void BitmapFrontEnd_obj::clearUnused(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_384_clearUnused)
HXDLIN( 384)		 ::Dynamic key = this->_cache->keys();
HXDLIN( 384)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 384)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 386)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 387)			bool _hx_tmp;
HXDLIN( 387)			bool _hx_tmp1;
HXDLIN( 387)			bool _hx_tmp2;
HXDLIN( 387)			if (::hx::IsNotNull( obj )) {
HXLINE( 387)				_hx_tmp2 = (obj->get_useCount() <= 0);
            			}
            			else {
HXLINE( 387)				_hx_tmp2 = false;
            			}
HXDLIN( 387)			if (_hx_tmp2) {
HXLINE( 387)				_hx_tmp1 = !(obj->persist);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = false;
            			}
HXDLIN( 387)			if (_hx_tmp1) {
HXLINE( 387)				_hx_tmp = obj->get_destroyOnNoUse();
            			}
            			else {
HXLINE( 387)				_hx_tmp = false;
            			}
HXDLIN( 387)			if (_hx_tmp) {
HXLINE( 389)				this->removeByKey(key1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))

int BitmapFrontEnd_obj::get_maxTextureSize(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_397_get_maxTextureSize)
HXDLIN( 397)		return ( (int)(::lime::graphics::opengl::GL_obj::context->getParameter(3379)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_maxTextureSize,return )

 ::flixel::graphics::frames::FlxFrame BitmapFrontEnd_obj::get_whitePixel(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_402_get_whitePixel)
HXLINE( 403)		if (::hx::IsNull( this->_whitePixel )) {
HXLINE( 405)			 ::openfl::display::BitmapData bd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,10,10,true,-1);
HXLINE( 406)			 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(bd,true,HX_("whitePixels",b6,92,ba,9e));
HXLINE( 407)			graphic->persist = true;
HXLINE( 408)			this->_whitePixel = graphic->get_imageFrame()->get_frame();
            		}
HXLINE( 411)		return this->_whitePixel;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )


::hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new() {
	::hx::ObjectPtr< BitmapFrontEnd_obj > __this = new BitmapFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BitmapFrontEnd_obj *__this = (BitmapFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapFrontEnd_obj), true, "flixel.system.frontEnds.BitmapFrontEnd"));
	*(void **)__this = BitmapFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_MEMBER_NAME(_lastUniqueKeyIndex,"_lastUniqueKeyIndex");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_VISIT_MEMBER_NAME(_lastUniqueKeyIndex,"_lastUniqueKeyIndex");
}

::hx::Val BitmapFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return ::hx::Val( _cache ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return ::hx::Val( onContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return ::hx::Val( dumpCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKey") ) { return ::hx::Val( removeKey_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_whitePixel() ); }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return ::hx::Val( checkCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return ::hx::Val( addGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return ::hx::Val( _whitePixel ); }
		if (HX_FIELD_EQ(inName,"undumpCache") ) { return ::hx::Val( undumpCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"generateKey") ) { return ::hx::Val( generateKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return ::hx::Val( removeByKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return ::hx::Val( clearUnused_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return ::hx::Val( getUniqueKey_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeIfNoUse") ) { return ::hx::Val( removeIfNoUse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTextureSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxTextureSize() ); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return ::hx::Val( onAssetsReload_dyn() ); }
		if (HX_FIELD_EQ(inName,"getKeyForClass") ) { return ::hx::Val( getKeyForClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return ::hx::Val( get_whitePixel_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findKeyForBitmap") ) { return ::hx::Val( findKeyForBitmap_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_maxTextureSize") ) { return ::hx::Val( get_maxTextureSize_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastUniqueKeyIndex") ) { return ::hx::Val( _lastUniqueKeyIndex ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyWithSpacesAndBorders") ) { return ::hx::Val( getKeyWithSpacesAndBorders_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitmapFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastUniqueKeyIndex") ) { _lastUniqueKeyIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maxTextureSize",f8,a6,7c,0a));
	outFields->push(HX_("whitePixel",1d,a7,f7,19));
	outFields->push(HX_("_cache",83,e1,fb,3c));
	outFields->push(HX_("_whitePixel",3c,74,81,ec));
	outFields->push(HX_("_lastUniqueKeyIndex",39,d6,77,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_("_cache",83,e1,fb,3c)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_("_whitePixel",3c,74,81,ec)},
	{::hx::fsInt,(int)offsetof(BitmapFrontEnd_obj,_lastUniqueKeyIndex),HX_("_lastUniqueKeyIndex",39,d6,77,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFrontEnd_obj_sMemberFields[] = {
	HX_("_cache",83,e1,fb,3c),
	HX_("_whitePixel",3c,74,81,ec),
	HX_("_lastUniqueKeyIndex",39,d6,77,aa),
	HX_("onAssetsReload",fb,33,88,63),
	HX_("onContext",90,4e,22,f1),
	HX_("dumpCache",6e,30,39,db),
	HX_("undumpCache",f5,b6,df,60),
	HX_("checkCache",5a,9c,04,51),
	HX_("create",fc,66,0f,7c),
	HX_("add",21,f2,49,00),
	HX_("addGraphic",87,86,91,db),
	HX_("get",96,80,4e,00),
	HX_("findKeyForBitmap",12,70,29,81),
	HX_("getKeyForClass",38,d0,df,11),
	HX_("generateKey",6a,91,24,46),
	HX_("getUniqueKey",98,cb,d7,e8),
	HX_("getKeyWithSpacesAndBorders",ac,4e,ae,2a),
	HX_("remove",44,9c,88,04),
	HX_("removeByKey",24,c9,ac,bb),
	HX_("removeIfNoUse",85,b1,4f,e2),
	HX_("clearCache",75,d9,1e,16),
	HX_("removeKey",bb,a7,ec,ca),
	HX_("reset",cf,49,c8,e6),
	HX_("clearUnused",83,a6,6f,ff),
	HX_("get_maxTextureSize",c1,87,16,a6),
	HX_("get_whitePixel",66,2f,ed,8f),
	::String(null()) };

::hx::Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	BitmapFrontEnd_obj _hx_dummy;
	BitmapFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.BitmapFrontEnd",7b,b7,f6,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
