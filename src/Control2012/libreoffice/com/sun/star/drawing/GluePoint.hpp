#ifndef INCLUDED_COM_SUN_STAR_DRAWING_GLUEPOINT_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_GLUEPOINT_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/GluePoint.hdl"

#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline GluePoint::GluePoint() SAL_THROW( () )
    : Position()
    , EscapeDirection(0)
    , PositionAbsolute(false)
    , Alignment(0)
{
}

inline GluePoint::GluePoint(const ::com::sun::star::awt::Point& Position_, const ::sal_Int16& EscapeDirection_, const ::sal_Bool& PositionAbsolute_, const ::sal_Int16& Alignment_) SAL_THROW( () )
    : Position(Position_)
    , EscapeDirection(EscapeDirection_)
    , PositionAbsolute(PositionAbsolute_)
    , Alignment(Alignment_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::GluePoint const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.GluePoint", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::GluePoint const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::GluePoint >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_GLUEPOINT_HPP
