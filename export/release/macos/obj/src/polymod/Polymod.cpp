#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_Framework
#include <polymod/Framework.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodError
#include <polymod/PolymodError.h>
#endif
#ifndef INCLUDED_polymod_PolymodErrorType
#include <polymod/PolymodErrorType.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssets
#include <polymod/backends/PolymodAssets.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_SemanticVersion
#include <polymod/util/SemanticVersion.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_137_init,"polymod.Polymod","init",0x00ecc620,"polymod.Polymod.init","polymod/Polymod.hx",137,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_245_getDefaultIgnoreList,"polymod.Polymod","getDefaultIgnoreList",0xc5278c4b,"polymod.Polymod.getDefaultIgnoreList","polymod/Polymod.hx",245,0xd80c6d61)
static const ::String _hx_array_data_e42eaf5e_4[] = {
	HX_("_polymod_meta.json",69,fc,10,06),HX_("_polymod_icon.png",3c,6c,4c,14),HX_("_polymod_pack.txt",63,9d,09,cb),HX_("ASSET_LICENSE.txt",b4,72,9f,4f),HX_("CODE_LICENSE.txt",91,61,d1,6f),HX_("LICENSE.txt",e3,aa,9a,6b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_256_scan,"polymod.Polymod","scan",0x0780888d,"polymod.Polymod.scan","polymod/Polymod.hx",256,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_333_error,"polymod.Polymod","error",0x8351eeb8,"polymod.Polymod.error","polymod/Polymod.hx",333,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_341_warning,"polymod.Polymod","warning",0x8e76994c,"polymod.Polymod.warning","polymod/Polymod.hx",341,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_349_notice,"polymod.Polymod","notice",0x44af4728,"polymod.Polymod.notice","polymod/Polymod.hx",349,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_358_getFileSystem,"polymod.Polymod","getFileSystem",0x7a45cdb1,"polymod.Polymod.getFileSystem","polymod/Polymod.hx",358,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_364_getMetadata,"polymod.Polymod","getMetadata",0xda1aa115,"polymod.Polymod.getMetadata","polymod/Polymod.hx",364,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_411_listModFiles,"polymod.Polymod","listModFiles",0x718ff9e3,"polymod.Polymod.listModFiles","polymod/Polymod.hx",411,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_422_initModPack,"polymod.Polymod","initModPack",0x0bf5087b,"polymod.Polymod.initModPack","polymod/Polymod.hx",422,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_437_getModPack,"polymod.Polymod","getModPack",0xa5a25fd5,"polymod.Polymod.getModPack","polymod/Polymod.hx",437,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_128_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",128,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_129_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",129,0xd80c6d61)
namespace polymod{

void Polymod_obj::__construct() { }

Dynamic Polymod_obj::__CreateEmpty() { return new Polymod_obj; }

void *Polymod_obj::_hx_vtable = 0;

Dynamic Polymod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polymod_obj > _hx_result = new Polymod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polymod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4937d120;
}

 ::Dynamic Polymod_obj::onError;

 ::polymod::backends::PolymodAssetLibrary Polymod_obj::library;

::Array< ::Dynamic> Polymod_obj::init( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_137_init)
HXLINE( 138)		::polymod::Polymod_obj::onError = params->__Field(HX_("errorCallback",ad,29,bf,d7),::hx::paccDynamic);
HXLINE( 140)		::String modRoot = ( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) );
HXLINE( 141)		::Array< ::String > dirs = ( (::Array< ::String >)(params->__Field(HX_("dirs",86,66,69,42),::hx::paccDynamic)) );
HXLINE( 142)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 143)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 145)			::String apiStr = ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) );
HXLINE( 146)			bool _hx_tmp;
HXDLIN( 146)			if (::hx::IsNotNull( apiStr )) {
HXLINE( 146)				_hx_tmp = (apiStr == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 146)				_hx_tmp = true;
            			}
HXDLIN( 146)			if (_hx_tmp) {
HXLINE( 148)				apiStr = HX_("*.*.*",a2,34,5c,4d);
            			}
HXLINE( 150)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 152)				{
HXLINE( 152)					null();
            				}
HXDLIN( 152)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 154)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("init",10,3b,bb,45));
HXLINE( 155)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 158)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 159)		::Array< ::Dynamic> modVers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 161)		if (::hx::IsNotNull( params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic) )) {
HXLINE( 163)			int _g = 0;
HXDLIN( 163)			::Array< ::String > _g1 = ( (::Array< ::String >)(params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic)) );
HXDLIN( 163)			while((_g < _g1->length)){
HXLINE( 163)				::String str = _g1->__get(_g);
HXDLIN( 163)				_g = (_g + 1);
HXLINE( 165)				 ::polymod::util::SemanticVersion semVer = null();
HXLINE( 166)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 168)					semVer = ::polymod::util::SemanticVersion_obj::fromString(str);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 170)						{
HXLINE( 170)							null();
            						}
