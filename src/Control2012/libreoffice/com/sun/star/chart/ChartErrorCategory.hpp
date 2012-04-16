#ifndef INCLUDED_COM_SUN_STAR_CHART_CHARTERRORCATEGORY_HPP
#define INCLUDED_COM_SUN_STAR_CHART_CHARTERRORCATEGORY_HPP

#include "sal/config.h"

#include "com/sun/star/chart/ChartErrorCategory.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace chart {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart::ChartErrorCategory const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.chart.ChartErrorCategory",
                                       ::com::sun::star::chart::ChartErrorCategory_NONE );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart::ChartErrorCategory const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart::ChartErrorCategory >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART_CHARTERRORCATEGORY_HPP
