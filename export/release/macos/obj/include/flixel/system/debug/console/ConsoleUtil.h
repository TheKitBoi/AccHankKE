#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#define INCLUDED_flixel_system_debug_console_ConsoleUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,ConsoleUtil)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,console,_ConsoleUtil,Interp)
HX_DECLARE_CLASS1(hscript,Expr)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS1(hscript,Parser)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES ConsoleUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ConsoleUtil_obj OBJ_;
		ConsoleUtil_obj();

	public:
		enum { _hx_ClassId = 0x31204b4a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.debug.console.ConsoleUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.debug.console.ConsoleUtil"); }

		inline static ::hx::ObjectPtr< ConsoleUtil_obj > __new() {
			::hx::ObjectPtr< ConsoleUtil_obj > __this = new ConsoleUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ConsoleUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ConsoleUtil_obj *__this = (ConsoleUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConsoleUtil_obj), false, "flixel.system.debug.console.ConsoleUtil"));
			*(void **)__this = ConsoleUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConsoleUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConsoleUtil",d9,fe,3d,06); }

		static  ::hscript::Parser parser;
		static  ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp interp;
		static void init();
		static ::Dynamic init_dyn();

		static  ::hscript::Expr parseCommand(::String Input);
		static ::Dynamic parseCommand_dyn();

		static  ::Dynamic runCommand(::String Input);
		static ::Dynamic runCommand_dyn();

		static  ::Dynamic runExpr( ::hscript::Expr expr);
		static ::Dynamic runExpr_dyn();

		static void registerObject(::String ObjectAlias, ::Dynamic AnyObject);
		static ::Dynamic registerObject_dyn();

		static void registerFunction(::String FunctionAlias, ::Dynamic Function);
		static ::Dynamic registerFunction_dyn();

		static ::Array< ::String > getFields( ::Dynamic Object);
		static ::Dynamic getFields_dyn();

		static ::Array< ::String > sortFields(::Array< ::String > fields);
		static ::Dynamic sortFields_dyn();

		static void log( ::Dynamic Text);
		static ::Dynamic log_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_ConsoleUtil */ 
