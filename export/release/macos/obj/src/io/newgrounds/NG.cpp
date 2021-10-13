#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_io_newgrounds_Call
#include <io/newgrounds/Call.h>
#endif
#ifndef INCLUDED_io_newgrounds_ICallable
#include <io/newgrounds/ICallable.h>
#endif
#ifndef INCLUDED_io_newgrounds_NG
#include <io/newgrounds/NG.h>
#endif
#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_AppComponent
#include <io/newgrounds/components/AppComponent.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_Component
#include <io/newgrounds/components/Component.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_ComponentList
#include <io/newgrounds/components/ComponentList.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_MedalComponent
#include <io/newgrounds/components/MedalComponent.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_ScoreBoardComponent
#include <io/newgrounds/components/ScoreBoardComponent.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Medal
#include <io/newgrounds/objects/Medal.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_ScoreBoard
#include <io/newgrounds/objects/ScoreBoard.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects__Session_Session_Impl_
#include <io/newgrounds/objects/_Session/Session_Impl_.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_Dispatcher
#include <io/newgrounds/utils/Dispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45e56eda36fb0427_75_new,"io.newgrounds.NG","new",0xc59603a5,"io.newgrounds.NG.new","io/newgrounds/NG.hx",75,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_35_get_user,"io.newgrounds.NG","get_user",0x82ed206f,"io.newgrounds.NG.get_user","io/newgrounds/NG.hx",35,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_43_get_passportUrl,"io.newgrounds.NG","get_passportUrl",0xbc44cc19,"io.newgrounds.NG.get_passportUrl","io/newgrounds/NG.hx",43,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_134_checkInitialSession,"io.newgrounds.NG","checkInitialSession",0x5219cf5f,"io.newgrounds.NG.checkInitialSession","io/newgrounds/NG.hx",134,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_172_requestLogin,"io.newgrounds.NG","requestLogin",0x413747b5,"io.newgrounds.NG.requestLogin","io/newgrounds/NG.hx",172,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_153_requestLogin,"io.newgrounds.NG","requestLogin",0x413747b5,"io.newgrounds.NG.requestLogin","io/newgrounds/NG.hx",153,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_186_onSessionReceive,"io.newgrounds.NG","onSessionReceive",0xec6c1c47,"io.newgrounds.NG.onSessionReceive","io/newgrounds/NG.hx",186,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_206_onSessionReceive,"io.newgrounds.NG","onSessionReceive",0xec6c1c47,"io.newgrounds.NG.onSessionReceive","io/newgrounds/NG.hx",206,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_222_openPassportUrl,"io.newgrounds.NG","openPassportUrl",0x69b708d8,"io.newgrounds.NG.openPassportUrl","io/newgrounds/NG.hx",222,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_264_onPassportUrlOpen,"io.newgrounds.NG","onPassportUrlOpen",0xefaf23cd,"io.newgrounds.NG.onPassportUrlOpen","io/newgrounds/NG.hx",264,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_269_dispatchPassportCallback,"io.newgrounds.NG","dispatchPassportCallback",0xa51e542c,"io.newgrounds.NG.dispatchPassportCallback","io/newgrounds/NG.hx",269,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_278_checkSession,"io.newgrounds.NG","checkSession",0xad908b89,"io.newgrounds.NG.checkSession","io/newgrounds/NG.hx",278,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_311_checkSession,"io.newgrounds.NG","checkSession",0xad908b89,"io.newgrounds.NG.checkSession","io/newgrounds/NG.hx",311,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_315_checkSession,"io.newgrounds.NG","checkSession",0xad908b89,"io.newgrounds.NG.checkSession","io/newgrounds/NG.hx",315,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_341_cancelLoginRequest,"io.newgrounds.NG","cancelLoginRequest",0xd58be7db,"io.newgrounds.NG.cancelLoginRequest","io/newgrounds/NG.hx",341,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_349_endLoginAndCall,"io.newgrounds.NG","endLoginAndCall",0x99dbe7ec,"io.newgrounds.NG.endLoginAndCall","io/newgrounds/NG.hx",349,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_358_logOut,"io.newgrounds.NG","logOut",0xafd21445,"io.newgrounds.NG.logOut","io/newgrounds/NG.hx",358,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_370_onLogOutSuccessful,"io.newgrounds.NG","onLogOutSuccessful",0xdb4ceafe,"io.newgrounds.NG.onLogOutSuccessful","io/newgrounds/NG.hx",370,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_381_requestMedals,"io.newgrounds.NG","requestMedals",0x717f4ed0,"io.newgrounds.NG.requestMedals","io/newgrounds/NG.hx",381,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_395_onMedalsReceived,"io.newgrounds.NG","onMedalsReceived",0x307eaaf7,"io.newgrounds.NG.onMedalsReceived","io/newgrounds/NG.hx",395,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_430_requestScoreBoards,"io.newgrounds.NG","requestScoreBoards",0x9337ab4b,"io.newgrounds.NG.requestScoreBoards","io/newgrounds/NG.hx",430,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_454_onBoardsReceived,"io.newgrounds.NG","onBoardsReceived",0x53c41468,"io.newgrounds.NG.onBoardsReceived","io/newgrounds/NG.hx",454,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_485_timer,"io.newgrounds.NG","timer",0x50df0e4a,"io.newgrounds.NG.timer","io/newgrounds/NG.hx",485,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_482_timer,"io.newgrounds.NG","timer",0x50df0e4a,"io.newgrounds.NG.timer","io/newgrounds/NG.hx",482,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_97_create,"io.newgrounds.NG","create",0xcf8accd7,"io.newgrounds.NG.create","io/newgrounds/NG.hx",97,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_116_createAndCheckSession,"io.newgrounds.NG","createAndCheckSession",0xe8acc1ce,"io.newgrounds.NG.createAndCheckSession","io/newgrounds/NG.hx",116,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_233_openPassportHelper,"io.newgrounds.NG","openPassportHelper",0x6ca027a5,"io.newgrounds.NG.openPassportHelper","io/newgrounds/NG.hx",233,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_494_getHost,"io.newgrounds.NG","getHost",0xd01338e3,"io.newgrounds.NG.getHost","io/newgrounds/NG.hx",494,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_29_boot,"io.newgrounds.NG","boot",0x15c62d4d,"io.newgrounds.NG.boot","io/newgrounds/NG.hx",29,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_492_boot,"io.newgrounds.NG","boot",0x15c62d4d,"io.newgrounds.NG.boot","io/newgrounds/NG.hx",492,0x99d625cb)
namespace io{
namespace newgrounds{

void NG_obj::__construct(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            		bool debug = __o_debug.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_75_new)
HXLINE(  77)		this->host = ::io::newgrounds::NG_obj::getHost();
HXLINE(  78)		this->onLogin =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  79)		this->onLogOut =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  80)		this->onMedalsLoaded =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  81)		this->onScoreBoardsLoaded =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  83)		this->attemptingLogin = ::hx::IsNotNull( sessionId );
HXLINE(  85)		super::__construct(appId,sessionId,debug,onSessionFail);
            	}

