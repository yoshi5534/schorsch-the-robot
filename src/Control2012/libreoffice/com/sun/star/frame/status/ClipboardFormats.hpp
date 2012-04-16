#ifndef INCLUDED_COM_SUN_STAR_FRAME_STATUS_CLIPBOARDFORMATS_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_STATUS_CLIPBOARDFORMATS_HPP

#include "sal/config.h"

#include "com/sun/star/frame/status/ClipboardFormats.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ClipboardFormats::ClipboardFormats() SAL_THROW( () )
    : Identifiers()
    , Names()
{
}

inline ClipboardFormats::ClipboardFormats(const ::com::sun::star::uno::Sequence< ::sal_Int64 >& Identifiers_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& Names_) SAL_THROW( () )
    : Identifiers(Identifiers_)
    , Names(Names_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::status::ClipboardFormats const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int64 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.status.ClipboardFormats", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::status::ClipboardFormats const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::status::ClipboardFormats >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_STATUS_CLIPBOARDFORMATS_HPP
