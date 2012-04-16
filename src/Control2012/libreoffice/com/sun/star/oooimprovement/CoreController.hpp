#ifndef INCLUDED_COM_SUN_STAR_OOOIMPROVEMENT_CORECONTROLLER_HPP
#define INCLUDED_COM_SUN_STAR_OOOIMPROVEMENT_CORECONTROLLER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/oooimprovement/XCoreController.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace oooimprovement {

class CoreController {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::oooimprovement::XCoreController > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::oooimprovement::XCoreController > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::oooimprovement::XCoreController >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.oooimprovement.CoreController")), ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >(), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.oooimprovement.CoreController of type com.sun.star.oooimprovement.XCoreController: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.oooimprovement.CoreController of type com.sun.star.oooimprovement.XCoreController")), the_context);
        }
        return the_instance;
    }

private:
    CoreController(); // not implemented
    CoreController(CoreController &); // not implemented
    ~CoreController(); // not implemented
    void operator =(CoreController); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_OOOIMPROVEMENT_CORECONTROLLER_HPP
