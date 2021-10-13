#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
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
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7e4d842269e66db1_397_new,"Xml","new",0x2e496e29,"Xml.new","/usr/local/lib/haxe/std/Xml.hx",397,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_244_get,"Xml","get",0x2e441e5f,"Xml.get","/usr/local/lib/haxe/std/Xml.hx",244,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_255_set,"Xml","set",0x2e4d396b,"Xml.set","/usr/local/lib/haxe/std/Xml.hx",255,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_277_exists,"Xml","exists",0x446683b3,"Xml.exists","/usr/local/lib/haxe/std/Xml.hx",277,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_287_attributes,"Xml","attributes",0x1ab5462e,"Xml.attributes","/usr/local/lib/haxe/std/Xml.hx",287,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_307_elements,"Xml","elements",0x0310ffce,"Xml.elements","/usr/local/lib/haxe/std/Xml.hx",307,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_317_elementsNamed,"Xml","elementsNamed",0x6b28f50b,"Xml.elementsNamed","/usr/local/lib/haxe/std/Xml.hx",317,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_337_firstElement,"Xml","firstElement",0xc103a583,"Xml.firstElement","/usr/local/lib/haxe/std/Xml.hx",337,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_353_addChild,"Xml","addChild",0x3e639952,"Xml.addChild","/usr/local/lib/haxe/std/Xml.hx",353,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_366_removeChild,"Xml","removeChild",0x9bd39581,"Xml.removeChild","/usr/local/lib/haxe/std/Xml.hx",366,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_381_insertChild,"Xml","insertChild",0xe554966c,"Xml.insertChild","/usr/local/lib/haxe/std/Xml.hx",381,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_394_toString,"Xml","toString",0xb7bb9a43,"Xml.toString","/usr/local/lib/haxe/std/Xml.hx",394,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_122_parse,"Xml","parse",0x8a44f23c,"Xml.parse","/usr/local/lib/haxe/std/Xml.hx",122,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_182_createElement,"Xml","createElement",0x97359a29,"Xml.createElement","/usr/local/lib/haxe/std/Xml.hx",182,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_191_createPCData,"Xml","createPCData",0x3cc9ead0,"Xml.createPCData","/usr/local/lib/haxe/std/Xml.hx",191,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_200_createCData,"Xml","createCData",0xaf49365a,"Xml.createCData","/usr/local/lib/haxe/std/Xml.hx",200,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_209_createComment,"Xml","createComment",0x125165cc,"Xml.createComment","/usr/local/lib/haxe/std/Xml.hx",209,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_218_createDocType,"Xml","createDocType",0x696de8bf,"Xml.createDocType","/usr/local/lib/haxe/std/Xml.hx",218,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_227_createProcessingInstruction,"Xml","createProcessingInstruction",0x632a1f28,"Xml.createProcessingInstruction","/usr/local/lib/haxe/std/Xml.hx",227,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_237_createDocument,"Xml","createDocument",0xcf00030e,"Xml.createDocument","/usr/local/lib/haxe/std/Xml.hx",237,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_86_boot,"Xml","boot",0x4a0ff649,"Xml.boot","/usr/local/lib/haxe/std/Xml.hx",86,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_91_boot,"Xml","boot",0x4a0ff649,"Xml.boot","/usr/local/lib/haxe/std/Xml.hx",91,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_96_boot,"Xml","boot",0x4a0ff649,"Xml.boot","/usr/local/lib/haxe/std/Xml.hx",96,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_101_boot,"Xml","boot",0x4a0ff649,"Xml.boot","/usr/local/lib/haxe/std/Xml.hx",101,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_106_boot,"Xml","boot",0x4a0ff649,"Xml.boot","/usr/local/lib/haxe/std/Xml.hx",106,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_111_boot,"Xml","boot",0x4a0ff649,"Xml.boot","/usr/local/lib/haxe/std/Xml.hx",111,0x5c1024e4)
HX_LOCAL_STACK_FRAME(_hx_pos_7e4d842269e66db1_116_boot,"Xml","boot",0x4a0ff649,"Xml.boot","/usr/local/lib/haxe/std/Xml.hx",116,0x5c1024e4)

void Xml_obj::__construct(int nodeType){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_397_new)
HXLINE( 398)		this->nodeType = nodeType;
HXLINE( 399)		this->children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 400)		this->attributeMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic Xml_obj::__CreateEmpty() { return new Xml_obj; }

void *Xml_obj::_hx_vtable = 0;

Dynamic Xml_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Xml_obj > _hx_result = new Xml_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Xml_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee76a4b;
}

