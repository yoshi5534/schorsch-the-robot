#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_CONNECTIONLOSTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_CONNECTIONLOSTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/backend/ConnectionLostException.hdl"

#include "com/sun/star/configuration/backend/BackendAccessException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ConnectionLostException::ConnectionLostException() SAL_THROW( () )
    : ::com::sun::star::configuration::backend::BackendAccessException()
{ }

inline ConnectionLostException::ConnectionLostException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& TargetException_) SAL_THROW( () )
    : ::com::sun::star::configuration::backend::BackendAccessException(Message_, Context_, TargetException_)
{ }

ConnectionLostException::ConnectionLostException(ConnectionLostException const & the_other): ::com::sun::star::configuration::backend::BackendAccessException(the_other) {}

ConnectionLostException::~ConnectionLostException() {}

ConnectionLostException & ConnectionLostException::operator =(ConnectionLostException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::configuration::backend::BackendAccessException::operator =(the_other);
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::backend::ConnectionLostException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::configuration::backend::BackendAccessException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.backend.ConnectionLostException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::backend::ConnectionLostException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::backend::ConnectionLostException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_CONNECTIONLOSTEXCEPTION_HPP
