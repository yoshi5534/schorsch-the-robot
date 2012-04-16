#ifndef INCLUDED_COM_SUN_STAR_SETUP_INSTALLTYPE_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_INSTALLTYPE_HPP

#include "sal/config.h"

#include "com/sun/star/setup/InstallType.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::InstallType const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.setup.InstallType",
                                       ::com::sun::star::setup::InstallType_INVALID );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::InstallType const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::InstallType >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_INSTALLTYPE_HPP