Dynamic NG_obj::__CreateEmpty() { return new NG_obj; }

void *NG_obj::_hx_vtable = 0;

Dynamic NG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NG_obj > _hx_result = new NG_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool NG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62957ed3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x62957ed3;
	} else {
		return inClassId==(int)0x7772213d;
	}
}

 ::Dynamic NG_obj::get_user(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_35_get_user)
HXLINE(  37)		if (::hx::IsNull( this->_session )) {
HXLINE(  38)			return null();
            		}
HXLINE(  40)		return this->_session->__Field(HX_("user",4b,92,ad,4d),::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,get_user,return )

::String NG_obj::get_passportUrl(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_43_get_passportUrl)
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if (::hx::IsNotNull( this->_session )) {
HXLINE(  45)			_hx_tmp = (::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) != HX_("request-login",ab,da,18,fe));
            		}
            		else {
HXLINE(  45)			_hx_tmp = true;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  46)			return null();
            		}
HXLINE(  48)		return ( (::String)(this->_session->__Field(HX_("passport_url",42,e6,1b,68),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,get_passportUrl,return )

void NG_obj::checkInitialSession( ::Dynamic failHandler, ::Dynamic response){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_134_checkInitialSession)
HXDLIN( 134)		this->onSessionReceive(response,null(),null(),failHandler,null());
            	}


void NG_obj::requestLogin( ::Dynamic onSuccess, ::Dynamic onPending, ::Dynamic onFail, ::Dynamic onCancel){
            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onFail1, ::Dynamic,onPending1, ::Dynamic,onSuccess1, ::Dynamic,_g, ::Dynamic,onCancel1) HXARGC(1)
            		void _hx_run( ::Dynamic response){
            			HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_172_requestLogin)
HXLINE( 172)			_g(response,onSuccess1,onPending1,onFail1,onCancel1);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_153_requestLogin)
HXLINE( 155)		if (this->attemptingLogin) {
HXLINE( 157)			this->logError(HX_("cannot request another login until the previous attempt is complete",86,49,52,0c),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),157,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("requestLogin",9a,8b,c5,14)));
HXLINE( 158)			return;
            		}
HXLINE( 161)		if (this->loggedIn) {
HXLINE( 163)			this->logError(HX_("cannot log in, already logged in",89,90,59,9b),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),163,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("requestLogin",9a,8b,c5,14)));
HXLINE( 164)			return;
            		}
HXLINE( 167)		this->attemptingLogin = true;
HXLINE( 168)		this->_loginCancelled = false;
HXLINE( 169)		this->_passportCallback = null();
HXLINE( 172)		 ::Dynamic _g = this->onSessionReceive_dyn();
HXDLIN( 172)		 ::Dynamic onSuccess1 = onSuccess;
HXDLIN( 172)		 ::Dynamic onPending1 = onPending;
HXDLIN( 172)		 ::Dynamic onFail1 = onFail;
HXDLIN( 172)		 ::Dynamic onCancel1 = onCancel;
HXDLIN( 172)		 ::Dynamic call =  ::Dynamic(new _hx_Closure_0(onFail1,onPending1,onSuccess1,_g,onCancel1));
HXLINE( 171)		 ::io::newgrounds::Call call1 = this->calls->app->startSession(true)->addDataHandler(call);
HXLINE( 174)		if (::hx::IsNotNull( onFail )) {
HXLINE( 175)			call1->addErrorHandler(onFail);
            		}
