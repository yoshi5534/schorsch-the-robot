#ifndef INCLUDED_COM_SUN_STAR_CHART2_SCALEDATA_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_SCALEDATA_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/ScaleData.hdl"

#include "com/sun/star/chart/TimeIncrement.hpp"
#include "com/sun/star/chart2/IncrementData.hpp"
#include "com/sun/star/chart2/data/XLabeledDataSequence.hpp"
#include "com/sun/star/chart2/AxisOrientation.hpp"
#include "com/sun/star/chart2/XScaling.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline ScaleData::ScaleData() SAL_THROW( () )
    : Minimum()
    , Maximum()
    , Origin()
    , Orientation(::com::sun::star::chart2::AxisOrientation_MATHEMATICAL)
    , Scaling()
    , Categories()
    , AxisType(0)
    , AutoDateAxis(false)
    , ShiftedCategoryPosition(false)
    , IncrementData()
    , TimeIncrement()
{
}

inline ScaleData::ScaleData(const ::com::sun::star::uno::Any& Minimum_, const ::com::sun::star::uno::Any& Maximum_, const ::com::sun::star::uno::Any& Origin_, const ::com::sun::star::chart2::AxisOrientation& Orientation_, const ::com::sun::star::uno::Reference< ::com::sun::star::chart2::XScaling >& Scaling_, const ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XLabeledDataSequence >& Categories_, const ::sal_Int32& AxisType_, const ::sal_Bool& AutoDateAxis_, const ::sal_Bool& ShiftedCategoryPosition_, const ::com::sun::star::chart2::IncrementData& IncrementData_, const ::com::sun::star::chart::TimeIncrement& TimeIncrement_) SAL_THROW( () )
    : Minimum(Minimum_)
    , Maximum(Maximum_)
    , Origin(Origin_)
    , Orientation(Orientation_)
    , Scaling(Scaling_)
    , Categories(Categories_)
    , AxisType(AxisType_)
    , AutoDateAxis(AutoDateAxis_)
    , ShiftedCategoryPosition(ShiftedCategoryPosition_)
    , IncrementData(IncrementData_)
    , TimeIncrement(TimeIncrement_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::ScaleData const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::chart2::AxisOrientation >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::chart2::XScaling > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XLabeledDataSequence > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::chart2::IncrementData >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::chart::TimeIncrement >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.ScaleData", 0, 11, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::ScaleData const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::ScaleData >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_SCALEDATA_HPP
