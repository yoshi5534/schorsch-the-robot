#ifndef INCLUDED_COM_SUN_STAR_TASK_OFFICERESTARTMANAGER_HPP
#define INCLUDED_COM_SUN_STAR_TASK_OFFICERESTARTMANAGER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/task/XRestartManager.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace task {

class OfficeRestartManager {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::task::XRestartManager > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::task::XRestartManager > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.task.OfficeRestartManager"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.task.OfficeRestartManager of type com.sun.star.task.XRestartManager")), context);
        }
        return instance;
    }

private:
    OfficeRestartManager(); // not implemented
    OfficeRestartManager(OfficeRestartManager &); // not implemented
    ~OfficeRestartManager(); // not implemented
    void operator =(OfficeRestartManager); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_TASK_OFFICERESTARTMANAGER_HPP
