#ifndef INCLUDED_COM_SUN_STAR_DRAWING_GLUEPOINT2_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_GLUEPOINT2_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/GluePoint2.hdl"

#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/drawing/EscapeDirection.hpp"
#include "com/sun/star/drawing/Alignment.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline GluePoint2::GluePoint2() SAL_THROW( () )
    : Position()
    , IsRelative(false)
    , PositionAlignment(::com::sun::star::drawing::Alignment_TOP_LEFT)
    , Escape(::com::sun::star::drawing::EscapeDirection_SMART)
    , IsUserDefined(false)
{
}

inline GluePoint2::GluePoint2(const ::com::sun::star::awt::Point& Position_, const ::sal_Bool& IsRelative_, const ::com::sun::star::drawing::Alignment& PositionAlignment_, const ::com::sun::star::drawing::EscapeDirection& Escape_, const ::sal_Bool& IsUserDefined_) SAL_THROW( () )
    : Position(Position_)
    , IsRelative(IsRelative_)
    , PositionAlignment(PositionAlignment_)
    , Escape(Escape_)
    , IsUserDefined(IsUserDefined_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::GluePoint2 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::Alignment >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::EscapeDirection >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.GluePoint2", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::GluePoint2 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::GluePoint2 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_GLUEPOINT2_HPP
