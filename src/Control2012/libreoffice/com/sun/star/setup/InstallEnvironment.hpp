#ifndef INCLUDED_COM_SUN_STAR_SETUP_INSTALLENVIRONMENT_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_INSTALLENVIRONMENT_HPP

#include "sal/config.h"

#include "com/sun/star/setup/InstallEnvironment.hdl"

#include "com/sun/star/setup/InstallType.hpp"
#include "com/sun/star/setup/ModuleState.hpp"
#include "com/sun/star/setup/OSType.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline InstallEnvironment::InstallEnvironment() SAL_THROW( () )
    : eOSType(::com::sun::star::setup::OSType_INVALID)
    , eInstallType(::com::sun::star::setup::InstallType_INVALID)
    , strDestinationPath()
    , nClusterSize(0)
    , nDriveSize(0)
    , seqLanguages()
    , seqSwitchLanguages()
    , seqModuleIDList()
    , strUserName()
    , strUserFirstName()
    , strUserId()
    , strCompanyname()
    , strStreet()
    , strCountry()
    , strZip()
    , strCity()
    , strTitle()
    , strPosition()
    , strPhonePriv()
    , strPhoneCompany()
    , strPhoneFax()
    , strEmail()
    , strState()
    , strFatherName()
    , strApartmentNr()
{
}

inline InstallEnvironment::InstallEnvironment(const ::com::sun::star::setup::OSType& eOSType_, const ::com::sun::star::setup::InstallType& eInstallType_, const ::rtl::OUString& strDestinationPath_, const ::sal_Int32& nClusterSize_, const ::sal_Int32& nDriveSize_, const ::com::sun::star::uno::Sequence< ::sal_Int16 >& seqLanguages_, const ::com::sun::star::uno::Sequence< ::sal_Int16 >& seqSwitchLanguages_, const ::com::sun::star::uno::Sequence< ::com::sun::star::setup::ModuleState >& seqModuleIDList_, const ::rtl::OUString& strUserName_, const ::rtl::OUString& strUserFirstName_, const ::rtl::OUString& strUserId_, const ::rtl::OUString& strCompanyname_, const ::rtl::OUString& strStreet_, const ::rtl::OUString& strCountry_, const ::rtl::OUString& strZip_, const ::rtl::OUString& strCity_, const ::rtl::OUString& strTitle_, const ::rtl::OUString& strPosition_, const ::rtl::OUString& strPhonePriv_, const ::rtl::OUString& strPhoneCompany_, const ::rtl::OUString& strPhoneFax_, const ::rtl::OUString& strEmail_, const ::rtl::OUString& strState_, const ::rtl::OUString& strFatherName_, const ::rtl::OUString& strApartmentNr_) SAL_THROW( () )
    : eOSType(eOSType_)
    , eInstallType(eInstallType_)
    , strDestinationPath(strDestinationPath_)
    , nClusterSize(nClusterSize_)
    , nDriveSize(nDriveSize_)
    , seqLanguages(seqLanguages_)
    , seqSwitchLanguages(seqSwitchLanguages_)
    , seqModuleIDList(seqModuleIDList_)
    , strUserName(strUserName_)
    , strUserFirstName(strUserFirstName_)
    , strUserId(strUserId_)
    , strCompanyname(strCompanyname_)
    , strStreet(strStreet_)
    , strCountry(strCountry_)
    , strZip(strZip_)
    , strCity(strCity_)
    , strTitle(strTitle_)
    , strPosition(strPosition_)
    , strPhonePriv(strPhonePriv_)
    , strPhoneCompany(strPhoneCompany_)
    , strPhoneFax(strPhoneFax_)
    , strEmail(strEmail_)
    , strState(strState_)
    , strFatherName(strFatherName_)
    , strApartmentNr(strApartmentNr_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::InstallEnvironment const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::setup::OSType >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::setup::InstallType >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int16 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int16 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::setup::ModuleState > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.InstallEnvironment", 0, 25, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::InstallEnvironment const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::InstallEnvironment >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_INSTALLENVIRONMENT_HPP
