#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_XEXTENSIONMANAGER_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_XEXTENSIONMANAGER_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/XExtensionManager.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/ucb/XCommandEnvironment.hpp"
#include "com/sun/star/deployment/XPackage.hpp"
#include "com/sun/star/task/XAbortChannel.hpp"
#include "com/sun/star/ucb/CommandAbortedException.hpp"
#include "com/sun/star/beans/NamedValue.hpp"
#include "com/sun/star/deployment/XPackageTypeInfo.hpp"
#include "com/sun/star/deployment/DeploymentException.hpp"
#include "com/sun/star/util/XModifyBroadcaster.hpp"
#include "com/sun/star/ucb/CommandFailedException.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::XExtensionManager const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XModifyBroadcaster > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.deployment.XExtensionManager", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::deployment::XExtensionManager > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XExtensionManager > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::deployment::XExtensionManager::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XExtensionManager > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_XEXTENSIONMANAGER_HPP
