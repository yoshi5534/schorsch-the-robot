#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_XTEXT_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_XTEXT_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/XText.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/xml/dom/XCharacterData.hpp"
#include "com/sun/star/xml/dom/DOMException.hpp"
#include "com/sun/star/xml/dom/XText.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace xml { namespace dom {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::dom::XText const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XCharacterData > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.xml.dom.XText", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XText > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XText > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::xml::dom::XText::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XText > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_XTEXT_HPP
