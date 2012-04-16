#ifndef INCLUDED_COM_SUN_STAR_RENDERING_RENDERSTATE_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_RENDERSTATE_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/RenderState.hdl"

#include "com/sun/star/geometry/AffineMatrix2D.hpp"
#include "com/sun/star/rendering/XPolyPolygon2D.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline RenderState::RenderState() SAL_THROW( () )
    : AffineTransform()
    , Clip()
    , DeviceColor()
    , CompositeOperation(0)
{
}

inline RenderState::RenderState(const ::com::sun::star::geometry::AffineMatrix2D& AffineTransform_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XPolyPolygon2D >& Clip_, const ::com::sun::star::uno::Sequence< double >& DeviceColor_, const ::sal_Int8& CompositeOperation_) SAL_THROW( () )
    : AffineTransform(AffineTransform_)
    , Clip(Clip_)
    , DeviceColor(DeviceColor_)
    , CompositeOperation(CompositeOperation_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::RenderState const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::geometry::AffineMatrix2D >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XPolyPolygon2D > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< double > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.RenderState", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::RenderState const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::RenderState >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_RENDERSTATE_HPP
