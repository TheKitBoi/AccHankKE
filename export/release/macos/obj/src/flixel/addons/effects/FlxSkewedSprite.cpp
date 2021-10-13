#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxSkewedSprite
#include <flixel/addons/effects/FlxSkewedSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_514496ecbc505000_15_new,"flixel.addons.effects.FlxSkewedSprite","new",0xd30db85d,"flixel.addons.effects.FlxSkewedSprite.new","flixel/addons/effects/FlxSkewedSprite.hx",15,0x49cdf014)
HX_LOCAL_STACK_FRAME(_hx_pos_514496ecbc505000_42_destroy,"flixel.addons.effects.FlxSkewedSprite","destroy",0x84205777,"flixel.addons.effects.FlxSkewedSprite.destroy","flixel/addons/effects/FlxSkewedSprite.hx",42,0x49cdf014)
HX_LOCAL_STACK_FRAME(_hx_pos_514496ecbc505000_51_drawComplex,"flixel.addons.effects.FlxSkewedSprite","drawComplex",0xcec75789,"flixel.addons.effects.FlxSkewedSprite.drawComplex","flixel/addons/effects/FlxSkewedSprite.hx",51,0x49cdf014)
HX_LOCAL_STACK_FRAME(_hx_pos_514496ecbc505000_83_updateSkewMatrix,"flixel.addons.effects.FlxSkewedSprite","updateSkewMatrix",0xa5318e37,"flixel.addons.effects.FlxSkewedSprite.updateSkewMatrix","flixel/addons/effects/FlxSkewedSprite.hx",83,0x49cdf014)
HX_LOCAL_STACK_FRAME(_hx_pos_514496ecbc505000_95_isSimpleRender,"flixel.addons.effects.FlxSkewedSprite","isSimpleRender",0xa32bc355,"flixel.addons.effects.FlxSkewedSprite.isSimpleRender","flixel/addons/effects/FlxSkewedSprite.hx",95,0x49cdf014)
namespace flixel{
namespace addons{
namespace effects{

void FlxSkewedSprite_obj::__construct( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic){
            	HX_GC_STACKFRAME(&_hx_pos_514496ecbc505000_15_new)
HXLINE(  34)		this->_skewMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  29)		this->matrixExposed = false;
HXLINE(  23)		this->transformMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  17)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  17)		point->_inPool = false;
HXDLIN(  17)		this->skew = point;
HXLINE(  15)		super::__construct(X,Y,SimpleGraphic);
            	}

Dynamic FlxSkewedSprite_obj::__CreateEmpty() { return new FlxSkewedSprite_obj; }

void *FlxSkewedSprite_obj::_hx_vtable = 0;

Dynamic FlxSkewedSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSkewedSprite_obj > _hx_result = new FlxSkewedSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxSkewedSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x107498cd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x107498cd;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxSkewedSprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_514496ecbc505000_42_destroy)
HXLINE(  43)		this->skew = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->skew)) );
HXLINE(  44)		this->_skewMatrix = null();
HXLINE(  45)		this->transformMatrix = null();
HXLINE(  47)		this->super::destroy();
            	}


void FlxSkewedSprite_obj::drawComplex( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_514496ecbc505000_51_drawComplex)
HXLINE(  52)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN(  52)		bool _hx_tmp;
HXDLIN(  52)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(  52)			_hx_tmp = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE(  52)			_hx_tmp = doFlipX;
            		}
HXDLIN(  52)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN(  52)		bool _hx_tmp1;
HXDLIN(  52)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(  52)			_hx_tmp1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = doFlipY;
            		}
HXDLIN(  52)		this->_frame->prepareMatrix(this->_matrix,0,_hx_tmp,_hx_tmp1);
HXLINE(  53)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE(  54)		this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE(  56)		if (this->matrixExposed) {
HXLINE(  58)			this->_matrix->concat(this->transformMatrix);
            		}
            		else {
HXLINE(  62)			if ((this->bakedRotationAngle <= 0)) {
HXLINE(  64)				if (this->_angleChanged) {
HXLINE(  64)					Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN(  64)					this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN(  64)					this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN(  64)					this->_angleChanged = false;
            				}
HXLINE(  66)				if ((this->angle != 0)) {
HXLINE(  67)					 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN(  67)					Float cos = this->_cosAngle;
HXDLIN(  67)					Float sin = this->_sinAngle;
HXDLIN(  67)					Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN(  67)					_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN(  67)					_this->a = a1;
HXDLIN(  67)					Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN(  67)					_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN(  67)					_this->c = c1;
HXDLIN(  67)					Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN(  67)					_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN(  67)					_this->tx = tx1;
            				}
            			}
HXLINE(  70)			this->updateSkewMatrix();
HXLINE(  71)			this->_matrix->concat(this->_skewMatrix);
            		}
HXLINE(  74)		this->_point->addPoint(this->origin);
HXLINE(  75)		if (this->isPixelPerfectRender(camera)) {
HXLINE(  76)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN(  76)			_this->set_x(( (Float)(::Math_obj::floor(_this->x)) ));
HXDLIN(  76)			_this->set_y(( (Float)(::Math_obj::floor(_this->y)) ));
            		}
HXLINE(  78)		this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE(  79)		camera->drawPixels(this->_frame,this->framePixels,this->_matrix,this->colorTransform,this->blend,this->antialiasing,null());
            	}


