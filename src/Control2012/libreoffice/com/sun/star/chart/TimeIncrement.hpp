#ifndef INCLUDED_COM_SUN_STAR_CHART_TIMEINCREMENT_HPP
#define INCLUDED_COM_SUN_STAR_CHART_TIMEINCREMENT_HPP

#include "sal/config.h"

#include "com/sun/star/chart/TimeIncrement.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart {

inline TimeIncrement::TimeIncrement() SAL_THROW( () )
    : MajorTimeInterval()
    , MinorTimeInterval()
    , TimeResolution()
{
}

inline TimeIncrement::TimeIncrement(const ::com::sun::star::uno::Any& MajorTimeInterval_, const ::com::sun::star::uno::Any& MinorTimeInterval_, const ::com::sun::star::uno::Any& TimeResolution_) SAL_THROW( () )
    : MajorTimeInterval(MajorTimeInterval_)
    , MinorTimeInterval(MinorTimeInterval_)
    , TimeResolution(TimeResolution_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart::TimeIncrement const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart.TimeIncrement", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart::TimeIncrement const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart::TimeIncrement >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART_TIMEINCREMENT_HPP
