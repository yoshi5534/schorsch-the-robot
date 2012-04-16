#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_INSTALLATIONINCOMPLETEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_INSTALLATIONINCOMPLETEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/InstallationIncompleteException.hdl"

#include "com/sun/star/configuration/CannotLoadConfigurationException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace configuration {

inline InstallationIncompleteException::InstallationIncompleteException() SAL_THROW( () )
    : ::com::sun::star::configuration::CannotLoadConfigurationException()
{ }

inline InstallationIncompleteException::InstallationIncompleteException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::configuration::CannotLoadConfigurationException(Message_, Context_)
{ }

InstallationIncompleteException::InstallationIncompleteException(InstallationIncompleteException const & the_other): ::com::sun::star::configuration::CannotLoadConfigurationException(the_other) {}

InstallationIncompleteException::~InstallationIncompleteException() {}

InstallationIncompleteException & InstallationIncompleteException::operator =(InstallationIncompleteException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::configuration::CannotLoadConfigurationException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace configuration {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::InstallationIncompleteException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::configuration::CannotLoadConfigurationException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.InstallationIncompleteException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::InstallationIncompleteException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::InstallationIncompleteException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_INSTALLATIONINCOMPLETEEXCEPTION_HPP
