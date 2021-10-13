#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_CSV
#include <polymod/format/CSV.h>
#endif
#ifndef INCLUDED_polymod_format_TSV
#include <polymod/format/TSV.h>
#endif
#ifndef INCLUDED_polymod_format_TSVParseFormat
#include <polymod/format/TSVParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4433e16b1549b5d3_310_new,"polymod.format.TSVParseFormat","new",0x976725e4,"polymod.format.TSVParseFormat.new","polymod/format/ParseRules.hx",310,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_4433e16b1549b5d3_314_parse,"polymod.format.TSVParseFormat","parse",0xc00c4eb7,"polymod.format.TSVParseFormat.parse","polymod/format/ParseRules.hx",314,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_4433e16b1549b5d3_319_append,"polymod.format.TSVParseFormat","append",0xed03d6d6,"polymod.format.TSVParseFormat.append","polymod/format/ParseRules.hx",319,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_4433e16b1549b5d3_323_merge,"polymod.format.TSVParseFormat","merge",0x087d613c,"polymod.format.TSVParseFormat.merge","polymod/format/ParseRules.hx",323,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_4433e16b1549b5d3_353_print,"polymod.format.TSVParseFormat","print",0xcb4216b1,"polymod.format.TSVParseFormat.print","polymod/format/ParseRules.hx",353,0xc5c5c43b)
static const ::String _hx_array_data_1aa5a3f2_11[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_1aa5a3f2_12[] = {
	HX_("\r\n",5d,0b,00,00),
};
namespace polymod{
namespace format{

void TSVParseFormat_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4433e16b1549b5d3_310_new)
HXDLIN( 310)		this->format = ::polymod::format::TextFileFormat_obj::TSV_dyn();
            	}

Dynamic TSVParseFormat_obj::__CreateEmpty() { return new TSVParseFormat_obj; }

void *TSVParseFormat_obj::_hx_vtable = 0;

Dynamic TSVParseFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TSVParseFormat_obj > _hx_result = new TSVParseFormat_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TSVParseFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0804a254;
}

static ::polymod::format::BaseParseFormat_obj _hx_polymod_format_TSVParseFormat__hx_polymod_format_BaseParseFormat= {
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::TSVParseFormat_obj::append,
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::TSVParseFormat_obj::merge,
};

void *TSVParseFormat_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa2d29dcc: return &_hx_polymod_format_TSVParseFormat__hx_polymod_format_BaseParseFormat;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::polymod::format::TSV TSVParseFormat_obj::parse(::String str){
            	HX_STACKFRAME(&_hx_pos_4433e16b1549b5d3_314_parse)
HXDLIN( 314)		return ::polymod::format::TSV_obj::parse(str);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TSVParseFormat_obj,parse,return )

::String TSVParseFormat_obj::append(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_4433e16b1549b5d3_319_append)
HXDLIN( 319)		return ::polymod::util::Util_obj::appendCSVOrTSV(baseText,appendText,id);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TSVParseFormat_obj,append,return )

::String TSVParseFormat_obj::merge(::String baseText,::String mergeText,::String id){
            	HX_STACKFRAME(&_hx_pos_4433e16b1549b5d3_323_merge)
HXLINE( 324)		 ::polymod::format::TSV baseTSV = ::polymod::format::TSV_obj::parse(baseText);
HXLINE( 325)		 ::polymod::format::TSV mergeTSV = ::polymod::format::TSV_obj::parse(mergeText);
HXLINE( 326)		{
HXLINE( 326)			int _g = 0;
HXDLIN( 326)			::Array< ::Dynamic> _g1 = mergeTSV->grid;
HXDLIN( 326)			while((_g < _g1->length)){
HXLINE( 326)				::Array< ::String > row = _g1->__get(_g).StaticCast< ::Array< ::String > >();
HXDLIN( 326)				_g = (_g + 1);
HXLINE( 328)				::String flag;
HXDLIN( 328)				if ((row->length > 0)) {
HXLINE( 328)					flag = row->__get(0);
            				}
            				else {
HXLINE( 328)					flag = HX_("",00,00,00,00);
            				}
HXLINE( 329)				if ((flag != HX_("",00,00,00,00))) {
HXLINE( 331)					int _g = 0;
HXDLIN( 331)					int _g1 = baseTSV->grid->length;
HXDLIN( 331)					while((_g < _g1)){
HXLINE( 331)						_g = (_g + 1);
HXDLIN( 331)						int i = (_g - 1);
HXLINE( 333)						::Array< ::String > otherRow = baseTSV->grid->__get(i).StaticCast< ::Array< ::String > >();
HXLINE( 334)						::String otherFlag = otherRow->__get(0);
HXLINE( 335)						if ((flag == otherFlag)) {
HXLINE( 337)							int _g = 0;
HXDLIN( 337)							int _g1 = row->length;
HXDLIN( 337)							while((_g < _g1)){
HXLINE( 337)								_g = (_g + 1);
HXDLIN( 337)								int j = (_g - 1);
HXLINE( 339)								if ((j < otherRow->length)) {
HXLINE( 341)									otherRow[j] = row->__get(j);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 348)		::String result = this->print(baseTSV);
HXLINE( 349)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(TSVParseFormat_obj,merge,return )

::String TSVParseFormat_obj::print( ::polymod::format::TSV tsv){
            	HX_GC_STACKFRAME(&_hx_pos_4433e16b1549b5d3_353_print)
HXLINE( 354)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 356)		int tab = 9;
HXLINE( 357)		int lf = 10;
HXLINE( 359)		{
HXLINE( 359)			int _g = 0;
HXDLIN( 359)			int _g1 = tsv->fields->length;
HXDLIN( 359)			while((_g < _g1)){
HXLINE( 359)				_g = (_g + 1);
HXDLIN( 359)				int i = (_g - 1);
HXLINE( 361)				{
HXLINE( 361)					::String x = tsv->fields->__get(i);
HXDLIN( 361)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 361)						buf->flush();
            					}
HXDLIN( 361)					if (::hx::IsNull( buf->b )) {
HXLINE( 361)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 361)						::Array< ::String > buf1 = buf->b;
HXDLIN( 361)						buf1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 362)				if ((i != (tsv->fields->length - 1))) {
HXLINE( 364)					if ((tab >= 127)) {
HXLINE( 364)						::String x = ::String::fromCharCode(tab);
HXDLIN( 364)						if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 364)							buf->flush();
            						}
HXDLIN( 364)						if (::hx::IsNull( buf->b )) {
HXLINE( 364)							buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 364)							::Array< ::String > buf1 = buf->b;
HXDLIN( 364)							buf1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 364)						if (::hx::IsNull( buf->charBuf )) {
HXLINE( 364)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 364)						buf->charBuf->push(tab);
            					}
            				}
            			}
            		}
HXLINE( 368)		::String strSoFar = buf->toString();
HXLINE( 370)		if ((strSoFar.indexOf(HX_("\n",0a,00,00,00),null()) == -1)) {
HXLINE( 372)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 372)				buf->flush();
            			}
HXDLIN( 372)			if (::hx::IsNull( buf->b )) {
HXLINE( 372)				buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_1aa5a3f2_11,1);
            			}
            			else {
HXLINE( 372)				buf->b->push(HX_("\r\n",5d,0b,00,00));
            			}
            		}
