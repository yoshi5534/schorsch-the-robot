#ifndef INCLUDED_COM_SUN_STAR_CHART_CHARTDATAROW_HPP
#define INCLUDED_COM_SUN_STAR_CHART_CHARTDATAROW_HPP

#include "sal/config.h"

#include "com/sun/star/chart/ChartDataRow.hdl"

#include "com/sun/star/chart/ChartDataValue.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart {

inline ChartDataRow::ChartDataRow() SAL_THROW( () )
    : Name()
    , Points()
{
}

inline ChartDataRow::ChartDataRow(const ::rtl::OUString& Name_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Sequence< ::com::sun::star::chart::ChartDataValue > >& Points_) SAL_THROW( () )
    : Name(Name_)
    , Points(Points_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart::ChartDataRow const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::cppu::UnoSequenceType< ::com::sun::star::chart::ChartDataValue > > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart.ChartDataRow", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart::ChartDataRow const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart::ChartDataRow >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART_CHARTDATAROW_HPP
