#ifndef INCLUDED_COM_SUN_STAR_TABLE_BORDERLINE2_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_BORDERLINE2_HPP

#include "sal/config.h"

#include "com/sun/star/table/BorderLine2.hdl"

#include "com/sun/star/table/BorderLine.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace table {

inline BorderLine2::BorderLine2() SAL_THROW( () )
    : ::com::sun::star::table::BorderLine()
    , LineStyle(0)
    , LineWidth(0)
{
}

inline BorderLine2::BorderLine2(const ::sal_Int32& Color_, const ::sal_Int16& InnerLineWidth_, const ::sal_Int16& OuterLineWidth_, const ::sal_Int16& LineDistance_, const ::sal_Int16& LineStyle_, const ::sal_uInt32& LineWidth_) SAL_THROW( () )
    : ::com::sun::star::table::BorderLine(Color_, InnerLineWidth_, OuterLineWidth_, LineDistance_)
    , LineStyle(LineStyle_)
    , LineWidth(LineWidth_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace table {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::table::BorderLine2 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.table.BorderLine2", ::cppu::UnoType< ::com::sun::star::table::BorderLine >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::table::BorderLine2 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::table::BorderLine2 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_BORDERLINE2_HPP
