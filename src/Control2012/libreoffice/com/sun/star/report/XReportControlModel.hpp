#ifndef INCLUDED_COM_SUN_STAR_REPORT_XREPORTCONTROLMODEL_HPP
#define INCLUDED_COM_SUN_STAR_REPORT_XREPORTCONTROLMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/report/XReportControlModel.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/UnknownPropertyException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/report/XFormatCondition.hpp"
#include "com/sun/star/container/XContainer.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/report/XReportControlFormat.hpp"
#include "com/sun/star/container/XIndexContainer.hpp"
#include "com/sun/star/report/XReportComponent.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace report {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::report::XReportControlModel const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[4];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportControlFormat > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XContainer > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexContainer > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.report.XReportControlModel", 4, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::report::XReportControlModel > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportControlModel > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::report::XReportControlModel::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportControlModel > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_REPORT_XREPORTCONTROLMODEL_HPP
