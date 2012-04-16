#ifndef INCLUDED_COM_SUN_STAR_SETUP_MIRRORENTRY_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_MIRRORENTRY_HPP

#include "sal/config.h"

#include "com/sun/star/setup/MirrorEntry.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline MirrorEntry::MirrorEntry() SAL_THROW( () )
    : strDisplayname()
    , strPath()
    , nQuality(0)
{
}

inline MirrorEntry::MirrorEntry(const ::rtl::OUString& strDisplayname_, const ::rtl::OUString& strPath_, const ::sal_Int16& nQuality_) SAL_THROW( () )
    : strDisplayname(strDisplayname_)
    , strPath(strPath_)
    , nQuality(nQuality_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::MirrorEntry const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.MirrorEntry", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::MirrorEntry const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::MirrorEntry >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_MIRRORENTRY_HPP
