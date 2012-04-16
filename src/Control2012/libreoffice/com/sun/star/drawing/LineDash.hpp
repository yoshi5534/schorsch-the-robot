#ifndef INCLUDED_COM_SUN_STAR_DRAWING_LINEDASH_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_LINEDASH_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/LineDash.hdl"

#include "com/sun/star/drawing/DashStyle.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline LineDash::LineDash() SAL_THROW( () )
    : Style(::com::sun::star::drawing::DashStyle_RECT)
    , Dots(0)
    , DotLen(0)
    , Dashes(0)
    , DashLen(0)
    , Distance(0)
{
}

inline LineDash::LineDash(const ::com::sun::star::drawing::DashStyle& Style_, const ::sal_Int16& Dots_, const ::sal_Int32& DotLen_, const ::sal_Int16& Dashes_, const ::sal_Int32& DashLen_, const ::sal_Int32& Distance_) SAL_THROW( () )
    : Style(Style_)
    , Dots(Dots_)
    , DotLen(DotLen_)
    , Dashes(Dashes_)
    , DashLen(DashLen_)
    , Distance(Distance_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::LineDash const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::drawing::DashStyle >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.LineDash", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::LineDash const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::LineDash >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_LINEDASH_HPP
