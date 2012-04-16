#ifndef INCLUDED_COM_SUN_STAR_ANIMATIONS_XANIMATESET_HPP
#define INCLUDED_COM_SUN_STAR_ANIMATIONS_XANIMATESET_HPP

#include "sal/config.h"

#include "com/sun/star/animations/XAnimateSet.hdl"

#include "com/sun/star/animations/XAnimate.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace animations {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::animations::XAnimateSet const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::animations::XAnimate > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.animations.XAnimateSet", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::animations::XAnimateSet > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::animations::XAnimateSet > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::animations::XAnimateSet::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::animations::XAnimateSet > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_ANIMATIONS_XANIMATESET_HPP
