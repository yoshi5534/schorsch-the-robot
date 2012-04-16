#ifndef INCLUDED_COM_SUN_STAR_SDB_APPLICATION_COPYTABLEWIZARD_HPP
#define INCLUDED_COM_SUN_STAR_SDB_APPLICATION_COPYTABLEWIZARD_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/sdb/application/XCopyTableWizard.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/task/XInteractionHandler.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/sdbc/SQLException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace sdb { namespace application {

class CopyTableWizard {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::sdb::application::XCopyTableWizard > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet >& Source, const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet >& Destination) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= Source;
        the_arguments[1] <<= Destination;
        ::com::sun::star::uno::Reference< ::com::sun::star::sdb::application::XCopyTableWizard > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::sdb::application::XCopyTableWizard >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.sdb.application.CopyTableWizard")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::sdbc::SQLException &) {
            throw;
        } catch (::com::sun::star::lang::WrappedTargetException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.sdb.application.CopyTableWizard of type com.sun.star.sdb.application.XCopyTableWizard: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.sdb.application.CopyTableWizard of type com.sun.star.sdb.application.XCopyTableWizard")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::sdb::application::XCopyTableWizard > createWithInteractionHandler(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet >& Source, const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet >& Destination, const ::com::sun::star::uno::Reference< ::com::sun::star::task::XInteractionHandler >& InteractionHandler) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(3);
        the_arguments[0] <<= Source;
        the_arguments[1] <<= Destination;
        the_arguments[2] <<= InteractionHandler;
        ::com::sun::star::uno::Reference< ::com::sun::star::sdb::application::XCopyTableWizard > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::sdb::application::XCopyTableWizard >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.sdb.application.CopyTableWizard")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::sdbc::SQLException &) {
            throw;
        } catch (::com::sun::star::lang::WrappedTargetException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.sdb.application.CopyTableWizard of type com.sun.star.sdb.application.XCopyTableWizard: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.sdb.application.CopyTableWizard of type com.sun.star.sdb.application.XCopyTableWizard")), the_context);
        }
        return the_instance;
    }

private:
    CopyTableWizard(); // not implemented
    CopyTableWizard(CopyTableWizard &); // not implemented
    ~CopyTableWizard(); // not implemented
    void operator =(CopyTableWizard); // not implemented
};

} } } } }

#endif // INCLUDED_COM_SUN_STAR_SDB_APPLICATION_COPYTABLEWIZARD_HPP
