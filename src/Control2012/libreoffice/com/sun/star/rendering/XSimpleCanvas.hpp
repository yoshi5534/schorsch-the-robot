#ifndef INCLUDED_COM_SUN_STAR_RENDERING_XSIMPLECANVAS_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_XSIMPLECANVAS_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/XSimpleCanvas.hdl"

#include "com/sun/star/rendering/RenderState.hpp"
#include "com/sun/star/rendering/FontMetrics.hpp"
#include "com/sun/star/rendering/XCanvas.hpp"
#include "com/sun/star/geometry/AffineMatrix2D.hpp"
#include "com/sun/star/rendering/XCanvasFont.hpp"
#include "com/sun/star/rendering/ViewState.hpp"
#include "com/sun/star/rendering/StringContext.hpp"
#include "com/sun/star/rendering/XGraphicDevice.hpp"
#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/rendering/XPolyPolygon2D.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/geometry/RealPoint2D.hpp"
#include "com/sun/star/rendering/XBitmap.hpp"
#include "com/sun/star/geometry/RealRectangle2D.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::XSimpleCanvas const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.rendering.XSimpleCanvas", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::rendering::XSimpleCanvas > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XSimpleCanvas > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::rendering::XSimpleCanvas::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XSimpleCanvas > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_XSIMPLECANVAS_HPP
