#ifndef INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_XPANE_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_XPANE_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/framework/XPane.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/awt/XWindow.hpp"
#include "com/sun/star/rendering/XCanvas.hpp"
#include "com/sun/star/drawing/framework/XResource.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace drawing { namespace framework {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::framework::XPane const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResource > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.drawing.framework.XPane", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XPane > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XPane > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::drawing::framework::XPane::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XPane > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_XPANE_HPP
