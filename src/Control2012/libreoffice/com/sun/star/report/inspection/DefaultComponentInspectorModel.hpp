#ifndef INCLUDED_COM_SUN_STAR_REPORT_INSPECTION_DEFAULTCOMPONENTINSPECTORMODEL_HPP
#define INCLUDED_COM_SUN_STAR_REPORT_INSPECTION_DEFAULTCOMPONENTINSPECTORMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/inspection/XObjectInspectorModel.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace report { namespace inspection {

class DefaultComponentInspectorModel {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspectorModel > createDefault(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspectorModel > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspectorModel >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.report.inspection.DefaultComponentInspectorModel")), ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >(), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.report.inspection.DefaultComponentInspectorModel of type com.sun.star.inspection.XObjectInspectorModel: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.report.inspection.DefaultComponentInspectorModel of type com.sun.star.inspection.XObjectInspectorModel")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspectorModel > createWithHelpSection(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, ::sal_Int32 minHelpTextLines, ::sal_Int32 maxHelpTextLines) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= minHelpTextLines;
        the_arguments[1] <<= maxHelpTextLines;
        ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspectorModel > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspectorModel >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.report.inspection.DefaultComponentInspectorModel")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.report.inspection.DefaultComponentInspectorModel of type com.sun.star.inspection.XObjectInspectorModel: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.report.inspection.DefaultComponentInspectorModel of type com.sun.star.inspection.XObjectInspectorModel")), the_context);
        }
        return the_instance;
    }

private:
    DefaultComponentInspectorModel(); // not implemented
    DefaultComponentInspectorModel(DefaultComponentInspectorModel &); // not implemented
    ~DefaultComponentInspectorModel(); // not implemented
    void operator =(DefaultComponentInspectorModel); // not implemented
};

} } } } }

#endif // INCLUDED_COM_SUN_STAR_REPORT_INSPECTION_DEFAULTCOMPONENTINSPECTORMODEL_HPP