HXLINE( 177)		call1->send();
            	}


HX_DEFINE_DYNAMIC_FUNC4(NG_obj,requestLogin,(void))

void NG_obj::onSessionReceive( ::Dynamic response, ::Dynamic onSuccess, ::Dynamic onPending, ::Dynamic onFail, ::Dynamic onCancel){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_186_onSessionReceive)
HXLINE( 188)		bool _hx_tmp;
HXDLIN( 188)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 188)			_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 188)			_hx_tmp = true;
            		}
HXDLIN( 188)		if (_hx_tmp) {
HXLINE( 190)			this->set_sessionId(null());
HXLINE( 191)			this->endLoginAndCall(null());
HXLINE( 193)			if (::hx::IsNotNull( onFail )) {
HXLINE( 194)				 ::Dynamic _hx_tmp;
HXDLIN( 194)				if (!(( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ))) {
HXLINE( 194)					_hx_tmp = response->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
            				}
            				else {
HXLINE( 194)					_hx_tmp =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
            				}
HXDLIN( 194)				onFail(_hx_tmp);
            			}
HXLINE( 196)			return;
            		}
HXLINE( 199)		this->_session =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("session",56,17,98,93),::hx::paccDynamic);
HXLINE( 200)		this->set_sessionId(( (::String)(this->_session->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
HXLINE( 202)		{
HXLINE( 202)			 ::Dynamic any = (HX_("session started - status: ",b4,cf,cd,a3) + ::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session));
HXDLIN( 202)			if (this->verbose) {
HXLINE( 202)				this->log(any,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),202,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("onSessionReceive",ac,b6,9a,52)));
            			}
            		}
HXLINE( 204)		if ((::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) == HX_("request-login",ab,da,18,fe))) {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onSuccess1, ::Dynamic,_g, ::Dynamic,onCancel1, ::Dynamic,response) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_206_onSessionReceive)
HXLINE( 206)				_g(response,onSuccess1,onCancel1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 206)			 ::Dynamic _g = this->checkSession_dyn();
HXDLIN( 206)			 ::Dynamic response = null();
HXDLIN( 206)			 ::Dynamic onSuccess1 = onSuccess;
HXDLIN( 206)			 ::Dynamic onCancel1 = onCancel;
HXDLIN( 206)			this->_passportCallback =  ::Dynamic(new _hx_Closure_0(onSuccess1,_g,onCancel1,response));
HXLINE( 207)			if (::hx::IsNotNull( onPending )) {
HXLINE( 208)				onPending();
            			}
            			else {
HXLINE( 210)				this->openPassportUrl();
            			}
            		}
            		else {
HXLINE( 213)			this->checkSession(null(),onSuccess,onCancel);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(NG_obj,onSessionReceive,(void))

void NG_obj::openPassportUrl(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_222_openPassportUrl)
HXDLIN( 222)		if (::hx::IsNotNull( this->get_passportUrl() )) {
HXLINE( 224)			{
HXLINE( 224)				 ::Dynamic any = (HX_("loading passport: ",1c,a3,0a,02) + this->get_passportUrl());
HXDLIN( 224)				if (this->verbose) {
HXLINE( 224)					this->log(any,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),224,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("openPassportUrl",13,82,92,a3)));
            				}
            			}
HXLINE( 225)			::io::newgrounds::NG_obj::openPassportHelper(this->get_passportUrl());
HXLINE( 226)			this->dispatchPassportCallback();
            		}
            		else {
HXLINE( 229)			this->logError(HX_("Cannot open passport",2b,3e,e4,33),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),229,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("openPassportUrl",13,82,92,a3)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,openPassportUrl,(void))

void NG_obj::onPassportUrlOpen(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_264_onPassportUrlOpen)
HXDLIN( 264)		this->dispatchPassportCallback();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,onPassportUrlOpen,(void))

void NG_obj::dispatchPassportCallback(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_269_dispatchPassportCallback)
HXDLIN( 269)		if (::hx::IsNotNull( this->_passportCallback )) {
HXLINE( 271)			if (this->verbose) {
HXLINE( 271)				this->log(HX_("dispatching passport callback",1b,2f,ca,c5),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),271,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("dispatchPassportCallback",91,5b,b5,5b)));
            			}
HXLINE( 272)			 ::Dynamic callback = this->_passportCallback;
HXLINE( 273)			this->_passportCallback = null();
HXLINE( 274)			callback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,dispatchPassportCallback,(void))

void NG_obj::checkSession( ::Dynamic response, ::Dynamic onSuccess, ::Dynamic onCancel){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_278_checkSession)
HXDLIN( 278)		 ::io::newgrounds::NG _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 280)		if (this->_loginCancelled) {
HXLINE( 282)			this->log(HX_("login cancelled via cancelLoginRequest",d8,42,ea,fc),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),282,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 284)			this->endLoginAndCall(onCancel);
HXLINE( 285)			return;
            		}
HXLINE( 288)		if (::hx::IsNotNull( response )) {
HXLINE( 290)			bool _hx_tmp;
HXDLIN( 290)			if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 290)				_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE( 290)				_hx_tmp = true;
            			}
