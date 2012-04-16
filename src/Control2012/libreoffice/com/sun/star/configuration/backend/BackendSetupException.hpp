#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_BACKENDSETUPEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_BACKENDSETUPEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/backend/BackendSetupException.hdl"

#include "com/sun/star/configuration/CannotLoadConfigurationException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline BackendSetupException::BackendSetupException() SAL_THROW( () )
    : ::com::sun::star::configuration::CannotLoadConfigurationException()
    , BackendException()
{ }

inline BackendSetupException::BackendSetupException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& BackendException_) SAL_THROW( () )
    : ::com::sun::star::configuration::CannotLoadConfigurationException(Message_, Context_)
    , BackendException(BackendException_)
{ }

BackendSetupException::BackendSetupException(BackendSetupException const & the_other): ::com::sun::star::configuration::CannotLoadConfigurationException(the_other), BackendException(the_other.BackendException) {}

BackendSetupException::~BackendSetupException() {}

BackendSetupException & BackendSetupException::operator =(BackendSetupException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::configuration::CannotLoadConfigurationException::operator =(the_other);
    BackendException = the_other.BackendException;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::backend::BackendSetupException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::configuration::CannotLoadConfigurationException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_any = ::cppu::UnoType< ::com::sun::star::uno::Any >::get();
        aMemberRefs[0] = rMemberType_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.backend.BackendSetupException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::backend::BackendSetupException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::backend::BackendSetupException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_BACKENDSETUPEXCEPTION_HPP
