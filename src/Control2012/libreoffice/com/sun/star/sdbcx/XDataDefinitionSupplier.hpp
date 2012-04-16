#ifndef INCLUDED_COM_SUN_STAR_SDBCX_XDATADEFINITIONSUPPLIER_HPP
#define INCLUDED_COM_SUN_STAR_SDBCX_XDATADEFINITIONSUPPLIER_HPP

#include "sal/config.h"

#include "com/sun/star/sdbcx/XDataDefinitionSupplier.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/sdbc/XConnection.hpp"
#include "com/sun/star/sdbcx/XTablesSupplier.hpp"
#include "com/sun/star/sdbc/SQLException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace sdbcx {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdbcx::XDataDefinitionSupplier const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.sdbcx.XDataDefinitionSupplier", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::sdbcx::XDataDefinitionSupplier > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdbcx::XDataDefinitionSupplier > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::sdbcx::XDataDefinitionSupplier::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::sdbcx::XDataDefinitionSupplier > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SDBCX_XDATADEFINITIONSUPPLIER_HPP
