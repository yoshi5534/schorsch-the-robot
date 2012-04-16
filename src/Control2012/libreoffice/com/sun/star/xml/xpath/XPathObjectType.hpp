#ifndef INCLUDED_COM_SUN_STAR_XML_XPATH_XPATHOBJECTTYPE_HPP
#define INCLUDED_COM_SUN_STAR_XML_XPATH_XPATHOBJECTTYPE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/xpath/XPathObjectType.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace xpath {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::xpath::XPathObjectType const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.xml.xpath.XPathObjectType",
                                       ::com::sun::star::xml::xpath::XPathObjectType_XPATH_UNDEFINED );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::xpath::XPathObjectType const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::xpath::XPathObjectType >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_XPATH_XPATHOBJECTTYPE_HPP
