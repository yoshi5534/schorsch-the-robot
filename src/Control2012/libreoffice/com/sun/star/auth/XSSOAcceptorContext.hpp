#ifndef INCLUDED_COM_SUN_STAR_AUTH_XSSOACCEPTORCONTEXT_HPP
#define INCLUDED_COM_SUN_STAR_AUTH_XSSOACCEPTORCONTEXT_HPP

#include "sal/config.h"

#include "com/sun/star/auth/XSSOAcceptorContext.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/auth/AuthenticationFailedException.hpp"
#include "com/sun/star/auth/InvalidContextException.hpp"
#include "com/sun/star/auth/InvalidCredentialException.hpp"
#include "com/sun/star/auth/InvalidArgumentException.hpp"
#include "com/sun/star/auth/XSSOContext.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace auth {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::auth::XSSOAcceptorContext const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::auth::XSSOContext > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.auth.XSSOAcceptorContext", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::auth::XSSOAcceptorContext > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::auth::XSSOAcceptorContext > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::auth::XSSOAcceptorContext::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::auth::XSSOAcceptorContext > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_AUTH_XSSOACCEPTORCONTEXT_HPP
