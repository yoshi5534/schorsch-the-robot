#ifndef INCLUDED_COM_SUN_STAR_VIEW_PAPERFORMAT_HPP
#define INCLUDED_COM_SUN_STAR_VIEW_PAPERFORMAT_HPP

#include "sal/config.h"

#include "com/sun/star/view/PaperFormat.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace view {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::view::PaperFormat const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.view.PaperFormat",
                                       ::com::sun::star::view::PaperFormat_A3 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::view::PaperFormat const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::view::PaperFormat >::get();
}

#endif // INCLUDED_COM_SUN_STAR_VIEW_PAPERFORMAT_HPP
