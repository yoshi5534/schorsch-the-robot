#ifndef INCLUDED_COM_SUN_STAR_AWT_KEYSTROKE_HPP
#define INCLUDED_COM_SUN_STAR_AWT_KEYSTROKE_HPP

#include "sal/config.h"

#include "com/sun/star/awt/KeyStroke.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline KeyStroke::KeyStroke() SAL_THROW( () )
    : Modifiers(0)
    , KeyCode(0)
    , KeyChar(0)
    , KeyFunc(0)
{
}

inline KeyStroke::KeyStroke(const ::sal_Int16& Modifiers_, const ::sal_Int16& KeyCode_, const ::sal_Unicode& KeyChar_, const ::sal_Int16& KeyFunc_) SAL_THROW( () )
    : Modifiers(Modifiers_)
    , KeyCode(KeyCode_)
    , KeyChar(KeyChar_)
    , KeyFunc(KeyFunc_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::KeyStroke const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoCharType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.KeyStroke", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::KeyStroke const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::KeyStroke >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_KEYSTROKE_HPP
