#ifndef INCLUDED_COM_SUN_STAR_CHART_CHARTDATAVALUE_HPP
#define INCLUDED_COM_SUN_STAR_CHART_CHARTDATAVALUE_HPP

#include "sal/config.h"

#include "com/sun/star/chart/ChartDataValue.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart {

inline ChartDataValue::ChartDataValue() SAL_THROW( () )
    : Value(0)
    , HighError(0)
    , LowError(0)
{
}

inline ChartDataValue::ChartDataValue(const double& Value_, const double& HighError_, const double& LowError_) SAL_THROW( () )
    : Value(Value_)
    , HighError(HighError_)
    , LowError(LowError_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart::ChartDataValue const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart.ChartDataValue", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart::ChartDataValue const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart::ChartDataValue >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART_CHARTDATAVALUE_HPP