void FlxSkewedSprite_obj::updateSkewMatrix(){
            	HX_STACKFRAME(&_hx_pos_514496ecbc505000_83_updateSkewMatrix)
HXLINE(  84)		this->_skewMatrix->identity();
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		if ((this->skew->x == 0)) {
HXLINE(  86)			_hx_tmp = (this->skew->y != 0);
            		}
            		else {
HXLINE(  86)			_hx_tmp = true;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  88)			this->_skewMatrix->b = ::Math_obj::tan((this->skew->y * (::Math_obj::PI / ( (Float)(180) ))));
HXLINE(  89)			this->_skewMatrix->c = ::Math_obj::tan((this->skew->x * (::Math_obj::PI / ( (Float)(180) ))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSkewedSprite_obj,updateSkewMatrix,(void))

bool FlxSkewedSprite_obj::isSimpleRender( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_514496ecbc505000_95_isSimpleRender)
HXDLIN(  95)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(  97)			bool _hx_tmp;
HXDLIN(  97)			bool _hx_tmp1;
HXDLIN(  97)			if (this->super::isSimpleRender(camera)) {
HXLINE(  97)				_hx_tmp1 = (this->skew->x == 0);
            			}
            			else {
HXLINE(  97)				_hx_tmp1 = false;
            			}
HXDLIN(  97)			if (_hx_tmp1) {
HXLINE(  97)				_hx_tmp = (this->skew->y == 0);
            			}
            			else {
HXLINE(  97)				_hx_tmp = false;
            			}
HXDLIN(  97)			if (_hx_tmp) {
HXLINE(  97)				return !(this->matrixExposed);
            			}
            			else {
HXLINE(  97)				return false;
            			}
            		}
            		else {
HXLINE( 101)			return false;
            		}
HXLINE(  95)		return false;
            	}



::hx::ObjectPtr< FlxSkewedSprite_obj > FlxSkewedSprite_obj::__new( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxSkewedSprite_obj > __this = new FlxSkewedSprite_obj();
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxSkewedSprite_obj > FlxSkewedSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	FlxSkewedSprite_obj *__this = (FlxSkewedSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSkewedSprite_obj), true, "flixel.addons.effects.FlxSkewedSprite"));
	*(void **)__this = FlxSkewedSprite_obj::_hx_vtable;
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

FlxSkewedSprite_obj::FlxSkewedSprite_obj()
{
}

void FlxSkewedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSkewedSprite);
	HX_MARK_MEMBER_NAME(skew,"skew");
	HX_MARK_MEMBER_NAME(transformMatrix,"transformMatrix");
	HX_MARK_MEMBER_NAME(matrixExposed,"matrixExposed");
	HX_MARK_MEMBER_NAME(_skewMatrix,"_skewMatrix");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSkewedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skew,"skew");
	HX_VISIT_MEMBER_NAME(transformMatrix,"transformMatrix");
	HX_VISIT_MEMBER_NAME(matrixExposed,"matrixExposed");
	HX_VISIT_MEMBER_NAME(_skewMatrix,"_skewMatrix");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSkewedSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"skew") ) { return ::hx::Val( skew ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skewMatrix") ) { return ::hx::Val( _skewMatrix ); }
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return ::hx::Val( drawComplex_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"matrixExposed") ) { return ::hx::Val( matrixExposed ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return ::hx::Val( isSimpleRender_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transformMatrix") ) { return ::hx::Val( transformMatrix ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateSkewMatrix") ) { return ::hx::Val( updateSkewMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSkewedSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"skew") ) { skew=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skewMatrix") ) { _skewMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"matrixExposed") ) { matrixExposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transformMatrix") ) { transformMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSkewedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("skew",0a,13,55,4c));
	outFields->push(HX_("transformMatrix",cd,b0,1d,f7));
	outFields->push(HX_("matrixExposed",5f,15,cd,ed));
	outFields->push(HX_("_skewMatrix",0a,6e,a2,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSkewedSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSkewedSprite_obj,skew),HX_("skew",0a,13,55,4c)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(FlxSkewedSprite_obj,transformMatrix),HX_("transformMatrix",cd,b0,1d,f7)},
	{::hx::fsBool,(int)offsetof(FlxSkewedSprite_obj,matrixExposed),HX_("matrixExposed",5f,15,cd,ed)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(FlxSkewedSprite_obj,_skewMatrix),HX_("_skewMatrix",0a,6e,a2,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSkewedSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSkewedSprite_obj_sMemberFields[] = {
	HX_("skew",0a,13,55,4c),
	HX_("transformMatrix",cd,b0,1d,f7),
	HX_("matrixExposed",5f,15,cd,ed),
	HX_("_skewMatrix",0a,6e,a2,34),
	HX_("destroy",fa,2c,86,24),
	HX_("drawComplex",8c,aa,b9,cc),
	HX_("updateSkewMatrix",54,70,04,ac),
	HX_("isSimpleRender",32,f4,2a,47),
	::String(null()) };

::hx::Class FlxSkewedSprite_obj::__mClass;

void FlxSkewedSprite_obj::__register()
{
	FlxSkewedSprite_obj _hx_dummy;
	FlxSkewedSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.FlxSkewedSprite",eb,45,a1,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSkewedSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSkewedSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSkewedSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSkewedSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
