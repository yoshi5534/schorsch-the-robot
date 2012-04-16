#ifndef INCLUDED_COM_SUN_STAR_RESOURCE_OFFICERESOURCELOADER_HPP
#define INCLUDED_COM_SUN_STAR_RESOURCE_OFFICERESOURCELOADER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/resource/XResourceBundleLoader.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace resource {

class OfficeResourceLoader {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::resource::XResourceBundleLoader > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::resource::XResourceBundleLoader > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.resource.OfficeResourceLoader"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.resource.OfficeResourceLoader of type com.sun.star.resource.XResourceBundleLoader")), context);
        }
        return instance;
    }

private:
    OfficeResourceLoader(); // not implemented
    OfficeResourceLoader(OfficeResourceLoader &); // not implemented
    ~OfficeResourceLoader(); // not implemented
    void operator =(OfficeResourceLoader); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_RESOURCE_OFFICERESOURCELOADER_HPP
