#ifndef INCLUDED_motion__MotionPath_BezierPath
#define INCLUDED_motion__MotionPath_BezierPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS2(motion,_MotionPath,BezierPath)

namespace motion{
namespace _MotionPath{


class HXCPP_CLASS_ATTRIBUTES BezierPath_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BezierPath_obj OBJ_;
		BezierPath_obj();

	public:
		enum { _hx_ClassId = 0x70302108 };

		void __construct(Float end,::Array< Float > control,Float strength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion._MotionPath.BezierPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion._MotionPath.BezierPath"); }
		static ::hx::ObjectPtr< BezierPath_obj > __new(Float end,::Array< Float > control,Float strength);
		static ::hx::ObjectPtr< BezierPath_obj > __alloc(::hx::Ctx *_hx_ctx,Float end,::Array< Float > control,Float strength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BezierPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BezierPath",84,11,ae,57); }

		::Array< Float > control;
		Float end;
		Float strength;
		Float _start;
		Float _end;
		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float get_start();
		::Dynamic get_start_dyn();

		Float set_start(Float value);
		::Dynamic set_start_dyn();

		Float get_end();
		::Dynamic get_end_dyn();

};

} // end namespace motion
} // end namespace _MotionPath

#endif /* INCLUDED_motion__MotionPath_BezierPath */ 
