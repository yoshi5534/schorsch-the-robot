#ifndef INCLUDED_COM_SUN_STAR_FORM_BINDING_LISTENTRYEVENT_HPP
#define INCLUDED_COM_SUN_STAR_FORM_BINDING_LISTENTRYEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/form/binding/ListEntryEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace form { namespace binding {

inline ListEntryEvent::ListEntryEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Position(0)
    , Count(0)
    , Entries()
{
}

inline ListEntryEvent::ListEntryEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int32& Position_, const ::sal_Int32& Count_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& Entries_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Position(Position_)
    , Count(Count_)
    , Entries(Entries_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace form { namespace binding {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::form::binding::ListEntryEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.form.binding.ListEntryEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::form::binding::ListEntryEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::form::binding::ListEntryEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FORM_BINDING_LISTENTRYEVENT_HPP
