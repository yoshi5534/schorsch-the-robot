#ifndef INCLUDED_COM_SUN_STAR_REPORT_XREPORTCONTROLFORMAT_HPP
#define INCLUDED_COM_SUN_STAR_REPORT_XREPORTCONTROLFORMAT_HPP

#include "sal/config.h"

#include "com/sun/star/report/XReportControlFormat.hdl"

#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/beans/UnknownPropertyException.hpp"
#include "com/sun/star/awt/FontSlant.hpp"
#include "com/sun/star/style/VerticalAlignment.hpp"
#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/awt/FontDescriptor.hpp"
#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace report {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::report::XReportControlFormat const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.report.XReportControlFormat", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::report::XReportControlFormat > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportControlFormat > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::report::XReportControlFormat::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportControlFormat > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_REPORT_XREPORTCONTROLFORMAT_HPP
