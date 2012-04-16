#ifndef INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_ANCHORBINDINGMODE_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_ANCHORBINDINGMODE_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/framework/AnchorBindingMode.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace drawing { namespace framework {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::framework::AnchorBindingMode const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.drawing.framework.AnchorBindingMode",
                                       ::com::sun::star::drawing::framework::AnchorBindingMode_DIRECT );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::framework::AnchorBindingMode const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::framework::AnchorBindingMode >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_ANCHORBINDINGMODE_HPP
