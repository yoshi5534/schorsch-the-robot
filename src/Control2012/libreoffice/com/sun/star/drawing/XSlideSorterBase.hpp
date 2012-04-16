#ifndef INCLUDED_COM_SUN_STAR_DRAWING_XSLIDESORTERBASE_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_XSLIDESORTERBASE_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/XSlideSorterBase.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/container/XIndexAccess.hpp"
#include "com/sun/star/drawing/XDrawView.hpp"
#include "com/sun/star/drawing/framework/XView.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::XSlideSorterBase const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XView > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XDrawView > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.drawing.XSlideSorterBase", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSlideSorterBase > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSlideSorterBase > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::drawing::XSlideSorterBase::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSlideSorterBase > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_XSLIDESORTERBASE_HPP
