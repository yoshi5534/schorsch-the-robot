#ifndef INCLUDED_COM_SUN_STAR_SECURITY_CRYPTOGRAPHYEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_CRYPTOGRAPHYEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/security/CryptographyException.hdl"

#include "com/sun/star/uno/SecurityException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace security {

inline CryptographyException::CryptographyException() SAL_THROW( () )
    : ::com::sun::star::uno::SecurityException()
{ }

inline CryptographyException::CryptographyException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::uno::SecurityException(Message_, Context_)
{ }

CryptographyException::CryptographyException(CryptographyException const & the_other): ::com::sun::star::uno::SecurityException(the_other) {}

CryptographyException::~CryptographyException() {}

CryptographyException & CryptographyException::operator =(CryptographyException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::SecurityException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::CryptographyException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::SecurityException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.security.CryptographyException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::CryptographyException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::CryptographyException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_CRYPTOGRAPHYEXCEPTION_HPP
