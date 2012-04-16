#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_DOMEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_DOMEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/DOMException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/xml/dom/DOMExceptionType.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace dom {

inline DOMException::DOMException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Code(::com::sun::star::xml::dom::DOMExceptionType_DOMSTRING_SIZE_ERR)
{ }

inline DOMException::DOMException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::xml::dom::DOMExceptionType& Code_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Code(Code_)
{ }

DOMException::DOMException(DOMException const & the_other): ::com::sun::star::uno::Exception(the_other), Code(the_other.Code) {}

DOMException::~DOMException() {}

DOMException & DOMException::operator =(DOMException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Code = the_other.Code;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace dom {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::dom::DOMException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_xml_dom_DOMExceptionType = ::cppu::UnoType< ::com::sun::star::xml::dom::DOMExceptionType >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_xml_dom_DOMExceptionType.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.xml.dom.DOMException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::dom::DOMException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::dom::DOMException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_DOMEXCEPTION_HPP
