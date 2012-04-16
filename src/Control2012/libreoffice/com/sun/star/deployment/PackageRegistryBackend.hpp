#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_PACKAGEREGISTRYBACKEND_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_PACKAGEREGISTRYBACKEND_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/deployment/XPackageRegistry.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace deployment {

class PackageRegistryBackend {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry > createTransient(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= context;
        ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.deployment.PackageRegistryBackend")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.PackageRegistryBackend of type com.sun.star.deployment.XPackageRegistry: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.PackageRegistryBackend of type com.sun.star.deployment.XPackageRegistry")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry > createPersistent(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& context, const ::rtl::OUString& cacheDirectory, ::sal_Bool readOnly) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(3);
        the_arguments[0] <<= context;
        the_arguments[1] <<= cacheDirectory;
        the_arguments[2] <<= readOnly;
        ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackageRegistry >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.deployment.PackageRegistryBackend")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.PackageRegistryBackend of type com.sun.star.deployment.XPackageRegistry: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.PackageRegistryBackend of type com.sun.star.deployment.XPackageRegistry")), the_context);
        }
        return the_instance;
    }

private:
    PackageRegistryBackend(); // not implemented
    PackageRegistryBackend(PackageRegistryBackend &); // not implemented
    ~PackageRegistryBackend(); // not implemented
    void operator =(PackageRegistryBackend); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_PACKAGEREGISTRYBACKEND_HPP
