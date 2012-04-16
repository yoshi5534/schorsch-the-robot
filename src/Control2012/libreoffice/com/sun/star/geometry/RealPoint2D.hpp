#ifndef INCLUDED_COM_SUN_STAR_GEOMETRY_REALPOINT2D_HPP
#define INCLUDED_COM_SUN_STAR_GEOMETRY_REALPOINT2D_HPP

#include "sal/config.h"

#include "com/sun/star/geometry/RealPoint2D.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace geometry {

inline RealPoint2D::RealPoint2D() SAL_THROW( () )
    : X(0)
    , Y(0)
{
}

inline RealPoint2D::RealPoint2D(const double& X_, const double& Y_) SAL_THROW( () )
    : X(X_)
    , Y(Y_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace geometry {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::geometry::RealPoint2D const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.geometry.RealPoint2D", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::geometry::RealPoint2D const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::geometry::RealPoint2D >::get();
}

#endif // INCLUDED_COM_SUN_STAR_GEOMETRY_REALPOINT2D_HPP
