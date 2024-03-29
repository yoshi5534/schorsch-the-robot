#ifndef INCLUDED_COM_SUN_STAR_STYLE_LINESPACING_HPP
#define INCLUDED_COM_SUN_STAR_STYLE_LINESPACING_HPP

#include "sal/config.h"

#include "com/sun/star/style/LineSpacing.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace style {

inline LineSpacing::LineSpacing() SAL_THROW( () )
    : Mode(0)
    , Height(0)
{
}

inline LineSpacing::LineSpacing(const ::sal_Int16& Mode_, const ::sal_Int16& Height_) SAL_THROW( () )
    : Mode(Mode_)
    , Height(Height_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace style {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::style::LineSpacing const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.style.LineSpacing", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::style::LineSpacing const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::style::LineSpacing >::get();
}

#endif // INCLUDED_COM_SUN_STAR_STYLE_LINESPACING_HPP
