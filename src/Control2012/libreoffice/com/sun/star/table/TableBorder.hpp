#ifndef INCLUDED_COM_SUN_STAR_TABLE_TABLEBORDER_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_TABLEBORDER_HPP

#include "sal/config.h"

#include "com/sun/star/table/TableBorder.hdl"

#include "com/sun/star/table/BorderLine.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace table {

inline TableBorder::TableBorder() SAL_THROW( () )
    : TopLine()
    , IsTopLineValid(false)
    , BottomLine()
    , IsBottomLineValid(false)
    , LeftLine()
    , IsLeftLineValid(false)
    , RightLine()
    , IsRightLineValid(false)
    , HorizontalLine()
    , IsHorizontalLineValid(false)
    , VerticalLine()
    , IsVerticalLineValid(false)
    , Distance(0)
    , IsDistanceValid(false)
{
}

inline TableBorder::TableBorder(const ::com::sun::star::table::BorderLine& TopLine_, const ::sal_Bool& IsTopLineValid_, const ::com::sun::star::table::BorderLine& BottomLine_, const ::sal_Bool& IsBottomLineValid_, const ::com::sun::star::table::BorderLine& LeftLine_, const ::sal_Bool& IsLeftLineValid_, const ::com::sun::star::table::BorderLine& RightLine_, const ::sal_Bool& IsRightLineValid_, const ::com::sun::star::table::BorderLine& HorizontalLine_, const ::sal_Bool& IsHorizontalLineValid_, const ::com::sun::star::table::BorderLine& VerticalLine_, const ::sal_Bool& IsVerticalLineValid_, const ::sal_Int16& Distance_, const ::sal_Bool& IsDistanceValid_) SAL_THROW( () )
    : TopLine(TopLine_)
    , IsTopLineValid(IsTopLineValid_)
    , BottomLine(BottomLine_)
    , IsBottomLineValid(IsBottomLineValid_)
    , LeftLine(LeftLine_)
    , IsLeftLineValid(IsLeftLineValid_)
    , RightLine(RightLine_)
    , IsRightLineValid(IsRightLineValid_)
    , HorizontalLine(HorizontalLine_)
    , IsHorizontalLineValid(IsHorizontalLineValid_)
    , VerticalLine(VerticalLine_)
    , IsVerticalLineValid(IsVerticalLineValid_)
    , Distance(Distance_)
    , IsDistanceValid(IsDistanceValid_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace table {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::table::TableBorder const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::table::BorderLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::table::BorderLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::table::BorderLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::table::BorderLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::table::BorderLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::table::BorderLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.table.TableBorder", 0, 14, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::table::TableBorder const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::table::TableBorder >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_TABLEBORDER_HPP
