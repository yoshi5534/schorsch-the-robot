#ifndef INCLUDED_COM_SUN_STAR_XML_CRYPTO_XXMLSIGNATURETEMPLATE_HPP
#define INCLUDED_COM_SUN_STAR_XML_CRYPTO_XXMLSIGNATURETEMPLATE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/crypto/XXMLSignatureTemplate.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/xml/crypto/XUriBinding.hpp"
#include "com/sun/star/xml/wrapper/XXMLElementWrapper.hpp"
#include "com/sun/star/xml/crypto/XXMLSecurityTemplate.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace crypto {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::crypto::XXMLSignatureTemplate const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::xml::crypto::XXMLSecurityTemplate > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.xml.crypto.XXMLSignatureTemplate", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::xml::crypto::XXMLSignatureTemplate > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::xml::crypto::XXMLSignatureTemplate > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::xml::crypto::XXMLSignatureTemplate::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::xml::crypto::XXMLSignatureTemplate > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_XML_CRYPTO_XXMLSIGNATURETEMPLATE_HPP
