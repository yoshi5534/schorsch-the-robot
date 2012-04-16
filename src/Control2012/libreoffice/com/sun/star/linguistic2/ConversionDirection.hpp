#ifndef INCLUDED_COM_SUN_STAR_LINGUISTIC2_CONVERSIONDIRECTION_HPP
#define INCLUDED_COM_SUN_STAR_LINGUISTIC2_CONVERSIONDIRECTION_HPP

#include "sal/config.h"

#include "com/sun/star/linguistic2/ConversionDirection.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::linguistic2::ConversionDirection const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.linguistic2.ConversionDirection",
                                       ::com::sun::star::linguistic2::ConversionDirection_FROM_LEFT );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::linguistic2::ConversionDirection const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::linguistic2::ConversionDirection >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LINGUISTIC2_CONVERSIONDIRECTION_HPP
