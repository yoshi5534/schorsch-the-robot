#ifndef INCLUDED_COM_SUN_STAR_PRESENTATION_PRESENTATIONRANGE_HPP
#define INCLUDED_COM_SUN_STAR_PRESENTATION_PRESENTATIONRANGE_HPP

#include "sal/config.h"

#include "com/sun/star/presentation/PresentationRange.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace presentation {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::presentation::PresentationRange const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.presentation.PresentationRange",
                                       ::com::sun::star::presentation::PresentationRange_PRESENTATIONRANGE_ALL );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::presentation::PresentationRange const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::presentation::PresentationRange >::get();
}

#endif // INCLUDED_COM_SUN_STAR_PRESENTATION_PRESENTATIONRANGE_HPP
