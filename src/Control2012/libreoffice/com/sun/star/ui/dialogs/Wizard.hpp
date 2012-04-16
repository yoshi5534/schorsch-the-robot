#ifndef INCLUDED_COM_SUN_STAR_UI_DIALOGS_WIZARD_HPP
#define INCLUDED_COM_SUN_STAR_UI_DIALOGS_WIZARD_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/ui/dialogs/XWizard.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/ui/dialogs/XWizardController.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace ui { namespace dialogs {

class Wizard {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizard > createSinglePathWizard(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Sequence< ::sal_Int16 >& PageIds, const ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizardController >& Controller) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= PageIds;
        the_arguments[1] <<= Controller;
        ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizard > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizard >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.ui.dialogs.Wizard")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.ui.dialogs.Wizard of type com.sun.star.ui.dialogs.XWizard: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.ui.dialogs.Wizard of type com.sun.star.ui.dialogs.XWizard")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizard > createMultiplePathsWizard(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Sequence< ::sal_Int16 > >& PageIds, const ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizardController >& Controller) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= PageIds;
        the_arguments[1] <<= Controller;
        ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizard > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::ui::dialogs::XWizard >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.ui.dialogs.Wizard")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.ui.dialogs.Wizard of type com.sun.star.ui.dialogs.XWizard: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.ui.dialogs.Wizard of type com.sun.star.ui.dialogs.XWizard")), the_context);
        }
        return the_instance;
    }

private:
    Wizard(); // not implemented
    Wizard(Wizard &); // not implemented
    ~Wizard(); // not implemented
    void operator =(Wizard); // not implemented
};

} } } } }

#endif // INCLUDED_COM_SUN_STAR_UI_DIALOGS_WIZARD_HPP
