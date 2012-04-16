#ifndef INCLUDED_COM_SUN_STAR_RENDERING_ARGBCOLOR_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_ARGBCOLOR_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/ARGBColor.hdl"

#include "com/sun/star/rendering/ColorComponent.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline ARGBColor::ARGBColor() SAL_THROW( () )
    : Alpha(0)
    , Red(0)
    , Green(0)
    , Blue(0)
{
}

inline ARGBColor::ARGBColor(const double& Alpha_, const double& Red_, const double& Green_, const double& Blue_) SAL_THROW( () )
    : Alpha(Alpha_)
    , Red(Red_)
    , Green(Green_)
    , Blue(Blue_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::ARGBColor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.ARGBColor", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::ARGBColor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::ARGBColor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_ARGBCOLOR_HPP
