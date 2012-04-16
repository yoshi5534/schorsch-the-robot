#ifndef INCLUDED_COM_SUN_STAR_FORM_XGRIDCONTROL_HPP
#define INCLUDED_COM_SUN_STAR_FORM_XGRIDCONTROL_HPP

#include "sal/config.h"

#include "com/sun/star/form/XGridControl.hdl"

#include "com/sun/star/form/XGridFieldDataSupplier.hpp"
#include "com/sun/star/form/XGridControlListener.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/form/XGrid.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace form {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::form::XGridControl const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::form::XGrid > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::form::XGridFieldDataSupplier > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.form.XGridControl", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::form::XGridControl > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::form::XGridControl > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::form::XGridControl::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::form::XGridControl > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_FORM_XGRIDCONTROL_HPP
