#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_INVALIDBOOTSTRAPFILEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_INVALIDBOOTSTRAPFILEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/InvalidBootstrapFileException.hdl"

#include "com/sun/star/configuration/CannotLoadConfigurationException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace configuration {

inline InvalidBootstrapFileException::InvalidBootstrapFileException() SAL_THROW( () )
    : ::com::sun::star::configuration::CannotLoadConfigurationException()
    , BootstrapFileURL()
{ }

inline InvalidBootstrapFileException::InvalidBootstrapFileException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& BootstrapFileURL_) SAL_THROW( () )
    : ::com::sun::star::configuration::CannotLoadConfigurationException(Message_, Context_)
    , BootstrapFileURL(BootstrapFileURL_)
{ }

InvalidBootstrapFileException::InvalidBootstrapFileException(InvalidBootstrapFileException const & the_other): ::com::sun::star::configuration::CannotLoadConfigurationException(the_other), BootstrapFileURL(the_other.BootstrapFileURL) {}

InvalidBootstrapFileException::~InvalidBootstrapFileException() {}

InvalidBootstrapFileException & InvalidBootstrapFileException::operator =(InvalidBootstrapFileException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::configuration::CannotLoadConfigurationException::operator =(the_other);
    BootstrapFileURL = the_other.BootstrapFileURL;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace configuration {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::InvalidBootstrapFileException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::configuration::CannotLoadConfigurationException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.InvalidBootstrapFileException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::InvalidBootstrapFileException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::InvalidBootstrapFileException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_INVALIDBOOTSTRAPFILEEXCEPTION_HPP
