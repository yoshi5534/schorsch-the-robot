#ifndef INCLUDED_COM_SUN_STAR_INSPECTION_XPROPERTYCONTROLFACTORY_HPP
#define INCLUDED_COM_SUN_STAR_INSPECTION_XPROPERTYCONTROLFACTORY_HPP

#include "sal/config.h"

#include "com/sun/star/inspection/XPropertyControlFactory.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/inspection/XPropertyControl.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace inspection {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::inspection::XPropertyControlFactory const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.inspection.XPropertyControlFactory", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::inspection::XPropertyControlFactory > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XPropertyControlFactory > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::inspection::XPropertyControlFactory::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XPropertyControlFactory > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_INSPECTION_XPROPERTYCONTROLFACTORY_HPP
