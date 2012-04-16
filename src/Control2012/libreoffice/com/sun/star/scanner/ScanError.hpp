#ifndef INCLUDED_COM_SUN_STAR_SCANNER_SCANERROR_HPP
#define INCLUDED_COM_SUN_STAR_SCANNER_SCANERROR_HPP

#include "sal/config.h"

#include "com/sun/star/scanner/ScanError.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace scanner {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::scanner::ScanError const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.scanner.ScanError",
                                       ::com::sun::star::scanner::ScanError_ScanErrorNone );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::scanner::ScanError const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::scanner::ScanError >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCANNER_SCANERROR_HPP
