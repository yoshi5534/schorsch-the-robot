#ifndef INCLUDED_COM_SUN_STAR_AWT_ENHANCEDMOUSEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_ENHANCEDMOUSEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/EnhancedMouseEvent.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/awt/MouseEvent.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline EnhancedMouseEvent::EnhancedMouseEvent() SAL_THROW( () )
    : ::com::sun::star::awt::MouseEvent()
    , Target()
{
}

inline EnhancedMouseEvent::EnhancedMouseEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& Modifiers_, const ::sal_Int16& Buttons_, const ::sal_Int32& X_, const ::sal_Int32& Y_, const ::sal_Int32& ClickCount_, const ::sal_Bool& PopupTrigger_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Target_) SAL_THROW( () )
    : ::com::sun::star::awt::MouseEvent(Source_, Modifiers_, Buttons_, X_, Y_, ClickCount_, PopupTrigger_)
    , Target(Target_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::EnhancedMouseEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.EnhancedMouseEvent", ::cppu::UnoType< ::com::sun::star::awt::MouseEvent >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::EnhancedMouseEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::EnhancedMouseEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_ENHANCEDMOUSEEVENT_HPP
