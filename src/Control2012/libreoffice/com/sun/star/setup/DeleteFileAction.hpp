#ifndef INCLUDED_COM_SUN_STAR_SETUP_DELETEFILEACTION_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_DELETEFILEACTION_HPP

#include "sal/config.h"

#include "com/sun/star/setup/DeleteFileAction.hdl"

#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/setup/BaseAction.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline DeleteFileAction::DeleteFileAction() SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction()
    , strDestinationPath()
    , strPattern()
    , bUnoComponent(false)
    , bActiveX(false)
    , bTestDate(false)
    , aDateTime()
{
}

inline DeleteFileAction::DeleteFileAction(const ::com::sun::star::setup::ActionType& eType_, const ::sal_Bool& bDone_, const ::sal_Bool& bProcess_, const ::rtl::OUString& strDestinationPath_, const ::rtl::OUString& strPattern_, const ::sal_Bool& bUnoComponent_, const ::sal_Bool& bActiveX_, const ::sal_Bool& bTestDate_, const ::com::sun::star::util::DateTime& aDateTime_) SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction(eType_, bDone_, bProcess_)
    , strDestinationPath(strDestinationPath_)
    , strPattern(strPattern_)
    , bUnoComponent(bUnoComponent_)
    , bActiveX(bActiveX_)
    , bTestDate(bTestDate_)
    , aDateTime(aDateTime_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::DeleteFileAction const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::DateTime >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.DeleteFileAction", ::cppu::UnoType< ::com::sun::star::setup::BaseAction >::get().getTypeLibType(), 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::DeleteFileAction const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::DeleteFileAction >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_DELETEFILEACTION_HPP
