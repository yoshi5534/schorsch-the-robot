#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_PACKAGEINFORMATIONPROVIDER_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_PACKAGEINFORMATIONPROVIDER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/deployment/XPackageInformationProvider.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

class PackageInformationProvider {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageInformationProvider > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageInformationProvider > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.deployment.PackageInformationProvider"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.deployment.PackageInformationProvider of type com.sun.star.deployment.XPackageInformationProvider")), context);
        }
        return instance;
    }

private:
    PackageInformationProvider(); // not implemented
    PackageInformationProvider(PackageInformationProvider &); // not implemented
    ~PackageInformationProvider(); // not implemented
    void operator =(PackageInformationProvider); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_PACKAGEINFORMATIONPROVIDER_HPP
