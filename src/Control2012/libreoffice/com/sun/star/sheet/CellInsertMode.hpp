#ifndef INCLUDED_COM_SUN_STAR_SHEET_CELLINSERTMODE_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_CELLINSERTMODE_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/CellInsertMode.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::CellInsertMode const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.sheet.CellInsertMode",
                                       ::com::sun::star::sheet::CellInsertMode_NONE );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::CellInsertMode const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::CellInsertMode >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_CELLINSERTMODE_HPP
