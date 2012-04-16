#ifndef INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPESEGMENT_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPESEGMENT_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/EnhancedCustomShapeSegment.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline EnhancedCustomShapeSegment::EnhancedCustomShapeSegment() SAL_THROW( () )
    : Command(0)
    , Count(0)
{
}

inline EnhancedCustomShapeSegment::EnhancedCustomShapeSegment(const ::sal_Int16& Command_, const ::sal_Int16& Count_) SAL_THROW( () )
    : Command(Command_)
    , Count(Count_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::EnhancedCustomShapeSegment const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.EnhancedCustomShapeSegment", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::EnhancedCustomShapeSegment const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::EnhancedCustomShapeSegment >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_ENHANCEDCUSTOMSHAPESEGMENT_HPP
