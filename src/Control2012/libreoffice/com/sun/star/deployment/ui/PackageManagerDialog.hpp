#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_UI_PACKAGEMANAGERDIALOG_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_UI_PACKAGEMANAGERDIALOG_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/awt/XWindow.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/ui/dialogs/XAsynchronousExecutableDialog.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace deployment { namespace ui {

class PackageManagerDialog {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog > createDefault(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.deployment.ui.PackageManagerDialog")), ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >(), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.ui.PackageManagerDialog of type com.sun.star.ui.dialogs.XAsynchronousExecutableDialog: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.ui.PackageManagerDialog of type com.sun.star.ui.dialogs.XAsynchronousExecutableDialog")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindow >& xParent, const ::rtl::OUString& focussedContext) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= xParent;
        the_arguments[1] <<= focussedContext;
        ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.deployment.ui.PackageManagerDialog")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.ui.PackageManagerDialog of type com.sun.star.ui.dialogs.XAsynchronousExecutableDialog: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.ui.PackageManagerDialog of type com.sun.star.ui.dialogs.XAsynchronousExecutableDialog")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog > createAndInstall(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& extensionURL) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= extensionURL;
        ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XAsynchronousExecutableDialog >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.deployment.ui.PackageManagerDialog")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.ui.PackageManagerDialog of type com.sun.star.ui.dialogs.XAsynchronousExecutableDialog: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.deployment.ui.PackageManagerDialog of type com.sun.star.ui.dialogs.XAsynchronousExecutableDialog")), the_context);
        }
        return the_instance;
    }

private:
    PackageManagerDialog(); // not implemented
    PackageManagerDialog(PackageManagerDialog &); // not implemented
    ~PackageManagerDialog(); // not implemented
    void operator =(PackageManagerDialog); // not implemented
};

} } } } }

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_UI_PACKAGEMANAGERDIALOG_HPP
