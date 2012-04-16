#ifndef INCLUDED_COM_SUN_STAR_AWT_TAB_UNOCONTROLTABPAGEMODEL_HPP
#define INCLUDED_COM_SUN_STAR_AWT_TAB_UNOCONTROLTABPAGEMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/awt/tab/XTabPageModel.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace awt { namespace tab {

class UnoControlTabPageModel {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::awt::tab::XTabPageModel > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, ::sal_Int16 tabPageID) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= tabPageID;
        ::com::sun::star::uno::Reference< ::com::sun::star::awt::tab::XTabPageModel > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::awt::tab::XTabPageModel >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.awt.tab.UnoControlTabPageModel")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.awt.tab.UnoControlTabPageModel of type com.sun.star.awt.tab.XTabPageModel: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.awt.tab.UnoControlTabPageModel of type com.sun.star.awt.tab.XTabPageModel")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::awt::tab::XTabPageModel > load(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, ::sal_Int16 tabPageID, const ::rtl::OUString& url) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= tabPageID;
        the_arguments[1] <<= url;
        ::com::sun::star::uno::Reference< ::com::sun::star::awt::tab::XTabPageModel > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::awt::tab::XTabPageModel >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.awt.tab.UnoControlTabPageModel")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.awt.tab.UnoControlTabPageModel of type com.sun.star.awt.tab.XTabPageModel: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.awt.tab.UnoControlTabPageModel of type com.sun.star.awt.tab.XTabPageModel")), the_context);
        }
        return the_instance;
    }

private:
    UnoControlTabPageModel(); // not implemented
    UnoControlTabPageModel(UnoControlTabPageModel &); // not implemented
    ~UnoControlTabPageModel(); // not implemented
    void operator =(UnoControlTabPageModel); // not implemented
};

} } } } }

#endif // INCLUDED_COM_SUN_STAR_AWT_TAB_UNOCONTROLTABPAGEMODEL_HPP