HXDLIN( 290)			if (_hx_tmp) {
HXLINE( 292)				this->log(HX_("login cancelled via passport",2a,a4,ee,75),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),292,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 294)				this->endLoginAndCall(onCancel);
HXLINE( 295)				return;
            			}
HXLINE( 298)			if (this->verbose) {
HXLINE( 298)				this->log(HX_("Session received",4b,8f,56,de),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),298,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
            			}
HXLINE( 299)			this->_session =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("session",56,17,98,93),::hx::paccDynamic);
            		}
HXLINE( 302)		if ((::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) == HX_("user-loaded",07,45,85,a0))) {
HXLINE( 304)			this->loggedIn = true;
HXLINE( 305)			this->endLoginAndCall(onSuccess);
HXLINE( 306)			this->onLogin->dispatch();
            		}
            		else {
HXLINE( 308)			if ((::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) == HX_("request-login",ab,da,18,fe))) {
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onSuccess1, ::Dynamic,_g, ::Dynamic,onCancel1) HXARGC(1)
            				void _hx_run( ::Dynamic response){
            					HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_311_checkSession)
HXLINE( 311)					_g(response,onSuccess1,onCancel1);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,onCancel, ::io::newgrounds::NG,_gthis, ::io::newgrounds::Call,call1) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_315_checkSession)
HXLINE( 317)					if (_gthis->verbose) {
HXLINE( 317)						_gthis->log(HX_("3s elapsed, checking session again",00,1e,ea,af),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),317,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
            					}
HXLINE( 320)					if (!(_gthis->_loginCancelled)) {
HXLINE( 321)						call1->send();
            					}
            					else {
HXLINE( 324)						_gthis->log(HX_("login cancelled via cancelLoginRequest",d8,42,ea,fc),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),324,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 325)						_gthis->endLoginAndCall(onCancel);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 311)				 ::Dynamic _g = this->checkSession_dyn();
HXDLIN( 311)				 ::Dynamic onSuccess1 = onSuccess;
HXDLIN( 311)				 ::Dynamic onCancel1 = onCancel;
HXDLIN( 311)				 ::Dynamic call =  ::Dynamic(new _hx_Closure_0(onSuccess1,_g,onCancel1));
HXLINE( 310)				 ::io::newgrounds::Call call1 = this->calls->app->checkSession()->addDataHandler(call);
HXLINE( 314)				this->timer(((Float)3.0), ::Dynamic(new _hx_Closure_1(onCancel,_gthis,call1)));
            			}
            			else {
HXLINE( 332)				this->log(HX_("login cancelled via passport",2a,a4,ee,75),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),332,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 335)				this->endLoginAndCall(onCancel);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(NG_obj,checkSession,(void))

void NG_obj::cancelLoginRequest(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_341_cancelLoginRequest)
HXDLIN( 341)		if (this->attemptingLogin) {
HXLINE( 343)			this->_loginCancelled = true;
HXLINE( 345)			this->dispatchPassportCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,cancelLoginRequest,(void))

void NG_obj::endLoginAndCall( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_349_endLoginAndCall)
HXLINE( 351)		this->attemptingLogin = false;
HXLINE( 352)		this->_loginCancelled = false;
HXLINE( 354)		if (::hx::IsNotNull( callback )) {
HXLINE( 355)			callback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,endLoginAndCall,(void))

void NG_obj::logOut( ::Dynamic onComplete){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_358_logOut)
HXLINE( 360)		 ::io::newgrounds::Call call = this->calls->app->endSession()->addSuccessHandler(this->onLogOutSuccessful_dyn());
HXLINE( 363)		if (::hx::IsNotNull( onComplete )) {
HXLINE( 364)			call->addSuccessHandler(onComplete);
            		}
HXLINE( 366)		call->addSuccessHandler(this->onLogOut->dispatch_dyn())->send();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,logOut,(void))

void NG_obj::onLogOutSuccessful(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_370_onLogOutSuccessful)
HXLINE( 372)		this->_session = null();
HXLINE( 373)		this->set_sessionId(null());
HXLINE( 374)		this->loggedIn = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,onLogOutSuccessful,(void))

void NG_obj::requestMedals( ::Dynamic onSuccess, ::Dynamic onFail){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_381_requestMedals)
HXLINE( 383)		 ::io::newgrounds::Call call = this->calls->medal->getList()->addDataHandler(this->onMedalsReceived_dyn());
HXLINE( 386)		if (::hx::IsNotNull( onSuccess )) {
HXLINE( 387)			call->addSuccessHandler(onSuccess);
            		}
HXLINE( 389)		if (::hx::IsNotNull( onFail )) {
HXLINE( 390)			call->addErrorHandler(onFail);
            		}
HXLINE( 392)		call->send();
            	}


HX_DEFINE_DYNAMIC_FUNC2(NG_obj,requestMedals,(void))

void NG_obj::onMedalsReceived( ::Dynamic response){
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_395_onMedalsReceived)
HXLINE( 397)		bool _hx_tmp;
HXDLIN( 397)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 397)			_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 397)			_hx_tmp = true;
            		}
HXDLIN( 397)		if (_hx_tmp) {
HXLINE( 398)			return;
            		}
