#ifndef INCLUDED_COM_SUN_STAR_UTIL_XMODECHANGEBROADCASTER_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_XMODECHANGEBROADCASTER_HPP

#include "sal/config.h"

#include "com/sun/star/util/XModeChangeBroadcaster.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/util/XModeChangeListener.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/util/XModeChangeApproveListener.hpp"
#include "com/sun/star/lang/NoSupportException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::XModeChangeBroadcaster const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.util.XModeChangeBroadcaster", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::util::XModeChangeBroadcaster > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::util::XModeChangeBroadcaster > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::util::XModeChangeBroadcaster::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::util::XModeChangeBroadcaster > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_XMODECHANGEBROADCASTER_HPP
