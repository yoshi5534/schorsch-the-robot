#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_NODETYPE_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_NODETYPE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/NodeType.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace dom {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::dom::NodeType const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.xml.dom.NodeType",
                                       ::com::sun::star::xml::dom::NodeType_ATTRIBUTE_NODE );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::dom::NodeType const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::dom::NodeType >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_NODETYPE_HPP
