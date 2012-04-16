#ifndef INCLUDED_COM_SUN_STAR_CHART_CHARTSERIESADDRESS_HPP
#define INCLUDED_COM_SUN_STAR_CHART_CHARTSERIESADDRESS_HPP

#include "sal/config.h"

#include "com/sun/star/chart/ChartSeriesAddress.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart {

inline ChartSeriesAddress::ChartSeriesAddress() SAL_THROW( () )
    : DataRangeAddress()
    , LabelAddress()
    , DomainRangeAddresses()
{
}

inline ChartSeriesAddress::ChartSeriesAddress(const ::rtl::OUString& DataRangeAddress_, const ::rtl::OUString& LabelAddress_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& DomainRangeAddresses_) SAL_THROW( () )
    : DataRangeAddress(DataRangeAddress_)
    , LabelAddress(LabelAddress_)
    , DomainRangeAddresses(DomainRangeAddresses_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart::ChartSeriesAddress const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart.ChartSeriesAddress", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart::ChartSeriesAddress const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart::ChartSeriesAddress >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART_CHARTSERIESADDRESS_HPP
