#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTOBJECT_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTOBJECT_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/AccessibleEventObject.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace accessibility {

inline AccessibleEventObject::AccessibleEventObject() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , EventId(0)
    , NewValue()
    , OldValue()
{
}

inline AccessibleEventObject::AccessibleEventObject(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& EventId_, const ::com::sun::star::uno::Any& NewValue_, const ::com::sun::star::uno::Any& OldValue_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , EventId(EventId_)
    , NewValue(NewValue_)
    , OldValue(OldValue_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::accessibility::AccessibleEventObject const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.accessibility.AccessibleEventObject", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::accessibility::AccessibleEventObject const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::accessibility::AccessibleEventObject >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTOBJECT_HPP
