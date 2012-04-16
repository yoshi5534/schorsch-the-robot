#ifndef INCLUDED_COM_SUN_STAR_DRAWING_XDRAWSUBCONTROLLER_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_XDRAWSUBCONTROLLER_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/XDrawSubController.hdl"

#include "com/sun/star/beans/XFastPropertySet.hpp"
#include "com/sun/star/view/XSelectionSupplier.hpp"
#include "com/sun/star/drawing/XDrawView.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::XDrawSubController const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XDrawView > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::view::XSelectionSupplier > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XFastPropertySet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.drawing.XDrawSubController", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::drawing::XDrawSubController > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XDrawSubController > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::drawing::XDrawSubController::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XDrawSubController > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_XDRAWSUBCONTROLLER_HPP
