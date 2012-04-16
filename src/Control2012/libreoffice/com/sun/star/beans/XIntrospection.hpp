#ifndef INCLUDED_COM_SUN_STAR_BEANS_XINTROSPECTION_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_XINTROSPECTION_HPP

#include "sal/config.h"

#include "com/sun/star/beans/XIntrospection.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/XIntrospectionAccess.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace beans {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::beans::XIntrospection const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.beans.XIntrospection", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::beans::XIntrospection > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::beans::XIntrospection > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::beans::XIntrospection::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::beans::XIntrospection > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_BEANS_XINTROSPECTION_HPP
