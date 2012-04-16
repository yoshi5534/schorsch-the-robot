#ifndef INCLUDED_COM_SUN_STAR_PRESENTATION_XSLIDESHOWVIEW_HPP
#define INCLUDED_COM_SUN_STAR_PRESENTATION_XSLIDESHOWVIEW_HPP

#include "sal/config.h"

#include "com/sun/star/presentation/XSlideShowView.hdl"

#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/awt/XMouseListener.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/geometry/AffineMatrix2D.hpp"
#include "com/sun/star/util/XModifyListener.hpp"
#include "com/sun/star/rendering/XSpriteCanvas.hpp"
#include "com/sun/star/awt/XPaintListener.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/awt/XMouseMotionListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace presentation {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::presentation::XSlideShowView const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.presentation.XSlideShowView", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::presentation::XSlideShowView > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::presentation::XSlideShowView > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::presentation::XSlideShowView::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::presentation::XSlideShowView > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_PRESENTATION_XSLIDESHOWVIEW_HPP