HXLINE( 400)		::Array< int > idList = ::Array_obj< int >::__new();
HXLINE( 402)		if (::hx::IsNull( this->medals )) {
HXLINE( 404)			this->medals =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 406)			{
HXLINE( 406)				int _g = 0;
HXDLIN( 406)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("medals",9c,3a,c2,fe),::hx::paccDynamic)) );
HXDLIN( 406)				while((_g < _g1->length)){
HXLINE( 406)					 ::Dynamic medalData = _g1->__get(_g);
HXDLIN( 406)					_g = (_g + 1);
HXLINE( 408)					 ::io::newgrounds::objects::Medal medal =  ::io::newgrounds::objects::Medal_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),medalData);
HXLINE( 409)					this->medals->set(( (int)(medal->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),medal);
HXLINE( 410)					idList->push( ::Dynamic(medal->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
            				}
            			}
            		}
            		else {
HXLINE( 414)			int _g = 0;
HXDLIN( 414)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("medals",9c,3a,c2,fe),::hx::paccDynamic)) );
HXDLIN( 414)			while((_g < _g1->length)){
HXLINE( 414)				 ::Dynamic medalData = _g1->__get(_g);
HXDLIN( 414)				_g = (_g + 1);
HXLINE( 416)				( ( ::io::newgrounds::objects::Medal)(this->medals->get( ::Dynamic(medalData->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))) )->parse(medalData);
HXLINE( 417)				idList->push( ::Dynamic(medalData->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
            			}
            		}
HXLINE( 421)		{
HXLINE( 421)			::String any = ((HX_("",00,00,00,00) + ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("medals",9c,3a,c2,fe),::hx::paccDynamic)) )->length) + HX_(" Medals received [",60,82,7d,de));
HXDLIN( 421)			 ::Dynamic any1 = ((any + idList->join(HX_(", ",74,26,00,00))) + HX_("]",5d,00,00,00));
HXDLIN( 421)			if (this->verbose) {
HXLINE( 421)				this->log(any1,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),421,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("onMedalsReceived",5c,45,ad,96)));
            			}
            		}
HXLINE( 423)		this->onMedalsLoaded->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,onMedalsReceived,(void))

void NG_obj::requestScoreBoards( ::Dynamic onSuccess, ::Dynamic onFail){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_430_requestScoreBoards)
HXLINE( 432)		if (::hx::IsNotNull( this->scoreBoards )) {
HXLINE( 434)			this->log(HX_("aborting scoreboard request, all scoreboards are loaded",76,36,16,7e),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),434,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("requestScoreBoards",f0,68,0d,d6)));
HXLINE( 436)			if (::hx::IsNotNull( onSuccess )) {
HXLINE( 437)				onSuccess();
            			}
HXLINE( 439)			return;
            		}
HXLINE( 442)		 ::io::newgrounds::Call call = this->calls->scoreBoard->getBoards()->addDataHandler(this->onBoardsReceived_dyn());
HXLINE( 445)		if (::hx::IsNotNull( onSuccess )) {
HXLINE( 446)			call->addSuccessHandler(onSuccess);
            		}
HXLINE( 448)		if (::hx::IsNotNull( onFail )) {
HXLINE( 449)			call->addErrorHandler(onFail);
            		}
HXLINE( 451)		call->send();
            	}


HX_DEFINE_DYNAMIC_FUNC2(NG_obj,requestScoreBoards,(void))

void NG_obj::onBoardsReceived( ::Dynamic response){
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_454_onBoardsReceived)
HXLINE( 456)		bool _hx_tmp;
HXDLIN( 456)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 456)			_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 456)			_hx_tmp = true;
            		}
HXDLIN( 456)		if (_hx_tmp) {
HXLINE( 457)			return;
            		}
HXLINE( 459)		::Array< int > idList = ::Array_obj< int >::__new();
HXLINE( 461)		if (::hx::IsNull( this->scoreBoards )) {
HXLINE( 463)			this->scoreBoards =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 465)			{
HXLINE( 465)				int _g = 0;
HXDLIN( 465)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("scoreboards",df,07,ba,f0),::hx::paccDynamic)) );
HXDLIN( 465)				while((_g < _g1->length)){
HXLINE( 465)					 ::Dynamic boardData = _g1->__get(_g);
HXDLIN( 465)					_g = (_g + 1);
HXLINE( 467)					 ::io::newgrounds::objects::ScoreBoard board =  ::io::newgrounds::objects::ScoreBoard_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),boardData);
HXLINE( 468)					this->scoreBoards->set(( (int)(board->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),board);
HXLINE( 469)					idList->push( ::Dynamic(board->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
            				}
            			}
            		}
HXLINE( 473)		{
HXLINE( 473)			::String any = ((HX_("",00,00,00,00) + ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("scoreboards",df,07,ba,f0),::hx::paccDynamic)) )->length) + HX_(" ScoreBoards received [",5d,76,da,01));
HXDLIN( 473)			 ::Dynamic any1 = ((any + idList->join(HX_(", ",74,26,00,00))) + HX_("]",5d,00,00,00));
HXDLIN( 473)			if (this->verbose) {
HXLINE( 473)				this->log(any1,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),473,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("onBoardsReceived",cd,ae,f2,b9)));
            			}
            		}
HXLINE( 475)		this->onScoreBoardsLoaded->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,onBoardsReceived,(void))

