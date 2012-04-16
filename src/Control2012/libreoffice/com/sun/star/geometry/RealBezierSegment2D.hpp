#ifndef INCLUDED_COM_SUN_STAR_GEOMETRY_REALBEZIERSEGMENT2D_HPP
#define INCLUDED_COM_SUN_STAR_GEOMETRY_REALBEZIERSEGMENT2D_HPP

#include "sal/config.h"

#include "com/sun/star/geometry/RealBezierSegment2D.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace geometry {

inline RealBezierSegment2D::RealBezierSegment2D() SAL_THROW( () )
    : Px(0)
    , Py(0)
    , C1x(0)
    , C1y(0)
    , C2x(0)
    , C2y(0)
{
}

inline RealBezierSegment2D::RealBezierSegment2D(const double& Px_, const double& Py_, const double& C1x_, const double& C1y_, const double& C2x_, const double& C2y_) SAL_THROW( () )
    : Px(Px_)
    , Py(Py_)
    , C1x(C1x_)
    , C1y(C1y_)
    , C2x(C2x_)
    , C2y(C2y_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace geometry {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::geometry::RealBezierSegment2D const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.geometry.RealBezierSegment2D", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::geometry::RealBezierSegment2D const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::geometry::RealBezierSegment2D >::get();
}

#endif // INCLUDED_COM_SUN_STAR_GEOMETRY_REALBEZIERSEGMENT2D_HPP
