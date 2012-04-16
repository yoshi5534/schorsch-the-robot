#ifndef INCLUDED_COM_SUN_STAR_SETUP_MODULEINFO_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_MODULEINFO_HPP

#include "sal/config.h"

#include "com/sun/star/setup/ModuleInfo.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline ModuleInfo::ModuleInfo() SAL_THROW( () )
    : strID()
    , strName()
    , strDescription()
    , strOnSelect()
    , strOnDeselect()
    , isMinimal(false)
    , isDefault(false)
    , isHiddenRoot(false)
    , isDontSelectByUser(false)
    , nSizeKB(0)
    , seqSubModules()
{
}

inline ModuleInfo::ModuleInfo(const ::rtl::OUString& strID_, const ::rtl::OUString& strName_, const ::rtl::OUString& strDescription_, const ::rtl::OUString& strOnSelect_, const ::rtl::OUString& strOnDeselect_, const ::sal_Bool& isMinimal_, const ::sal_Bool& isDefault_, const ::sal_Bool& isHiddenRoot_, const ::sal_Bool& isDontSelectByUser_, const ::sal_Int32& nSizeKB_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >& seqSubModules_) SAL_THROW( () )
    : strID(strID_)
    , strName(strName_)
    , strDescription(strDescription_)
    , strOnSelect(strOnSelect_)
    , strOnDeselect(strOnDeselect_)
    , isMinimal(isMinimal_)
    , isDefault(isDefault_)
    , isHiddenRoot(isHiddenRoot_)
    , isDontSelectByUser(isDontSelectByUser_)
    , nSizeKB(nSizeKB_)
    , seqSubModules(seqSubModules_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::ModuleInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Any > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.ModuleInfo", 0, 11, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::ModuleInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::ModuleInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_MODULEINFO_HPP
