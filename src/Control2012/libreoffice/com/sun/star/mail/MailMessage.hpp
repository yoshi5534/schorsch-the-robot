#ifndef INCLUDED_COM_SUN_STAR_MAIL_MAILMESSAGE_HPP
#define INCLUDED_COM_SUN_STAR_MAIL_MAILMESSAGE_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/mail/XMailMessage.hpp"
#include "com/sun/star/datatransfer/XTransferable.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/mail/MailAttachment.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace mail {

class MailMessage {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::mail::XMailMessage > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& sTo, const ::rtl::OUString& sFrom, const ::rtl::OUString& sSubject, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::XTransferable >& xBody) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(4);
        the_arguments[0] <<= sTo;
        the_arguments[1] <<= sFrom;
        the_arguments[2] <<= sSubject;
        the_arguments[3] <<= xBody;
        ::com::sun::star::uno::Reference< ::com::sun::star::mail::XMailMessage > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::mail::XMailMessage >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.mail.MailMessage")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.mail.MailMessage of type com.sun.star.mail.XMailMessage: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.mail.MailMessage of type com.sun.star.mail.XMailMessage")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::mail::XMailMessage > createWithAttachment(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& sTo, const ::rtl::OUString& sFrom, const ::rtl::OUString& sSubject, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::XTransferable >& xBody, const ::com::sun::star::mail::MailAttachment& aMailAttachment) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(5);
        the_arguments[0] <<= sTo;
        the_arguments[1] <<= sFrom;
        the_arguments[2] <<= sSubject;
        the_arguments[3] <<= xBody;
        the_arguments[4] <<= aMailAttachment;
        ::com::sun::star::uno::Reference< ::com::sun::star::mail::XMailMessage > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::mail::XMailMessage >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.mail.MailMessage")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.mail.MailMessage of type com.sun.star.mail.XMailMessage: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.mail.MailMessage of type com.sun.star.mail.XMailMessage")), the_context);
        }
        return the_instance;
    }

private:
    MailMessage(); // not implemented
    MailMessage(MailMessage &); // not implemented
    ~MailMessage(); // not implemented
    void operator =(MailMessage); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_MAIL_MAILMESSAGE_HPP
