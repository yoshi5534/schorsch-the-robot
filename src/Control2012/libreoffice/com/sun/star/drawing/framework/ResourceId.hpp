#ifndef INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_RESOURCEID_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_RESOURCEID_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/drawing/framework/XResourceId.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace drawing { namespace framework {

class ResourceId {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > createEmpty(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.drawing.framework.ResourceId")), ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >(), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& sResourceURL) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= sResourceURL;
        ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.drawing.framework.ResourceId")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > createWithAnchor(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& sResourceURL, const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId >& xAnchor) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= sResourceURL;
        the_arguments[1] <<= xAnchor;
        ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.drawing.framework.ResourceId")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > createWithAnchorURL(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::rtl::OUString& sResourceURL, const ::rtl::OUString& sAnchorURL) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= sResourceURL;
        the_arguments[1] <<= sAnchorURL;
        ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.drawing.framework.ResourceId")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.framework.ResourceId of type com.sun.star.drawing.framework.XResourceId")), the_context);
        }
        return the_instance;
    }

private:
    ResourceId(); // not implemented
    ResourceId(ResourceId &); // not implemented
    ~ResourceId(); // not implemented
    void operator =(ResourceId); // not implemented
};

} } } } }

#endif // INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_RESOURCEID_HPP