HXDLIN( 170)						 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 171)						{
HXLINE( 172)							::polymod::Polymod_obj::error(HX_("param_mod_version",69,37,99,54),(HX_("There was an error with one of the mod version patterns you provided: ",a5,c6,14,8b) + ::Std_obj::string(msg)),HX_("init",10,3b,bb,45));
HXLINE( 173)							semVer = ::polymod::util::SemanticVersion_obj::fromString(HX_("*.*.*",a2,34,5c,4d));
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 175)				modVers->push(semVer);
            			}
            		}
HXLINE( 179)		{
HXLINE( 179)			int _g = 0;
HXDLIN( 179)			int _g1 = dirs->length;
HXDLIN( 179)			while((_g < _g1)){
HXLINE( 179)				_g = (_g + 1);
HXDLIN( 179)				int i = (_g - 1);
HXLINE( 181)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 183)					::String origDir = dirs->__get(i);
HXLINE( 184)					dirs[i] = ::polymod::util::Util_obj::pathJoin(modRoot,dirs->__get(i));
HXLINE( 185)					 ::polymod::ModMetadata meta = ::polymod::Polymod_obj::getMetadata(dirs->__get(i));
HXLINE( 187)					if (::hx::IsNotNull( meta )) {
HXLINE( 189)						meta->id = origDir;
HXLINE( 190)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 191)						if ((apiScore < 3)) {
HXLINE( 193)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXDLIN( 193)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) ).toString()),HX_("init",10,3b,bb,45));
            						}
            						else {
HXLINE( 197)							if ((apiVersion->major == 0)) {
HXLINE( 200)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 204)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 202)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("init",10,3b,bb,45));
            								}
            							}
            						}
HXLINE( 210)						 ::polymod::util::SemanticVersion modVer;
HXDLIN( 210)						if ((modVers->length > i)) {
HXLINE( 210)							modVer = modVers->__get(i).StaticCast<  ::polymod::util::SemanticVersion >();
            						}
            						else {
HXLINE( 210)							modVer = null();
            						}
HXLINE( 211)						if (::hx::IsNotNull( modVer )) {
HXLINE( 213)							int score = modVer->checkCompatibility(meta->modVersion);
HXLINE( 214)							if ((score < 3)) {
HXLINE( 216)								::String _hx_tmp = ((HX_("Mod pack wants version ",0e,47,1b,3b) + modVer->toString()) + HX_(" of mod(",af,f2,b6,ab));
HXDLIN( 216)								::String _hx_tmp1 = ((_hx_tmp + meta->id) + HX_("), found incompatible version ",74,75,29,24));
HXDLIN( 216)								::polymod::Polymod_obj::error(HX_("version_conflict_mod",dc,93,83,d1),((_hx_tmp1 + meta->modVersion->toString()) + HX_(" instead",62,18,ec,b3)),HX_("init",10,3b,bb,45));
            							}
            						}
HXLINE( 219)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 224)		::polymod::backends::PolymodAssets_obj::init( ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("customBackend",63,24,96,a5), ::Dynamic(params->__Field(HX_("customBackend",63,24,96,a5),::hx::paccDynamic)))
            			->setFixed(1,HX_("parseRules",c4,aa,37,1b), ::Dynamic(params->__Field(HX_("parseRules",c4,aa,37,1b),::hx::paccDynamic)))
            			->setFixed(2,HX_("extensionMap",5d,28,7a,23), ::Dynamic(params->__Field(HX_("extensionMap",5d,28,7a,23),::hx::paccDynamic)))
            			->setFixed(3,HX_("frameworkParams",64,76,eb,26), ::Dynamic(params->__Field(HX_("frameworkParams",64,76,eb,26),::hx::paccDynamic)))
            			->setFixed(4,HX_("dirs",86,66,69,42),dirs)
            			->setFixed(5,HX_("framework",7e,94,a4,51), ::Dynamic(params->__Field(HX_("framework",7e,94,a4,51),::hx::paccDynamic)))
            			->setFixed(6,HX_("ignoredFiles",05,36,92,57), ::Dynamic(params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic)))));
