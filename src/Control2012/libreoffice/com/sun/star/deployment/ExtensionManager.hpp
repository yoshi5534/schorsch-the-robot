#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_EXTENSIONMANAGER_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_EXTENSIONMANAGER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/deployment/XExtensionManager.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

class ExtensionManager {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XExtensionManager > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XExtensionManager > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.deployment.ExtensionManager"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.deployment.ExtensionManager of type com.sun.star.deployment.XExtensionManager")), context);
        }
        return instance;
    }

private:
    ExtensionManager(); // not implemented
    ExtensionManager(ExtensionManager &); // not implemented
    ~ExtensionManager(); // not implemented
    void operator =(ExtensionManager); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_EXTENSIONMANAGER_HPP