::String Xml_obj::get(::String att){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_244_get)
HXLINE( 245)		if ((this->nodeType != ::Xml_obj::Element)) {
HXLINE( 246)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 248)		return this->attributeMap->get_string(att);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,get,return )

void Xml_obj::set(::String att,::String value){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_255_set)
HXLINE( 256)		if ((this->nodeType != ::Xml_obj::Element)) {
HXLINE( 257)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 259)		this->attributeMap->set(att,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Xml_obj,set,(void))

bool Xml_obj::exists(::String att){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_277_exists)
HXLINE( 278)		if ((this->nodeType != ::Xml_obj::Element)) {
HXLINE( 279)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 281)		return this->attributeMap->exists(att);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,exists,return )

 ::Dynamic Xml_obj::attributes(){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_287_attributes)
HXLINE( 288)		if ((this->nodeType != ::Xml_obj::Element)) {
HXLINE( 289)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 291)		return this->attributeMap->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,attributes,return )

 ::Dynamic Xml_obj::elements(){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_307_elements)
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		if ((this->nodeType != ::Xml_obj::Document)) {
HXLINE( 308)			_hx_tmp = (this->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 308)			_hx_tmp = false;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 308)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 309)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 309)		{
HXLINE( 309)			int _g1 = 0;
HXDLIN( 309)			::Array< ::Dynamic> _g2 = this->children;
HXDLIN( 309)			while((_g1 < _g2->length)){
HXLINE( 309)				 ::Xml child = _g2->__get(_g1).StaticCast<  ::Xml >();
HXDLIN( 309)				_g1 = (_g1 + 1);
HXDLIN( 309)				if ((child->nodeType == ::Xml_obj::Element)) {
HXLINE( 309)					_g->push(child);
            				}
            			}
            		}
HXDLIN( 309)		::Array< ::Dynamic> ret = _g;
HXLINE( 310)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,ret);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,elements,return )

 ::Dynamic Xml_obj::elementsNamed(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_317_elementsNamed)
HXLINE( 318)		bool _hx_tmp;
HXDLIN( 318)		if ((this->nodeType != ::Xml_obj::Document)) {
HXLINE( 318)			_hx_tmp = (this->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 318)			_hx_tmp = false;
            		}
HXDLIN( 318)		if (_hx_tmp) {
HXLINE( 318)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 319)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 320)		{
HXLINE( 320)			int _g1 = 0;
HXDLIN( 320)			::Array< ::Dynamic> _g2 = this->children;
HXDLIN( 320)			while((_g1 < _g2->length)){
HXLINE( 320)				 ::Xml child = _g2->__get(_g1).StaticCast<  ::Xml >();
HXDLIN( 320)				_g1 = (_g1 + 1);
HXLINE( 321)				bool _hx_tmp;
HXDLIN( 321)				if ((child->nodeType == ::Xml_obj::Element)) {
HXLINE( 321)					if ((child->nodeType != ::Xml_obj::Element)) {
HXLINE( 321)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(child->nodeType))));
            					}
HXDLIN( 321)					_hx_tmp = (child->nodeName == name);
            				}
            				else {
HXLINE( 321)					_hx_tmp = false;
            				}
HXDLIN( 321)				if (_hx_tmp) {
HXLINE( 321)					_g->push(child);
            				}
            			}
            		}
HXLINE( 319)		::Array< ::Dynamic> ret = _g;
HXLINE( 323)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,ret);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,elementsNamed,return )

 ::Xml Xml_obj::firstElement(){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_337_firstElement)
HXLINE( 338)		bool _hx_tmp;
HXDLIN( 338)		if ((this->nodeType != ::Xml_obj::Document)) {
HXLINE( 338)			_hx_tmp = (this->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 338)			_hx_tmp = false;
            		}
HXDLIN( 338)		if (_hx_tmp) {
HXLINE( 338)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 339)		{
HXLINE( 339)			int _g = 0;
HXDLIN( 339)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 339)			while((_g < _g1->length)){
HXLINE( 339)				 ::Xml child = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 339)				_g = (_g + 1);
HXLINE( 340)				if ((child->nodeType == ::Xml_obj::Element)) {
HXLINE( 341)					return child;
            				}
            			}
            		}
HXLINE( 344)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,firstElement,return )

void Xml_obj::addChild( ::Xml x){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_353_addChild)
HXLINE( 354)		bool _hx_tmp;
HXDLIN( 354)		if ((this->nodeType != ::Xml_obj::Document)) {
HXLINE( 354)			_hx_tmp = (this->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 354)			_hx_tmp = false;
            		}
