#ifndef INCLUDED_COM_SUN_STAR_EMBED_INSTANCELOCKER_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_INSTANCELOCKER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/embed/XActionsApproval.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/frame/DoubleInitializationException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace embed {

class InstanceLocker {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > InstanceLockerCtor1(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& xInstance, ::sal_Int32 nActions) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= xInstance;
        the_arguments[1] <<= nActions;
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > the_instance;
        the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.embed.InstanceLocker")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.embed.InstanceLocker of type com.sun.star.lang.XComponent")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > InstanceLockerCtor2(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& xInstance, ::sal_Int32 aActions, const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XActionsApproval >& xApprove) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(3);
        the_arguments[0] <<= xInstance;
        the_arguments[1] <<= aActions;
        the_arguments[2] <<= xApprove;
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > the_instance;
        the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.embed.InstanceLocker")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.embed.InstanceLocker of type com.sun.star.lang.XComponent")), the_context);
        }
        return the_instance;
    }

private:
    InstanceLocker(); // not implemented
    InstanceLocker(InstanceLocker &); // not implemented
    ~InstanceLocker(); // not implemented
    void operator =(InstanceLocker); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_EMBED_INSTANCELOCKER_HPP
