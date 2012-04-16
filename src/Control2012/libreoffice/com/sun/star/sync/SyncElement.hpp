#ifndef INCLUDED_COM_SUN_STAR_SYNC_SYNCELEMENT_HPP
#define INCLUDED_COM_SUN_STAR_SYNC_SYNCELEMENT_HPP

#include "sal/config.h"

#include "com/sun/star/sync/SyncElement.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sync {

inline SyncElement::SyncElement() SAL_THROW( () )
    : ContentIdentifier()
    , Type(0)
    , UID(0)
    , Generation(0)
    , Event(0)
    , Action(0)
{
}

inline SyncElement::SyncElement(const ::rtl::OUString& ContentIdentifier_, const ::sal_uInt32& Type_, const ::sal_uInt32& UID_, const ::sal_uInt32& Generation_, const ::sal_uInt32& Event_, const ::sal_uInt32& Action_) SAL_THROW( () )
    : ContentIdentifier(ContentIdentifier_)
    , Type(Type_)
    , UID(UID_)
    , Generation(Generation_)
    , Event(Event_)
    , Action(Action_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sync {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sync::SyncElement const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sync.SyncElement", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sync::SyncElement const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sync::SyncElement >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SYNC_SYNCELEMENT_HPP
