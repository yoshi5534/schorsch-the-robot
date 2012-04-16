#ifndef INCLUDED_COM_SUN_STAR_CHART2_SYMBOLSTYLE_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_SYMBOLSTYLE_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/SymbolStyle.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::SymbolStyle const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.chart2.SymbolStyle",
                                       ::com::sun::star::chart2::SymbolStyle_NONE );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::SymbolStyle const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::SymbolStyle >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_SYMBOLSTYLE_HPP
