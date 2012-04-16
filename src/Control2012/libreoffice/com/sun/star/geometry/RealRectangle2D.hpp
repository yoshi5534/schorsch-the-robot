#ifndef INCLUDED_COM_SUN_STAR_GEOMETRY_REALRECTANGLE2D_HPP
#define INCLUDED_COM_SUN_STAR_GEOMETRY_REALRECTANGLE2D_HPP

#include "sal/config.h"

#include "com/sun/star/geometry/RealRectangle2D.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace geometry {

inline RealRectangle2D::RealRectangle2D() SAL_THROW( () )
    : X1(0)
    , Y1(0)
    , X2(0)
    , Y2(0)
{
}

inline RealRectangle2D::RealRectangle2D(const double& X1_, const double& Y1_, const double& X2_, const double& Y2_) SAL_THROW( () )
    : X1(X1_)
    , Y1(Y1_)
    , X2(X2_)
    , Y2(Y2_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace geometry {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::geometry::RealRectangle2D const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.geometry.RealRectangle2D", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::geometry::RealRectangle2D const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::geometry::RealRectangle2D >::get();
}

#endif // INCLUDED_COM_SUN_STAR_GEOMETRY_REALRECTANGLE2D_HPP
