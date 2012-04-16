#ifndef INCLUDED_COM_SUN_STAR_FRAME_STATUS_VISIBILITY_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_STATUS_VISIBILITY_HPP

#include "sal/config.h"

#include "com/sun/star/frame/status/Visibility.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline Visibility::Visibility() SAL_THROW( () )
    : bVisible(false)
{
}

inline Visibility::Visibility(const ::sal_Bool& bVisible_) SAL_THROW( () )
    : bVisible(bVisible_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::status::Visibility const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.status.Visibility", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::status::Visibility const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::status::Visibility >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_STATUS_VISIBILITY_HPP
