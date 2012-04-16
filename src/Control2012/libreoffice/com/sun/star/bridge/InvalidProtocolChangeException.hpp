#ifndef INCLUDED_COM_SUN_STAR_BRIDGE_INVALIDPROTOCOLCHANGEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_BRIDGE_INVALIDPROTOCOLCHANGEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/bridge/InvalidProtocolChangeException.hdl"

#include "com/sun/star/bridge/ProtocolProperty.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace bridge {

inline InvalidProtocolChangeException::InvalidProtocolChangeException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , invalidProperty()
    , reason(0)
{ }

inline InvalidProtocolChangeException::InvalidProtocolChangeException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::bridge::ProtocolProperty& invalidProperty_, const ::sal_Int32& reason_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , invalidProperty(invalidProperty_)
    , reason(reason_)
{ }

InvalidProtocolChangeException::InvalidProtocolChangeException(InvalidProtocolChangeException const & the_other): ::com::sun::star::uno::Exception(the_other), invalidProperty(the_other.invalidProperty), reason(the_other.reason) {}

InvalidProtocolChangeException::~InvalidProtocolChangeException() {}

InvalidProtocolChangeException & InvalidProtocolChangeException::operator =(InvalidProtocolChangeException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    invalidProperty = the_other.invalidProperty;
    reason = the_other.reason;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace bridge {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::bridge::InvalidProtocolChangeException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_bridge_ProtocolProperty = ::cppu::UnoType< ::com::sun::star::bridge::ProtocolProperty >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_bridge_ProtocolProperty.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[1] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.bridge.InvalidProtocolChangeException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::bridge::InvalidProtocolChangeException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::bridge::InvalidProtocolChangeException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BRIDGE_INVALIDPROTOCOLCHANGEEXCEPTION_HPP