void NG_obj::timer(Float delay, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::Timer,timer, ::Dynamic,callback) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_485_timer)
HXLINE( 487)			timer->stop();
HXLINE( 488)			callback();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_482_timer)
HXLINE( 484)		 ::haxe::Timer timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(::Std_obj::_hx_int((delay * ( (Float)(1000) )))) ));
HXLINE( 485)		 ::Dynamic func =  ::Dynamic(new _hx_Closure_0(timer,callback));
HXDLIN( 485)		timer->run = func;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NG_obj,timer,(void))

 ::io::newgrounds::NG NG_obj::core;

 ::io::newgrounds::utils::Dispatcher NG_obj::onCoreReady;

void NG_obj::create(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            		bool debug = __o_debug.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_97_create)
HXLINE(  99)		::io::newgrounds::NG_obj::core =  ::io::newgrounds::NG_obj::__alloc( HX_CTX ,appId,sessionId,debug,onSessionFail);
HXLINE( 101)		::io::newgrounds::NG_obj::onCoreReady->dispatch();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NG_obj,create,(void))

void NG_obj::createAndCheckSession(::String __o_appId,::hx::Null< bool >  __o_debug,::String backupSession, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            		bool debug = __o_debug.Default(false);
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_116_createAndCheckSession)
HXLINE( 118)		::String session = ::io::newgrounds::NGLite_obj::getSessionId();
HXLINE( 119)		if (::hx::IsNull( session )) {
HXLINE( 120)			session = backupSession;
            		}
HXLINE( 122)		::io::newgrounds::NG_obj::create(appId,session,debug,onSessionFail);
HXLINE( 124)		if (::hx::IsNotNull( ::io::newgrounds::NG_obj::core->sessionId )) {
HXLINE( 125)			::io::newgrounds::NG_obj::core->attemptingLogin = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NG_obj,createAndCheckSession,(void))

void NG_obj::openPassportHelper(::String url){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_233_openPassportHelper)
HXLINE( 234)		::String window = HX_("_blank",95,26,d9,b0);
HXLINE( 245)		::Sys_obj::command(HX_("/usr/bin/open",5c,58,a2,62),::Array_obj< ::String >::__new(1)->init(0,url));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NG_obj,openPassportHelper,(void))

 ::EReg NG_obj::urlParser;

::String NG_obj::getHost(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_494_getHost)
HXLINE( 496)		::String url = null();
HXLINE( 498)		bool _hx_tmp;
HXDLIN( 498)		if (::hx::IsNotNull( url )) {
HXLINE( 498)			_hx_tmp = (url == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 498)			_hx_tmp = true;
            		}
HXDLIN( 498)		if (_hx_tmp) {
HXLINE( 499)			return HX_("AppView",86,e7,f4,0c);
            		}
HXLINE( 501)		bool _hx_tmp1;
HXDLIN( 501)		if ((url.indexOf(HX_("file",7c,ce,bb,43),null()) != 0)) {
HXLINE( 501)			_hx_tmp1 = (url.indexOf(HX_("127.0.0.1",fd,bc,5e,a1),null()) != -1);
            		}
            		else {
HXLINE( 501)			_hx_tmp1 = true;
            		}
HXDLIN( 501)		if (_hx_tmp1) {
HXLINE( 502)			return HX_("LocalHost",53,36,28,a9);
            		}
HXLINE( 504)		if (::io::newgrounds::NG_obj::urlParser->match(url)) {
HXLINE( 505)			return ::io::newgrounds::NG_obj::urlParser->matched(1);
            		}
HXLINE( 507)		return HX_("Unknown",6a,4b,cc,ae);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NG_obj,getHost,return )


::hx::ObjectPtr< NG_obj > NG_obj::__new(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail) {
	::hx::ObjectPtr< NG_obj > __this = new NG_obj();
	__this->__construct(__o_appId,sessionId,__o_debug,onSessionFail);
	return __this;
}

::hx::ObjectPtr< NG_obj > NG_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail) {
	NG_obj *__this = (NG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NG_obj), true, "io.newgrounds.NG"));
	*(void **)__this = NG_obj::_hx_vtable;
	io::newgrounds::NGLite_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(__o_appId,sessionId,__o_debug,onSessionFail);
	return __this;
}

NG_obj::NG_obj()
{
}

