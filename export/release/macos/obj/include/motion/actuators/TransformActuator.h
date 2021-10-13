#ifndef INCLUDED_motion_actuators_TransformActuator
#define INCLUDED_motion_actuators_TransformActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(motion,actuators,TransformActuator)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES TransformActuator_obj : public  ::motion::actuators::SimpleActuator_obj
{
	public:
		typedef  ::motion::actuators::SimpleActuator_obj super;
		typedef TransformActuator_obj OBJ_;
		TransformActuator_obj();

	public:
		enum { _hx_ClassId = 0x4c56c8a5 };

		void __construct( ::Dynamic target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.actuators.TransformActuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion.actuators.TransformActuator"); }
		static ::hx::ObjectPtr< TransformActuator_obj > __new( ::Dynamic target,Float duration, ::Dynamic properties);
		static ::hx::ObjectPtr< TransformActuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TransformActuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TransformActuator",a5,f2,bf,39); }

		 ::openfl::geom::ColorTransform endColorTransform;
		 ::openfl::media::SoundTransform endSoundTransform;
		 ::openfl::geom::ColorTransform tweenColorTransform;
		 ::openfl::media::SoundTransform tweenSoundTransform;
		void apply();

		void initialize();

		void initializeColor();
		::Dynamic initializeColor_dyn();

		void initializeSound();
		::Dynamic initializeSound_dyn();

		void update(Float currentTime);

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_TransformActuator */ 
