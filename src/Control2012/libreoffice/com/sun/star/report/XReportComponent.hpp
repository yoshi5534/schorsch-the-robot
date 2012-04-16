#ifndef INCLUDED_COM_SUN_STAR_REPORT_XREPORTCOMPONENT_HPP
#define INCLUDED_COM_SUN_STAR_REPORT_XREPORTCOMPONENT_HPP

#include "sal/config.h"

#include "com/sun/star/report/XReportComponent.hdl"

#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/beans/PropertyVetoException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/report/XSection.hpp"
#include "com/sun/star/drawing/XShape.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/container/XChild.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/beans/UnknownPropertyException.hpp"
#include "com/sun/star/util/XCloneable.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace report {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::report::XReportComponent const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[5];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XCloneable > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XChild > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape > >::get().getTypeLibType();
        aSuperTypes[4] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.report.XReportComponent", 5, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::report::XReportComponent > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportComponent > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::report::XReportComponent::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportComponent > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_REPORT_XREPORTCOMPONENT_HPP
