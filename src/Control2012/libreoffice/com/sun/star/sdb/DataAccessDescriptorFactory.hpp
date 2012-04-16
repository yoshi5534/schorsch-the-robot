#ifndef INCLUDED_COM_SUN_STAR_SDB_DATAACCESSDESCRIPTORFACTORY_HPP
#define INCLUDED_COM_SUN_STAR_SDB_DATAACCESSDESCRIPTORFACTORY_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/sdb/XDataAccessDescriptorFactory.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace sdb {

class DataAccessDescriptorFactory {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XDataAccessDescriptorFactory > get(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XDataAccessDescriptorFactory > instance;
        if (!(context->getValueByName(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("/singletons/com.sun.star.sdb.DataAccessDescriptorFactory"))) >>= instance) || !instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply singleton com.sun.star.sdb.DataAccessDescriptorFactory of type com.sun.star.sdb.XDataAccessDescriptorFactory")), context);
        }
        return instance;
    }

private:
    DataAccessDescriptorFactory(); // not implemented
    DataAccessDescriptorFactory(DataAccessDescriptorFactory &); // not implemented
    ~DataAccessDescriptorFactory(); // not implemented
    void operator =(DataAccessDescriptorFactory); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_SDB_DATAACCESSDESCRIPTORFACTORY_HPP
