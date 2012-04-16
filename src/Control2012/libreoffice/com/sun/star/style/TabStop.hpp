#ifndef INCLUDED_COM_SUN_STAR_STYLE_TABSTOP_HPP
#define INCLUDED_COM_SUN_STAR_STYLE_TABSTOP_HPP

#include "sal/config.h"

#include "com/sun/star/style/TabStop.hdl"

#include "com/sun/star/style/TabAlign.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace style {

inline TabStop::TabStop() SAL_THROW( () )
    : Position(0)
    , Alignment(::com::sun::star::style::TabAlign_LEFT)
    , DecimalChar(0)
    , FillChar(0)
{
}

inline TabStop::TabStop(const ::sal_Int32& Position_, const ::com::sun::star::style::TabAlign& Alignment_, const ::sal_Unicode& DecimalChar_, const ::sal_Unicode& FillChar_) SAL_THROW( () )
    : Position(Position_)
    , Alignment(Alignment_)
    , DecimalChar(DecimalChar_)
    , FillChar(FillChar_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace style {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::style::TabStop const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::style::TabAlign >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoCharType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoCharType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.style.TabStop", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::style::TabStop const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::style::TabStop >::get();
}

#endif // INCLUDED_COM_SUN_STAR_STYLE_TABSTOP_HPP
