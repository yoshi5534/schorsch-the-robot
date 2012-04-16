#ifndef INCLUDED_COM_SUN_STAR_XML_CRYPTO_XXMLSECURITYTEMPLATE_HPP
#define INCLUDED_COM_SUN_STAR_XML_CRYPTO_XXMLSECURITYTEMPLATE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/crypto/XXMLSecurityTemplate.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/xml/crypto/SecurityOperationStatus.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/xml/wrapper/XXMLElementWrapper.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xml { namespace crypto {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::crypto::XXMLSecurityTemplate const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.xml.crypto.XXMLSecurityTemplate", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::xml::crypto::XXMLSecurityTemplate > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::xml::crypto::XXMLSecurityTemplate > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::xml::crypto::XXMLSecurityTemplate::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::xml::crypto::XXMLSecurityTemplate > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_XML_CRYPTO_XXMLSECURITYTEMPLATE_HPP
