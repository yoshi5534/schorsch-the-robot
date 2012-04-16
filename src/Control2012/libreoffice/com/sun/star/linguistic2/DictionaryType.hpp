#ifndef INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYTYPE_HPP
#define INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYTYPE_HPP

#include "sal/config.h"

#include "com/sun/star/linguistic2/DictionaryType.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::linguistic2::DictionaryType const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.linguistic2.DictionaryType",
                                       ::com::sun::star::linguistic2::DictionaryType_POSITIVE );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::linguistic2::DictionaryType const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::linguistic2::DictionaryType >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYTYPE_HPP
