#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_XOOXMLDOCUMENTPROPERTIESIMPORTER_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_XOOXMLDOCUMENTPROPERTIESIMPORTER_HPP

#include "sal/config.h"

#include "com/sun/star/document/XOOXMLDocumentPropertiesImporter.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/xml/sax/SAXException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/document/XDocumentProperties.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/embed/XStorage.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::XOOXMLDocumentPropertiesImporter const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.document.XOOXMLDocumentPropertiesImporter", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::document::XOOXMLDocumentPropertiesImporter > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::document::XOOXMLDocumentPropertiesImporter > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::document::XOOXMLDocumentPropertiesImporter::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::document::XOOXMLDocumentPropertiesImporter > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_XOOXMLDOCUMENTPROPERTIESIMPORTER_HPP
