#ifndef INCLUDED_COM_SUN_STAR_TEXT_TABLECOLUMNSEPARATOR_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_TABLECOLUMNSEPARATOR_HPP

#include "sal/config.h"

#include "com/sun/star/text/TableColumnSeparator.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace text {

inline TableColumnSeparator::TableColumnSeparator() SAL_THROW( () )
    : Position(0)
    , IsVisible(false)
{
}

inline TableColumnSeparator::TableColumnSeparator(const ::sal_Int16& Position_, const ::sal_Bool& IsVisible_) SAL_THROW( () )
    : Position(Position_)
    , IsVisible(IsVisible_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::TableColumnSeparator const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.text.TableColumnSeparator", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::text::TableColumnSeparator const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::text::TableColumnSeparator >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_TABLECOLUMNSEPARATOR_HPP
