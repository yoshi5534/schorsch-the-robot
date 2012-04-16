#ifndef INCLUDED_COM_SUN_STAR_UCB_FOLDERLISTENTRY_HPP
#define INCLUDED_COM_SUN_STAR_UCB_FOLDERLISTENTRY_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/FolderListEntry.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline FolderListEntry::FolderListEntry() SAL_THROW( () )
    : Title()
    , ID()
    , Subscribed(false)
    , New(false)
    , Removed(false)
    , Purge(false)
{
}

inline FolderListEntry::FolderListEntry(const ::rtl::OUString& Title_, const ::rtl::OUString& ID_, const ::sal_Bool& Subscribed_, const ::sal_Bool& New_, const ::sal_Bool& Removed_, const ::sal_Bool& Purge_) SAL_THROW( () )
    : Title(Title_)
    , ID(ID_)
    , Subscribed(Subscribed_)
    , New(New_)
    , Removed(Removed_)
    , Purge(Purge_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::FolderListEntry const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.FolderListEntry", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::FolderListEntry const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::FolderListEntry >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_FOLDERLISTENTRY_HPP
