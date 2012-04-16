#ifndef INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPETEXTFRAME_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPETEXTFRAME_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/EnhancedCustomShapeTextFrame.hdl"

#include "com/sun/star/drawing/EnhancedCustomShapeParameterPair.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline EnhancedCustomShapeTextFrame::EnhancedCustomShapeTextFrame() SAL_THROW( () )
    : TopLeft()
    , BottomRight()
{
}

inline EnhancedCustomShapeTextFrame::EnhancedCustomShapeTextFrame(const ::com::sun::star::drawing::EnhancedCustomShapeParameterPair& TopLeft_, const ::com::sun::star::drawing::EnhancedCustomShapeParameterPair& BottomRight_) SAL_THROW( () )
    : TopLeft(TopLeft_)
    , BottomRight(BottomRight_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::EnhancedCustomShapeTextFrame const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeParameterPair >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeParameterPair >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.EnhancedCustomShapeTextFrame", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::EnhancedCustomShapeTextFrame const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeTextFrame >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPETEXTFRAME_HPP
