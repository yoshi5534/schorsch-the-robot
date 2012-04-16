#ifndef INCLUDED_COM_SUN_STAR_UCB_LOCKDEPTH_HPP
#define INCLUDED_COM_SUN_STAR_UCB_LOCKDEPTH_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/LockDepth.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::LockDepth const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.ucb.LockDepth",
                                       ::com::sun::star::ucb::LockDepth_ZERO );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::LockDepth const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::LockDepth >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_LOCKDEPTH_HPP
