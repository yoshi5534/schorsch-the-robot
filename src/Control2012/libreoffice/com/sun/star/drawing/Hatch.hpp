#ifndef INCLUDED_COM_SUN_STAR_DRAWING_HATCH_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_HATCH_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/Hatch.hdl"

#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/drawing/HatchStyle.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline Hatch::Hatch() SAL_THROW( () )
    : Style(::com::sun::star::drawing::HatchStyle_SINGLE)
    , Color(0)
    , Distance(0)
    , Angle(0)
{
}

inline Hatch::Hatch(const ::com::sun::star::drawing::HatchStyle& Style_, const ::sal_Int32& Color_, const ::sal_Int32& Distance_, const ::sal_Int32& Angle_) SAL_THROW( () )
    : Style(Style_)
    , Color(Color_)
    , Distance(Distance_)
    , Angle(Angle_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::Hatch const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::drawing::HatchStyle >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.Hatch", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::Hatch const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::Hatch >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_HATCH_HPP
