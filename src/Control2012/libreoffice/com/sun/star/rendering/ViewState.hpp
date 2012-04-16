#ifndef INCLUDED_COM_SUN_STAR_RENDERING_VIEWSTATE_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_VIEWSTATE_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/ViewState.hdl"

#include "com/sun/star/geometry/AffineMatrix2D.hpp"
#include "com/sun/star/rendering/XPolyPolygon2D.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline ViewState::ViewState() SAL_THROW( () )
    : AffineTransform()
    , Clip()
{
}

inline ViewState::ViewState(const ::com::sun::star::geometry::AffineMatrix2D& AffineTransform_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XPolyPolygon2D >& Clip_) SAL_THROW( () )
    : AffineTransform(AffineTransform_)
    , Clip(Clip_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::ViewState const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::geometry::AffineMatrix2D >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XPolyPolygon2D > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.ViewState", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::ViewState const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::ViewState >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_VIEWSTATE_HPP
