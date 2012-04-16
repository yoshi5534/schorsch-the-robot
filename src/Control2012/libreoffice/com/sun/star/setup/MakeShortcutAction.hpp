#ifndef INCLUDED_COM_SUN_STAR_SETUP_MAKESHORTCUTACTION_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_MAKESHORTCUTACTION_HPP

#include "sal/config.h"

#include "com/sun/star/setup/MakeShortcutAction.hdl"

#include "com/sun/star/setup/BaseAction.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline MakeShortcutAction::MakeShortcutAction() SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction()
    , strSource()
    , strDestination()
    , strPath()
    , strDescription()
{
}

inline MakeShortcutAction::MakeShortcutAction(const ::com::sun::star::setup::ActionType& eType_, const ::sal_Bool& bDone_, const ::sal_Bool& bProcess_, const ::rtl::OUString& strSource_, const ::rtl::OUString& strDestination_, const ::rtl::OUString& strPath_, const ::rtl::OUString& strDescription_) SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction(eType_, bDone_, bProcess_)
    , strSource(strSource_)
    , strDestination(strDestination_)
    , strPath(strPath_)
    , strDescription(strDescription_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::MakeShortcutAction const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.MakeShortcutAction", ::cppu::UnoType< ::com::sun::star::setup::BaseAction >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::MakeShortcutAction const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::MakeShortcutAction >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_MAKESHORTCUTACTION_HPP
