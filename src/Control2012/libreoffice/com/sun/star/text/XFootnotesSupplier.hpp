#ifndef INCLUDED_COM_SUN_STAR_TEXT_XFOOTNOTESSUPPLIER_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_XFOOTNOTESSUPPLIER_HPP

#include "sal/config.h"

#include "com/sun/star/text/XFootnotesSupplier.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/container/XIndexAccess.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::XFootnotesSupplier const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.text.XFootnotesSupplier", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::text::XFootnotesSupplier > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::text::XFootnotesSupplier > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::text::XFootnotesSupplier::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::text::XFootnotesSupplier > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_XFOOTNOTESSUPPLIER_HPP
