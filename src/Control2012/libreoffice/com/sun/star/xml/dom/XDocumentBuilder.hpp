#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_XDOCUMENTBUILDER_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_XDOCUMENTBUILDER_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/XDocumentBuilder.hdl"

#include "com/sun/star/xml/sax/XErrorHandler.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/xml/sax/XEntityResolver.hpp"
#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/xml/sax/SAXException.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/xml/dom/XDocument.hpp"
#include "com/sun/star/xml/dom/XDOMImplementation.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace xml { namespace dom {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::dom::XDocumentBuilder const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.xml.dom.XDocumentBuilder", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XDocumentBuilder > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XDocumentBuilder > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::xml::dom::XDocumentBuilder::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XDocumentBuilder > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_XDOCUMENTBUILDER_HPP
