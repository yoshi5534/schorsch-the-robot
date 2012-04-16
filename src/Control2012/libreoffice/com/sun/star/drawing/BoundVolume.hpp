#ifndef INCLUDED_COM_SUN_STAR_DRAWING_BOUNDVOLUME_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_BOUNDVOLUME_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/BoundVolume.hdl"

#include "com/sun/star/drawing/Position3D.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline BoundVolume::BoundVolume() SAL_THROW( () )
    : min()
    , max()
{
}

inline BoundVolume::BoundVolume(const ::com::sun::star::drawing::Position3D& min_, const ::com::sun::star::drawing::Position3D& max_) SAL_THROW( () )
    : min(min_)
    , max(max_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::BoundVolume const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::drawing::Position3D >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::Position3D >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.BoundVolume", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::BoundVolume const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::BoundVolume >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_BOUNDVOLUME_HPP
