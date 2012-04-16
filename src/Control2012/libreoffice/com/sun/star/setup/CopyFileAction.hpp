#ifndef INCLUDED_COM_SUN_STAR_SETUP_COPYFILEACTION_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_COPYFILEACTION_HPP

#include "sal/config.h"

#include "com/sun/star/setup/CopyFileAction.hdl"

#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/setup/BaseAction.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline CopyFileAction::CopyFileAction() SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction()
    , strSourceFilename()
    , strDestinationFilename()
    , bUnoComponent(false)
    , bActiveX(false)
    , bOverwrite(false)
    , aDateTime()
    , nRights(0)
{
}

inline CopyFileAction::CopyFileAction(const ::com::sun::star::setup::ActionType& eType_, const ::sal_Bool& bDone_, const ::sal_Bool& bProcess_, const ::rtl::OUString& strSourceFilename_, const ::rtl::OUString& strDestinationFilename_, const ::sal_Bool& bUnoComponent_, const ::sal_Bool& bActiveX_, const ::sal_Bool& bOverwrite_, const ::com::sun::star::util::DateTime& aDateTime_, const ::sal_Int32& nRights_) SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction(eType_, bDone_, bProcess_)
    , strSourceFilename(strSourceFilename_)
    , strDestinationFilename(strDestinationFilename_)
    , bUnoComponent(bUnoComponent_)
    , bActiveX(bActiveX_)
    , bOverwrite(bOverwrite_)
    , aDateTime(aDateTime_)
    , nRights(nRights_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::CopyFileAction const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::DateTime >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.CopyFileAction", ::cppu::UnoType< ::com::sun::star::setup::BaseAction >::get().getTypeLibType(), 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::CopyFileAction const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::CopyFileAction >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_COPYFILEACTION_HPP
