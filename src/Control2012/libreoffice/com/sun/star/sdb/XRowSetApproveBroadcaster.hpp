#ifndef INCLUDED_COM_SUN_STAR_SDB_XROWSETAPPROVEBROADCASTER_HPP
#define INCLUDED_COM_SUN_STAR_SDB_XROWSETAPPROVEBROADCASTER_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/XRowSetApproveBroadcaster.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/sdb/XRowSetApproveListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace sdb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::XRowSetApproveBroadcaster const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.sdb.XRowSetApproveBroadcaster", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::sdb::XRowSetApproveBroadcaster > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XRowSetApproveBroadcaster > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::sdb::XRowSetApproveBroadcaster::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XRowSetApproveBroadcaster > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SDB_XROWSETAPPROVEBROADCASTER_HPP
