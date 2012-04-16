#ifndef INCLUDED_COM_SUN_STAR_UCB_XCACHEDCONTENTRESULTSETSTUBFACTORY_HPP
#define INCLUDED_COM_SUN_STAR_UCB_XCACHEDCONTENTRESULTSETSTUBFACTORY_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/XCachedContentResultSetStubFactory.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/sdbc/XResultSet.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::XCachedContentResultSetStubFactory const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.ucb.XCachedContentResultSetStubFactory", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::ucb::XCachedContentResultSetStubFactory > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XCachedContentResultSetStubFactory > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::ucb::XCachedContentResultSetStubFactory::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XCachedContentResultSetStubFactory > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_UCB_XCACHEDCONTENTRESULTSETSTUBFACTORY_HPP
