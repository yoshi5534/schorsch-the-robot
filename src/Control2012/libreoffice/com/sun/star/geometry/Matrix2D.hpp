#ifndef INCLUDED_COM_SUN_STAR_GEOMETRY_MATRIX2D_HPP
#define INCLUDED_COM_SUN_STAR_GEOMETRY_MATRIX2D_HPP

#include "sal/config.h"

#include "com/sun/star/geometry/Matrix2D.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace geometry {

inline Matrix2D::Matrix2D() SAL_THROW( () )
    : m00(0)
    , m01(0)
    , m10(0)
    , m11(0)
{
}

inline Matrix2D::Matrix2D(const double& m00_, const double& m01_, const double& m10_, const double& m11_) SAL_THROW( () )
    : m00(m00_)
    , m01(m01_)
    , m10(m10_)
    , m11(m11_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace geometry {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::geometry::Matrix2D const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.geometry.Matrix2D", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::geometry::Matrix2D const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::geometry::Matrix2D >::get();
}

#endif // INCLUDED_COM_SUN_STAR_GEOMETRY_MATRIX2D_HPP