HXLINE( 375)		::Array< ::Dynamic> grid = tsv->grid;
HXLINE( 377)		{
HXLINE( 377)			int _g2 = 0;
HXDLIN( 377)			int _g3 = grid->length;
HXDLIN( 377)			while((_g2 < _g3)){
HXLINE( 377)				_g2 = (_g2 + 1);
HXDLIN( 377)				int iy = (_g2 - 1);
HXLINE( 379)				::Array< ::String > row = grid->__get(iy).StaticCast< ::Array< ::String > >();
HXLINE( 380)				{
HXLINE( 380)					int _g = 0;
HXDLIN( 380)					int _g1 = row->length;
HXDLIN( 380)					while((_g < _g1)){
HXLINE( 380)						_g = (_g + 1);
HXDLIN( 380)						int ix = (_g - 1);
HXLINE( 382)						::String cell = row->__get(ix);
HXLINE( 383)						{
HXLINE( 383)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 383)								buf->flush();
            							}
HXDLIN( 383)							if (::hx::IsNull( buf->b )) {
HXLINE( 383)								buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(cell));
            							}
            							else {
HXLINE( 383)								::Array< ::String > buf1 = buf->b;
HXDLIN( 383)								buf1->push(::Std_obj::string(cell));
            							}
            						}
HXLINE( 384)						if ((ix != (row->length - 1))) {
HXLINE( 386)							if ((tab >= 127)) {
HXLINE( 386)								::String x = ::String::fromCharCode(tab);
HXDLIN( 386)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 386)									buf->flush();
            								}
HXDLIN( 386)								if (::hx::IsNull( buf->b )) {
HXLINE( 386)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 386)									::Array< ::String > buf1 = buf->b;
HXDLIN( 386)									buf1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 386)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 386)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 386)								buf->charBuf->push(tab);
            							}
            						}
            					}
            				}
HXLINE( 389)				if ((iy != (grid->length - 1))) {
HXLINE( 391)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 391)						buf->flush();
            					}
HXDLIN( 391)					if (::hx::IsNull( buf->b )) {
HXLINE( 391)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_1aa5a3f2_12,1);
            					}
            					else {
HXLINE( 391)						buf->b->push(HX_("\r\n",5d,0b,00,00));
            					}
            				}
            			}
            		}
HXLINE( 395)		return buf->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TSVParseFormat_obj,print,return )


::hx::ObjectPtr< TSVParseFormat_obj > TSVParseFormat_obj::__new() {
	::hx::ObjectPtr< TSVParseFormat_obj > __this = new TSVParseFormat_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TSVParseFormat_obj > TSVParseFormat_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TSVParseFormat_obj *__this = (TSVParseFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TSVParseFormat_obj), true, "polymod.format.TSVParseFormat"));
	*(void **)__this = TSVParseFormat_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TSVParseFormat_obj::TSVParseFormat_obj()
{
}

void TSVParseFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TSVParseFormat);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void TSVParseFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
}

::hx::Val TSVParseFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"print") ) { return ::hx::Val( print_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TSVParseFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::polymod::format::TextFileFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TSVParseFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("format",37,8f,8e,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TSVParseFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::format::TextFileFormat */ ,(int)offsetof(TSVParseFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TSVParseFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String TSVParseFormat_obj_sMemberFields[] = {
	HX_("format",37,8f,8e,fd),
	HX_("parse",33,90,55,bd),
	HX_("append",da,e1,d3,8f),
	HX_("merge",b8,a2,c6,05),
	HX_("print",2d,58,8b,c8),
	::String(null()) };

::hx::Class TSVParseFormat_obj::__mClass;

void TSVParseFormat_obj::__register()
{
	TSVParseFormat_obj _hx_dummy;
	TSVParseFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.TSVParseFormat",f2,a3,a5,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TSVParseFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TSVParseFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TSVParseFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TSVParseFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
