#ifndef INCLUDED_COM_SUN_STAR_DRAWING_DIRECTION3D_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_DIRECTION3D_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/Direction3D.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline Direction3D::Direction3D() SAL_THROW( () )
    : DirectionX(0)
    , DirectionY(0)
    , DirectionZ(0)
{
}

inline Direction3D::Direction3D(const double& DirectionX_, const double& DirectionY_, const double& DirectionZ_) SAL_THROW( () )
    : DirectionX(DirectionX_)
    , DirectionY(DirectionY_)
    , DirectionZ(DirectionZ_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::Direction3D const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.Direction3D", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::Direction3D const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::Direction3D >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_DIRECTION3D_HPP
