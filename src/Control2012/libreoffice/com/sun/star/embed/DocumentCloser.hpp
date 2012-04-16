#ifndef INCLUDED_COM_SUN_STAR_EMBED_DOCUMENTCLOSER_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_DOCUMENTCLOSER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/frame/XFrame.hpp"
#include "com/sun/star/frame/DoubleInitializationException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace embed {

class DocumentCloser {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > DocumentCloserCtor1(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XFrame >& xFrame) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= xFrame;
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > the_instance;
        the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.embed.DocumentCloser")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.embed.DocumentCloser of type com.sun.star.lang.XComponent")), the_context);
        }
        return the_instance;
    }

private:
    DocumentCloser(); // not implemented
    DocumentCloser(DocumentCloser &); // not implemented
    ~DocumentCloser(); // not implemented
    void operator =(DocumentCloser); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_EMBED_DOCUMENTCLOSER_HPP
