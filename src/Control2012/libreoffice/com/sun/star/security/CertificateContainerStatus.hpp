#ifndef INCLUDED_COM_SUN_STAR_SECURITY_CERTIFICATECONTAINERSTATUS_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_CERTIFICATECONTAINERSTATUS_HPP

#include "sal/config.h"

#include "com/sun/star/security/CertificateContainerStatus.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::CertificateContainerStatus const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.security.CertificateContainerStatus",
                                       ::com::sun::star::security::CertificateContainerStatus_NOCERT );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::CertificateContainerStatus const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::CertificateContainerStatus >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_CERTIFICATECONTAINERSTATUS_HPP
