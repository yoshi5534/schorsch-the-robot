#ifndef INCLUDED_COM_SUN_STAR_SETUP_VERSIONIDENTIFIER_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_VERSIONIDENTIFIER_HPP

#include "sal/config.h"

#include "com/sun/star/setup/VersionIdentifier.hdl"

#include "com/sun/star/setup/OSType.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline VersionIdentifier::VersionIdentifier() SAL_THROW( () )
    : eOSType(::com::sun::star::setup::OSType_INVALID)
    , nLanguage(0)
    , nBuildnumber(0)
    , strProductKey()
    , strInstLanguages()
    , strInstMinor()
{
}

inline VersionIdentifier::VersionIdentifier(const ::com::sun::star::setup::OSType& eOSType_, const ::sal_Int16& nLanguage_, const ::sal_Int32& nBuildnumber_, const ::rtl::OUString& strProductKey_, const ::rtl::OUString& strInstLanguages_, const ::rtl::OUString& strInstMinor_) SAL_THROW( () )
    : eOSType(eOSType_)
    , nLanguage(nLanguage_)
    , nBuildnumber(nBuildnumber_)
    , strProductKey(strProductKey_)
    , strInstLanguages(strInstLanguages_)
    , strInstMinor(strInstMinor_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::VersionIdentifier const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::setup::OSType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.VersionIdentifier", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::VersionIdentifier const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::VersionIdentifier >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_VERSIONIDENTIFIER_HPP
