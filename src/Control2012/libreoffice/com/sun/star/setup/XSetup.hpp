#ifndef INCLUDED_COM_SUN_STAR_SETUP_XSETUP_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_XSETUP_HPP

#include "sal/config.h"

#include "com/sun/star/setup/XSetup.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/setup/InstallEnvironment.hpp"
#include "com/sun/star/setup/UpdateType.hpp"
#include "com/sun/star/setup/SizeInfo.hpp"
#include "com/sun/star/setup/ModuleInfo.hpp"
#include "com/sun/star/setup/InstallResponse.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/setup/VersionIdentifier.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::XSetup const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.setup.XSetup", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::setup::XSetup > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::setup::XSetup > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::setup::XSetup::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::setup::XSetup > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_XSETUP_HPP
