#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_BACKENDACCESSEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_BACKENDACCESSEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/backend/BackendAccessException.hdl"

#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline BackendAccessException::BackendAccessException() SAL_THROW( () )
    : ::com::sun::star::lang::WrappedTargetException()
{ }

inline BackendAccessException::BackendAccessException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& TargetException_) SAL_THROW( () )
    : ::com::sun::star::lang::WrappedTargetException(Message_, Context_, TargetException_)
{ }

BackendAccessException::BackendAccessException(BackendAccessException const & the_other): ::com::sun::star::lang::WrappedTargetException(the_other) {}

BackendAccessException::~BackendAccessException() {}

BackendAccessException & BackendAccessException::operator =(BackendAccessException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::lang::WrappedTargetException::operator =(the_other);
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::backend::BackendAccessException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::lang::WrappedTargetException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.backend.BackendAccessException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::backend::BackendAccessException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::backend::BackendAccessException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_BACKENDACCESSEXCEPTION_HPP
