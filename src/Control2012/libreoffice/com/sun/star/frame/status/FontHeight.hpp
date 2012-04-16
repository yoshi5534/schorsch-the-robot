#ifndef INCLUDED_COM_SUN_STAR_FRAME_STATUS_FONTHEIGHT_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_STATUS_FONTHEIGHT_HPP

#include "sal/config.h"

#include "com/sun/star/frame/status/FontHeight.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline FontHeight::FontHeight() SAL_THROW( () )
    : Height(0)
    , Prop(0)
    , Diff(0)
{
}

inline FontHeight::FontHeight(const float& Height_, const ::sal_Int16& Prop_, const float& Diff_) SAL_THROW( () )
    : Height(Height_)
    , Prop(Prop_)
    , Diff(Diff_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::status::FontHeight const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< float >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< float >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.status.FontHeight", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::status::FontHeight const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::status::FontHeight >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_STATUS_FONTHEIGHT_HPP