HXLINE( 235)		if (::polymod::backends::PolymodAssets_obj::exists(HX_("_polymod_pack.txt",63,9d,09,cb))) {
HXLINE( 237)			::polymod::Polymod_obj::initModPack(params);
            		}
HXLINE( 240)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,init,return )

::Array< ::String > Polymod_obj::getDefaultIgnoreList(){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_245_getDefaultIgnoreList)
HXDLIN( 245)		return ::Array_obj< ::String >::fromData( _hx_array_data_e42eaf5e_4,6);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Polymod_obj,getDefaultIgnoreList,return )

::Array< ::Dynamic> Polymod_obj::scan(::String modRoot,::String __o_apiVersionStr, ::Dynamic errorCallback){
            		::String apiVersionStr = __o_apiVersionStr;
            		if (::hx::IsNull(__o_apiVersionStr)) apiVersionStr = HX_("*.*.*",a2,34,5c,4d);
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_256_scan)
HXLINE( 257)		::polymod::Polymod_obj::onError = errorCallback;
HXLINE( 258)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 259)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 261)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiVersionStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 263)				{
HXLINE( 263)					null();
            				}
HXDLIN( 263)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 265)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("scan",7d,fd,4e,4c));
HXLINE( 266)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 269)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 271)		bool _hx_tmp;
HXDLIN( 271)		if (::sys::FileSystem_obj::exists(modRoot)) {
HXLINE( 271)			_hx_tmp = !(::sys::FileSystem_obj::isDirectory(modRoot));
            		}
            		else {
HXLINE( 271)			_hx_tmp = true;
            		}
HXDLIN( 271)		if (_hx_tmp) {
HXLINE( 273)			return modMeta;
            		}
HXLINE( 275)		::Array< ::String > dirs = ::sys::FileSystem_obj::readDirectory(modRoot);
HXLINE( 276)		int l = dirs->length;
HXLINE( 277)		{
HXLINE( 277)			int _g = 0;
HXDLIN( 277)			int _g1 = l;
HXDLIN( 277)			while((_g < _g1)){
HXLINE( 277)				_g = (_g + 1);
HXDLIN( 277)				int i = (_g - 1);
HXLINE( 279)				int j = ((l - i) - 1);
HXLINE( 280)				::String dir = dirs->__get(j);
HXLINE( 281)				::String testDir = ((modRoot + HX_("/",2f,00,00,00)) + dir);
HXLINE( 282)				bool _hx_tmp;
HXDLIN( 282)				if (::sys::FileSystem_obj::isDirectory(testDir)) {
HXLINE( 282)					_hx_tmp = !(::sys::FileSystem_obj::exists(testDir));
            				}
            				else {
HXLINE( 282)					_hx_tmp = true;
            				}
HXDLIN( 282)				if (_hx_tmp) {
HXLINE( 284)					dirs->removeRange(j,1);
            				}
            			}
            		}
HXLINE( 288)		{
HXLINE( 288)			int _g2 = 0;
HXDLIN( 288)			int _g3 = dirs->length;
HXDLIN( 288)			while((_g2 < _g3)){
HXLINE( 288)				_g2 = (_g2 + 1);
HXDLIN( 288)				int i = (_g2 - 1);
HXLINE( 290)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 292)					::String origDir = dirs->__get(i);
HXLINE( 293)					dirs[i] = ((modRoot + HX_("/",2f,00,00,00)) + dirs->__get(i));
HXLINE( 294)					 ::polymod::ModMetadata meta = ::polymod::Polymod_obj::getMetadata(dirs->__get(i));
HXLINE( 296)					if (::hx::IsNotNull( meta )) {
HXLINE( 298)						meta->id = origDir;
HXLINE( 299)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 300)						if ((apiScore < 3)) {
HXLINE( 304)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 302)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            						}
            						else {
HXLINE( 310)							if ((apiVersion->major == 0)) {
HXLINE( 313)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 317)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 315)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            								}
            							}
            						}
HXLINE( 323)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 328)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,scan,return )

void Polymod_obj::error(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_333_error)
HXDLIN( 333)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 335)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::ERROR_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,error,(void))

void Polymod_obj::warning(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_341_warning)
HXDLIN( 341)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 343)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::WARNING_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,warning,(void))

void Polymod_obj::notice(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_349_notice)
HXDLIN( 349)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 351)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::NOTICE_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,notice,(void))

 ::polymod::fs::SysFileSystem Polymod_obj::getFileSystem(){
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_358_getFileSystem)
HXDLIN( 358)		return  ::polymod::fs::SysFileSystem_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Polymod_obj,getFileSystem,return )

 ::polymod::ModMetadata Polymod_obj::getMetadata(::String dir){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_364_getMetadata)
