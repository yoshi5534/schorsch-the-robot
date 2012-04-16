#ifndef INCLUDED_COM_SUN_STAR_REPORT_META_XFORMULAPARSER_HPP
#define INCLUDED_COM_SUN_STAR_REPORT_META_XFORMULAPARSER_HPP

#include "sal/config.h"

#include "com/sun/star/report/meta/XFormulaParser.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/sheet/FormulaOpCodeMapEntry.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/sheet/XFormulaParser.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/sheet/XFormulaOpCodeMapper.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace report { namespace meta {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::report::meta::XFormulaParser const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sheet::XFormulaParser > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.report.meta.XFormulaParser", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::report::meta::XFormulaParser > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::report::meta::XFormulaParser > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::report::meta::XFormulaParser::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::report::meta::XFormulaParser > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_REPORT_META_XFORMULAPARSER_HPP
