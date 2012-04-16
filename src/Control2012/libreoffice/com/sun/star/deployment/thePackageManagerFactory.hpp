#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_THEPACKAGEMANAGERFACTORY_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_THEPACKAGEMANAGERFACTORY_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/deployment/XPackageManagerFactory.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

class thePackageManagerFactory {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageManagerFactory > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageManagerFactory > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.deployment.thePackageManagerFactory"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.deployment.thePackageManagerFactory of type com.sun.star.deployment.XPackageManagerFactory")), context);
        }
        return instance;
    }

private:
    thePackageManagerFactory(); // not implemented
    thePackageManagerFactory(thePackageManagerFactory &); // not implemented
    ~thePackageManagerFactory(); // not implemented
    void operator =(thePackageManagerFactory); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_THEPACKAGEMANAGERFACTORY_HPP
