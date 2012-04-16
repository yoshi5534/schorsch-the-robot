#ifndef INCLUDED_COM_SUN_STAR_DRAWING_CAMERAGEOMETRY_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_CAMERAGEOMETRY_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/CameraGeometry.hdl"

#include "com/sun/star/drawing/Direction3D.hpp"
#include "com/sun/star/drawing/Position3D.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline CameraGeometry::CameraGeometry() SAL_THROW( () )
    : vrp()
    , vpn()
    , vup()
{
}

inline CameraGeometry::CameraGeometry(const ::com::sun::star::drawing::Position3D& vrp_, const ::com::sun::star::drawing::Direction3D& vpn_, const ::com::sun::star::drawing::Direction3D& vup_) SAL_THROW( () )
    : vrp(vrp_)
    , vpn(vpn_)
    , vup(vup_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::CameraGeometry const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::drawing::Position3D >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::Direction3D >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::Direction3D >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.CameraGeometry", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::CameraGeometry const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::CameraGeometry >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_CAMERAGEOMETRY_HPP
