#ifndef INCLUDED_COM_SUN_STAR_FORM_RUNTIME_XFORMCONTROLLER_HPP
#define INCLUDED_COM_SUN_STAR_FORM_RUNTIME_XFORMCONTROLLER_HPP

#include "sal/config.h"

#include "com/sun/star/form/runtime/XFormController.hdl"

#include "com/sun/star/form/runtime/XFilterController.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/form/XFormControllerListener.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/form/runtime/XFormControllerContext.hpp"
#include "com/sun/star/container/XIndexAccess.hpp"
#include "com/sun/star/form/runtime/XFormController.hpp"
#include "com/sun/star/form/runtime/XFormOperations.hpp"
#include "com/sun/star/util/XModeSelector.hpp"
#include "com/sun/star/awt/XTabController.hpp"
#include "com/sun/star/sdb/XSQLErrorBroadcaster.hpp"
#include "com/sun/star/container/XChild.hpp"
#include "com/sun/star/form/XConfirmDeleteBroadcaster.hpp"
#include "com/sun/star/container/XEnumerationAccess.hpp"
#include "com/sun/star/awt/XControl.hpp"
#include "com/sun/star/form/XDatabaseParameterBroadcaster2.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/task/XInteractionHandler.hpp"
#include "com/sun/star/util/XModifyBroadcaster.hpp"
#include "com/sun/star/sdb/XRowSetApproveBroadcaster.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace form { namespace runtime {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::form::runtime::XFormController const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[11];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::awt::XTabController > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XChild > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexAccess > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XEnumerationAccess > >::get().getTypeLibType();
        aSuperTypes[4] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[5] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XModifyBroadcaster > >::get().getTypeLibType();
        aSuperTypes[6] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::form::XConfirmDeleteBroadcaster > >::get().getTypeLibType();
        aSuperTypes[7] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XSQLErrorBroadcaster > >::get().getTypeLibType();
        aSuperTypes[8] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XRowSetApproveBroadcaster > >::get().getTypeLibType();
        aSuperTypes[9] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::form::XDatabaseParameterBroadcaster2 > >::get().getTypeLibType();
        aSuperTypes[10] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XModeSelector > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.form.runtime.XFormController", 11, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormController > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormController > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::form::runtime::XFormController::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormController > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_FORM_RUNTIME_XFORMCONTROLLER_HPP
