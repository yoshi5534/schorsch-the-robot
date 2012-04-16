#ifndef INCLUDED_COM_SUN_STAR_RENDERING_XIEEEFLOATBITMAP_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_XIEEEFLOATBITMAP_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/XIeeeFloatBitmap.hdl"

#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/geometry/IntegerRectangle2D.hpp"
#include "com/sun/star/rendering/FloatingPointBitmapLayout.hpp"
#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/rendering/XIeeeFloatReadOnlyBitmap.hpp"
#include "com/sun/star/geometry/IntegerPoint2D.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::XIeeeFloatBitmap const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XIeeeFloatReadOnlyBitmap > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.rendering.XIeeeFloatBitmap", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::rendering::XIeeeFloatBitmap > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XIeeeFloatBitmap > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::rendering::XIeeeFloatBitmap::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XIeeeFloatBitmap > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_XIEEEFLOATBITMAP_HPP
