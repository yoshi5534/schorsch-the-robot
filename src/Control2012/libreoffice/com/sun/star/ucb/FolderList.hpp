#ifndef INCLUDED_COM_SUN_STAR_UCB_FOLDERLIST_HPP
#define INCLUDED_COM_SUN_STAR_UCB_FOLDERLIST_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/FolderList.hdl"

#include "com/sun/star/ucb/FolderListEntry.hpp"
#include "com/sun/star/ucb/FolderListCommand.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline FolderList::FolderList() SAL_THROW( () )
    : Command(::com::sun::star::ucb::FolderListCommand_GET)
    , List()
{
}

inline FolderList::FolderList(const ::com::sun::star::ucb::FolderListCommand& Command_, const ::com::sun::star::uno::Sequence< ::com::sun::star::ucb::FolderListEntry >& List_) SAL_THROW( () )
    : Command(Command_)
    , List(List_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::FolderList const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::ucb::FolderListCommand >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::ucb::FolderListEntry > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.FolderList", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::FolderList const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::FolderList >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_FOLDERLIST_HPP
