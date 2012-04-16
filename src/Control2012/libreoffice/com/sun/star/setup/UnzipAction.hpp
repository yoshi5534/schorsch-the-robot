#ifndef INCLUDED_COM_SUN_STAR_SETUP_UNZIPACTION_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_UNZIPACTION_HPP

#include "sal/config.h"

#include "com/sun/star/setup/UnzipAction.hdl"

#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/setup/BaseAction.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline UnzipAction::UnzipAction() SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction()
    , strSourceFilename()
    , strDestinationPath()
    , strPattern()
    , bUnoComponent(false)
    , bActiveX(false)
    , bOverwrite(false)
    , aDateTime()
    , nRights(0)
    , seqSubFiles()
{
}

inline UnzipAction::UnzipAction(const ::com::sun::star::setup::ActionType& eType_, const ::sal_Bool& bDone_, const ::sal_Bool& bProcess_, const ::rtl::OUString& strSourceFilename_, const ::rtl::OUString& strDestinationPath_, const ::rtl::OUString& strPattern_, const ::sal_Bool& bUnoComponent_, const ::sal_Bool& bActiveX_, const ::sal_Bool& bOverwrite_, const ::com::sun::star::util::DateTime& aDateTime_, const ::sal_Int32& nRights_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& seqSubFiles_) SAL_THROW( () )
    : ::com::sun::star::setup::BaseAction(eType_, bDone_, bProcess_)
    , strSourceFilename(strSourceFilename_)
    , strDestinationPath(strDestinationPath_)
    , strPattern(strPattern_)
    , bUnoComponent(bUnoComponent_)
    , bActiveX(bActiveX_)
    , bOverwrite(bOverwrite_)
    , aDateTime(aDateTime_)
    , nRights(nRights_)
    , seqSubFiles(seqSubFiles_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::UnzipAction const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::DateTime >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.UnzipAction", ::cppu::UnoType< ::com::sun::star::setup::BaseAction >::get().getTypeLibType(), 9, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::UnzipAction const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::UnzipAction >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_UNZIPACTION_HPP
