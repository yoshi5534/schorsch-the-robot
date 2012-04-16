#ifndef INCLUDED_COM_SUN_STAR_BEANS_XPROPERTY_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_XPROPERTY_HPP

#include "sal/config.h"

#include "com/sun/star/beans/XProperty.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/Property.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace beans {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::beans::XProperty const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.beans.XProperty", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::beans::XProperty > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::beans::XProperty > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::beans::XProperty::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::beans::XProperty > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_BEANS_XPROPERTY_HPP