HXDLIN( 354)		if (_hx_tmp) {
HXLINE( 354)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 355)		if (::hx::IsNotNull( x->parent )) {
HXLINE( 356)			x->parent->removeChild(x);
            		}
HXLINE( 358)		this->children->push(x);
HXLINE( 359)		x->parent = ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,addChild,(void))

bool Xml_obj::removeChild( ::Xml x){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_366_removeChild)
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		if ((this->nodeType != ::Xml_obj::Document)) {
HXLINE( 367)			_hx_tmp = (this->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 367)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 368)		if (this->children->remove(x)) {
HXLINE( 369)			x->parent = null();
HXLINE( 370)			return true;
            		}
HXLINE( 372)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,removeChild,return )

void Xml_obj::insertChild( ::Xml x,int pos){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_381_insertChild)
HXLINE( 382)		bool _hx_tmp;
HXDLIN( 382)		if ((this->nodeType != ::Xml_obj::Document)) {
HXLINE( 382)			_hx_tmp = (this->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 382)			_hx_tmp = false;
            		}
HXDLIN( 382)		if (_hx_tmp) {
HXLINE( 382)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(this->nodeType))));
            		}
HXLINE( 383)		if (::hx::IsNotNull( x->parent )) {
HXLINE( 384)			x->parent->children->remove(x);
            		}
HXLINE( 386)		this->children->insert(pos,x);
HXLINE( 387)		x->parent = ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Xml_obj,insertChild,(void))

::String Xml_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_394_toString)
HXDLIN( 394)		return ::haxe::xml::Printer_obj::print(::hx::ObjectPtr<OBJ_>(this),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,toString,return )

int Xml_obj::Element;

int Xml_obj::PCData;

int Xml_obj::CData;

int Xml_obj::Comment;

int Xml_obj::DocType;

int Xml_obj::ProcessingInstruction;

int Xml_obj::Document;

 ::Xml Xml_obj::parse(::String str){
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_122_parse)
HXDLIN( 122)		return ::haxe::xml::Parser_obj::parse(str,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,parse,return )

 ::Xml Xml_obj::createElement(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_182_createElement)
HXLINE( 183)		 ::Xml xml =  ::Xml_obj::__alloc( HX_CTX ,::Xml_obj::Element);
HXLINE( 184)		{
HXLINE( 184)			if ((xml->nodeType != ::Xml_obj::Element)) {
HXLINE( 184)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            			}
HXDLIN( 184)			xml->nodeName = name;
            		}
HXLINE( 185)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createElement,return )

 ::Xml Xml_obj::createPCData(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_191_createPCData)
HXLINE( 192)		 ::Xml xml =  ::Xml_obj::__alloc( HX_CTX ,::Xml_obj::PCData);
HXLINE( 193)		{
HXLINE( 193)			bool _hx_tmp;
HXDLIN( 193)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 193)				_hx_tmp = (xml->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE( 193)				_hx_tmp = true;
            			}
HXDLIN( 193)			if (_hx_tmp) {
HXLINE( 193)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            			}
HXDLIN( 193)			xml->nodeValue = data;
            		}
HXLINE( 194)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createPCData,return )

 ::Xml Xml_obj::createCData(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_200_createCData)
HXLINE( 201)		 ::Xml xml =  ::Xml_obj::__alloc( HX_CTX ,::Xml_obj::CData);
HXLINE( 202)		{
HXLINE( 202)			bool _hx_tmp;
HXDLIN( 202)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 202)				_hx_tmp = (xml->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE( 202)				_hx_tmp = true;
            			}
HXDLIN( 202)			if (_hx_tmp) {
HXLINE( 202)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            			}
HXDLIN( 202)			xml->nodeValue = data;
            		}
HXLINE( 203)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createCData,return )

 ::Xml Xml_obj::createComment(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_209_createComment)
HXLINE( 210)		 ::Xml xml =  ::Xml_obj::__alloc( HX_CTX ,::Xml_obj::Comment);
HXLINE( 211)		{
HXLINE( 211)			bool _hx_tmp;
HXDLIN( 211)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 211)				_hx_tmp = (xml->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE( 211)				_hx_tmp = true;
            			}
HXDLIN( 211)			if (_hx_tmp) {
HXLINE( 211)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            			}
HXDLIN( 211)			xml->nodeValue = data;
            		}
HXLINE( 212)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createComment,return )

 ::Xml Xml_obj::createDocType(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_218_createDocType)
