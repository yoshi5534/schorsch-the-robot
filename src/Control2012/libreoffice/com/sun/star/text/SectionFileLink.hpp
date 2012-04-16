#ifndef INCLUDED_COM_SUN_STAR_TEXT_SECTIONFILELINK_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_SECTIONFILELINK_HPP

#include "sal/config.h"

#include "com/sun/star/text/SectionFileLink.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace text {

inline SectionFileLink::SectionFileLink() SAL_THROW( () )
    : FileURL()
    , FilterName()
{
}

inline SectionFileLink::SectionFileLink(const ::rtl::OUString& FileURL_, const ::rtl::OUString& FilterName_) SAL_THROW( () )
    : FileURL(FileURL_)
    , FilterName(FilterName_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::SectionFileLink const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.text.SectionFileLink", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::text::SectionFileLink const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::text::SectionFileLink >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_SECTIONFILELINK_HPP
