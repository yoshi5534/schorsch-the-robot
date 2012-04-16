#ifndef INCLUDED_COM_SUN_STAR_TABLE_XTABLE_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_XTABLE_HPP

#include "sal/config.h"

#include "com/sun/star/table/XTable.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/table/XCellCursor.hpp"
#include "com/sun/star/beans/XFastPropertySet.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/util/XModifiable.hpp"
#include "com/sun/star/table/XCellRange.hpp"
#include "com/sun/star/table/XColumnRowRange.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace table {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::table::XTable const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[6];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::table::XCellRange > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::table::XColumnRowRange > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XModifiable > >::get().getTypeLibType();
        aSuperTypes[4] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > >::get().getTypeLibType();
        aSuperTypes[5] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XFastPropertySet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.table.XTable", 6, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::table::XTable > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::table::XTable > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::table::XTable::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::table::XTable > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_XTABLE_HPP
