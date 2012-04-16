#ifndef INCLUDED_COM_SUN_STAR_SDBC_XROWSET_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_XROWSET_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/XRowSet.hdl"

#include "com/sun/star/sdbc/SQLException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/sdbc/XResultSet.hpp"
#include "com/sun/star/sdbc/XRowSetListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdbc::XRowSet const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XResultSet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.sdbc.XRowSet", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XRowSet > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XRowSet > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::sdbc::XRowSet::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XRowSet > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SDBC_XROWSET_HPP
