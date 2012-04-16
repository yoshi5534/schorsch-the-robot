#ifndef INCLUDED_COM_SUN_STAR_MOZILLA_XMOZILLABOOTSTRAP_HPP
#define INCLUDED_COM_SUN_STAR_MOZILLA_XMOZILLABOOTSTRAP_HPP

#include "sal/config.h"

#include "com/sun/star/mozilla/XMozillaBootstrap.hdl"

#include "com/sun/star/mozilla/XProxyRunner.hpp"
#include "com/sun/star/mozilla/XProfileDiscover.hpp"
#include "com/sun/star/mozilla/XProfileManager.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace mozilla {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::mozilla::XMozillaBootstrap const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::mozilla::XProfileDiscover > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::mozilla::XProfileManager > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::mozilla::XProxyRunner > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.mozilla.XMozillaBootstrap", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::mozilla::XMozillaBootstrap > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::mozilla::XMozillaBootstrap > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::mozilla::XMozillaBootstrap::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::mozilla::XMozillaBootstrap > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_MOZILLA_XMOZILLABOOTSTRAP_HPP
