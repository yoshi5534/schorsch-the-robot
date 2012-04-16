#ifndef INCLUDED_COM_SUN_STAR_GEOMETRY_INTEGERSIZE2D_HPP
#define INCLUDED_COM_SUN_STAR_GEOMETRY_INTEGERSIZE2D_HPP

#include "sal/config.h"

#include "com/sun/star/geometry/IntegerSize2D.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace geometry {

inline IntegerSize2D::IntegerSize2D() SAL_THROW( () )
    : Width(0)
    , Height(0)
{
}

inline IntegerSize2D::IntegerSize2D(const ::sal_Int32& Width_, const ::sal_Int32& Height_) SAL_THROW( () )
    : Width(Width_)
    , Height(Height_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace geometry {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::geometry::IntegerSize2D const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.geometry.IntegerSize2D", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::geometry::IntegerSize2D const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::geometry::IntegerSize2D >::get();
}

#endif // INCLUDED_COM_SUN_STAR_GEOMETRY_INTEGERSIZE2D_HPP
