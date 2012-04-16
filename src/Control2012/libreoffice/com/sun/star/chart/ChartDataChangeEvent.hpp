#ifndef INCLUDED_COM_SUN_STAR_CHART_CHARTDATACHANGEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_CHART_CHARTDATACHANGEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/chart/ChartDataChangeEvent.hdl"

#include "com/sun/star/chart/ChartDataChangeType.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart {

inline ChartDataChangeEvent::ChartDataChangeEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Type(::com::sun::star::chart::ChartDataChangeType_ALL)
    , StartColumn(0)
    , EndColumn(0)
    , StartRow(0)
    , EndRow(0)
{
}

inline ChartDataChangeEvent::ChartDataChangeEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::chart::ChartDataChangeType& Type_, const ::sal_Int16& StartColumn_, const ::sal_Int16& EndColumn_, const ::sal_Int16& StartRow_, const ::sal_Int16& EndRow_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Type(Type_)
    , StartColumn(StartColumn_)
    , EndColumn(EndColumn_)
    , StartRow(StartRow_)
    , EndRow(EndRow_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart::ChartDataChangeEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::chart::ChartDataChangeType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart.ChartDataChangeEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart::ChartDataChangeEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart::ChartDataChangeEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART_CHARTDATACHANGEEVENT_HPP
