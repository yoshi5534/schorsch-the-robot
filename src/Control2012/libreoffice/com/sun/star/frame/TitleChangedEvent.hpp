#ifndef INCLUDED_COM_SUN_STAR_FRAME_TITLECHANGEDEVENT_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_TITLECHANGEDEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/frame/TitleChangedEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame {

inline TitleChangedEvent::TitleChangedEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Title()
{
}

inline TitleChangedEvent::TitleChangedEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::rtl::OUString& Title_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Title(Title_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::TitleChangedEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.TitleChangedEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::TitleChangedEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::TitleChangedEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_TITLECHANGEDEVENT_HPP
