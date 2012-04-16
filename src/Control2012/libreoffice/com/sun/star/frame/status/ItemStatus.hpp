#ifndef INCLUDED_COM_SUN_STAR_FRAME_STATUS_ITEMSTATUS_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_STATUS_ITEMSTATUS_HPP

#include "sal/config.h"

#include "com/sun/star/frame/status/ItemStatus.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ItemStatus::ItemStatus() SAL_THROW( () )
    : State(0)
    , aStateData()
{
}

inline ItemStatus::ItemStatus(const ::sal_Int16& State_, const ::com::sun::star::uno::Any& aStateData_) SAL_THROW( () )
    : State(State_)
    , aStateData(aStateData_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::status::ItemStatus const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.status.ItemStatus", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::status::ItemStatus const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::status::ItemStatus >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_STATUS_ITEMSTATUS_HPP