HXLINE( 219)		 ::Xml xml =  ::Xml_obj::__alloc( HX_CTX ,::Xml_obj::DocType);
HXLINE( 220)		{
HXLINE( 220)			bool _hx_tmp;
HXDLIN( 220)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 220)				_hx_tmp = (xml->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE( 220)				_hx_tmp = true;
            			}
HXDLIN( 220)			if (_hx_tmp) {
HXLINE( 220)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            			}
HXDLIN( 220)			xml->nodeValue = data;
            		}
HXLINE( 221)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createDocType,return )

 ::Xml Xml_obj::createProcessingInstruction(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_227_createProcessingInstruction)
HXLINE( 228)		 ::Xml xml =  ::Xml_obj::__alloc( HX_CTX ,::Xml_obj::ProcessingInstruction);
HXLINE( 229)		{
HXLINE( 229)			bool _hx_tmp;
HXDLIN( 229)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 229)				_hx_tmp = (xml->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE( 229)				_hx_tmp = true;
            			}
HXDLIN( 229)			if (_hx_tmp) {
HXLINE( 229)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            			}
HXDLIN( 229)			xml->nodeValue = data;
            		}
HXLINE( 230)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createProcessingInstruction,return )

 ::Xml Xml_obj::createDocument(){
            	HX_GC_STACKFRAME(&_hx_pos_7e4d842269e66db1_237_createDocument)
HXDLIN( 237)		return  ::Xml_obj::__alloc( HX_CTX ,::Xml_obj::Document);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,createDocument,return )


::hx::ObjectPtr< Xml_obj > Xml_obj::__new(int nodeType) {
	::hx::ObjectPtr< Xml_obj > __this = new Xml_obj();
	__this->__construct(nodeType);
	return __this;
}

::hx::ObjectPtr< Xml_obj > Xml_obj::__alloc(::hx::Ctx *_hx_ctx,int nodeType) {
	Xml_obj *__this = (Xml_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Xml_obj), true, "Xml"));
	*(void **)__this = Xml_obj::_hx_vtable;
	__this->__construct(nodeType);
	return __this;
}

Xml_obj::Xml_obj()
{
}

void Xml_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Xml);
	HX_MARK_MEMBER_NAME(nodeType,"nodeType");
	HX_MARK_MEMBER_NAME(nodeName,"nodeName");
	HX_MARK_MEMBER_NAME(nodeValue,"nodeValue");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(attributeMap,"attributeMap");
	HX_MARK_END_CLASS();
}

void Xml_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodeType,"nodeType");
	HX_VISIT_MEMBER_NAME(nodeName,"nodeName");
	HX_VISIT_MEMBER_NAME(nodeValue,"nodeValue");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(attributeMap,"attributeMap");
}

