#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_SAXDOCUMENTBUILDERSTATE_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_SAXDOCUMENTBUILDERSTATE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/SAXDocumentBuilderState.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace dom {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::dom::SAXDocumentBuilderState const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.xml.dom.SAXDocumentBuilderState",
                                       ::com::sun::star::xml::dom::SAXDocumentBuilderState_READY );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::dom::SAXDocumentBuilderState const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::dom::SAXDocumentBuilderState >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_SAXDOCUMENTBUILDERSTATE_HPP
