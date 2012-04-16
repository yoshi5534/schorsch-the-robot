#ifndef INCLUDED_COM_SUN_STAR_PACKAGES_ZIP_ZIPENTRY_HPP
#define INCLUDED_COM_SUN_STAR_PACKAGES_ZIP_ZIPENTRY_HPP

#include "sal/config.h"

#include "com/sun/star/packages/zip/ZipEntry.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace packages { namespace zip {

inline ZipEntry::ZipEntry() SAL_THROW( () )
    : nVersion(0)
    , nFlag(0)
    , nMethod(0)
    , nTime(0)
    , nCrc(0)
    , nCompressedSize(0)
    , nSize(0)
    , nOffset(0)
    , nDiskNumber(0)
    , sName()
    , extra()
    , sComment()
{
}

inline ZipEntry::ZipEntry(const ::sal_Int16& nVersion_, const ::sal_Int16& nFlag_, const ::sal_Int16& nMethod_, const ::sal_Int32& nTime_, const ::sal_Int32& nCrc_, const ::sal_Int32& nCompressedSize_, const ::sal_Int32& nSize_, const ::sal_Int32& nOffset_, const ::sal_Int16& nDiskNumber_, const ::rtl::OUString& sName_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& extra_, const ::rtl::OUString& sComment_) SAL_THROW( () )
    : nVersion(nVersion_)
    , nFlag(nFlag_)
    , nMethod(nMethod_)
    , nTime(nTime_)
    , nCrc(nCrc_)
    , nCompressedSize(nCompressedSize_)
    , nSize(nSize_)
    , nOffset(nOffset_)
    , nDiskNumber(nDiskNumber_)
    , sName(sName_)
    , extra(extra_)
    , sComment(sComment_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace packages { namespace zip {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::packages::zip::ZipEntry const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.packages.zip.ZipEntry", 0, 12, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::packages::zip::ZipEntry const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::packages::zip::ZipEntry >::get();
}

#endif // INCLUDED_COM_SUN_STAR_PACKAGES_ZIP_ZIPENTRY_HPP