void NG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NG);
	HX_MARK_MEMBER_NAME(medals,"medals");
	HX_MARK_MEMBER_NAME(scoreBoards,"scoreBoards");
	HX_MARK_MEMBER_NAME(onLogin,"onLogin");
	HX_MARK_MEMBER_NAME(onLogOut,"onLogOut");
	HX_MARK_MEMBER_NAME(onMedalsLoaded,"onMedalsLoaded");
	HX_MARK_MEMBER_NAME(onScoreBoardsLoaded,"onScoreBoardsLoaded");
	HX_MARK_MEMBER_NAME(loggedIn,"loggedIn");
	HX_MARK_MEMBER_NAME(attemptingLogin,"attemptingLogin");
	HX_MARK_MEMBER_NAME(_loginCancelled,"_loginCancelled");
	HX_MARK_MEMBER_NAME(_passportCallback,"_passportCallback");
	HX_MARK_MEMBER_NAME(_session,"_session");
	 ::io::newgrounds::NGLite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(medals,"medals");
	HX_VISIT_MEMBER_NAME(scoreBoards,"scoreBoards");
	HX_VISIT_MEMBER_NAME(onLogin,"onLogin");
	HX_VISIT_MEMBER_NAME(onLogOut,"onLogOut");
	HX_VISIT_MEMBER_NAME(onMedalsLoaded,"onMedalsLoaded");
	HX_VISIT_MEMBER_NAME(onScoreBoardsLoaded,"onScoreBoardsLoaded");
	HX_VISIT_MEMBER_NAME(loggedIn,"loggedIn");
	HX_VISIT_MEMBER_NAME(attemptingLogin,"attemptingLogin");
	HX_VISIT_MEMBER_NAME(_loginCancelled,"_loginCancelled");
	HX_VISIT_MEMBER_NAME(_passportCallback,"_passportCallback");
	HX_VISIT_MEMBER_NAME(_session,"_session");
	 ::io::newgrounds::NGLite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_user() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"medals") ) { return ::hx::Val( medals ); }
		if (HX_FIELD_EQ(inName,"logOut") ) { return ::hx::Val( logOut_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onLogin") ) { return ::hx::Val( onLogin ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_user") ) { return ::hx::Val( get_user_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLogOut") ) { return ::hx::Val( onLogOut ); }
		if (HX_FIELD_EQ(inName,"loggedIn") ) { return ::hx::Val( loggedIn ); }
		if (HX_FIELD_EQ(inName,"_session") ) { return ::hx::Val( _session ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"passportUrl") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_passportUrl() ); }
		if (HX_FIELD_EQ(inName,"scoreBoards") ) { return ::hx::Val( scoreBoards ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"requestLogin") ) { return ::hx::Val( requestLogin_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkSession") ) { return ::hx::Val( checkSession_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"requestMedals") ) { return ::hx::Val( requestMedals_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMedalsLoaded") ) { return ::hx::Val( onMedalsLoaded ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_passportUrl") ) { return ::hx::Val( get_passportUrl_dyn() ); }
		if (HX_FIELD_EQ(inName,"attemptingLogin") ) { return ::hx::Val( attemptingLogin ); }
		if (HX_FIELD_EQ(inName,"_loginCancelled") ) { return ::hx::Val( _loginCancelled ); }
		if (HX_FIELD_EQ(inName,"openPassportUrl") ) { return ::hx::Val( openPassportUrl_dyn() ); }
		if (HX_FIELD_EQ(inName,"endLoginAndCall") ) { return ::hx::Val( endLoginAndCall_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onSessionReceive") ) { return ::hx::Val( onSessionReceive_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMedalsReceived") ) { return ::hx::Val( onMedalsReceived_dyn() ); }
		if (HX_FIELD_EQ(inName,"onBoardsReceived") ) { return ::hx::Val( onBoardsReceived_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_passportCallback") ) { return ::hx::Val( _passportCallback ); }
		if (HX_FIELD_EQ(inName,"onPassportUrlOpen") ) { return ::hx::Val( onPassportUrlOpen_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cancelLoginRequest") ) { return ::hx::Val( cancelLoginRequest_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLogOutSuccessful") ) { return ::hx::Val( onLogOutSuccessful_dyn() ); }
		if (HX_FIELD_EQ(inName,"requestScoreBoards") ) { return ::hx::Val( requestScoreBoards_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onScoreBoardsLoaded") ) { return ::hx::Val( onScoreBoardsLoaded ); }
		if (HX_FIELD_EQ(inName,"checkInitialSession") ) { return ::hx::Val( checkInitialSession_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"dispatchPassportCallback") ) { return ::hx::Val( dispatchPassportCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { outValue = ( core ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHost") ) { outValue = getHost_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlParser") ) { outValue = ( urlParser ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onCoreReady") ) { outValue = ( onCoreReady ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"openPassportHelper") ) { outValue = openPassportHelper_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createAndCheckSession") ) { outValue = createAndCheckSession_dyn(); return true; }
	}
	return false;
}

::hx::Val NG_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"medals") ) { medals=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onLogin") ) { onLogin=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onLogOut") ) { onLogOut=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loggedIn") ) { loggedIn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_session") ) { _session=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreBoards") ) { scoreBoards=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMedalsLoaded") ) { onMedalsLoaded=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attemptingLogin") ) { attemptingLogin=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_loginCancelled") ) { _loginCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_passportCallback") ) { _passportCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onScoreBoardsLoaded") ) { onScoreBoardsLoaded=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=ioValue.Cast<  ::io::newgrounds::NG >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlParser") ) { urlParser=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onCoreReady") ) { onCoreReady=ioValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return true; }
	}
	return false;
}

