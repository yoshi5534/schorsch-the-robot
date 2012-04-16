#ifndef INCLUDED_COM_SUN_STAR_FRAME_STATUS_UPPERLOWERMARGIN_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_STATUS_UPPERLOWERMARGIN_HPP

#include "sal/config.h"

#include "com/sun/star/frame/status/UpperLowerMargin.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline UpperLowerMargin::UpperLowerMargin() SAL_THROW( () )
    : Upper(0)
    , Lower(0)
{
}

inline UpperLowerMargin::UpperLowerMargin(const ::sal_Int32& Upper_, const ::sal_Int32& Lower_) SAL_THROW( () )
    : Upper(Upper_)
    , Lower(Lower_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::status::UpperLowerMargin const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.status.UpperLowerMargin", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::status::UpperLowerMargin const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::status::UpperLowerMargin >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_STATUS_UPPERLOWERMARGIN_HPP
