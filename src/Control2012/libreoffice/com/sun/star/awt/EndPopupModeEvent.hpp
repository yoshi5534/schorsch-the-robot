#ifndef INCLUDED_COM_SUN_STAR_AWT_ENDPOPUPMODEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_ENDPOPUPMODEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/EndPopupModeEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline EndPopupModeEvent::EndPopupModeEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , bTearoff(false)
    , FloatingPosition()
{
}

inline EndPopupModeEvent::EndPopupModeEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Bool& bTearoff_, const ::com::sun::star::awt::Point& FloatingPosition_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , bTearoff(bTearoff_)
    , FloatingPosition(FloatingPosition_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::EndPopupModeEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.EndPopupModeEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::EndPopupModeEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::EndPopupModeEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_ENDPOPUPMODEEVENT_HPP
