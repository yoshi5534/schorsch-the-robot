#ifndef INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPEPARAMETERPAIR_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPEPARAMETERPAIR_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/EnhancedCustomShapeParameterPair.hdl"

#include "com/sun/star/drawing/EnhancedCustomShapeParameter.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline EnhancedCustomShapeParameterPair::EnhancedCustomShapeParameterPair() SAL_THROW( () )
    : First()
    , Second()
{
}

inline EnhancedCustomShapeParameterPair::EnhancedCustomShapeParameterPair(const ::com::sun::star::drawing::EnhancedCustomShapeParameter& First_, const ::com::sun::star::drawing::EnhancedCustomShapeParameter& Second_) SAL_THROW( () )
    : First(First_)
    , Second(Second_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::EnhancedCustomShapeParameterPair const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeParameter >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeParameter >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.EnhancedCustomShapeParameterPair", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::EnhancedCustomShapeParameterPair const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeParameterPair >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPEPARAMETERPAIR_HPP
