#ifndef INCLUDED_PlayStateChangeables
#define INCLUDED_PlayStateChangeables

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(PlayStateChangeables)



class HXCPP_CLASS_ATTRIBUTES PlayStateChangeables_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PlayStateChangeables_obj OBJ_;
		PlayStateChangeables_obj();

	public:
		enum { _hx_ClassId = 0x13a5a580 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="PlayStateChangeables")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"PlayStateChangeables"); }

		inline static ::hx::ObjectPtr< PlayStateChangeables_obj > __new() {
			::hx::ObjectPtr< PlayStateChangeables_obj > __this = new PlayStateChangeables_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PlayStateChangeables_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PlayStateChangeables_obj *__this = (PlayStateChangeables_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayStateChangeables_obj), false, "PlayStateChangeables"));
			*(void **)__this = PlayStateChangeables_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayStateChangeables_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayStateChangeables",cc,79,e3,f5); }

		static bool useDownscroll;
		static int safeFrames;
		static Float scrollSpeed;
		static bool botPlay;
		static bool Optimize;
};


#endif /* INCLUDED_PlayStateChangeables */ 
