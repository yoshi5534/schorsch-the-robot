#ifndef INCLUDED_COM_SUN_STAR_DRAWING_BEZIERPOINT_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_BEZIERPOINT_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/BezierPoint.hdl"

#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline BezierPoint::BezierPoint() SAL_THROW( () )
    : Position()
    , ControlPoint1()
    , ControlPoint2()
{
}

inline BezierPoint::BezierPoint(const ::com::sun::star::awt::Point& Position_, const ::com::sun::star::awt::Point& ControlPoint1_, const ::com::sun::star::awt::Point& ControlPoint2_) SAL_THROW( () )
    : Position(Position_)
    , ControlPoint1(ControlPoint1_)
    , ControlPoint2(ControlPoint2_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::BezierPoint const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.BezierPoint", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::BezierPoint const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::BezierPoint >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_BEZIERPOINT_HPP
