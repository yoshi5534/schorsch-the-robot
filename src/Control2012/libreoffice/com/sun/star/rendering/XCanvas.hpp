#ifndef INCLUDED_COM_SUN_STAR_RENDERING_XCANVAS_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_XCANVAS_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/XCanvas.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/rendering/XBitmap.hpp"
#include "com/sun/star/rendering/XTextLayout.hpp"
#include "com/sun/star/rendering/StringContext.hpp"
#include "com/sun/star/rendering/FontInfo.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/rendering/FontRequest.hpp"
#include "com/sun/star/geometry/Matrix2D.hpp"
#include "com/sun/star/rendering/Texture.hpp"
#include "com/sun/star/geometry/XMapping2D.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/rendering/VolatileContentDestroyedException.hpp"
#include "com/sun/star/rendering/RenderState.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/rendering/XCanvasFont.hpp"
#include "com/sun/star/rendering/StrokeAttributes.hpp"
#include "com/sun/star/rendering/XCachedPrimitive.hpp"
#include "com/sun/star/rendering/XPolyPolygon2D.hpp"
#include "com/sun/star/rendering/XGraphicDevice.hpp"
#include "com/sun/star/rendering/ViewState.hpp"
#include "com/sun/star/geometry/RealPoint2D.hpp"
#include "com/sun/star/geometry/RealBezierSegment2D.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::XCanvas const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.rendering.XCanvas", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::rendering::XCanvas > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XCanvas > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::rendering::XCanvas::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XCanvas > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_XCANVAS_HPP
