#ifndef INCLUDED_COM_SUN_STAR_XML_CRYPTO_XMLSIGNATUREEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_XML_CRYPTO_XMLSIGNATUREEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/xml/crypto/XMLSignatureException.hdl"

#include "com/sun/star/security/SignatureException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace crypto {

inline XMLSignatureException::XMLSignatureException() SAL_THROW( () )
    : ::com::sun::star::security::SignatureException()
{ }

inline XMLSignatureException::XMLSignatureException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::security::SignatureException(Message_, Context_)
{ }

XMLSignatureException::XMLSignatureException(XMLSignatureException const & the_other): ::com::sun::star::security::SignatureException(the_other) {}

XMLSignatureException::~XMLSignatureException() {}

XMLSignatureException & XMLSignatureException::operator =(XMLSignatureException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::security::SignatureException::operator =(the_other);
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace crypto {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::crypto::XMLSignatureException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::security::SignatureException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.xml.crypto.XMLSignatureException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::crypto::XMLSignatureException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::crypto::XMLSignatureException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_CRYPTO_XMLSIGNATUREEXCEPTION_HPP
