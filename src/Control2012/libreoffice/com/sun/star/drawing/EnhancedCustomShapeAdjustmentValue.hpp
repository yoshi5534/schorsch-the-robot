#ifndef INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPEADJUSTMENTVALUE_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPEADJUSTMENTVALUE_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/EnhancedCustomShapeAdjustmentValue.hdl"

#include "com/sun/star/beans/PropertyState.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline EnhancedCustomShapeAdjustmentValue::EnhancedCustomShapeAdjustmentValue() SAL_THROW( () )
    : Value()
    , State(::com::sun::star::beans::PropertyState_DIRECT_VALUE)
{
}

inline EnhancedCustomShapeAdjustmentValue::EnhancedCustomShapeAdjustmentValue(const ::com::sun::star::uno::Any& Value_, const ::com::sun::star::beans::PropertyState& State_) SAL_THROW( () )
    : Value(Value_)
    , State(State_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::EnhancedCustomShapeAdjustmentValue const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::beans::PropertyState >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.EnhancedCustomShapeAdjustmentValue", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::EnhancedCustomShapeAdjustmentValue const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeAdjustmentValue >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPEADJUSTMENTVALUE_HPP
