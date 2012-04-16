#ifndef INCLUDED_COM_SUN_STAR_SETUP_WINDOWSREGISTRYACTION_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_WINDOWSREGISTRYACTION_HPP

#include "sal/config.h"

#include "com/sun/star/setup/WindowsRegistryAction.hdl"

#include "com/sun/star/setup/BaseAction.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline WindowsRegistryAction::WindowsRegistryAction() SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction()
    , strKey()
    , strSubkey()
    , strName()
    , strValue()
    , bCreate(false)
    , bHexValue(false)
    , bDeleteAll(false)
{
}

inline WindowsRegistryAction::WindowsRegistryAction(const ::com::sun::star::setup::ActionType& eType_, const ::sal_Bool& bDone_, const ::sal_Bool& bProcess_, const ::rtl::OUString& strKey_, const ::rtl::OUString& strSubkey_, const ::rtl::OUString& strName_, const ::rtl::OUString& strValue_, const ::sal_Bool& bCreate_, const ::sal_Bool& bHexValue_, const ::sal_Bool& bDeleteAll_) SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction(eType_, bDone_, bProcess_)
    , strKey(strKey_)
    , strSubkey(strSubkey_)
    , strName(strName_)
    , strValue(strValue_)
    , bCreate(bCreate_)
    , bHexValue(bHexValue_)
    , bDeleteAll(bDeleteAll_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::WindowsRegistryAction const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.WindowsRegistryAction", ::cppu::UnoType< ::com::sun::star::setup::BaseAction >::get().getTypeLibType(), 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::WindowsRegistryAction const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::WindowsRegistryAction >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_WINDOWSREGISTRYACTION_HPP
