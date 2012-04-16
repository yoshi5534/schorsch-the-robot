#ifndef INCLUDED_COM_SUN_STAR_SECURITY_ENCRYPTIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_ENCRYPTIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/security/EncryptionException.hdl"

#include "com/sun/star/security/CryptographyException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace security {

inline EncryptionException::EncryptionException() SAL_THROW( () )
    : ::com::sun::star::security::CryptographyException()
{ }

inline EncryptionException::EncryptionException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::security::CryptographyException(Message_, Context_)
{ }

EncryptionException::EncryptionException(EncryptionException const & the_other): ::com::sun::star::security::CryptographyException(the_other) {}

EncryptionException::~EncryptionException() {}

EncryptionException & EncryptionException::operator =(EncryptionException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::security::CryptographyException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::EncryptionException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::security::CryptographyException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.security.EncryptionException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::EncryptionException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::EncryptionException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_ENCRYPTIONEXCEPTION_HPP
