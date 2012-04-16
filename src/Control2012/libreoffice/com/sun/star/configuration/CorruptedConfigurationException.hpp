#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_CORRUPTEDCONFIGURATIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_CORRUPTEDCONFIGURATIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/CorruptedConfigurationException.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace configuration {

inline CorruptedConfigurationException::CorruptedConfigurationException() SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException()
    , Details()
{ }

inline CorruptedConfigurationException::CorruptedConfigurationException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& Details_) SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException(Message_, Context_)
    , Details(Details_)
{ }

CorruptedConfigurationException::CorruptedConfigurationException(CorruptedConfigurationException const & the_other): ::com::sun::star::uno::RuntimeException(the_other), Details(the_other.Details) {}

CorruptedConfigurationException::~CorruptedConfigurationException() {}

CorruptedConfigurationException & CorruptedConfigurationException::operator =(CorruptedConfigurationException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::RuntimeException::operator =(the_other);
    Details = the_other.Details;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace configuration {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::CorruptedConfigurationException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::RuntimeException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.CorruptedConfigurationException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::CorruptedConfigurationException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::CorruptedConfigurationException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_CORRUPTEDCONFIGURATIONEXCEPTION_HPP
