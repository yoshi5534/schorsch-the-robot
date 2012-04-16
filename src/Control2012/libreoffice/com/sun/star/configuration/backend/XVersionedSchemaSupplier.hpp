#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_XVERSIONEDSCHEMASUPPLIER_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_XVERSIONEDSCHEMASUPPLIER_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/backend/XVersionedSchemaSupplier.hdl"

#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/configuration/backend/XSchemaSupplier.hpp"
#include "com/sun/star/configuration/backend/BackendAccessException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::backend::XVersionedSchemaSupplier const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::configuration::backend::XSchemaSupplier > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.configuration.backend.XVersionedSchemaSupplier", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::configuration::backend::XVersionedSchemaSupplier > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::configuration::backend::XVersionedSchemaSupplier > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::configuration::backend::XVersionedSchemaSupplier::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::configuration::backend::XVersionedSchemaSupplier > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_XVERSIONEDSCHEMASUPPLIER_HPP
