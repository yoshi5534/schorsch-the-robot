#ifndef INCLUDED_COM_SUN_STAR_FORM_RUNTIME_XFILTERCONTROLLER_HPP
#define INCLUDED_COM_SUN_STAR_FORM_RUNTIME_XFILTERCONTROLLER_HPP

#include "sal/config.h"

#include "com/sun/star/form/runtime/XFilterController.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/awt/XControl.hpp"
#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/form/runtime/XFilterControllerListener.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace form { namespace runtime {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::form::runtime::XFilterController const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.form.runtime.XFilterController", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFilterController > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFilterController > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::form::runtime::XFilterController::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFilterController > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_FORM_RUNTIME_XFILTERCONTROLLER_HPP
