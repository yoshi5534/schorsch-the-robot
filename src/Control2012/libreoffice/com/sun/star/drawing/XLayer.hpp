#ifndef INCLUDED_COM_SUN_STAR_DRAWING_XLAYER_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_XLAYER_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/XLayer.hdl"

#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::XLayer const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.drawing.XLayer", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::drawing::XLayer > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XLayer > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::drawing::XLayer::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XLayer > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_XLAYER_HPP
