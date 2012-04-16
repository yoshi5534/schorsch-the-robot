#ifndef INCLUDED_COM_SUN_STAR_XML_CRYPTO_XMLENCRYPTIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_XML_CRYPTO_XMLENCRYPTIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/xml/crypto/XMLEncryptionException.hdl"

#include "com/sun/star/security/EncryptionException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace crypto {

inline XMLEncryptionException::XMLEncryptionException() SAL_THROW( () )
    : ::com::sun::star::security::EncryptionException()
{ }

inline XMLEncryptionException::XMLEncryptionException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::security::EncryptionException(Message_, Context_)
{ }

XMLEncryptionException::XMLEncryptionException(XMLEncryptionException const & the_other): ::com::sun::star::security::EncryptionException(the_other) {}

XMLEncryptionException::~XMLEncryptionException() {}

XMLEncryptionException & XMLEncryptionException::operator =(XMLEncryptionException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::security::EncryptionException::operator =(the_other);
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace crypto {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::crypto::XMLEncryptionException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::security::EncryptionException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.xml.crypto.XMLEncryptionException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::crypto::XMLEncryptionException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::crypto::XMLEncryptionException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_CRYPTO_XMLENCRYPTIONEXCEPTION_HPP
