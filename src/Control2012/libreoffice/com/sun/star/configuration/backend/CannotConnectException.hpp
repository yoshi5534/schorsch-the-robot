#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_CANNOTCONNECTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_CANNOTCONNECTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/backend/CannotConnectException.hdl"

#include "com/sun/star/configuration/backend/BackendSetupException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline CannotConnectException::CannotConnectException() SAL_THROW( () )
    : ::com::sun::star::configuration::backend::BackendSetupException()
{ }

inline CannotConnectException::CannotConnectException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& BackendException_) SAL_THROW( () )
    : ::com::sun::star::configuration::backend::BackendSetupException(Message_, Context_, BackendException_)
{ }

CannotConnectException::CannotConnectException(CannotConnectException const & the_other): ::com::sun::star::configuration::backend::BackendSetupException(the_other) {}

CannotConnectException::~CannotConnectException() {}

CannotConnectException & CannotConnectException::operator =(CannotConnectException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::configuration::backend::BackendSetupException::operator =(the_other);
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::backend::CannotConnectException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::configuration::backend::BackendSetupException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.backend.CannotConnectException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::backend::CannotConnectException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::backend::CannotConnectException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_CANNOTCONNECTEXCEPTION_HPP
