#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_UPDATE_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_UPDATE_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/configuration/XUpdate.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace configuration {

class Update {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::configuration::XUpdate > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::configuration::XUpdate > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.configuration.Update"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.configuration.Update of type com.sun.star.configuration.XUpdate")), context);
        }
        return instance;
    }

private:
    Update(); // not implemented
    Update(Update &); // not implemented
    ~Update(); // not implemented
    void operator =(Update); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_UPDATE_HPP
