#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_XPACKAGEREGISTRY_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_XPACKAGEREGISTRY_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/XPackageRegistry.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/deployment/XPackageTypeInfo.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/ucb/CommandFailedException.hpp"
#include "com/sun/star/deployment/DeploymentException.hpp"
#include "com/sun/star/deployment/InvalidRemovedParameterException.hpp"
#include "com/sun/star/ucb/XCommandEnvironment.hpp"
#include "com/sun/star/deployment/XPackage.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::XPackageRegistry const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.deployment.XPackageRegistry", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::deployment::XPackageRegistry::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_XPACKAGEREGISTRY_HPP
