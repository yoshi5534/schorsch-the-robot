#ifndef INCLUDED_COM_SUN_STAR_STYLE_DROPCAPFORMAT_HPP
#define INCLUDED_COM_SUN_STAR_STYLE_DROPCAPFORMAT_HPP

#include "sal/config.h"

#include "com/sun/star/style/DropCapFormat.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace style {

inline DropCapFormat::DropCapFormat() SAL_THROW( () )
    : Lines(0)
    , Count(0)
    , Distance(0)
{
}

inline DropCapFormat::DropCapFormat(const ::sal_Int8& Lines_, const ::sal_Int8& Count_, const ::sal_Int16& Distance_) SAL_THROW( () )
    : Lines(Lines_)
    , Count(Count_)
    , Distance(Distance_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace style {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::style::DropCapFormat const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.style.DropCapFormat", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::style::DropCapFormat const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::style::DropCapFormat >::get();
}

#endif // INCLUDED_COM_SUN_STAR_STYLE_DROPCAPFORMAT_HPP
