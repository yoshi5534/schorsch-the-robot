#ifndef INCLUDED_COM_SUN_STAR_ANIMATIONS_EVENT_HPP
#define INCLUDED_COM_SUN_STAR_ANIMATIONS_EVENT_HPP

#include "sal/config.h"

#include "com/sun/star/animations/Event.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace animations {

inline Event::Event() SAL_THROW( () )
    : Source()
    , Trigger(0)
    , Offset()
    , Repeat(0)
{
}

inline Event::Event(const ::com::sun::star::uno::Any& Source_, const ::sal_Int16& Trigger_, const ::com::sun::star::uno::Any& Offset_, const ::sal_uInt16& Repeat_) SAL_THROW( () )
    : Source(Source_)
    , Trigger(Trigger_)
    , Offset(Offset_)
    , Repeat(Repeat_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace animations {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::animations::Event const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.animations.Event", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::animations::Event const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::animations::Event >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ANIMATIONS_EVENT_HPP