HXLINE( 365)		if (::sys::FileSystem_obj::exists(dir)) {
HXLINE( 367)			 ::polymod::ModMetadata meta = null();
HXLINE( 369)			::String metaFile = ::polymod::util::Util_obj::pathJoin(dir,HX_("_polymod_meta.json",69,fc,10,06));
HXLINE( 370)			::String iconFile = ::polymod::util::Util_obj::pathJoin(dir,HX_("_polymod_icon.png",3c,6c,4c,14));
HXLINE( 371)			::String packFile = ::polymod::util::Util_obj::pathJoin(dir,HX_("_polymod_pack.txt",63,9d,09,cb));
HXLINE( 372)			if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE( 374)				::polymod::Polymod_obj::warning(HX_("missing_meta",7e,15,b8,7b),((HX_("Could not find mod metadata file: \"",a8,ef,82,b2) + metaFile) + HX_("\"",22,00,00,00)),null());
            			}
            			else {
HXLINE( 378)				::String metaText;
HXDLIN( 378)				if (!(::sys::FileSystem_obj::exists(metaFile))) {
HXLINE( 378)					metaText = null();
            				}
            				else {
HXLINE( 378)					metaText = ::sys::io::File_obj::getContent(metaFile);
            				}
HXDLIN( 378)				::String metaText1 = metaText;
HXLINE( 379)				meta = ::polymod::ModMetadata_obj::fromJsonStr(metaText1);
            			}
HXLINE( 381)			if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 383)				::polymod::Polymod_obj::warning(HX_("missing_icon",32,b2,11,79),((HX_("Could not find mod icon file: \"",32,09,de,8d) + iconFile) + HX_("\"",22,00,00,00)),null());
            			}
            			else {
HXLINE( 387)				 ::haxe::io::Bytes iconBytes;
HXDLIN( 387)				if (!(::sys::FileSystem_obj::exists(iconFile))) {
HXLINE( 387)					iconBytes = null();
            				}
            				else {
HXLINE( 387)					iconBytes = ::sys::io::File_obj::getBytes(iconFile);
            				}
HXDLIN( 387)				 ::haxe::io::Bytes iconBytes1 = iconBytes;
HXLINE( 388)				meta->icon = iconBytes1;
            			}
HXLINE( 390)			if (::sys::FileSystem_obj::exists(packFile)) {
HXLINE( 392)				meta->isModPack = true;
HXLINE( 393)				::String packText;
HXDLIN( 393)				if (!(::sys::FileSystem_obj::exists(packFile))) {
HXLINE( 393)					packText = null();
            				}
            				else {
HXLINE( 393)					packText = ::sys::io::File_obj::getContent(packFile);
            				}
HXDLIN( 393)				::String packText1 = packText;
HXLINE( 394)				meta->modPack = ::polymod::Polymod_obj::getModPack(packText1);
            			}
HXLINE( 396)			return meta;
            		}
            		else {
HXLINE( 400)			::polymod::Polymod_obj::error(HX_("missing_mod",29,c6,4d,c8),((HX_("Could not find mod directory: \"",88,65,de,46) + dir) + HX_("\"",22,00,00,00)),null());
            		}
HXLINE( 402)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,getMetadata,return )

::Array< ::String > Polymod_obj::listModFiles(::String type){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_411_listModFiles)
HXLINE( 412)		if (::hx::IsNotNull( ::polymod::Polymod_obj::library )) {
HXLINE( 414)			return ::polymod::Polymod_obj::library->listModFiles(type);
            		}
HXLINE( 416)		return ::Array_obj< ::String >::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,listModFiles,return )

void Polymod_obj::initModPack( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_422_initModPack)
HXLINE( 423)		::String polymodpack = ::polymod::backends::PolymodAssets_obj::getText(HX_("_polymod_pack.txt",63,9d,09,cb));
HXLINE( 424)		if (::hx::IsNotNull( polymodpack )) {
HXLINE( 426)			 ::Dynamic data = ::polymod::Polymod_obj::getModPack(polymodpack);
HXLINE( 427)			::Array< ::String > mods = ( (::Array< ::String >)(data->__Field(HX_("mods",71,d3,60,48),::hx::paccDynamic)) );
HXLINE( 428)			::Array< ::String > vers = ( (::Array< ::String >)(data->__Field(HX_("versions",5b,4e,b8,d6),::hx::paccDynamic)) );
HXLINE( 430)			params->__SetField(HX_("dirs",86,66,69,42),mods,::hx::paccDynamic);
HXLINE( 431)			params->__SetField(HX_("modVersions",3d,b3,b4,55),vers,::hx::paccDynamic);
HXLINE( 432)			::polymod::Polymod_obj::init(params);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,initModPack,(void))

 ::Dynamic Polymod_obj::getModPack(::String text){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_437_getModPack)
