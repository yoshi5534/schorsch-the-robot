#ifndef INCLUDED_COM_SUN_STAR_LOGGING_DOCUMENTIOLOGRING_HPP
#define INCLUDED_COM_SUN_STAR_LOGGING_DOCUMENTIOLOGRING_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/logging/XSimpleLogRing.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace logging {

class DocumentIOLogRing {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::logging::XSimpleLogRing > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::logging::XSimpleLogRing > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.logging.DocumentIOLogRing"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.logging.DocumentIOLogRing of type com.sun.star.logging.XSimpleLogRing")), context);
        }
        return instance;
    }

private:
    DocumentIOLogRing(); // not implemented
    DocumentIOLogRing(DocumentIOLogRing &); // not implemented
    ~DocumentIOLogRing(); // not implemented
    void operator =(DocumentIOLogRing); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_LOGGING_DOCUMENTIOLOGRING_HPP
