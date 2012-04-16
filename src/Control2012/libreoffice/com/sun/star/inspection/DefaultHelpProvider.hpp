#ifndef INCLUDED_COM_SUN_STAR_INSPECTION_DEFAULTHELPPROVIDER_HPP
#define INCLUDED_COM_SUN_STAR_INSPECTION_DEFAULTHELPPROVIDER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/inspection/XObjectInspectorUI.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace inspection {

class DefaultHelpProvider {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspectorUI >& InspectorUI) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(1);
        the_arguments[0] <<= InspectorUI;
        ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.inspection.DefaultHelpProvider")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.inspection.DefaultHelpProvider of type com.sun.star.uno.XInterface: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.inspection.DefaultHelpProvider of type com.sun.star.uno.XInterface")), the_context);
        }
        return the_instance;
    }

private:
    DefaultHelpProvider(); // not implemented
    DefaultHelpProvider(DefaultHelpProvider &); // not implemented
    ~DefaultHelpProvider(); // not implemented
    void operator =(DefaultHelpProvider); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_INSPECTION_DEFAULTHELPPROVIDER_HPP
