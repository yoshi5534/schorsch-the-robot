#ifndef INCLUDED_COM_SUN_STAR_RDF_LITERAL_HPP
#define INCLUDED_COM_SUN_STAR_RDF_LITERAL_HPP

#include "sal/config.h"

#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/rdf/XLiteral.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/rdf/XURI.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace rdf {

class Literal {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& Value) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= Value;
        ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.rdf.Literal")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.rdf.Literal of type com.sun.star.rdf.XLiteral: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.rdf.Literal of type com.sun.star.rdf.XLiteral")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral > createWithType(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& Value, const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XURI >& Type) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= Value;
        the_arguments[1] <<= Type;
        ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.rdf.Literal")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.rdf.Literal of type com.sun.star.rdf.XLiteral: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.rdf.Literal of type com.sun.star.rdf.XLiteral")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral > createWithLanguage(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& Value, const ::rtl::OUString& Language) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= Value;
        the_arguments[1] <<= Language;
        ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XLiteral >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.rdf.Literal")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.rdf.Literal of type com.sun.star.rdf.XLiteral: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.rdf.Literal of type com.sun.star.rdf.XLiteral")), the_context);
        }
        return the_instance;
    }

private:
    Literal(); // not implemented
    Literal(Literal &); // not implemented
    ~Literal(); // not implemented
    void operator =(Literal); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_RDF_LITERAL_HPP
