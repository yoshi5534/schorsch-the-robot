#ifndef INCLUDED_COM_SUN_STAR_XML_DOM_EVENTS_EVENTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_XML_DOM_EVENTS_EVENTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/xml/dom/events/EventException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace xml { namespace dom { namespace events {

inline EventException::EventException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , code(0)
{ }

inline EventException::EventException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int16& code_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , code(code_)
{ }

EventException::EventException(EventException const & the_other): ::com::sun::star::uno::Exception(the_other), code(the_other.code) {}

EventException::~EventException() {}

EventException & EventException::operator =(EventException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    code = the_other.code;
    return *this;
}

} } } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace dom { namespace events {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::dom::events::EventException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_short = ::cppu::UnoType< ::sal_Int16 >::get();
        aMemberRefs[0] = rMemberType_short.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.xml.dom.events.EventException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::dom::events::EventException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::dom::events::EventException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_DOM_EVENTS_EVENTEXCEPTION_HPP
