#ifndef INCLUDED_COM_SUN_STAR_AWT_ENDDOCKINGEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_ENDDOCKINGEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/EndDockingEvent.hdl"

#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline EndDockingEvent::EndDockingEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , WindowRectangle()
    , bFloating(false)
    , bCancelled(false)
{
}

inline EndDockingEvent::EndDockingEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::awt::Rectangle& WindowRectangle_, const ::sal_Bool& bFloating_, const ::sal_Bool& bCancelled_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , WindowRectangle(WindowRectangle_)
    , bFloating(bFloating_)
    , bCancelled(bCancelled_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::EndDockingEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::awt::Rectangle >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.EndDockingEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::EndDockingEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::EndDockingEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_ENDDOCKINGEVENT_HPP
