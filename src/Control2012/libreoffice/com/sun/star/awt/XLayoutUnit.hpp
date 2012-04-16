#ifndef INCLUDED_COM_SUN_STAR_AWT_XLAYOUTUNIT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_XLAYOUTUNIT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/XLayoutUnit.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/awt/XLayoutContainer.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::XLayoutUnit const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.awt.XLayoutUnit", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::awt::XLayoutUnit > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::XLayoutUnit > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::awt::XLayoutUnit::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::awt::XLayoutUnit > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_AWT_XLAYOUTUNIT_HPP