::hx::Val Xml_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { return ::hx::Val( nodeType ); }
		if (HX_FIELD_EQ(inName,"nodeName") ) { return ::hx::Val( nodeName ); }
		if (HX_FIELD_EQ(inName,"children") ) { return ::hx::Val( children ); }
		if (HX_FIELD_EQ(inName,"elements") ) { return ::hx::Val( elements_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeValue") ) { return ::hx::Val( nodeValue ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return ::hx::Val( attributes_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"insertChild") ) { return ::hx::Val( insertChild_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attributeMap") ) { return ::hx::Val( attributeMap ); }
		if (HX_FIELD_EQ(inName,"firstElement") ) { return ::hx::Val( firstElement_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"elementsNamed") ) { return ::hx::Val( elementsNamed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Xml_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { outValue = ( CData ); return true; }
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { outValue = ( PCData ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { outValue = ( Element ); return true; }
		if (HX_FIELD_EQ(inName,"Comment") ) { outValue = ( Comment ); return true; }
		if (HX_FIELD_EQ(inName,"DocType") ) { outValue = ( DocType ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { outValue = ( Document ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createCData") ) { outValue = createCData_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createPCData") ) { outValue = createPCData_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createElement") ) { outValue = createElement_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createComment") ) { outValue = createComment_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createDocType") ) { outValue = createDocType_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDocument") ) { outValue = createDocument_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { outValue = ( ProcessingInstruction ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"createProcessingInstruction") ) { outValue = createProcessingInstruction_dyn(); return true; }
	}
	return false;
}

::hx::Val Xml_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::Xml >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { nodeType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { nodeName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeValue") ) { nodeValue=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attributeMap") ) { attributeMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Xml_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { CData=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { PCData=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { Element=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"Comment") ) { Comment=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DocType") ) { DocType=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { Document=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { ProcessingInstruction=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Xml_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nodeType",dc,51,86,f6));
	outFields->push(HX_("nodeName",6d,d1,7c,f2));
	outFields->push(HX_("nodeValue",0f,5e,ee,d5));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("children",3f,19,6a,70));
	outFields->push(HX_("attributeMap",e0,4b,b2,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Xml_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Xml_obj,nodeType),HX_("nodeType",dc,51,86,f6)},
	{::hx::fsString,(int)offsetof(Xml_obj,nodeName),HX_("nodeName",6d,d1,7c,f2)},
	{::hx::fsString,(int)offsetof(Xml_obj,nodeValue),HX_("nodeValue",0f,5e,ee,d5)},
	{::hx::fsObject /*  ::Xml */ ,(int)offsetof(Xml_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Xml_obj,children),HX_("children",3f,19,6a,70)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Xml_obj,attributeMap),HX_("attributeMap",e0,4b,b2,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Xml_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Xml_obj::Element,HX_("Element",9c,d6,a5,d3)},
	{::hx::fsInt,(void *) &Xml_obj::PCData,HX_("PCData",bd,3d,a2,bd)},
	{::hx::fsInt,(void *) &Xml_obj::CData,HX_("CData",0d,60,15,c1)},
	{::hx::fsInt,(void *) &Xml_obj::Comment,HX_("Comment",3f,a2,c1,4e)},
	{::hx::fsInt,(void *) &Xml_obj::DocType,HX_("DocType",32,25,de,a5)},
	{::hx::fsInt,(void *) &Xml_obj::ProcessingInstruction,HX_("ProcessingInstruction",db,1e,14,6a)},
	{::hx::fsInt,(void *) &Xml_obj::Document,HX_("Document",3b,ab,c4,74)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Xml_obj_sMemberFields[] = {
	HX_("nodeType",dc,51,86,f6),
	HX_("nodeName",6d,d1,7c,f2),
	HX_("nodeValue",0f,5e,ee,d5),
	HX_("parent",2a,05,7e,ed),
	HX_("children",3f,19,6a,70),
	HX_("attributeMap",e0,4b,b2,95),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("attributes",d7,a8,71,97),
	HX_("elements",37,36,c4,83),
	HX_("elementsNamed",02,e2,8a,c2),
	HX_("firstElement",6c,c4,9c,2f),
	HX_("addChild",bb,cf,16,bf),
	HX_("removeChild",b8,86,ed,43),
	HX_("insertChild",a3,87,6e,8d),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void Xml_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_MARK_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_MARK_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_MARK_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_MARK_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_MARK_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_MARK_MEMBER_NAME(Xml_obj::Document,"Document");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Xml_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_VISIT_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_VISIT_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_VISIT_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_VISIT_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_VISIT_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_VISIT_MEMBER_NAME(Xml_obj::Document,"Document");
};

#endif

::hx::Class Xml_obj::__mClass;

static ::String Xml_obj_sStaticFields[] = {
	HX_("Element",9c,d6,a5,d3),
	HX_("PCData",bd,3d,a2,bd),
	HX_("CData",0d,60,15,c1),
	HX_("Comment",3f,a2,c1,4e),
	HX_("DocType",32,25,de,a5),
	HX_("ProcessingInstruction",db,1e,14,6a),
	HX_("Document",3b,ab,c4,74),
	HX_("parse",33,90,55,bd),
	HX_("createElement",20,87,97,ee),
	HX_("createPCData",b9,09,63,ab),
	HX_("createCData",91,27,63,57),
	HX_("createComment",c3,52,b3,69),
	HX_("createDocType",b6,d5,cf,c0),
	HX_("createProcessingInstruction",5f,2e,58,38),
	HX_("createDocument",37,6e,4d,ed),
	::String(null())
};

void Xml_obj::__register()
{
	Xml_obj _hx_dummy;
	Xml_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Xml",b7,25,43,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Xml_obj::__GetStatic;
	__mClass->mSetStaticField = &Xml_obj::__SetStatic;
	__mClass->mMarkFunc = Xml_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Xml_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Xml_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Xml_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Xml_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Xml_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Xml_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Xml_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_86_boot)
HXDLIN(  86)		Element = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_91_boot)
HXDLIN(  91)		PCData = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_96_boot)
HXDLIN(  96)		CData = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_101_boot)
HXDLIN( 101)		Comment = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_106_boot)
HXDLIN( 106)		DocType = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_111_boot)
HXDLIN( 111)		ProcessingInstruction = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7e4d842269e66db1_116_boot)
HXDLIN( 116)		Document = 6;
            	}
}