void NG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("user",4b,92,ad,4d));
	outFields->push(HX_("passportUrl",bd,8d,3e,35));
	outFields->push(HX_("medals",9c,3a,c2,fe));
	outFields->push(HX_("scoreBoards",ff,7b,4e,25));
	outFields->push(HX_("onLogin",ca,77,31,0f));
	outFields->push(HX_("onLogOut",e9,a4,03,3c));
	outFields->push(HX_("onMedalsLoaded",80,33,31,67));
	outFields->push(HX_("onScoreBoardsLoaded",45,ed,e3,95));
	outFields->push(HX_("loggedIn",07,3b,2d,e9));
	outFields->push(HX_("attemptingLogin",34,67,19,59));
	outFields->push(HX_("_loginCancelled",87,e0,3b,5c));
	outFields->push(HX_("_session",d7,70,50,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NG_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(NG_obj,medals),HX_("medals",9c,3a,c2,fe)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(NG_obj,scoreBoards),HX_("scoreBoards",ff,7b,4e,25)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onLogin),HX_("onLogin",ca,77,31,0f)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onLogOut),HX_("onLogOut",e9,a4,03,3c)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onMedalsLoaded),HX_("onMedalsLoaded",80,33,31,67)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onScoreBoardsLoaded),HX_("onScoreBoardsLoaded",45,ed,e3,95)},
	{::hx::fsBool,(int)offsetof(NG_obj,loggedIn),HX_("loggedIn",07,3b,2d,e9)},
	{::hx::fsBool,(int)offsetof(NG_obj,attemptingLogin),HX_("attemptingLogin",34,67,19,59)},
	{::hx::fsBool,(int)offsetof(NG_obj,_loginCancelled),HX_("_loginCancelled",87,e0,3b,5c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NG_obj,_passportCallback),HX_("_passportCallback",16,0b,af,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NG_obj,_session),HX_("_session",d7,70,50,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NG_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::io::newgrounds::NG */ ,(void *) &NG_obj::core,HX_("core",5f,bd,c4,41)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(void *) &NG_obj::onCoreReady,HX_("onCoreReady",65,5d,00,e3)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &NG_obj::urlParser,HX_("urlParser",ae,f9,f6,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NG_obj_sMemberFields[] = {
	HX_("get_user",d4,4d,68,cd),
	HX_("get_passportUrl",54,45,20,f6),
	HX_("medals",9c,3a,c2,fe),
	HX_("scoreBoards",ff,7b,4e,25),
	HX_("onLogin",ca,77,31,0f),
	HX_("onLogOut",e9,a4,03,3c),
	HX_("onMedalsLoaded",80,33,31,67),
	HX_("onScoreBoardsLoaded",45,ed,e3,95),
	HX_("loggedIn",07,3b,2d,e9),
	HX_("attemptingLogin",34,67,19,59),
	HX_("_loginCancelled",87,e0,3b,5c),
	HX_("_passportCallback",16,0b,af,2d),
	HX_("_session",d7,70,50,cd),
	HX_("checkInitialSession",1a,02,4a,8a),
	HX_("requestLogin",9a,8b,c5,14),
	HX_("onSessionReceive",ac,b6,9a,52),
	HX_("openPassportUrl",13,82,92,a3),
	HX_("onPassportUrlOpen",c8,a1,47,f2),
	HX_("dispatchPassportCallback",91,5b,b5,5b),
	HX_("checkSession",6e,cf,1e,81),
	HX_("cancelLoginRequest",80,a5,61,18),
	HX_("endLoginAndCall",27,61,b7,d3),
	HX_("logOut",6a,ae,56,5c),
	HX_("onLogOutSuccessful",a3,a8,22,1e),
	HX_("requestMedals",4b,73,6c,ba),
	HX_("onMedalsReceived",5c,45,ad,96),
	HX_("requestScoreBoards",f0,68,0d,d6),
	HX_("onBoardsReceived",cd,ae,f2,b9),
	HX_("timer",c5,bf,35,10),
	::String(null()) };

static void NG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NG_obj::core,"core");
	HX_MARK_MEMBER_NAME(NG_obj::onCoreReady,"onCoreReady");
	HX_MARK_MEMBER_NAME(NG_obj::urlParser,"urlParser");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NG_obj::core,"core");
	HX_VISIT_MEMBER_NAME(NG_obj::onCoreReady,"onCoreReady");
	HX_VISIT_MEMBER_NAME(NG_obj::urlParser,"urlParser");
};

#endif

::hx::Class NG_obj::__mClass;

static ::String NG_obj_sStaticFields[] = {
	HX_("core",5f,bd,c4,41),
	HX_("onCoreReady",65,5d,00,e3),
	HX_("create",fc,66,0f,7c),
	HX_("createAndCheckSession",49,59,5b,b3),
	HX_("openPassportHelper",4a,e5,75,af),
	HX_("urlParser",ae,f9,f6,8d),
	HX_("getHost",1e,7f,95,17),
	::String(null())
};

void NG_obj::__register()
{
	NG_obj _hx_dummy;
	NG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.NG",33,4d,c0,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NG_obj::__GetStatic;
	__mClass->mSetStaticField = &NG_obj::__SetStatic;
	__mClass->mMarkFunc = NG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NG_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_29_boot)
HXDLIN(  29)		onCoreReady =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_492_boot)
HXDLIN( 492)		urlParser =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(?:http[s]?://)?([^:/\\s]+)(:[0-9]+)?((?:/\\w+)*/)([\\w\\-\\.]+[^#?\\s]+)([^#\\s]*)?(#[\\w\\-]+)?$",91,b6,f6,31),HX_("i",69,00,00,00));
            	}
}

} // end namespace io
} // end namespace newgrounds
