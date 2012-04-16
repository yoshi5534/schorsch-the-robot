#ifndef INCLUDED_COM_SUN_STAR_LOGGING_LOGGERPOOL_HPP
#define INCLUDED_COM_SUN_STAR_LOGGING_LOGGERPOOL_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/logging/XLoggerPool.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace logging {

class LoggerPool {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::logging::XLoggerPool > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::logging::XLoggerPool > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.logging.LoggerPool"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.logging.LoggerPool of type com.sun.star.logging.XLoggerPool")), context);
        }
        return instance;
    }

private:
    LoggerPool(); // not implemented
    LoggerPool(LoggerPool &); // not implemented
    ~LoggerPool(); // not implemented
    void operator =(LoggerPool); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_LOGGING_LOGGERPOOL_HPP
