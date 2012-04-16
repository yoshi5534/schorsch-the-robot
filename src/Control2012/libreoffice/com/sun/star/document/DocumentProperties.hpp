#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_DOCUMENTPROPERTIES_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_DOCUMENTPROPERTIES_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/document/XDocumentProperties.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace document {

class DocumentProperties {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::document::XDocumentProperties > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::document::XDocumentProperties > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::document::XDocumentProperties >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.document.DocumentProperties")), ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >(), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.document.DocumentProperties of type com.sun.star.document.XDocumentProperties: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.document.DocumentProperties of type com.sun.star.document.XDocumentProperties")), the_context);
        }
        return the_instance;
    }

private:
    DocumentProperties(); // not implemented
    DocumentProperties(DocumentProperties &); // not implemented
    ~DocumentProperties(); // not implemented
    void operator =(DocumentProperties); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_DOCUMENTPROPERTIES_HPP
