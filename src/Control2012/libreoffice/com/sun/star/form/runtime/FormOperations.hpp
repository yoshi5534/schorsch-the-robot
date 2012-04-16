#ifndef INCLUDED_COM_SUN_STAR_FORM_RUNTIME_FORMOPERATIONS_HPP
#define INCLUDED_COM_SUN_STAR_FORM_RUNTIME_FORMOPERATIONS_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/form/XForm.hpp"
#include "com/sun/star/form/runtime/XFormOperations.hpp"
#include "com/sun/star/form/runtime/XFormController.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace form { namespace runtime {

class FormOperations {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormOperations > createWithFormController(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormController >& Controller) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= Controller;
        ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormOperations > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormOperations >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.form.runtime.FormOperations")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.form.runtime.FormOperations of type com.sun.star.form.runtime.XFormOperations: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.form.runtime.FormOperations of type com.sun.star.form.runtime.XFormOperations")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormOperations > createWithForm(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::form::XForm >& Form) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= Form;
        ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormOperations > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::form::runtime::XFormOperations >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.form.runtime.FormOperations")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.form.runtime.FormOperations of type com.sun.star.form.runtime.XFormOperations: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.form.runtime.FormOperations of type com.sun.star.form.runtime.XFormOperations")), the_context);
        }
        return the_instance;
    }

private:
    FormOperations(); // not implemented
    FormOperations(FormOperations &); // not implemented
    ~FormOperations(); // not implemented
    void operator =(FormOperations); // not implemented
};

} } } } }

#endif // INCLUDED_COM_SUN_STAR_FORM_RUNTIME_FORMOPERATIONS_HPP