HXLINE( 438)		if (::hx::IsNotNull( text )) {
HXLINE( 440)			::Array< ::String > mods = text.split(HX_(",",2c,00,00,00));
HXLINE( 441)			bool _hx_tmp;
HXDLIN( 441)			if (::hx::IsNotNull( mods )) {
HXLINE( 441)				_hx_tmp = (mods->length == 0);
            			}
            			else {
HXLINE( 441)				_hx_tmp = true;
            			}
HXDLIN( 441)			if (_hx_tmp) {
HXLINE( 443)				return null();
            			}
HXLINE( 445)			::Array< ::String > vers = ::Array_obj< ::String >::__new(0);
HXLINE( 446)			{
HXLINE( 446)				int _g = 0;
HXDLIN( 446)				int _g1 = mods->length;
HXDLIN( 446)				while((_g < _g1)){
HXLINE( 446)					_g = (_g + 1);
HXDLIN( 446)					int i = (_g - 1);
HXLINE( 448)					vers[i] = HX_("*.*.*",a2,34,5c,4d);
HXLINE( 449)					if ((mods->__get(i).indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE( 451)						::Array< ::String > arr = mods->__get(i).split(HX_(":",3a,00,00,00));
HXLINE( 452)						bool _hx_tmp;
HXDLIN( 452)						if (::hx::IsNotNull( arr )) {
HXLINE( 452)							_hx_tmp = (arr->length == 2);
            						}
            						else {
HXLINE( 452)							_hx_tmp = false;
            						}
HXDLIN( 452)						if (_hx_tmp) {
HXLINE( 454)							mods[i] = arr->__get(0);
HXLINE( 455)							vers[i] = arr->__get(1);
            						}
            					}
            				}
            			}
HXLINE( 459)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("versions",5b,4e,b8,d6),vers)
            				->setFixed(1,HX_("mods",71,d3,60,48),mods));
            		}
HXLINE( 461)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,getModPack,return )


Polymod_obj::Polymod_obj()
{
}

bool Polymod_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scan") ) { outValue = scan_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { outValue = notice_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = ( onError ); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { outValue = ( library ); return true; }
		if (HX_FIELD_EQ(inName,"warning") ) { outValue = warning_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getModPack") ) { outValue = getModPack_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMetadata") ) { outValue = getMetadata_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"initModPack") ) { outValue = initModPack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"listModFiles") ) { outValue = listModFiles_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFileSystem") ) { outValue = getFileSystem_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDefaultIgnoreList") ) { outValue = getDefaultIgnoreList_dyn(); return true; }
	}
	return false;
}

bool Polymod_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { library=ioValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Polymod_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Polymod_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Polymod_obj::onError,HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(void *) &Polymod_obj::library,HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Polymod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_MARK_MEMBER_NAME(Polymod_obj::library,"library");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Polymod_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_VISIT_MEMBER_NAME(Polymod_obj::library,"library");
};

#endif

::hx::Class Polymod_obj::__mClass;

static ::String Polymod_obj_sStaticFields[] = {
	HX_("onError",29,6a,67,09),
	HX_("library",fb,26,70,3f),
	HX_("init",10,3b,bb,45),
	HX_("getDefaultIgnoreList",3b,e1,b2,45),
	HX_("scan",7d,fd,4e,4c),
	HX_("error",c8,cb,29,73),
	HX_("warning",5c,da,cb,09),
	HX_("notice",18,d8,b8,31),
	HX_("getFileSystem",c1,3a,d9,2f),
	HX_("getMetadata",25,aa,0d,66),
	HX_("listModFiles",d3,de,44,5a),
	HX_("initModPack",8b,11,e8,97),
	HX_("getModPack",c5,28,df,2e),
	::String(null())
};

void Polymod_obj::__register()
{
	Polymod_obj _hx_dummy;
	Polymod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.Polymod",5e,af,2e,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polymod_obj::__GetStatic;
	__mClass->mSetStaticField = &Polymod_obj::__SetStatic;
	__mClass->mMarkFunc = Polymod_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polymod_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Polymod_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Polymod_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polymod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polymod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Polymod_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_128_boot)
HXDLIN( 128)		onError = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_129_boot)
HXDLIN( 129)		library = null();
            	}
}

} // end namespace polymod
