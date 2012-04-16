#ifndef INCLUDED_COM_SUN_STAR_RENDERING_ANIMATIONATTRIBUTES_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_ANIMATIONATTRIBUTES_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/AnimationAttributes.hdl"

#include "com/sun/star/geometry/RealSize2D.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline AnimationAttributes::AnimationAttributes() SAL_THROW( () )
    : Duration(0)
    , RepeatMode(0)
    , UntransformedSize()
{
}

inline AnimationAttributes::AnimationAttributes(const double& Duration_, const ::sal_Int8& RepeatMode_, const ::com::sun::star::geometry::RealSize2D& UntransformedSize_) SAL_THROW( () )
    : Duration(Duration_)
    , RepeatMode(RepeatMode_)
    , UntransformedSize(UntransformedSize_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::AnimationAttributes const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::geometry::RealSize2D >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.AnimationAttributes", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::AnimationAttributes const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::AnimationAttributes >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_ANIMATIONATTRIBUTES_HPP
