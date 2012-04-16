#ifndef INCLUDED_COM_SUN_STAR_VIEW_SELECTIONTYPE_HPP
#define INCLUDED_COM_SUN_STAR_VIEW_SELECTIONTYPE_HPP

#include "sal/config.h"

#include "com/sun/star/view/SelectionType.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace view {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::view::SelectionType const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.view.SelectionType",
                                       ::com::sun::star::view::SelectionType_NONE );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::view::SelectionType const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::view::SelectionType >::get();
}

#endif // INCLUDED_COM_SUN_STAR_VIEW_SELECTIONTYPE_HPP
