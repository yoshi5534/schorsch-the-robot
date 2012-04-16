#ifndef INCLUDED_COM_SUN_STAR_REPORT_XGROUPS_HPP
#define INCLUDED_COM_SUN_STAR_REPORT_XGROUPS_HPP

#include "sal/config.h"

#include "com/sun/star/report/XGroups.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/report/XGroup.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/container/XChild.hpp"
#include "com/sun/star/container/XIndexContainer.hpp"
#include "com/sun/star/container/XContainer.hpp"
#include "com/sun/star/report/XReportDefinition.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace report {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::report::XGroups const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[4];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XContainer > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexContainer > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XChild > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.report.XGroups", 4, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::report::XGroups > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::report::XGroups > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::report::XGroups::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::report::XGroups > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_REPORT_XGROUPS_HPP
