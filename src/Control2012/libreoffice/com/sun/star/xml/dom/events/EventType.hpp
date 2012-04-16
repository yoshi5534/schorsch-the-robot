#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_EVENTS_EVENTTYPE_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_EVENTS_EVENTTYPE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/events/EventType.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace dom { namespace events {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::dom::events::EventType const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.xml.dom.events.EventType",
                                       ::com::sun::star::xml::dom::events::EventType_DOMFocusIn );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::dom::events::EventType const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::dom::events::EventType >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_EVENTS_EVENTTYPE_HPP
