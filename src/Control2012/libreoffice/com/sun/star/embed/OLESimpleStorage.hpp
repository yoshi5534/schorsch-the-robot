#ifndef INCLUDED_COM_SUN_STAR_EMBED_OLESIMPLESTORAGE_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_OLESIMPLESTORAGE_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/embed/XOLESimpleStorage.hpp"
#include "com/sun/star/io/XStream.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace embed {

class OLESimpleStorage {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage > createFromInputStream(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream >& xInputStream, ::sal_Bool bNoTempCopy) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= xInputStream;
        the_arguments[1] <<= bNoTempCopy;
        ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.embed.OLESimpleStorage")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.embed.OLESimpleStorage of type com.sun.star.embed.XOLESimpleStorage: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.embed.OLESimpleStorage of type com.sun.star.embed.XOLESimpleStorage")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage > createFromStream(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::io::XStream >& xStream, ::sal_Bool bNoTempCopy) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= xStream;
        the_arguments[1] <<= bNoTempCopy;
        ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.embed.OLESimpleStorage")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.embed.OLESimpleStorage of type com.sun.star.embed.XOLESimpleStorage: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.embed.OLESimpleStorage of type com.sun.star.embed.XOLESimpleStorage")), the_context);
        }
        return the_instance;
    }

private:
    OLESimpleStorage(); // not implemented
    OLESimpleStorage(OLESimpleStorage &); // not implemented
    ~OLESimpleStorage(); // not implemented
    void operator =(OLESimpleStorage); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_EMBED_OLESIMPLESTORAGE_HPP
